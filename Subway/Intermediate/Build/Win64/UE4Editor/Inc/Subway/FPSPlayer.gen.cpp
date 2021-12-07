// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/FPSPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayer() {}
// Cross Module References
	SUBWAY_API UFunction* Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Subway();
	SUBWAY_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AFPSPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics
	{
		struct _Script_Subway_eventAmmoChanged_Parms
		{
			int32 CurrantAmmo;
			int32 MagazineAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrantAmmo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MagazineAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::NewProp_CurrantAmmo = { "CurrantAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Subway_eventAmmoChanged_Parms, CurrantAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::NewProp_MagazineAmmo = { "MagazineAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Subway_eventAmmoChanged_Parms, MagazineAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::NewProp_CurrantAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::NewProp_MagazineAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Subway, nullptr, "AmmoChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_Subway_eventAmmoChanged_Parms), Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFPSPlayer::StaticRegisterNativesAFPSPlayer()
	{
	}
	UClass* Z_Construct_UClass_AFPSPlayer_NoRegister()
	{
		return AFPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAmmoChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmmoChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fpsCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fpsCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSPlayer.h" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_OnAmmoChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_OnAmmoChanged = { "OnAmmoChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, OnAmmoChanged), Z_Construct_UDelegateFunction_Subway_AmmoChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_OnAmmoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_OnAmmoChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_StartingWeaponClass_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "// StartingWeaponClass ??????\xc6\xbc?? AWeaponBase \xc5\xb8???? ?\xd6\xb5\xe9\xb8\xb8 ?\xd2\xb4?(TSubclassOf)????\n" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
		{ "ToolTip", "StartingWeaponClass ??????\xc6\xbc?? AWeaponBase \xc5\xb8???? ?\xd6\xb5\xe9\xb8\xb8 ?\xd2\xb4?(TSubclassOf)????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_StartingWeaponClass = { "StartingWeaponClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, StartingWeaponClass), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_StartingWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_StartingWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera_MetaData[] = {
		{ "Category", "FPSCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera = { "fpsCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, fpsCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, bodyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "PlayerMove" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, playerMove), Z_Construct_UClass_UPlayerMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayer_Statics::NewProp_PlayerHP_MetaData[] = {
		{ "Category", "PlayerHP" },
		{ "Comment", "// health System\n" },
		{ "ModuleRelativePath", "Public/FPSPlayer.h" },
		{ "ToolTip", "health System" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSPlayer_Statics::NewProp_PlayerHP = { "PlayerHP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayer, PlayerHP), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_PlayerHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::NewProp_PlayerHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_OnAmmoChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_StartingWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_fpsCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_bodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_playerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayer_Statics::NewProp_PlayerHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayer_Statics::ClassParams = {
		&AFPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayer, 967196712);
	template<> SUBWAY_API UClass* StaticClass<AFPSPlayer>()
	{
		return AFPSPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayer(Z_Construct_UClass_AFPSPlayer, &AFPSPlayer::StaticClass, TEXT("/Script/Subway"), TEXT("AFPSPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
