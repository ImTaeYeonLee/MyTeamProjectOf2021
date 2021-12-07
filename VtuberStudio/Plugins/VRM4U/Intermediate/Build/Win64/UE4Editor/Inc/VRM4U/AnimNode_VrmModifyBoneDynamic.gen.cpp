// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneDynamic() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneDynamic>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneDynamic cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmModifyBoneDynamic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneDynamic"), sizeof(FAnimNode_VrmModifyBoneDynamic), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneDynamic>()
{
	return FAnimNode_VrmModifyBoneDynamic::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic(FAnimNode_VrmModifyBoneDynamic::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmModifyBoneDynamic"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneDynamic
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneDynamic()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmModifyBoneDynamic>(FName(TEXT("AnimNode_VrmModifyBoneDynamic")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneDynamic;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNameToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNameToModify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyBoneDynamic>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **///UPROPERTY(EditAnywhere, Category=SkeletalControl) \n//FBoneReference BoneToModify;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *//UPROPERTY(EditAnywhere, Category=SkeletalControl)\n//FBoneReference BoneToModify;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify = { "BoneNameToModify", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, BoneNameToModify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** New translation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New translation of bone to apply." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** New rotation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New rotation of bone to apply." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** New Scale of bone to apply. This is only worldspace. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Reference frame to apply Translation in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Reference frame to apply Translation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Reference frame to apply Rotation in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Reference frame to apply Rotation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Reference frame to apply Scale in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Reference frame to apply Scale in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyBoneDynamic",
		sizeof(FAnimNode_VrmModifyBoneDynamic),
		alignof(FAnimNode_VrmModifyBoneDynamic),
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmModifyBoneDynamic"), sizeof(FAnimNode_VrmModifyBoneDynamic), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Hash() { return 694830039U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
