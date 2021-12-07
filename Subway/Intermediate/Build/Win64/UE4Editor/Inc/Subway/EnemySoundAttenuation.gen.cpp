// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/EnemySoundAttenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySoundAttenuation() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UEnemySoundAttenuation_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UEnemySoundAttenuation();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void UEnemySoundAttenuation::StaticRegisterNativesUEnemySoundAttenuation()
	{
	}
	UClass* Z_Construct_UClass_UEnemySoundAttenuation_NoRegister()
	{
		return UEnemySoundAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySoundAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySoundAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundAttenuation,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySoundAttenuation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "EnemySoundAttenuation.h" },
		{ "ModuleRelativePath", "Public/EnemySoundAttenuation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySoundAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySoundAttenuation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemySoundAttenuation_Statics::ClassParams = {
		&UEnemySoundAttenuation::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemySoundAttenuation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySoundAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemySoundAttenuation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemySoundAttenuation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemySoundAttenuation, 2009626290);
	template<> SUBWAY_API UClass* StaticClass<UEnemySoundAttenuation>()
	{
		return UEnemySoundAttenuation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemySoundAttenuation(Z_Construct_UClass_UEnemySoundAttenuation, &UEnemySoundAttenuation::StaticClass, TEXT("/Script/Subway"), TEXT("UEnemySoundAttenuation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySoundAttenuation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
