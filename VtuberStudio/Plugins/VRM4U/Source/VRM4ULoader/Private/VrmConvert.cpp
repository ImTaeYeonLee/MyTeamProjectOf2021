// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.

#include "VrmConvert.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/mesh.h>
#include <assimp/postprocess.h>
#include <assimp/pbrmaterial.h>
#include <assimp/vrm/vrmmeta.h>
#include "UObject/Package.h"

//static void assimpDummy() {
	//volatile float f = Assimp::Math::PI<float>();
//}



static bool bImportMode = false;
bool VRMConverter::IsImportMode() {
	return bImportMode;
}
void VRMConverter::SetImportMode(bool b) {
	bImportMode = b;
}

UPackage *VRMConverter::CreatePackageFromImportMode(UPackage *p, const FString &name) {
	FString n =	p->GetName();
	n += TEXT("/") + name;
#if	UE_VERSION_OLDER_THAN(4,26,0)
	return CreatePackage(nullptr, *n);
#else
	return CreatePackage(*n);
#endif
}


FString VRMConverter::NormalizeFileName(const char *str) {
	FString ret = UTF8_TO_TCHAR(str);

	return NormalizeFileName(ret);
}

FString VRMConverter::NormalizeFileName(const FString &str) {
	FString ret = str;
	FText error;

	if (!FName::IsValidXName(*ret, INVALID_OBJECTNAME_CHARACTERS INVALID_LONGPACKAGE_CHARACTERS, &error)) {
		FString s = INVALID_OBJECTNAME_CHARACTERS;
		s += INVALID_LONGPACKAGE_CHARACTERS;

		auto a = s.GetCharArray();
		for (int i = 0; i < a.Num(); ++i) {
			FString tmp;
			tmp.AppendChar(a[i]);
			ret = ret.Replace(tmp.GetCharArray().GetData(), TEXT("_"));
			//int ind;
			//if (ret.FindChar(s[i], ind)) {
			//}
		}
	}
	return ret;
}

static bool hasInvalidBoneName(const aiString &s) {
	for (uint32_t i = 0; i < s.length; ++i) {
		if (s.data[i] >= 0 && s.data[i] <= 0x7e) {
			continue;
		}
		return true;
	}
	return false;
}

static int totalCount = 0;

static bool AddReplaceList(const aiNode *node, TMap<FString, FString> &map) {

	if (node == nullptr) {
		return true;
	}

	if (hasInvalidBoneName(node->mName)) {
		FString s = TEXT("replace_") + FString::FromInt(totalCount);
		if (map.Find(UTF8_TO_TCHAR(node->mName.C_Str())) == nullptr) {
			map.Add(UTF8_TO_TCHAR(node->mName.C_Str()), s);
			totalCount++;
		}
	}

	for (uint32_t i = 0; i < node->mNumChildren; ++i) {
		AddReplaceList(node->mChildren[i], map);
	}
	return true;
}

static bool ReplaceNodeName(aiNode *node, const TMap<FString, FString> &map) {

	if (node == nullptr) {
		return true;
	}

	auto a = map.Find(UTF8_TO_TCHAR(node->mName.C_Str()));
	if (a) {
		node->mName.Set(TCHAR_TO_ANSI(**a));
	}

	for (uint32_t i = 0; i < node->mNumChildren; ++i) {
		ReplaceNodeName(node->mChildren[i], map);
	}
	return true;
}

