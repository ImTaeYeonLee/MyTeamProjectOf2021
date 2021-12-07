// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/WeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
	}
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponMaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMagazineAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentMagazineAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineMaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazineMaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletShootEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletShootEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletEnemyHitEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletEnemyHitEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletAnotherHitEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bulletAnotherHitEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, FireAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadAnimation_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadAnimation = { "ReloadAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, ReloadAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, WeaponName), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMaxAmmo_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMaxAmmo = { "WeaponMaxAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, WeaponMaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentTotalAmmo_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentTotalAmmo = { "CurrentTotalAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, CurrentTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentTotalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentMagazineAmmo_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentMagazineAmmo = { "CurrentMagazineAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, CurrentMagazineAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentMagazineAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentMagazineAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineMaxAmmo_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineMaxAmmo = { "MagazineMaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, MagazineMaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineMaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineMaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletShootEffect_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletShootEffect = { "bulletShootEffect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, bulletShootEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletShootEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletShootEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletEnemyHitEffect_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletEnemyHitEffect = { "bulletEnemyHitEffect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, bulletEnemyHitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletEnemyHitEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletEnemyHitEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletAnotherHitEffect_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletAnotherHitEffect = { "bulletAnotherHitEffect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponBase, bulletAnotherHitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletAnotherHitEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletAnotherHitEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentTotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_CurrentMagazineAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineMaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletShootEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletEnemyHitEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bulletAnotherHitEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponBase, 1969204236);
	template<> SUBWAY_API UClass* StaticClass<AWeaponBase>()
	{
		return AWeaponBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBase(Z_Construct_UClass_AWeaponBase, &AWeaponBase::StaticClass, TEXT("/Script/Subway"), TEXT("AWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
