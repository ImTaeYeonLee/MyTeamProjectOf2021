// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyHumanoidBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyHumanoidBone() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMBoneTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyHumanoidBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyHumanoidBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmModifyHumanoidBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyHumanoidBone"), sizeof(FAnimNode_VrmModifyHumanoidBone), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyHumanoidBone>()
{
	return FAnimNode_VrmModifyHumanoidBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone(FAnimNode_VrmModifyHumanoidBone::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmModifyHumanoidBone"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyHumanoidBone
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyHumanoidBone()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmModifyHumanoidBone>(FName(TEXT("AnimNode_VrmModifyHumanoidBone")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyHumanoidBone;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmAssetList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanoidBoneTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HumanoidBoneTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtBoneTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtBoneTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyHumanoidBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **///UPROPERTY(EditAnywhere, Category=SkeletalControl) \n//FBoneReference BoneToModify;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *//UPROPERTY(EditAnywhere, Category=SkeletalControl)\n//FBoneReference BoneToModify;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList = { "VrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, VrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform = { "HumanoidBoneTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, HumanoidBoneTransform), Z_Construct_UScriptStruct_FVRMBoneTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform = { "ExtBoneTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, ExtBoneTransform), Z_Construct_UScriptStruct_FVRMBoneTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyHumanoidBone",
		sizeof(FAnimNode_VrmModifyHumanoidBone),
		alignof(FAnimNode_VrmModifyHumanoidBone),
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmModifyHumanoidBone"), sizeof(FAnimNode_VrmModifyHumanoidBone), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Hash() { return 3037977379U; }
class UScriptStruct* FVRMBoneTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMBoneTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMBoneTransform, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMBoneTransform"), sizeof(FVRMBoneTransform), Get_Z_Construct_UScriptStruct_FVRMBoneTransform_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMBoneTransform>()
{
	return FVRMBoneTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMBoneTransform(FVRMBoneTransform::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMBoneTransform"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMBoneTransform
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMBoneTransform()
	{
		UScriptStruct::DeferCppStructOps<FVRMBoneTransform>(FName(TEXT("VRMBoneTransform")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMBoneTransform;
	struct Z_Construct_UScriptStruct_FVRMBoneTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bEnableRotation;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTranslation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bEnableTranslation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VRMHumanoidBoneName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMHumanoidBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VRMHumanoidBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMBoneTransform>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_Inner = { "Transform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMBoneTransform, Transform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_Inner = { "bEnableRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation = { "bEnableRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMBoneTransform, bEnableRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_Inner = { "bEnableTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation = { "bEnableTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMBoneTransform, bEnableTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_Inner = { "VRMHumanoidBoneName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName = { "VRMHumanoidBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMBoneTransform, VRMHumanoidBoneName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMBoneTransform",
		sizeof(FVRMBoneTransform),
		alignof(FVRMBoneTransform),
		Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMBoneTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMBoneTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMBoneTransform"), sizeof(FVRMBoneTransform), Get_Z_Construct_UScriptStruct_FVRMBoneTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMBoneTransform_Hash() { return 1219871180U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