bool VRMConverter::NormalizeBoneName(const aiScene *mScenePtr) {

	return true;
	//auto p = const_cast<aiScene*>(mScenePtr);
	//if (p == nullptr) return false;

	TMap<FString, FString> replaceTable;

	totalCount = 0;
	//mScenePtr->mMeshes[0]->bon

	AddReplaceList(mScenePtr->mRootNode, replaceTable);

	for (uint32_t m = 0; m < mScenePtr->mNumMeshes; ++m) {
		if (hasInvalidBoneName(mScenePtr->mMeshes[m]->mName)) {
			FString s = TEXT("replace_") + FString::FromInt(totalCount);
			if (replaceTable.Find(UTF8_TO_TCHAR(mScenePtr->mMeshes[m]->mName.C_Str())) == nullptr) {
				replaceTable.Add(UTF8_TO_TCHAR(mScenePtr->mMeshes[m]->mName.C_Str()), s);
				totalCount++;
			}
		}
	}

	// replace!

	ReplaceNodeName(mScenePtr->mRootNode, replaceTable);

	for (uint32_t m = 0; m < mScenePtr->mNumMeshes; ++m) {
		if (auto a = replaceTable.Find(UTF8_TO_TCHAR(mScenePtr->mMeshes[m]->mName.C_Str()))){
			mScenePtr->mMeshes[m]->mName.Set(TCHAR_TO_ANSI(**a));
		}

		auto &aiM = mScenePtr->mMeshes[m];
		for (uint32_t b = 0; b < aiM->mNumBones; ++b) {
			if (auto a = replaceTable.Find(UTF8_TO_TCHAR(aiM->mBones[b]->mName.C_Str()))) {
				aiM->mBones[b]->mName.Set(TCHAR_TO_ANSI(**a));
			}
		}
	}

	{
		VRM::VRMMetadata *meta = reinterpret_cast<VRM::VRMMetadata*>(mScenePtr->mVRMMeta);

		for (int s = 0; s < meta->springNum; ++s) {
			auto &a = meta->springs[s];
			if (a.bones_name == nullptr) {
				continue;
			}
			for (int b = 0; b < a.boneNum; ++b) {
				if (auto str = replaceTable.Find(UTF8_TO_TCHAR(a.bones_name[b].C_Str()))) {
					a.bones_name[b].Set(TCHAR_TO_ANSI(**str));
				}
			}
		}

		for (int c = 0; c < meta->colliderGroupNum; ++c) {
			auto &a = meta->colliderGroups[c];
			if (auto str = replaceTable.Find(UTF8_TO_TCHAR(a.node_name.C_Str()))) {
				a.node_name.Set(TCHAR_TO_ANSI(**str));
			}
		}

		for (auto &a : meta->humanoidBone) {
			if (auto str = replaceTable.Find(UTF8_TO_TCHAR(a.nodeName.C_Str()))) {
				a.nodeName.Set(TCHAR_TO_ANSI(**str));
			}
		}
	}


	return true;
}


////

VRMConverter::Options& VRMConverter::Options::Get(){
	static VRMConverter::Options o;
	return o;
}

USkeleton *VRMConverter::Options::GetSkeleton() {
#if WITH_EDITOR
	if (Window == nullptr) return nullptr;

	return Window->Skeleton;
#else
	return nullptr;
#endif
}

