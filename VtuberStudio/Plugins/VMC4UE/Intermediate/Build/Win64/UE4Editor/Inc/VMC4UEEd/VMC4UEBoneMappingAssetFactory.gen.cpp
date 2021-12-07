// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UEEd/Include/VMC4UEBoneMappingAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEBoneMappingAssetFactory() {}
// Cross Module References
	VMC4UEED_API UClass* Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_NoRegister();
	VMC4UEED_API UClass* Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VMC4UEEd();
// End Cross Module References
	void UVMC4UEBoneMappingAssetFactory::StaticRegisterNativesUVMC4UEBoneMappingAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_NoRegister()
	{
		return UVMC4UEBoneMappingAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UEEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Include/VMC4UEBoneMappingAssetFactory.h" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMappingAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEBoneMappingAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::ClassParams = {
		&UVMC4UEBoneMappingAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEBoneMappingAssetFactory, 3609922286);
	template<> VMC4UEED_API UClass* StaticClass<UVMC4UEBoneMappingAssetFactory>()
	{
		return UVMC4UEBoneMappingAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEBoneMappingAssetFactory(Z_Construct_UClass_UVMC4UEBoneMappingAssetFactory, &UVMC4UEBoneMappingAssetFactory::StaticClass, TEXT("/Script/VMC4UEEd"), TEXT("UVMC4UEBoneMappingAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEBoneMappingAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
