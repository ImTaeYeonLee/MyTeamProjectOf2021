// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.

#include "LoaderBPFunctionLibrary.h"

//#include "VRM4U.h"
#include "VrmSkeletalMesh.h"
#include "VrmModelActor.h"
#include "VrmAssetListObject.h"
#include "VrmMetaObject.h"
#include "VrmLicenseObject.h"

#include "VrmAsyncLoadAction.h"

#include "VrmConvert.h"
#include "VrmUtil.h"
#include "VRM4ULoaderLog.h"

#include "Components/SkeletalMeshComponent.h"
#include "Rendering/SkeletalMeshLODRenderData.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Animation/Skeleton.h"
#include "Animation/MorphTarget.h"
#include "Animation/NodeMappingContainer.h"

//#include ".h"

#include "RenderingThread.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Rendering/SkeletalMeshLODModel.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Misc/FeedbackContext.h"
#include "Misc/FileHelper.h"
#include "UObject/Package.h"
#include "Engine/SkeletalMeshSocket.h"

#include "IImageWrapper.h"
#include "IImageWrapperModule.h"

#include "AssetRegistryModule.h"
#include "UObject/Package.h"
#include "Engine/Engine.h"

//#include "Windows/WindowsSystemIncludes.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/mesh.h>
#include <assimp/postprocess.h>
#include <assimp/pbrmaterial.h>
#include <assimp/vrm/vrmmeta.h>

// tem
namespace {
	UPackage *s_vrm_package = nullptr;
	FString baseFileName;
}

namespace {
	class RenderControl {
		bool tmp = false;
	public:
		RenderControl() {
			tmp = GUseThreadedRendering;

			if (tmp) {
				StopRenderingThread();
				GUseThreadedRendering = false;
			}
		}
		~RenderControl() {
			if (tmp) {
				GUseThreadedRendering = true;
				StartRenderingThread();
			}
		}
	};
}

static bool RemoveObject(UObject* u) {
	if (u == nullptr) return true;
#if WITH_EDITOR

	u->ClearFlags(EObjectFlags::RF_Standalone);
	u->SetFlags(EObjectFlags::RF_Public | RF_Transient);
	u->ConditionalBeginDestroy();
#endif
	return true;
}

static bool RemoveAssetList(UVrmAssetListObject *&assetList) {
	if (assetList == nullptr) return false;
#if WITH_EDITOR

	for (auto& t : assetList->Textures) {
		RemoveObject(t);
	}
	for (auto& t : assetList->Materials) {
		RemoveObject(t);
	}
	for (auto& t : assetList->OutlineMaterials) {
		RemoveObject(t);
	}
	if (assetList->SkeletalMesh) {
		RemoveObject(VRMGetSkeleton(assetList->SkeletalMesh));
		RemoveObject(VRMGetPhysicsAsset(assetList->SkeletalMesh));
		RemoveObject(assetList->SkeletalMesh);
	}
	RemoveObject(assetList->VrmMetaObject);
	RemoveObject(assetList->VrmLicenseObject);
	RemoveObject(assetList->HumanoidSkeletalMesh);
	RemoveObject(assetList->HumanoidRig);

	RemoveObject(assetList);
	assetList = nullptr;
#endif
	return true;
}

static bool RenewPkgAndSaveObject(UObject *u, bool bSave) {
#if WITH_EDITOR
	if (u == nullptr) return false;

	//if (VRMConverter::Options::Get().IsSingleUAssetFile()) {
		if (VRMConverter::IsImportMode()) {
			u->PostEditChange();
		}
		if (bSave) {
			s_vrm_package->MarkPackageDirty();
			FAssetRegistryModule::AssetCreated(u);
			bool bSaved = UPackage::SavePackage(s_vrm_package, u, EObjectFlags::RF_Standalone, *(s_vrm_package->GetName()), GError, nullptr, true, true, SAVE_NoError);
		}
		/*
	}else{
		FString objPath = u->GetPathName();
		if (objPath.IsEmpty()) return false;

		const FString PackageName = FPackageName::ObjectPathToPackageName(objPath);
		const FString PackagePath = FPaths::GetPath(PackageName);
		const FString AssetName = FPaths::GetBaseFilename(PackageName);

		FString NewPackageName = FPaths::Combine(*PackagePath, *(u->GetFName().ToString()));
		UPackage* Pkg = CreatePackage(nullptr, *NewPackageName);
		u->Rename(nullptr, Pkg);

		if (VRMConverter::IsImportMode()) {
			u->PostEditChange();
		}

		if (bSave) {
			UPackage::SavePackage(Pkg, u, RF_Standalone,
				*FPackageName::LongPackageNameToFilename(NewPackageName, FPackageName::GetAssetPackageExtension()),
				GError, nullptr, false, true, SAVE_NoError);
		}
	}
	*/

#endif
	return true;
}

static void UpdateProgress(int prog) {
#if WITH_EDITOR
	GWarn->UpdateProgress( prog, 100 );
#endif
}

////

