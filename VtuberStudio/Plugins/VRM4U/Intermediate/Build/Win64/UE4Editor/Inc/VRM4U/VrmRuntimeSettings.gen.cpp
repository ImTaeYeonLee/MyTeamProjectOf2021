// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmRuntimeSettings() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmRuntimeSettings_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UVrmRuntimeSettings::StaticRegisterNativesUVrmRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UVrmRuntimeSettings_NoRegister()
	{
		return UVrmRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVrmRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropVRMFileEnable_MetaData[];
#endif
		static void NewProp_bDropVRMFileEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropVRMFileEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAllAssimpFormat_MetaData[];
#endif
		static void NewProp_bAllowAllAssimpFormat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAllAssimpFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetListObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetListObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImportPriority;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_extList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_extList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_extList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** For runtime load sample map */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
		{ "ToolTip", "For runtime load sample map" },
	};
#endif
	void Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_SetBit(void* Obj)
	{
		((UVrmRuntimeSettings*)Obj)->bDropVRMFileEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable = { "bDropVRMFileEnable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVrmRuntimeSettings), &Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_SetBit(void* Obj)
	{
		((UVrmRuntimeSettings*)Obj)->bAllowAllAssimpFormat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat = { "bAllowAllAssimpFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmRuntimeSettings), &Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject_MetaData[] = {
		{ "AllowedClasses", "Object" },
		{ "Category", "Settings" },
		{ "Comment", "/** Default material set for runtimeload */" },
		{ "ExactClass", "FALSE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
		{ "ToolTip", "Default material set for runtimeload" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject = { "AssetListObject", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmRuntimeSettings, AssetListObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** priority<100 for VRM4U. Default plugins priority=100 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
		{ "ToolTip", "priority<100 for VRM4U. Default plugins priority=100" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority = { "ImportPriority", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmRuntimeSettings, ImportPriority), METADATA_PARAMS(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_Inner = { "extList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_MetaData[] = {
		{ "Category", "Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/VrmRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList = { "extList", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmRuntimeSettings, extList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bDropVRMFileEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_bAllowAllAssimpFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_AssetListObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_ImportPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmRuntimeSettings_Statics::NewProp_extList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmRuntimeSettings_Statics::ClassParams = {
		&UVrmRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmRuntimeSettings, 2188847831);
	template<> VRM4U_API UClass* StaticClass<UVrmRuntimeSettings>()
	{
		return UVrmRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmRuntimeSettings(Z_Construct_UClass_UVrmRuntimeSettings, &UVrmRuntimeSettings::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
