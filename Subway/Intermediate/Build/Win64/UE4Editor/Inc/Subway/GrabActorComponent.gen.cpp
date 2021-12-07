// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/GrabActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabActorComponent() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UGrabActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Subway();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SUBWAY_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponPistol_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponShotgun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UGrabActorComponent::StaticRegisterNativesUGrabActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister()
	{
		return UGrabActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrabActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_grabRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pistol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pistol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_grabDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotHaptic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotHaptic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gunSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gunSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgunSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GrabActorComponent.h" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "AAA" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pickupActor_MetaData[] = {
		{ "Category", "AAA" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pickupActor = { "pickupActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, pickupActor), Z_Construct_UClass_APickUpActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pickupActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pickupActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabRange_MetaData[] = {
		{ "Category", "AAA" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabRange = { "grabRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, grabRange), METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pistol_MetaData[] = {
		{ "Category", "GravSettings" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pistol = { "pistol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, pistol), Z_Construct_UClass_AWeaponPistol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pistol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgun_MetaData[] = {
		{ "Category", "GravSettings" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgun = { "shotgun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, shotgun), Z_Construct_UClass_AWeaponShotgun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance_MetaData[] = {
		{ "Category", "GravSettings" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance = { "grabDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, grabDistance), METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotHaptic_MetaData[] = {
		{ "Category", "GravSettings" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotHaptic = { "shotHaptic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, shotHaptic), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotHaptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotHaptic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_gunSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_gunSound = { "gunSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, gunSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_gunSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_gunSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgunSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgunSound = { "shotgunSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabActorComponent, shotgunSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgunSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgunSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pickupActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_pistol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_grabDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_gunSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabActorComponent_Statics::NewProp_shotgunSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabActorComponent_Statics::ClassParams = {
		&UGrabActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrabActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabActorComponent, 2776458042);
	template<> SUBWAY_API UClass* StaticClass<UGrabActorComponent>()
	{
		return UGrabActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabActorComponent(Z_Construct_UClass_UGrabActorComponent, &UGrabActorComponent::StaticClass, TEXT("/Script/Subway"), TEXT("UGrabActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
