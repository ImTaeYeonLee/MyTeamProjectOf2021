// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VRM4UImporterFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4UImporterFactory() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVRM4UImporterFactory_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVRM4UImporterFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
// End Cross Module References
	void UVRM4UImporterFactory::StaticRegisterNativesUVRM4UImporterFactory()
	{
	}
	UClass* Z_Construct_UClass_UVRM4UImporterFactory_NoRegister()
	{
		return UVRM4UImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVRM4UImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRM4UImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4UImporterFactory.h" },
		{ "ModuleRelativePath", "Private/VRM4UImporterFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRM4UImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4UImporterFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRM4UImporterFactory_Statics::ClassParams = {
		&UVRM4UImporterFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRM4UImporterFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRM4UImporterFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRM4UImporterFactory, 4053005093);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UVRM4UImporterFactory>()
	{
		return UVRM4UImporterFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRM4UImporterFactory(Z_Construct_UClass_UVRM4UImporterFactory, &UVRM4UImporterFactory::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UVRM4UImporterFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4UImporterFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
