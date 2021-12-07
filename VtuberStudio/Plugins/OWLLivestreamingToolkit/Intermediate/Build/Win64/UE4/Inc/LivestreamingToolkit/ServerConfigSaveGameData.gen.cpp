// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/SaveGameData/ServerConfigSaveGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerConfigSaveGameData() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
// End Cross Module References
class UScriptStruct* FPluginSettingsSaveGameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginSettingsSaveGameData"), sizeof(FPluginSettingsSaveGameData), Get_Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FPluginSettingsSaveGameData>()
{
	return FPluginSettingsSaveGameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPluginSettingsSaveGameData(FPluginSettingsSaveGameData::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("PluginSettingsSaveGameData"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFPluginSettingsSaveGameData
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFPluginSettingsSaveGameData()
	{
		UScriptStruct::DeferCppStructOps<FPluginSettingsSaveGameData>(FName(TEXT("PluginSettingsSaveGameData")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFPluginSettingsSaveGameData;
	struct Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableEditorViewportRendering_MetaData[];
#endif
		static void NewProp_EnableEditorViewportRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableEditorViewportRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRuntimeViewportRendering_MetaData[];
#endif
		static void NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRuntimeViewportRendering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginSettingsSaveGameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit(void* Obj)
	{
		((FPluginSettingsSaveGameData*)Obj)->EnableEditorViewportRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering = { "EnableEditorViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj)
	{
		((FPluginSettingsSaveGameData*)Obj)->EnableRuntimeViewportRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering = { "EnableRuntimeViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"PluginSettingsSaveGameData",
		sizeof(FPluginSettingsSaveGameData),
		alignof(FPluginSettingsSaveGameData),
		Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PluginSettingsSaveGameData"), sizeof(FPluginSettingsSaveGameData), Get_Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Hash() { return 1170745382U; }
class UScriptStruct* FPluginUpdateSaveGameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginUpdateSaveGameData"), sizeof(FPluginUpdateSaveGameData), Get_Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FPluginUpdateSaveGameData>()
{
	return FPluginUpdateSaveGameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPluginUpdateSaveGameData(FPluginUpdateSaveGameData::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("PluginUpdateSaveGameData"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFPluginUpdateSaveGameData
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFPluginUpdateSaveGameData()
	{
		UScriptStruct::DeferCppStructOps<FPluginUpdateSaveGameData>(FName(TEXT("PluginUpdateSaveGameData")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFPluginUpdateSaveGameData;
	struct Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipPluginVersion_MetaData[];
#endif
		static void NewProp_SkipPluginVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipPluginVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkippedPluginVersionHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkippedPluginVersionHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginUpdateSaveGameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit(void* Obj)
	{
		((FPluginUpdateSaveGameData*)Obj)->SkipPluginVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion = { "SkipPluginVersion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPluginUpdateSaveGameData), &Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash = { "SkippedPluginVersionHash", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPluginUpdateSaveGameData, SkippedPluginVersionHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"PluginUpdateSaveGameData",
		sizeof(FPluginUpdateSaveGameData),
		alignof(FPluginUpdateSaveGameData),
		Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PluginUpdateSaveGameData"), sizeof(FPluginUpdateSaveGameData), Get_Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Hash() { return 525646101U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