static void ReTransformHumanoidBone(USkeleton *targetHumanoidSkeleton, const UVrmMetaObject *meta, const USkeleton *displaySkeleton) {

	FReferenceSkeleton &ReferenceSkeleton = const_cast<FReferenceSkeleton&>(targetHumanoidSkeleton->GetReferenceSkeleton());
	auto &allbone = const_cast<TArray<FMeshBoneInfo> &>(targetHumanoidSkeleton->GetReferenceSkeleton().GetRawRefBoneInfo());

	//auto &humanoidTrans = humanoidSkeleton->GetReferenceSkeleton().GetRawRefBonePose();

	FReferenceSkeletonModifier RefSkelModifier(ReferenceSkeleton, targetHumanoidSkeleton);

	for (int ind_target = 0; ind_target < targetHumanoidSkeleton->GetReferenceSkeleton().GetRawBoneNum(); ++ind_target) {
		FTransform t;
		t.SetIdentity();
		RefSkelModifier.UpdateRefPoseTransform(ind_target, t);

		auto boneName = ReferenceSkeleton.GetBoneName(ind_target);
		//auto &info = targetHumanoidSkeleton->GetReferenceSkeleton().GetRefBoneInfo();
		//auto &a = info[ind_target];

		int32 ind_disp = 0;

		if (meta) {
			auto p = meta->humanoidBoneTable.Find(boneName.ToString());
			if (p == nullptr) {
				continue;
			}
			ind_disp = displaySkeleton->GetReferenceSkeleton().FindBoneIndex(**p);
		}else {
			ind_disp = displaySkeleton->GetReferenceSkeleton().FindBoneIndex(boneName);
		}

		if (ind_disp == INDEX_NONE) {
			continue;
		}
		t = displaySkeleton->GetReferenceSkeleton().GetRefBonePose()[ind_disp];

		auto parent = displaySkeleton->GetReferenceSkeleton().GetParentIndex(ind_disp);
		while (parent != INDEX_NONE) {

			auto s = displaySkeleton->GetReferenceSkeleton().GetBoneName(parent);

			if (meta) {
				if (meta->humanoidBoneTable.FindKey(s.ToString()) != nullptr) {
					// parent == humanoidBone
					break;
				}
			}
			//t.SetLocation(t.GetLocation() + displaySkeleton->GetReferenceSkeleton().GetRefBonePose()[parent].GetLocation());;
			parent = displaySkeleton->GetReferenceSkeleton().GetParentIndex(parent);
		}
		RefSkelModifier.UpdateRefPoseTransform(ind_target, t);
	}

	ReferenceSkeleton.RebuildRefSkeleton(targetHumanoidSkeleton, true);

}

bool ULoaderBPFunctionLibrary::VRMReTransformHumanoidBone(USkeletalMeshComponent *targetHumanoidSkeleton, const UVrmMetaObject *meta, const USkeletalMeshComponent *displaySkeleton) {

	if (targetHumanoidSkeleton == nullptr) return false;
	if (targetHumanoidSkeleton->SkeletalMesh == nullptr) return false;

	if (displaySkeleton == nullptr) return false;
	if (displaySkeleton->SkeletalMesh == nullptr) return false;

	// no meta. use default name.
	//if (meta == nullptr) return false;

	ReTransformHumanoidBone(VRMGetSkeleton(targetHumanoidSkeleton->SkeletalMesh), meta, VRMGetSkeleton(displaySkeleton->SkeletalMesh));
	auto &sk = targetHumanoidSkeleton->SkeletalMesh;
	auto *k = VRMGetSkeleton(sk);

	VRMSetRefSkeleton(sk, k->GetReferenceSkeleton());
	//sk->RefSkeleton.RebuildNameToIndexMap();

	//sk->RefSkeleton.RebuildRefSkeleton(sk->Skeleton, true);
	//sk->Proc();

	//out->RefSkeleton = sk->RefSkeleton;
	
	VRMSetSkeleton(sk, k);
	VRMSetRefSkeleton(sk, k->GetReferenceSkeleton());

	sk->CalculateInvRefMatrices();
	sk->CalculateExtendedBounds();

#if WITH_EDITORONLY_DATA
	sk->ConvertLegacyLODScreenSize();
#if	UE_VERSION_OLDER_THAN(4,20,0)
#else
	sk->UpdateGenerateUpToData();
#endif
#endif

#if WITH_EDITORONLY_DATA
	k->SetPreviewMesh(sk);
#endif
	k->RecreateBoneTree(sk);

	return true;
}



void ULoaderBPFunctionLibrary::SetImportMode(bool bIm, class UPackage *p) {
	VRMConverter::SetImportMode(bIm);
	s_vrm_package = p;
}

namespace {
#if PLATFORM_WINDOWS
	std::string utf_16_to_shift_jis(const std::wstring& str) {
		static_assert(sizeof(wchar_t) == 2, "this function is windows only");
		const int len = ::WideCharToMultiByte(932/*CP_ACP*/, 0, str.c_str(), -1, nullptr, 0, nullptr, nullptr);
		std::string re(len * 2, '\0');
		if (!::WideCharToMultiByte(CP_ACP, 0, str.c_str(), -1, &re[0], len, nullptr, nullptr)) {
			const auto ec = ::GetLastError();
			switch (ec)
			{
			case ERROR_INSUFFICIENT_BUFFER:
				//throw std::runtime_error("in function utf_16_to_shift_jis, WideCharToMultiByte fail. cause: ERROR_INSUFFICIENT_BUFFER"); break;
			case ERROR_INVALID_FLAGS:
				//throw std::runtime_error("in function utf_16_to_shift_jis, WideCharToMultiByte fail. cause: ERROR_INVALID_FLAGS"); break;
			case ERROR_INVALID_PARAMETER:
				//throw std::runtime_error("in function utf_16_to_shift_jis, WideCharToMultiByte fail. cause: ERROR_INVALID_PARAMETER"); break;
			default:
				//throw std::runtime_error("in function utf_16_to_shift_jis, WideCharToMultiByte fail. cause: unknown(" + std::to_string(ec) + ')'); break;
				break;
			}
		}
		const std::size_t real_len = std::strlen(re.c_str());
		re.resize(real_len);
		re.shrink_to_fit();
		return re;
	}
#endif
}

