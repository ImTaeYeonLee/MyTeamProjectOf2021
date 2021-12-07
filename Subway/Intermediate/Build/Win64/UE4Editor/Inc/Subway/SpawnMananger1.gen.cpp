// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/SpawnMananger1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnMananger1() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_ASpawnMananger1_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ASpawnMananger1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SUBWAY_API UClass* Z_Construct_UClass_AEnemyA_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AEnemyB_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
// End Cross Module References
	void ASpawnMananger1::StaticRegisterNativesASpawnMananger1()
	{
	}
	UClass* Z_Construct_UClass_ASpawnMananger1_NoRegister()
	{
		return ASpawnMananger1::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnMananger1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aEnemyFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_aEnemyFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnemyFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bEnemyFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bossEnemyFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bossEnemyFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_check_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_check;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnMananger1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnMananger1.h" },
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_aEnemyFactory_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_aEnemyFactory = { "aEnemyFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, aEnemyFactory), Z_Construct_UClass_AEnemyA_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_aEnemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_aEnemyFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bEnemyFactory_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bEnemyFactory = { "bEnemyFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, bEnemyFactory), Z_Construct_UClass_AEnemyB_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bEnemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bEnemyFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bossEnemyFactory_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bossEnemyFactory = { "bossEnemyFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, bossEnemyFactory), Z_Construct_UClass_ABoss_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bossEnemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bossEnemyFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_particle_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_spawnPoint_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_spawnPoint = { "spawnPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, spawnPoint), Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_spawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_spawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, currentTime), METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_check_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpawnMananger1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_check = { "check", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnMananger1, check), METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_check_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_check_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnMananger1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_aEnemyFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bEnemyFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_bossEnemyFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_spawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnMananger1_Statics::NewProp_check,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnMananger1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnMananger1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnMananger1_Statics::ClassParams = {
		&ASpawnMananger1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnMananger1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnMananger1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnMananger1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnMananger1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnMananger1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnMananger1, 380882682);
	template<> SUBWAY_API UClass* StaticClass<ASpawnMananger1>()
	{
		return ASpawnMananger1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnMananger1(Z_Construct_UClass_ASpawnMananger1, &ASpawnMananger1::StaticClass, TEXT("/Script/Subway"), TEXT("ASpawnMananger1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnMananger1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