bool VRMConverter::Options::IsSkipNoMeshBone() const {
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bSkipNoMeshBone;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsSkipMorphTarget() const {
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bSkipMorphTarget;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsEnableMorphTargetNormal() const {
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bEnableMorphTargetNormal;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsStrictMorphTargetNameMode() const {
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bStrictMorphTargetNameMode;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsCreateHumanoidRenamedMesh() const {
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bCreateHumanoidRenamedMesh;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsCreateIKBone() const {
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bCreateIKBone;
#else
	return false;
#endif
}

bool VRMConverter::Options::IsMobileBone() const {
	bool ret = false;
#if (PLATFORM_WINDOWS)
#else
	ret = true;
#endif


#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bMobileBone;
#else
	return ret;
#endif
}

int VRMConverter::Options::GetBoneWeightInfluenceNum() const {
	int ret = 8;

#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return FMath::Clamp(Window->BoneWeightInfluenceNum, 1, 8);
#else
	return ret;
#endif
}


bool VRMConverter::Options::IsDebugOneBone() const {
	bool ret = false;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bDebugOneBone;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsSimpleRootBone() const {
	bool ret = true;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bSimpleRoot;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsSkipPhysics() const {
	bool ret = true;

	if (IsDebugOneBone()) {
		return true;
	}
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bSkipPhysics;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsNoTranslucent() const {
	bool ret = false;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bNoTranslucent;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsSingleUAssetFile() const {
	bool ret = true;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bSingleUAssetFile;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsDefaultGridTextureMode() const {
	bool ret = false;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bDefaultGridTextureMode;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsBC7Mode() const {
	bool ret = false;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bBC7Mode;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsMipmapGenerateMode() const {
	bool ret = true;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bMipmapGenerateMode;
#else
	return ret;
#endif
}
	

bool VRMConverter::Options::IsMergeMaterial() const {
	bool ret = true;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bMergeMaterial;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsMergePrimitive() const {
	bool ret = true;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bMergePrimitive;
#else
	return ret;
#endif
}

bool VRMConverter::Options::IsOptimizeVertex() const {
	bool ret = true;
#if WITH_EDITOR
	if (Window == nullptr) return ret;

	return Window->bOptimizeVertex;
#else
	return ret;
#endif
}

static bool bbVRM0 = false;
static bool bbVRM1 = false;
void VRMConverter::Options::SetVRM0Model(bool bVRM) {
	bbVRM0 = bVRM;
	bbVRM1 = !bVRM;
}
void VRMConverter::Options::SetVRM1Model(bool bVRM) {
	bbVRM1 = bVRM;
	bbVRM0 = !bVRM;
}

bool VRMConverter::Options::IsVRM0Model() const {
	return bbVRM0;
}
bool VRMConverter::Options::IsVRM1Model() const {
	return bbVRM1;
}

bool VRMConverter::Options::IsVRMModel() const {
	return IsVRM0Model() || IsVRM1Model();
}

static bool bbBVH = false;
void VRMConverter::Options::SetBVHModel(bool bBVH) {
	bbBVH = bBVH;
}

bool VRMConverter::Options::IsBVHModel() const {
	return bbBVH;
}

static bool bbPMX = false;
void VRMConverter::Options::SetPMXModel(bool bVRM) {
	bbPMX = bVRM;
}

bool VRMConverter::Options::IsPMXModel() const {
	return bbPMX;
}

void VRMConverter::Options::ClearModelType() {
	bbVRM0 = false;
	bbVRM1 = false;
	bbBVH = false;
	bbPMX = false;
}


float VRMConverter::Options::GetModelScale() const {
#if WITH_EDITOR
	if (Window == nullptr) return 1.f;

	return Window->ModelScale;
#else
	return 1.f;
#endif
}

bool VRMConverter::Options::IsAPoseRetarget() const {
	if (IsDebugOneBone()) {
		return false;
	}
#if WITH_EDITOR
	if (Window == nullptr) return false;

	return Window->bAPoseRetarget;
#else
	return false;
#endif
}


static EVRMImportMaterialType mType = EVRMImportMaterialType::VRMIMT_Auto;
void VRMConverter::Options::SetMaterialType(EVRMImportMaterialType t) {
	mType = t;
}
EVRMImportMaterialType VRMConverter::Options::GetMaterialType() const {
	if (Window == nullptr) return mType;
	return Window->MaterialType;
}

////
VrmConvert::VrmConvert()
{
}

VrmConvert::~VrmConvert()
{
}

FString VRM4U_GetPackagePath(UPackage* Outer) {
	if (Outer != GetTransientPackage()) {
		FString s = Outer->GetPathName();
		FString s1, s2;
		s.Split(TEXT("/"), &s1, &s2, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

		return s1 + TEXT("/");
	}
	return "";
}


UPackage* VRM4U_CreatePackage(UPackage* Outer, FName Name) {
	UPackage* pkg = Outer;
	if (Outer != GetTransientPackage()) {
		FString s = Outer->GetPathName();
		FString s1, s2;
		s.Split(TEXT("/"), &s1, &s2, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

#if	UE_VERSION_OLDER_THAN(4,26,0)
		pkg = CreatePackage(nullptr, *(s1 + TEXT("/") + Name.ToString()));
#else
		pkg = CreatePackage(*(s1 + TEXT("/") + Name.ToString()));
#endif
	}
	return pkg;
}