UVrmLicenseObject* ULoaderBPFunctionLibrary::GetVRMMeta(FString filepath) {
	std::string file;
#if PLATFORM_WINDOWS
	file = utf_16_to_shift_jis(*filepath);
#else
	file = TCHAR_TO_UTF8(*filepath);
#endif
	const aiScene *mScenePtr = nullptr;
	Assimp::Importer mImporter;

	{
		TArray<uint8> Res;
		if (FFileHelper::LoadFileToArray(Res, *filepath)) {
		}
		const FString ext = FPaths::GetExtension(filepath);
#if PLATFORM_WINDOWS
		std::string e = utf_16_to_shift_jis(*ext);
#else
		std::string e = TCHAR_TO_UTF8(*ext);
#endif

		mScenePtr = mImporter.ReadFileFromMemory(Res.GetData(), Res.Num(),
			aiProcess_Triangulate | aiProcess_MakeLeftHanded | aiProcess_CalcTangentSpace | aiProcess_GenSmoothNormals | aiProcess_OptimizeMeshes,
			e.c_str());

		//UE_LOG(LogVRM4ULoader, Log, TEXT("VRM:(%3.3lf secs) ReadFileFromMemory"), FPlatformTime::Seconds() - StartTime);
	}
	if (mScenePtr == nullptr) {
		return nullptr;
	}
	UTexture2D* NewTexture2D = nullptr;

	VRM::VRMMetadata *meta = reinterpret_cast<VRM::VRMMetadata*>(mScenePtr->mVRMMeta);

	//mScenePtr->mTextures[0]->mFilename

	if (meta) {
		for (int i = 0; i < meta->license.licensePairNum; ++i) {

			auto &p = meta->license.licensePair[i];

			if (FString(TEXT("texture")) == p.Key.C_Str()) {
				unsigned int texIndex = FCString::Atoi(*FString(p.Value.C_Str()));
				if (texIndex >= 0 && texIndex < mScenePtr->mNumTextures) {

					IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
					TSharedPtr<IImageWrapper> ImageWrapper;
					// Note: PNG format.  Other formats are supported
					ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

					auto &t = *mScenePtr->mTextures[texIndex];
					int Width = t.mWidth;
					int Height = t.mHeight;
#if	UE_VERSION_OLDER_THAN(4,25,0)
#else
					TArray<uint8> RawData;
#endif
					const TArray<uint8>* pRawData = nullptr;

					if (Height == 0) {
						if (ImageWrapper->SetCompressed(t.pcData, t.mWidth)) {

						}
						Width = ImageWrapper->GetWidth();
						Height = ImageWrapper->GetHeight();

						if (Width == 0 || Height == 0) {
							continue;
						}

#if	UE_VERSION_OLDER_THAN(4,25,0)
						ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, pRawData);
#else
						ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, RawData);
						pRawData = &RawData;
#endif
					}
					FString baseName;

					NewTexture2D = VRMUtil::CreateTexture(Width, Height, FString(TEXT("T_")) + baseName, GetTransientPackage());
					//UTexture2D* NewTexture2D = _CreateTransient(Width, Height, PF_B8G8R8A8, t.mFilename.C_Str());

					// Fill in the base mip for the texture we created
					uint8* MipData = (uint8*)NewTexture2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
					if (pRawData) {
						FMemory::Memcpy(MipData, pRawData->GetData(), pRawData->Num());
					} else {
						for (int32 y = 0; y < Height; y++)
						{
							const aiTexel *c = &(t.pcData[y*Width]);
							uint8* DestPtr = &MipData[y * Width * sizeof(FColor)];
							for (int32 x = 0; x < Width; x++)
							{
								*DestPtr++ = c->b;
								*DestPtr++ = c->g;
								*DestPtr++ = c->r;
								*DestPtr++ = c->a;
								c++;
							}
						}
					}
					NewTexture2D->PlatformData->Mips[0].BulkData.Unlock();

					// Set options
					NewTexture2D->SRGB = true;// bUseSRGB;
					NewTexture2D->CompressionSettings = TC_Default;
					NewTexture2D->AddressX = TA_Wrap;
					NewTexture2D->AddressY = TA_Wrap;

#if WITH_EDITORONLY_DATA
					NewTexture2D->CompressionNone = false;
					NewTexture2D->DeferCompression = true;

					// nomipmap for tmporary thumbnail
					//if (VRMConverter::Options::Get().IsMipmapGenerateMode()) {
					//	NewTexture2D->MipGenSettings = TMGS_FromTextureGroup;
					//} else {
						NewTexture2D->MipGenSettings = TMGS_NoMipmaps;
					//}
					NewTexture2D->Source.Init(Width, Height, 1, 1, ETextureSourceFormat::TSF_BGRA8, pRawData->GetData());
					//NewTexture2D->Source.Compress();
#endif

		// Update the remote texture data
					NewTexture2D->UpdateResource();
#if WITH_EDITOR
					NewTexture2D->PostEditChange();
#endif
				}
			}

		}
	}

	auto *p = VRMConverter::GetVRMMeta(mScenePtr);
	p->thumbnail = NewTexture2D;
	return p;
}

bool ULoaderBPFunctionLibrary::VRMSetLoadMaterialType(EVRMImportMaterialType type) {
	VRMConverter::Options::Get().SetMaterialType(type);
	return true;
}

