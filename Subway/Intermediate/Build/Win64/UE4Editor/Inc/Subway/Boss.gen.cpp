// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/Boss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ABoss();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Subway();
	SUBWAY_API UClass* Z_Construct_UClass_UBoss_FSM_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABoss::StaticRegisterNativesABoss()
	{
	}
	UClass* Z_Construct_UClass_ABoss_NoRegister()
	{
		return ABoss::StaticClass();
	}
	struct Z_Construct_UClass_ABoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BossFSM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BossFSM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RtArmCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RtArmCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LtArmCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LtArmCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_volumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEnd_MetaData[];
#endif
		static void NewProp_gameEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_gameEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Boss.h" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_BossFSM_MetaData[] = {
		{ "Category", "BossFSM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_BossFSM = { "BossFSM", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, BossFSM), Z_Construct_UClass_UBoss_FSM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_BossFSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_BossFSM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_HeadCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_HeadCollision = { "HeadCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, HeadCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_HeadCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_HeadCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_BodyCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_BodyCollision = { "BodyCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, BodyCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_BodyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_BodyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_RtArmCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_RtArmCollision = { "RtArmCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, RtArmCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_RtArmCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_RtArmCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_LtArmCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_LtArmCollision = { "LtArmCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, LtArmCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_LtArmCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_LtArmCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_volumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_volumeMultiplier = { "volumeMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, volumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_volumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_volumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_pitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_pitchMultiplier = { "pitchMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoss, pitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_pitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_pitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd_MetaData[] = {
		{ "Category", "GameEnd" },
		{ "ModuleRelativePath", "Public/Boss.h" },
	};
#endif
	void Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd_SetBit(void* Obj)
	{
		((ABoss*)Obj)->gameEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd = { "gameEnd", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABoss), &Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_BossFSM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_HeadCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_BodyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_RtArmCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_LtArmCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_volumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_pitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Statics::NewProp_gameEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Statics::ClassParams = {
		&ABoss::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoss, 1827753086);
	template<> SUBWAY_API UClass* StaticClass<ABoss>()
	{
		return ABoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoss(Z_Construct_UClass_ABoss, &ABoss::StaticClass, TEXT("/Script/Subway"), TEXT("ABoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
