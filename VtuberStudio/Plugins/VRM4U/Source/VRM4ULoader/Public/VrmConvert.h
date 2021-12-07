// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Misc/EngineVersionComparison.h"
#include "VrmUtil.h"
//#include "VrmConvert.generated.h"

/**
 * 
 */

struct aiScene;
class UTexture2D;
class UMaterialInterface;
class USkeletalMesh;
class UVrmAssetListObject;
class UVrmLicenseObject;
class UPackage;


class VRM4ULOADER_API VRMConverter {
public:
	static bool IsImportMode();
	static void SetImportMode(bool bImportMode);
	static FString NormalizeFileName(const char *str);
	static FString NormalizeFileName(const FString &str);

	static bool NormalizeBoneName(const aiScene *mScenePtr);

	static bool ConvertTextureAndMaterial(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr);

	static bool ConvertModel(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr);

	static bool ConvertMorphTarget(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr);

	static UVrmLicenseObject *GetVRMMeta(const aiScene *mScenePtr);
	static bool ConvertVrmMeta(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr, const uint8* pData, size_t dataSize);
	static bool ConvertHumanoid(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr);
	static bool ConvertRig(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr);

	static bool ConvertPose(UVrmAssetListObject* vrmAssetList, const aiScene* mScenePtr);

	static UPackage *CreatePackageFromImportMode(UPackage *p, const FString &name);

	class VRM4ULOADER_API Options {
	public:
		static Options & Get();

		const FImportOptionData *Window = nullptr;
		void SetVrmOption(const FImportOptionData *p) {
			Window = p;
		}

		class USkeleton *GetSkeleton();
		bool IsSimpleRootBone() const;

		bool IsSkipPhysics() const;

		bool IsSkipNoMeshBone() const;

		bool IsSkipMorphTarget() const;

		bool IsEnableMorphTargetNormal() const;

		bool IsStrictMorphTargetNameMode() const;

		bool IsCreateHumanoidRenamedMesh() const;

		bool IsCreateIKBone() const;

		bool IsDebugOneBone() const;

		bool IsMobileBone() const;

		int GetBoneWeightInfluenceNum() const;

		bool IsNoTranslucent() const;

		bool IsSingleUAssetFile() const;

		bool IsDefaultGridTextureMode() const;
		bool IsBC7Mode() const;
		bool IsMipmapGenerateMode() const;

		bool IsMergeMaterial() const;

		bool IsMergePrimitive() const;

		bool IsOptimizeMaterial() const;

		bool IsOptimizeVertex() const;

		void ClearModelType();

		bool IsVRMModel() const;
		bool IsVRM0Model() const;
		bool IsVRM1Model() const;

		void SetVRM0Model(bool bVRM);
		void SetVRM1Model(bool bVRM);

		bool IsBVHModel() const;
		void SetBVHModel(bool bBVH);

		bool IsPMXModel() const;
		void SetPMXModel(bool bPMX);

		float GetModelScale() const;

		bool IsAPoseRetarget() const;

		EVRMImportMaterialType GetMaterialType() const;
		void SetMaterialType(EVRMImportMaterialType type);
	};
};


class VRM4ULOADER_API VrmConvert
{
public:
	VrmConvert();
	~VrmConvert();
};

extern FString VRM4U_GetPackagePath(UPackage* Outer);
extern UPackage* VRM4U_CreatePackage(UPackage* Outer, FName Name);

template< class T >
T* VRM4U_NewObject(UPackage* Outer, FName Name, EObjectFlags Flags = RF_NoFlags, UObject* Template = nullptr, bool bCopyTransientsFromClassDefaults = false, FObjectInstancingGraph* InInstanceGraph = nullptr) {
	UPackage* pkg = Outer;
	if (VRMConverter::Options::Get().IsSingleUAssetFile() == false) {
		pkg = VRM4U_CreatePackage(Outer, Name);
	}

	return NewObject<T>(pkg, Name, Flags, Template, bCopyTransientsFromClassDefaults, InInstanceGraph);
}