bool ULoaderBPFunctionLibrary::LoadVRMFile(const UVrmAssetListObject *InVrmAsset, UVrmAssetListObject *&OutVrmAsset, const FString filepath, const FImportOptionData &OptionForRuntimeLoad) {
	VRMConverter::Options::Get().SetVrmOption(&OptionForRuntimeLoad);

	return LoadVRMFileLocal(InVrmAsset, OutVrmAsset, filepath);
}

void ULoaderBPFunctionLibrary::LoadVRMFileAsync(const UObject* WorldContextObject, const class UVrmAssetListObject* InVrmAsset, class UVrmAssetListObject*& OutVrmAsset, const FString filepath, const FImportOptionData& OptionForRuntimeLoad, struct FLatentActionInfo LatentInfo) {
	VRMConverter::Options::Get().SetVrmOption(&OptionForRuntimeLoad);

	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FVrmAsyncLoadAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			FVrmAsyncLoadActionParam p = { InVrmAsset, OutVrmAsset, OptionForRuntimeLoad, filepath, nullptr, 0 };
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FVrmAsyncLoadAction(LatentInfo, p));
		}
	}
	return;
}


bool ULoaderBPFunctionLibrary::LoadVRMFileLocal(const UVrmAssetListObject* InVrmAsset, UVrmAssetListObject*& OutVrmAsset, const FString filepath) {

	TArray<uint8> Res;
	if (FFileHelper::LoadFileToArray(Res, *filepath)) {
	}

	return LoadVRMFileFromMemory(InVrmAsset, OutVrmAsset, filepath, Res.GetData(), Res.Num());
}

bool ULoaderBPFunctionLibrary::LoadVRMFileFromMemoryDefaultOption(UVrmAssetListObject*& OutVrmAsset, const FString filepath, const uint8* pData, size_t dataSize) {
#if	UE_VERSION_OLDER_THAN(5,0,0)
	TAssetPtr<UClass> c;
#else
	TSoftObjectPtr<UClass> c;
#endif
	if (c == nullptr) {
		FSoftObjectPath r(TEXT("/VRM4U/VrmAssetListObjectBP.VrmAssetListObjectBP"));
		UObject* u = r.TryLoad();
		if (u) {
			c = (UClass*)(Cast<UBlueprint>(u)->GeneratedClass);
		}
	}

	if (c == nullptr) {
		c = UVrmAssetListObject::StaticClass();
	}
#if	UE_VERSION_OLDER_THAN(5,0,0)
	TAssetPtr<UVrmAssetListObject> m = NewObject<UVrmAssetListObject>((UObject*)GetTransientPackage(), c.Get());
#else
	TSoftObjectPtr<UVrmAssetListObject> m = NewObject<UVrmAssetListObject>((UObject*)GetTransientPackage(), c.Get());
#endif

	return LoadVRMFileFromMemory(m.Get(), OutVrmAsset, filepath, pData, dataSize);
}

