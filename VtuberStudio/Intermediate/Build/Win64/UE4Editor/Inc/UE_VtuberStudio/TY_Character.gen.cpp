// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_Character() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Character_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
// End Cross Module References
	void ATY_Character::StaticRegisterNativesATY_Character()
	{
	}
	UClass* Z_Construct_UClass_ATY_Character_NoRegister()
	{
		return ATY_Character::StaticClass();
	}
	struct Z_Construct_UClass_ATY_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TY_Character.h" },
		{ "ModuleRelativePath", "Public/TY_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_Character_Statics::ClassParams = {
		&ATY_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_Character, 1760399523);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_Character>()
	{
		return ATY_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_Character(Z_Construct_UClass_ATY_Character, &ATY_Character::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
