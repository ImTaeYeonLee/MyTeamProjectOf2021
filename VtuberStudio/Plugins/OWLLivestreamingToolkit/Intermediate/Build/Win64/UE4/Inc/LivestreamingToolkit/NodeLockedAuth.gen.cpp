// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/ServerAuth/NodeLockedAuth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeLockedAuth() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedLicenceData();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedServerRequest();
// End Cross Module References
class UScriptStruct* FNodeLockedVerificationFileLayout::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("NodeLockedVerificationFileLayout"), sizeof(FNodeLockedVerificationFileLayout), Get_Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FNodeLockedVerificationFileLayout>()
{
	return FNodeLockedVerificationFileLayout::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeLockedVerificationFileLayout(FNodeLockedVerificationFileLayout::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("NodeLockedVerificationFileLayout"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedVerificationFileLayout
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedVerificationFileLayout()
	{
		UScriptStruct::DeferCppStructOps<FNodeLockedVerificationFileLayout>(FName(TEXT("NodeLockedVerificationFileLayout")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedVerificationFileLayout;
	struct Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_licenceData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_licenceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_licenceData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLockedVerificationFileLayout>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_Inner = { "licenceData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNodeLockedLicenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData = { "licenceData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedVerificationFileLayout, licenceData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::NewProp_licenceData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"NodeLockedVerificationFileLayout",
		sizeof(FNodeLockedVerificationFileLayout),
		alignof(FNodeLockedVerificationFileLayout),
		Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeLockedVerificationFileLayout"), sizeof(FNodeLockedVerificationFileLayout), Get_Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeLockedVerificationFileLayout_Hash() { return 2929967982U; }
class UScriptStruct* FNodeLockedLicenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FNodeLockedLicenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLockedLicenceData, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("NodeLockedLicenceData"), sizeof(FNodeLockedLicenceData), Get_Z_Construct_UScriptStruct_FNodeLockedLicenceData_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FNodeLockedLicenceData>()
{
	return FNodeLockedLicenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeLockedLicenceData(FNodeLockedLicenceData::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("NodeLockedLicenceData"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedLicenceData
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedLicenceData()
	{
		UScriptStruct::DeferCppStructOps<FNodeLockedLicenceData>(FName(TEXT("NodeLockedLicenceData")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedLicenceData;
	struct Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_licence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_licence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_product_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_product;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_expiry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_expiry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fallbackEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fallbackEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_checksum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_checksum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLockedLicenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence = { "licence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, licence), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product = { "product", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, product), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry = { "expiry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, expiry), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate = { "fallbackEndDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, fallbackEndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum = { "checksum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedLicenceData, checksum), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_licence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_product,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_expiry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_fallbackEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::NewProp_checksum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"NodeLockedLicenceData",
		sizeof(FNodeLockedLicenceData),
		alignof(FNodeLockedLicenceData),
		Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedLicenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeLockedLicenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeLockedLicenceData"), sizeof(FNodeLockedLicenceData), Get_Z_Construct_UScriptStruct_FNodeLockedLicenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeLockedLicenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeLockedLicenceData_Hash() { return 3998889345U; }
class UScriptStruct* FNodeLockedServerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FNodeLockedServerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLockedServerRequest, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("NodeLockedServerRequest"), sizeof(FNodeLockedServerRequest), Get_Z_Construct_UScriptStruct_FNodeLockedServerRequest_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FNodeLockedServerRequest>()
{
	return FNodeLockedServerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeLockedServerRequest(FNodeLockedServerRequest::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("NodeLockedServerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedServerRequest
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedServerRequest()
	{
		UScriptStruct::DeferCppStructOps<FNodeLockedServerRequest>(FName(TEXT("NodeLockedServerRequest")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFNodeLockedServerRequest;
	struct Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fingerprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fingerprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_licence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_licence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//#define NODE_LOCKED_DEBUG\n" },
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
		{ "ToolTip", "#define NODE_LOCKED_DEBUG" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLockedServerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_fingerprint_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_fingerprint = { "fingerprint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedServerRequest, fingerprint), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_fingerprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_fingerprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_licence_MetaData[] = {
		{ "ModuleRelativePath", "Private/ServerAuth/NodeLockedAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_licence = { "licence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeLockedServerRequest, licence), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_licence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_licence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_fingerprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::NewProp_licence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"NodeLockedServerRequest",
		sizeof(FNodeLockedServerRequest),
		alignof(FNodeLockedServerRequest),
		Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeLockedServerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeLockedServerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeLockedServerRequest"), sizeof(FNodeLockedServerRequest), Get_Z_Construct_UScriptStruct_FNodeLockedServerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeLockedServerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeLockedServerRequest_Hash() { return 2389267824U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