bool ULoaderBPFunctionLibrary::LoadVRMFileFromMemory(const UVrmAssetListObject *InVrmAsset, UVrmAssetListObject *&OutVrmAsset, const FString filepath, const uint8 *pData, size_t dataSize) {

	RenderControl _dummy_control;

	if (InVrmAsset == nullptr) {
		return false;
	}

	Assimp::Importer mImporter;
	const aiScene* mScenePtr = nullptr;

	if (filepath.IsEmpty())
	{
	}

	double StartTime = FPlatformTime::Seconds();
	auto LogAndUpdate = [&](FString logname) {
		UE_LOG(LogVRM4ULoader, Log, TEXT("VRM:(%02.2lf secs) %s"), FPlatformTime::Seconds() - StartTime, *logname);
		StartTime = FPlatformTime::Seconds();
	};

	VRMConverter::Options::Get().SetVRM0Model(true);
	{
		const FString ext = FPaths::GetExtension(filepath);
#if PLATFORM_WINDOWS
		std::string e = utf_16_to_shift_jis(*ext);
#else
		std::string e = TCHAR_TO_UTF8(*ext);
#endif

		VRMConverter::Options::Get().ClearModelType();

		if (e.compare("vrm") == 0 || e.compare("glb") == 0 || e.compare("gltf") == 0) {

			VRMConverter::Options::Get().SetVRM0Model(true);

			extern bool VRMIsVRM1(const uint8 * pData, size_t size);
			if (VRMIsVRM1(pData, dataSize)) {
				VRMConverter::Options::Get().SetVRM1Model(true);
			}

		}
		if (e.compare("bvh") == 0) {
			VRMConverter::Options::Get().SetBVHModel(true);
		}
		if (e.compare("pmx") == 0) {
			VRMConverter::Options::Get().SetPMXModel(true);
		}

		mScenePtr = mImporter.ReadFileFromMemory(pData, dataSize,
			aiProcess_Triangulate | aiProcess_MakeLeftHanded | aiProcess_CalcTangentSpace | aiProcess_GenSmoothNormals | aiProcess_OptimizeMeshes,
			e.c_str());

		if (mScenePtr == nullptr) {
			std::string file;
#if PLATFORM_WINDOWS
			file = utf_16_to_shift_jis(*filepath);
#else
			file = TCHAR_TO_UTF8(*filepath);
#endif
			mScenePtr = mImporter.ReadFile(file, aiProcess_Triangulate | aiProcess_MakeLeftHanded | aiProcess_CalcTangentSpace | aiProcess_GenSmoothNormals | aiProcess_OptimizeMeshes);
		}

		UE_LOG(LogVRM4ULoader, Log, TEXT("VRM:(%3.3lf secs) ReadFileFromMemory"), FPlatformTime::Seconds() - StartTime);
		StartTime = FPlatformTime::Seconds();
	}

	UpdateProgress(20);
	if (mScenePtr == nullptr)
	{
		UE_LOG(LogVRM4ULoader, Warning, TEXT("VRM4U: read failure.\n"));
		return false;
	}

	{
		FString fullpath = FPaths::GameUserDeveloperDir() + TEXT("VRM/");
		FString basepath = FPackageName::FilenameToLongPackageName(fullpath);
		//FPackageName::RegisterMountPoint("/VRMImportData/", fullpath);

		baseFileName = FPaths::GetBaseFilename(filepath);


		if (s_vrm_package == nullptr) {
			s_vrm_package = GetTransientPackage();
		}
	}
	UVrmAssetListObject *out = OutVrmAsset;
	if (OutVrmAsset == nullptr) {
		if (s_vrm_package == GetTransientPackage()) {
			out = Cast<UVrmAssetListObject>(StaticDuplicateObject(InVrmAsset, s_vrm_package, NAME_None));
		} else {
			out = VRM4U_NewObject<UVrmAssetListObject>(s_vrm_package, *(FString(TEXT("VA_")) + VRMConverter::NormalizeFileName(baseFileName) + FString(TEXT("_VrmAssetList"))), EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);
			InVrmAsset->CopyMember(out);
		}
		OutVrmAsset = out;
	}

	if (out == nullptr) {
		UE_LOG(LogVRM4ULoader, Warning, TEXT("VRM4U: no UVrmAssetListObject.\n"));
		return false;
	}

	out->FileFullPathName = filepath;
	out->OrigFileName = baseFileName;
	out->BaseFileName = VRMConverter::NormalizeFileName(baseFileName);
	out->Package = s_vrm_package;

	{
		bool ret = true;

		LogAndUpdate(TEXT("Begin convert"));
		ret &= VRMConverter::NormalizeBoneName(mScenePtr);
		LogAndUpdate(TEXT("NormalizeBoneName"));
		ret &= VRMConverter::ConvertTextureAndMaterial(out, mScenePtr);
		LogAndUpdate(TEXT("ConvertTextureAndMaterial"));
		UpdateProgress(40);
		{
			bool r = VRMConverter::ConvertVrmMeta(out, mScenePtr, pData, dataSize);	// use texture.
			if (VRMConverter::Options::Get().IsVRMModel() == true) {
				ret &= r;
			}
		}
		LogAndUpdate(TEXT("ConvertVrmMeta"));
		UpdateProgress(60);
		ret &= VRMConverter::ConvertModel(out, mScenePtr);
		LogAndUpdate(TEXT("ConvertModel"));
		ret &= VRMConverter::ConvertRig(out, mScenePtr);
		LogAndUpdate(TEXT("ConvertRig"));
		ret &= VRMConverter::ConvertPose(out, mScenePtr);
		LogAndUpdate(TEXT("ConvertPose"));
		if (out->bSkipMorphTarget == false) {
			ret &= VRMConverter::ConvertMorphTarget(out, mScenePtr);
			LogAndUpdate(TEXT("ConvertMorphTarget"));
		}
		ret &= VRMConverter::ConvertHumanoid(out, mScenePtr);
		LogAndUpdate(TEXT("ConvertHumanoid"));
		UpdateProgress(80);

		OutVrmAsset->MeshReturnedData = nullptr;
		if (ret == false) {
			RemoveAssetList(out);
			return false;
		}
	}
	out->VrmMetaObject->SkeletalMesh = out->SkeletalMesh;

	{
		LogAndUpdate(TEXT("BeginSave"));
		bool b = out->bAssetSave;
		RenewPkgAndSaveObject(out, b);
		for (auto &t : out->Textures) {
			RenewPkgAndSaveObject(t, b);
		}
		for (auto &t : out->Materials) {
			RenewPkgAndSaveObject(t, b);
		}
		for (auto &t : out->OutlineMaterials) {
			RenewPkgAndSaveObject(t, b);
		}
		RenewPkgAndSaveObject(out->SkeletalMesh, b);
		RenewPkgAndSaveObject(VRMGetSkeleton(out->SkeletalMesh), b);
		RenewPkgAndSaveObject(VRMGetPhysicsAsset(out->SkeletalMesh), b);
		RenewPkgAndSaveObject(out->VrmMetaObject, b);
		RenewPkgAndSaveObject(out->VrmHumanoidMetaObject, b);
		RenewPkgAndSaveObject(out->VrmMannequinMetaObject, b);
		RenewPkgAndSaveObject(out->VrmLicenseObject, b);
		RenewPkgAndSaveObject(out->HumanoidSkeletalMesh, b);
		RenewPkgAndSaveObject(out->HumanoidRig, b);

		LogAndUpdate(TEXT("Save"));
	}

	if (VRMConverter::IsImportMode() == false){
		//FString fullpath = FPaths::GameUserDeveloperDir() + TEXT("VRM/");
		//FString basepath = FPackageName::FilenameToLongPackageName(fullpath);
		//FPackageName::RegisterMountPoint("/VRMImportData/", fullpath);
		//ULevel::LevelDirtiedEvent.Broadcast();
	}
	UpdateProgress(100);
	return true;
}


