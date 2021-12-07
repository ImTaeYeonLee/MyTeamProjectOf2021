// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmQuestHandBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmQuestHandBone() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMQuestHandBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmQuestHandBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmQuestHandBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmQuestHandBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmQuestHandBone"), sizeof(FAnimNode_VrmQuestHandBone), Get_Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmQuestHandBone>()
{
	return FAnimNode_VrmQuestHandBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmQuestHandBone(FAnimNode_VrmQuestHandBone::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmQuestHandBone"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmQuestHandBone
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmQuestHandBone()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmQuestHandBone>(FName(TEXT("AnimNode_VrmQuestHandBone")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmQuestHandBone;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandReferenceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandReferenceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmQuestHandBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmQuestHandBone, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = Rotation, meta = (PinHiddenByDefault))\n//TEnumAsByte<enum EBoneControlSpace> TransformSpace;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = Rotation, meta = (PinHiddenByDefault))\nTEnumAsByte<enum EBoneControlSpace> TransformSpace;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform = { "HandTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmQuestHandBone, HandTransform), Z_Construct_UScriptStruct_FVRMQuestHandBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform = { "HandReferenceTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmQuestHandBone, HandReferenceTransform), Z_Construct_UScriptStruct_FVRMQuestHandBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmQuestHandBone",
		sizeof(FAnimNode_VrmQuestHandBone),
		alignof(FAnimNode_VrmQuestHandBone),
		Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmQuestHandBone"), sizeof(FAnimNode_VrmQuestHandBone), Get_Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Hash() { return 2852558534U; }
class UScriptStruct* FVRMQuestHandBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMQuestHandBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMQuestHandBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMQuestHandBone"), sizeof(FVRMQuestHandBone), Get_Z_Construct_UScriptStruct_FVRMQuestHandBone_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMQuestHandBone>()
{
	return FVRMQuestHandBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMQuestHandBone(FVRMQuestHandBone::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMQuestHandBone"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMQuestHandBone
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMQuestHandBone()
	{
		UScriptStruct::DeferCppStructOps<FVRMQuestHandBone>(FName(TEXT("VRMQuestHandBone")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMQuestHandBone;
	struct Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandLeft_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandLeft;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandRight_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMQuestHandBone>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_Inner = { "HandLeft", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft = { "HandLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMQuestHandBone, HandLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_Inner = { "HandRight", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight = { "HandRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMQuestHandBone, HandRight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMQuestHandBone",
		sizeof(FVRMQuestHandBone),
		alignof(FVRMQuestHandBone),
		Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMQuestHandBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMQuestHandBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMQuestHandBone"), sizeof(FVRMQuestHandBone), Get_Z_Construct_UScriptStruct_FVRMQuestHandBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMQuestHandBone_Hash() { return 3050699247U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
