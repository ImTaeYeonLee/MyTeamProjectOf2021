// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/SaveGameData/OWLSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSaveGame() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
// End Cross Module References
	void UOWLSaveGame::StaticRegisterNativesUOWLSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister()
	{
		return UOWLSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UOWLSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginUpdateSaveFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginUpdateSaveFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginUpdateSaveGameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PluginUpdateSaveGameData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginSettingsSaveFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginSettingsSaveFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginSettingsSaveGameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PluginSettingsSaveGameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGameData/OWLSaveGame.h" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "UserData" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWLSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName_MetaData[] = {
		{ "Category", "ServerConfigSave" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName = { "PluginUpdateSaveFileName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWLSaveGame, PluginUpdateSaveFileName), METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData_MetaData[] = {
		{ "Category", "ServerConfigSave" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData = { "PluginUpdateSaveGameData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWLSaveGame, PluginUpdateSaveGameData), Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName = { "PluginSettingsSaveFileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWLSaveGame, PluginSettingsSaveFileName), METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData = { "PluginSettingsSaveGameData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWLSaveGame, PluginSettingsSaveGameData), Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWLSaveGame_Statics::ClassParams = {
		&UOWLSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWLSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWLSaveGame, 866881814);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLSaveGame>()
	{
		return UOWLSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWLSaveGame(Z_Construct_UClass_UOWLSaveGame, &UOWLSaveGame::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("UOWLSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