bool ULoaderBPFunctionLibrary::CopyPhysicsAsset(USkeletalMesh *dstMesh, const USkeletalMesh *srcMesh, bool bResetCollisionTransform){
	//GetTransientPackage
#if WITH_EDITOR
	if (srcMesh == nullptr || dstMesh == nullptr) return false;

	auto  *srcPA = VRMGetPhysicsAsset(srcMesh);
	UPackage *pk = dstMesh->GetOutermost();

	//FString name = srcPA->GetFName().ToString() + TEXT("_copy");
	FString name = dstMesh->GetFName().ToString() + TEXT("_copy");
	name.RemoveFromStart(TEXT("SK_"));
	name = TEXT("PHYS_") + name;

	UPhysicsAsset *dstPA = VRM4U_NewObject<UPhysicsAsset>(pk, *name, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);
	dstPA->Modify();
	dstPA->SetPreviewMesh(dstMesh);

	TArray<FName> addBoneNameList;

	for (auto &a : srcPA->SkeletalBodySetups) {
		auto rigName = VRMGetSkeleton(srcMesh)->GetRigNodeNameFromBoneName(a->BoneName);
		if (rigName.IsNone()) {
			rigName = a->BoneName;
		}

		auto dstBoneName = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(rigName);
		if (dstBoneName.IsNone()) {
			dstBoneName = rigName;
		}

		if (rigName.IsNone()==false && dstBoneName.IsNone()==false){
			if (addBoneNameList.Find(dstBoneName) < 0) {
				USkeletalBodySetup *bs = Cast<USkeletalBodySetup>(StaticDuplicateObject(a, dstPA, NAME_None));
				bs->BoneName = dstBoneName;
				addBoneNameList.Add(dstBoneName);

				auto srcIndex = VRMGetRefSkeleton(srcMesh).FindBoneIndex(a->BoneName);
				auto dstIndex = VRMGetRefSkeleton(dstMesh).FindBoneIndex(dstBoneName);
				FTransform srcTrans, dstTrans;
				while (srcIndex >= 0)
				{
					srcIndex = VRMGetRefSkeleton(srcMesh).GetParentIndex(srcIndex);
					if (srcIndex < 0) {
						break;
					}
					srcTrans = VRMGetRefSkeleton(srcMesh).GetRefBonePose()[srcIndex].GetRelativeTransform(srcTrans);
				}
				while (dstIndex >= 0)
				{
					dstIndex = VRMGetRefSkeleton(dstMesh).GetParentIndex(dstIndex);
					if (dstIndex < 0) {
						break;
					}
					dstTrans = VRMGetRefSkeleton(dstMesh).GetRefBonePose()[dstIndex].GetRelativeTransform(dstTrans);
				}

				if (bResetCollisionTransform) {
						for (int i = 0; i < bs->AggGeom.SphylElems.Num(); ++i) {
						bs->AggGeom.SphylElems[i].Center.Set(0, 0, 0); 
						bs->AggGeom.SphylElems[i].Rotation = FRotator::ZeroRotator; 

						//bs->AggGeom.SphylElems[i].Center.X = 0;// -v.Z;
						//bs->AggGeom.SphylElems[i].Center.Y = 0;// v.Y;
						//bs->AggGeom.SphylElems[i].Center.Z = 0;// v.X;
					}
					for (auto &b : bs->AggGeom.BoxElems) {
						b.Center.Set(0, 0, 0);
						b.Rotation = FRotator::ZeroRotator;
					}
				}
				dstPA->SkeletalBodySetups.Add(bs);
			}
		}
	}
	for (auto &a : srcPA->ConstraintSetup) {

		FName n[3];
		{
			const FName nn[] = {
				a->DefaultInstance.ConstraintBone1,
				a->DefaultInstance.ConstraintBone2,
				a->DefaultInstance.JointName,
			};
			for (int i = 0; i < 3; ++i) {
				n[i] = VRMGetSkeleton(srcMesh)->GetRigNodeNameFromBoneName(nn[i]);
				if (n[i].IsNone()) {
					n[i] = nn[i];
				}
			}
		}
		const auto rigName1 = n[0];
		const auto rigName2 = n[1];
		const auto rigNameJ = n[2];

		//const auto rigName1 = srcMesh->Skeleton->GetRigNodeNameFromBoneName(a->DefaultInstance.ConstraintBone1);
		//const auto rigName2 = srcMesh->Skeleton->GetRigNodeNameFromBoneName(a->DefaultInstance.ConstraintBone2);
		//const auto rigNameJ = srcMesh->Skeleton->GetRigNodeNameFromBoneName(a->DefaultInstance.JointName);

		UPhysicsConstraintTemplate *ct = Cast<UPhysicsConstraintTemplate>(StaticDuplicateObject(a, dstPA, NAME_None));
		ct->DefaultInstance.ConstraintBone1 = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(rigName1);
		ct->DefaultInstance.ConstraintBone2 = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(rigName2);
		ct->DefaultInstance.JointName = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(rigNameJ);

		{
			auto ind1 = VRMGetRefSkeleton(dstMesh).FindBoneIndex(ct->DefaultInstance.ConstraintBone1);
			auto ind2 = VRMGetRefSkeleton(dstMesh).FindBoneIndex(ct->DefaultInstance.ConstraintBone2);

			if (ind1 >= 0 && ind2 >= 0) {
				auto t = VRMGetRefSkeleton(dstMesh).GetRefBonePose()[ind1];
				while (1) {
					ind1 = VRMGetRefSkeleton(dstMesh).GetParentIndex(ind1);
					if (ind1 == ind2) {
						break;
					}
					if (ind1 < 0) {
						break;
					}
					auto v = VRMGetRefSkeleton(dstMesh).GetRefBonePose()[ind1].GetLocation();
					t.SetLocation(t.GetLocation() + v);
				}
				//auto indParent = dstMesh->RefSkeleton.GetParentIndex(ind1);

				ct->DefaultInstance.SetRefFrame(EConstraintFrame::Frame1, FTransform::Identity);
				ct->DefaultInstance.SetRefFrame(EConstraintFrame::Frame2, t);
			}
		}
		{
			/*
			auto s1 = a->DefaultInstance->ProfileInstance.ConeLimit.Swing1Motion;
			auto s2 = a->DefaultInstance->ProfileInstance.ConeLimit.Swing1LimitDegrees;
			ct->DefaultInstance.SetAngularTwistLimit(s1, s2);

			s1 = a->DefaultInstance->ProfileInstance.ConeLimit.Swing2Motion;
			s2 = a->DefaultInstance->ProfileInstance.ConeLimit.Swing2LimitDegrees;

			//ct->DefaultInstance.SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Limited, 10);
			//ct->DefaultInstance.SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Limited, 10);
			*/
		}

		dstPA->ConstraintSetup.Add(ct);
	}

	dstPA->UpdateBodySetupIndexMap();

	dstPA->RefreshPhysicsAssetChange();
	dstPA->UpdateBoundsBodiesArray();

#endif

	return true;
}


