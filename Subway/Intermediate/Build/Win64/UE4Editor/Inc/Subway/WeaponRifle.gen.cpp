// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/WeaponRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponRifle() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponRifle_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponRifle();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	void AWeaponRifle::StaticRegisterNativesAWeaponRifle()
	{
	}
	UClass* Z_Construct_UClass_AWeaponRifle_NoRegister()
	{
		return AWeaponRifle::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_waitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "WeaponRifle.h" },
		{ "ModuleRelativePath", "Public/WeaponRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponRifle_Statics::NewProp__timer_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponRifle_Statics::NewProp__timer = { "_timer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponRifle, _timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AWeaponRifle_Statics::NewProp__timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::NewProp__timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponRifle_Statics::NewProp_waitTime_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponRifle_Statics::NewProp_waitTime = { "waitTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponRifle, waitTime), METADATA_PARAMS(Z_Construct_UClass_AWeaponRifle_Statics::NewProp_waitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::NewProp_waitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponRifle_Statics::NewProp__timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponRifle_Statics::NewProp_waitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponRifle_Statics::ClassParams = {
		&AWeaponRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponRifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponRifle, 1794899505);
	template<> SUBWAY_API UClass* StaticClass<AWeaponRifle>()
	{
		return AWeaponRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponRifle(Z_Construct_UClass_AWeaponRifle, &AWeaponRifle::StaticClass, TEXT("/Script/Subway"), TEXT("AWeaponRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
