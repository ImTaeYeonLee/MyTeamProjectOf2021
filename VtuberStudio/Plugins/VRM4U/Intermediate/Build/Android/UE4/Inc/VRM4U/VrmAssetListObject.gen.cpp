// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAssetListObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAssetListObject() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmLicenseObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
// End Cross Module References
	void UVrmAssetListObject::StaticRegisterNativesUVrmAssetListObject()
	{
	}
	UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister()
	{
		return UVrmAssetListObject::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAssetListObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssetSave_MetaData[];
#endif
		static void NewProp_bAssetSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssetSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipMorphTarget_MetaData[];
#endif
		static void NewProp_bSkipMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MtoonLitSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MtoonLitSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MtoonUnlitSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MtoonUnlitSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSSSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSSSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSSProfileSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSSProfileSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlitSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlitSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GLTFSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GLTFSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMToonLitOpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMToonLitOpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMToonLitTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMToonLitTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitOpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitOpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitOpaqueTwoSidedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonLitTranslucentTwoSidedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMToonUnlitOpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMToonUnlitOpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMToonUnlitTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMToonUnlitTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitOpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitOpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitOpaqueTwoSidedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonUnlitTranslucentTwoSidedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptMToonOutlineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptMToonOutlineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseUnlitOpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseUnlitOpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseUnlitTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseUnlitTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePBROpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BasePBROpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmHumanoidMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmHumanoidMetaObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmMannequinMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmMannequinMetaObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmLicenseObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmLicenseObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallThumbnailTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallThumbnailTexture;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutlineMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanoidRig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanoidRig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileFullPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileFullPathName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrigFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrigFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanoidSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanoidSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAssetListObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmAssetListObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_MetaData[] = {
		{ "Category", "InOption" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_SetBit(void* Obj)
	{
		((UVrmAssetListObject*)Obj)->bAssetSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave = { "bAssetSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmAssetListObject), &Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_MetaData[] = {
		{ "Category", "InOption" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_SetBit(void* Obj)
	{
		((UVrmAssetListObject*)Obj)->bSkipMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget = { "bSkipMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmAssetListObject), &Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet = { "MtoonLitSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, MtoonLitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet = { "MtoonUnlitSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, MtoonUnlitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet = { "SSSSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, SSSSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet = { "SSSProfileSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, SSSProfileSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet = { "UnlitSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, UnlitSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet = { "GLTFSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, GLTFSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet = { "CustomSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, CustomSet), Z_Construct_UClass_UVrmImportMaterialSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial = { "BaseMToonLitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonLitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial = { "BaseMToonLitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonLitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial = { "OptMToonLitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial = { "OptMToonLitOpaqueTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitOpaqueTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial = { "OptMToonLitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Lit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial = { "OptMToonLitTranslucentTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonLitTranslucentTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_unlit" },
		{ "Comment", "// unlit\n" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
		{ "ToolTip", "unlit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial = { "BaseMToonUnlitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonUnlitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial = { "BaseMToonUnlitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseMToonUnlitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial = { "OptMToonUnlitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial = { "OptMToonUnlitOpaqueTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitOpaqueTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial = { "OptMToonUnlitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon_Unlit" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial = { "OptMToonUnlitTranslucentTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonUnlitTranslucentTwoSidedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial_MetaData[] = {
		{ "Category", "InMaterial_MToon" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial = { "OptMToonOutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OptMToonOutlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial = { "BaseUnlitOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseUnlitOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial = { "BaseUnlitTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseUnlitTranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial_MetaData[] = {
		{ "Category", "InMaterial" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial = { "BasePBROpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BasePBROpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh_MetaData[] = {
		{ "Category", "Out" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Out\")\n//USkeleton* BaseSkeleton;\n" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Out\")\nUSkeleton* BaseSkeleton;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject = { "VrmHumanoidMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmHumanoidMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject = { "VrmMannequinMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmMannequinMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject = { "VrmLicenseObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, VrmLicenseObject), Z_Construct_UClass_UVrmLicenseObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture = { "SmallThumbnailTexture", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, SmallThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode = { "ImportMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, ImportMode), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_Inner = { "OutlineMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials = { "OutlineMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OutlineMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig_MetaData[] = {
		{ "Category", "Out" },
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig = { "HumanoidRig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, HumanoidRig), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, Package), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName = { "FileFullPathName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, FileFullPathName), METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName = { "OrigFileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, OrigFileName), METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName = { "BaseFileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, BaseFileName), METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmAssetListObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh = { "HumanoidSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListObject, HumanoidSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bAssetSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_bSkipMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonLitSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_MtoonUnlitSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SSSProfileSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_UnlitSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_GLTFSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_CustomSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitOpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonLitTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitOpaqueTwoSidedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonLitTranslucentTwoSidedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitOpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseMToonUnlitTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitOpaqueTwoSidedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonUnlitTranslucentTwoSidedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OptMToonOutlineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitOpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseUnlitTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BasePBROpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmHumanoidMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmMannequinMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_VrmLicenseObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Textures,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_SmallThumbnailTexture,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_ImportMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OutlineMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidRig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_Package,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_FileFullPathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_OrigFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_BaseFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListObject_Statics::NewProp_HumanoidSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAssetListObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAssetListObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmAssetListObject_Statics::ClassParams = {
		&UVrmAssetListObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmAssetListObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmAssetListObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmAssetListObject, 2688493653);
	template<> VRM4U_API UClass* StaticClass<UVrmAssetListObject>()
	{
		return UVrmAssetListObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmAssetListObject(Z_Construct_UClass_UVrmAssetListObject, &UVrmAssetListObject::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmAssetListObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAssetListObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