bool ULoaderBPFunctionLibrary::CopyVirtualBone(USkeletalMesh *dstMesh, const USkeletalMesh *srcMesh) {
	if (dstMesh == nullptr || srcMesh == nullptr) {
		return false;
	}

	// virtual bone
	{
		const TArray<FVirtualBone>& vTable = VRMGetSkeleton(srcMesh)->GetVirtualBones();

		for (auto &t : vTable) {
			FName newName;

			int32 id[] = {
				VRMGetRefSkeleton(dstMesh).FindBoneIndex(t.SourceBoneName),
				VRMGetRefSkeleton(dstMesh).FindBoneIndex(t.TargetBoneName),
			};
			FName n[2] = {
				t.SourceBoneName,
				t.TargetBoneName,
			};

#if WITH_EDITOR
			{
				auto t1 = VRMGetSkeleton(srcMesh)->GetRigNodeNameFromBoneName(t.SourceBoneName);
				auto t2 = VRMGetSkeleton(srcMesh)->GetRigNodeNameFromBoneName(t.TargetBoneName);

				if (t1.IsNone()==false && t2.IsNone()==false) {
					auto r1 = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(t1);
					auto r2 = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(t2);

					if (r1.IsNone()==false && r2.IsNone()==false) {
						id[0] = VRMGetRefSkeleton(dstMesh).FindBoneIndex(r1);
						id[1] = VRMGetRefSkeleton(dstMesh).FindBoneIndex(r2);

						n[0] = r1;
						n[1] = r2;
					}
				}
			}
#endif

			if (id[0] < 0) {
				n[0] = VRMGetRefSkeleton(dstMesh).GetBoneName(0);
			}
			if (id[1] < 0) {
				if (id[0] < 0) {
					n[1] = VRMGetRefSkeleton(dstMesh).GetBoneName(1);
				}
			}

			VRMGetSkeleton(dstMesh)->AddNewVirtualBone(n[0], n[1], newName);
			VRMGetSkeleton(dstMesh)->RenameVirtualBone(newName, t.VirtualBoneName);
		}
	}

	// socket
	{
		for (auto &t : srcMesh->Skeleton->Sockets) {
			FName newName;

			int32 id = VRMGetRefSkeleton(dstMesh).FindBoneIndex(t->BoneName);

			FName n = t->BoneName;

			FRotator rot = t->RelativeRotation;
			FVector vec = t->RelativeLocation;

#if WITH_EDITOR
			{
				auto t1 = VRMGetSkeleton(srcMesh)->GetRigNodeNameFromBoneName(t->BoneName);

				if (t1.IsNone() == false) {
					auto r1 = VRMGetSkeleton(dstMesh)->GetRigBoneMapping(t1);

					if (r1.IsNone() == false) {
						id = VRMGetRefSkeleton(dstMesh).FindBoneIndex(r1);
						n = r1;
					}
				}
			}
#endif

			if (id < 0) {
				n = VRMGetRefSkeleton(dstMesh).GetBoneName(0);
			}

			bool bNewSocket = false;
			USkeletalMeshSocket *s = nullptr;
			s = VRMGetSkeleton(dstMesh)->FindSocket(t->SocketName);
			if (s == nullptr) {
				s = NewObject<USkeletalMeshSocket>(dstMesh);
				bNewSocket = true;
			}

			{
				int32 bone1 = VRMGetRefSkeleton(srcMesh).FindBoneIndex(t->BoneName);
				int32 bone2 = VRMGetRefSkeleton(dstMesh).FindBoneIndex(n);

				auto getBoneTransform = [](auto &mesh, int32 bone) {
#if WITH_EDITOR
					return VRMGetRetargetBasePose(mesh)[bone];
#else
					auto &f = VRMGetRefSkeleton(mesh).GetRefBonePose();
					if (bone < f.Num()) return f[bone];
					return FTransform();
#endif
				};

				FTransform f1;
				while (bone1 >= 0) {
					f1 = f1 * getBoneTransform(srcMesh, bone1);
					bone1 = VRMGetRefSkeleton(srcMesh).GetParentIndex(bone1);
				}

				FTransform f2;
				while (bone2 >= 0) {
					f2 = f2 * getBoneTransform(dstMesh, bone2);
					bone2 = VRMGetRefSkeleton(dstMesh).GetParentIndex(bone2);
				}

				FTransform org;
				org.SetLocation(vec);

				f1.SetLocation(FVector::ZeroVector);
				f2.SetLocation(FVector::ZeroVector);

				FTransform tmp = f2 * f1.Inverse() * org * f1 * f2.Inverse();
				vec = tmp.GetLocation();
			}

			s->SocketName = t->SocketName;
			s->BoneName = n;
			s->RelativeLocation = vec;
			s->RelativeRotation = rot;
			s->RelativeScale = t->RelativeScale;
			s->bForceAlwaysAnimated = t->bForceAlwaysAnimated;

			if (bNewSocket) {
				VRMGetSkeleton(dstMesh)->Sockets.Add(s);
			}
		}
	}
	VRMGetSkeleton(dstMesh)->MarkPackageDirty();

	return true;
}


