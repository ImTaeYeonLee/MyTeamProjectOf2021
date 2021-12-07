// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VrmImportUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmImportUI() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
// End Cross Module References
	DEFINE_FUNCTION(UVrmImportUI::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	void UVrmImportUI::StaticRegisterNativesUVrmImportUI()
	{
		UClass* Class = UVrmImportUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefault", &UVrmImportUI::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmImportUI, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmImportUI_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmImportUI_NoRegister()
	{
		return UVrmImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UVrmImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleAuthor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleAuthor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAPoseRetarget_MetaData[];
#endif
		static void NewProp_bAPoseRetarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAPoseRetarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileBone_MetaData[];
#endif
		static void NewProp_bMobileBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateHumanoidRenamedMesh_MetaData[];
#endif
		static void NewProp_bCreateHumanoidRenamedMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateHumanoidRenamedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateIKBone_MetaData[];
#endif
		static void NewProp_bCreateIKBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateIKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipPhysics_MetaData[];
#endif
		static void NewProp_bSkipPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipMorphTarget_MetaData[];
#endif
		static void NewProp_bSkipMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMorphTargetNormal_MetaData[];
#endif
		static void NewProp_bEnableMorphTargetNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMorphTargetNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrictMorphTargetNameMode_MetaData[];
#endif
		static void NewProp_bStrictMorphTargetNameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrictMorphTargetNameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTranslucent_MetaData[];
#endif
		static void NewProp_bNoTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleUAssetFile_MetaData[];
#endif
		static void NewProp_bSingleUAssetFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleUAssetFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultGridTextureMode_MetaData[];
#endif
		static void NewProp_bDefaultGridTextureMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultGridTextureMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBC7Mode_MetaData[];
#endif
		static void NewProp_bBC7Mode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBC7Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMipmapGenerateMode_MetaData[];
#endif
		static void NewProp_bMipmapGenerateMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMipmapGenerateMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterial_MetaData[];
#endif
		static void NewProp_bMergeMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergePrimitive_MetaData[];
#endif
		static void NewProp_bMergePrimitive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergePrimitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeMaterial_MetaData[];
#endif
		static void NewProp_bOptimizeMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeVertex_MetaData[];
#endif
		static void NewProp_bOptimizeVertex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneWeightInfluenceNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BoneWeightInfluenceNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimpleRoot_MetaData[];
#endif
		static void NewProp_bSimpleRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimpleRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugOneBone_MetaData[];
#endif
		static void NewProp_bDebugOneBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugOneBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_allowedUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_allowedUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_violentUssageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_violentUssageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sexualUssageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sexualUssageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_commercialUssageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_commercialUssageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherPermissionUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_otherPermissionUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_licenseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_licenseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherLicenseUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_otherLicenseUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmImportUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmImportUI_ResetToDefault, "ResetToDefault" }, // 2117907185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VrmImportUI.h" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Thumbnail" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "VRM Title / Author" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor = { "TitleAuthor", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, TitleAuthor), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "A-pose(Off to T-pose)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bAPoseRetarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget = { "bAPoseRetarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** for Mobile. Import root bone only */" },
		{ "DisplayName", "Reduce bonemap<=75 for mobile" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "for Mobile. Import root bone only" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMobileBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone = { "bMobileBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Materal Type */" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Materal Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Model scale" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, ModelScale), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Duplicate mesh and renamed humanoid bone */" },
		{ "DisplayName", "Create renamed humanoid mesh" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Duplicate mesh and renamed humanoid bone" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bCreateHumanoidRenamedMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh = { "bCreateHumanoidRenamedMesh", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Add IK Bone */" },
		{ "DisplayName", "Create IK Bone" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Add IK Bone" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bCreateIKBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone = { "bCreateIKBone", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove Physics asset */" },
		{ "DisplayName", "No physics asset" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove Physics asset" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSkipPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics = { "bSkipPhysics", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove MorphTarget */" },
		{ "DisplayName", "No MorphTarget" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove MorphTarget" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSkipMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget = { "bSkipMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use MorphTarget Normal */" },
		{ "DisplayName", "Eable MorphTarget Normal(TangentZDelta)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use MorphTarget Normal" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bEnableMorphTargetNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal = { "bEnableMorphTargetNormal", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use Strict MorphTarget Name Mode */" },
		{ "DisplayName", "**UE5EA** controlrig work around: Eable MorphTarget Name Check" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use Strict MorphTarget Name Mode" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bStrictMorphTargetNameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode = { "bStrictMorphTargetNameMode", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use Opaque insted of translucent */" },
		{ "DisplayName", "No Translucent" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use Opaque insted of translucent" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bNoTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent = { "bNoTranslucent", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Save as single uasset file */" },
		{ "DisplayName", "Single uasset file" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Save as single uasset file" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSingleUAssetFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile = { "bSingleUAssetFile", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use GridTexture by Default */" },
		{ "DisplayName", "[Texture] Use DummyGrid by DefaultBaseTexture" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use GridTexture by Default" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bDefaultGridTextureMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode = { "bDefaultGridTextureMode", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use BC7 */" },
		{ "DisplayName", "[Texture] Use BC7 for BaseTexture" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use BC7" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bBC7Mode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode = { "bBC7Mode", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Generate mipmap (be careful of MatCap texture)*/" },
		{ "DisplayName", "[Texture] Generate Mipmap" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Generate mipmap (be careful of MatCap texture)" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMipmapGenerateMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode = { "bMipmapGenerateMode", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Merge material using same parameter */" },
		{ "DisplayName", "[Optimize] Merge material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Merge material using same parameter" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMergeMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial = { "bMergeMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Merge primitives using same material */" },
		{ "DisplayName", "[Optimize] Merge primitive" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Merge primitives using same material" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMergePrimitive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive = { "bMergePrimitive", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use optimized MaterialInstance */" },
		{ "DisplayName", "[Optimize] use opt material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use optimized MaterialInstance" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bOptimizeMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial = { "bOptimizeMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove unused vertex */" },
		{ "DisplayName", "[Optimize] vertex" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove unused vertex" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bOptimizeVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex = { "bOptimizeVertex", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** BoneWeight influence */" },
		{ "DisplayName", "[Optimize] Bone Weight Influence Num" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "BoneWeight influence" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum = { "BoneWeightInfluenceNum", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, BoneWeightInfluenceNum), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove bone has no mesh */" },
		{ "DisplayName", "[Optimize] Remove bone used DCC tool" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove bone has no mesh" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSimpleRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot = { "bSimpleRoot", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** for DEBUG. Import root bone only */" },
		{ "DisplayName", "[Debug] One bone only" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "for DEBUG. Import root bone only" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bDebugOneBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone = { "bDebugOneBone", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset. */" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName = { "allowedUserName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, allowedUserName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUssageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUssageName = { "violentUssageName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, violentUssageName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUssageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUssageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUssageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUssageName = { "sexualUssageName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, sexualUssageName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUssageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUssageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUssageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUssageName = { "commercialUssageName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, commercialUssageName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUssageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUssageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl = { "otherPermissionUrl", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, otherPermissionUrl), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName = { "licenseName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, licenseName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl = { "otherLicenseUrl", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, otherLicenseUrl), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportUI, data), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmImportUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateHumanoidRenamedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bCreateIKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bNoTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUssageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUssageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUssageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmImportUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmImportUI_Statics::ClassParams = {
		&UVrmImportUI::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmImportUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmImportUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmImportUI, 361635123);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UVrmImportUI>()
	{
		return UVrmImportUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmImportUI(Z_Construct_UClass_UVrmImportUI, &UVrmImportUI::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UVrmImportUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmImportUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