namespace {
	int32 GetDirectChildBonesLocal(FReferenceSkeleton &refs, int32 ParentBoneIndex, TArray<int32> & Children)
	{
		Children.Reset();

		const int32 NumBones = refs.GetNum();
		for (int32 ChildIndex = ParentBoneIndex + 1; ChildIndex < NumBones; ChildIndex++)
		{
			if (ParentBoneIndex == refs.GetParentIndex(ChildIndex))
			{
				Children.Add(ChildIndex);
			}
		}

		return Children.Num();
	}
}


bool ULoaderBPFunctionLibrary::CreateTailBone(USkeletalMesh *skeletalMesh, const TArray<FString> &boneName) {

	if (skeletalMesh == nullptr) {
		return false;
	}

	TArray<int32> tail;
	for (auto &b : boneName) {
		int first = VRMGetRefSkeleton(skeletalMesh).FindBoneIndex(*b);
		if (first < 0) {
			continue;
		}
		tail.AddUnique(first);
	}
	if (tail.Num() == 0) {
		return false;
	}

	USkeletalMesh *sk_tmp = skeletalMesh;// NewObject<USkeletalMesh>(GetTransientPackage(), NAME_None, EObjectFlags::RF_Public | RF_Transient);
	USkeleton *k_tmp = VRMGetSkeleton(skeletalMesh);//NewObject<UVrmSkeleton>(GetTransientPackage(), NAME_None, EObjectFlags::RF_Public | RF_Transient);

	/*
	k_tmp->RecreateBoneTree(skeletalMesh);
	sk_tmp->Skeleton = k_tmp;
	sk_tmp->RefSkeleton = k_tmp->GetReferenceSkeleton();
	sk_tmp->Skeleton->MergeAllBonesToBoneTree(sk_tmp);
	*/

	for (int i = 0; i < tail.Num(); ++i) {
		TArray<int32> children;
		GetDirectChildBonesLocal(VRMGetRefSkeleton(sk_tmp), tail[i], children);
		if (children.Num()) {
			tail.RemoveAt(i);
			tail.Append(children);
			--i;
		}
	}

	bool bAdd = false;

	FReferenceSkeletonModifier RefSkelModifier(VRMGetRefSkeleton(sk_tmp), VRMGetSkeleton(sk_tmp));
	for (int i = 0; i < tail.Num(); ++i) {
		FMeshBoneInfo b;
		FTransform t;

		b.ParentIndex = tail[i];
		b.Name = VRMGetRefSkeleton(sk_tmp).GetBoneName(tail[i]);

		FString text = TEXT("_vrm4u_dummy_tail");

		if (b.Name.ToString().Contains(text)) {
			continue;
		}
		b.Name = *(b.Name.ToString() + text);
		t = VRMGetRefSkeleton(sk_tmp).GetRefBonePose()[tail[i]];

		RefSkelModifier.Add(b, t);
		bAdd = true;
	}

	if (bAdd) {
		VRMGetRefSkeleton(sk_tmp).RebuildRefSkeleton(VRMGetSkeleton(sk_tmp), true);

		VRMGetSkeleton(skeletalMesh)->ClearCacheData();

		VRMGetSkeleton(skeletalMesh)->MergeAllBonesToBoneTree(sk_tmp);

		//skeletalMesh->RefSkeleton.RebuildRefSkeleton(skeletalMesh->Skeleton, true);

		{
			FSkeletalMeshLODRenderData &rd = skeletalMesh->GetResourceForRendering()->LODRenderData[0];

			{
				int boneNum = VRMGetSkeleton(skeletalMesh)->GetReferenceSkeleton().GetRawBoneNum();
				rd.RequiredBones.SetNum(boneNum);
				rd.ActiveBoneIndices.SetNum(boneNum);

#if WITH_EDITOR
				FSkeletalMeshLODModel *p = &(skeletalMesh->GetImportedModel()->LODModels[0]);
				p->ActiveBoneIndices.SetNum(boneNum);
				p->RequiredBones.SetNum(boneNum);
#endif

				for (int i = 0; i < boneNum; ++i) {
					rd.RequiredBones[i] = i;
					rd.ActiveBoneIndices[i] = i;

#if WITH_EDITOR
					p->ActiveBoneIndices[i] = i;
					p->RequiredBones[i] = i;
#endif
				}
			}
		}

		skeletalMesh->Modify();
		VRMGetSkeleton(skeletalMesh)->Modify();

#if WITH_EDITOR
		skeletalMesh->PostEditChange();
		VRMGetSkeleton(skeletalMesh)->PostEditChange();
#endif
	}

	return true;
}
