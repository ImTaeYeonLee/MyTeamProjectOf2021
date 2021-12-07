// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/VR_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVR_Player() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AVR_Player();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UMoveActorComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UHandActorComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UGrabActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AEnemyA_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AEnemyB_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ABoss_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVR_Player::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AVR_Player::StaticRegisterNativesAVR_Player()
	{
		UClass* Class = AVR_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &AVR_Player::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics
	{
		struct VR_Player_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VR_Player_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VR_Player_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VR_Player_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VR_Player_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((VR_Player_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VR_Player_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VR_Player_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVR_Player, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(VR_Player_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVR_Player_NoRegister()
	{
		return AVR_Player::StaticClass();
	}
	struct Z_Construct_UClass_AVR_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponsMain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponsMain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_magComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgunComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gunComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gunComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftGunLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftGunLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightGunLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightGunLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mag_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemyB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boss_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boss;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVR_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVR_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVR_Player_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 301902387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VR_Player.h" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp = { "capsuleComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, capsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp = { "bodyComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, bodyComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_weaponsMain_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_weaponsMain = { "weaponsMain", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, weaponsMain), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_weaponsMain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_weaponsMain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_magComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_magComp = { "magComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, magComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_magComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_magComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgunComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgunComp = { "shotgunComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, shotgunComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgunComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgunComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_gunComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_gunComp = { "gunComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, gunComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_gunComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_gunComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot = { "cameraRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, cameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam = { "playerCam", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, playerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController = { "leftController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController = { "rightController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_leftGunLoc_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_leftGunLoc = { "leftGunLoc", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, leftGunLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftGunLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_leftGunLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_rightGunLoc_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_rightGunLoc = { "rightGunLoc", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, rightGunLoc), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightGunLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_rightGunLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, moveComp), Z_Construct_UClass_UMoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp = { "handComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, handComp), Z_Construct_UClass_UHandActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp = { "grabComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, grabComp), Z_Construct_UClass_UGrabActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_gun_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_gun = { "gun", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, gun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgun_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgun = { "shotgun", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, shotgun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_mag_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_mag = { "mag", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, mag), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_mag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_mag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_playerHP_MetaData[] = {
		{ "Category", "PlayerHP" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_playerHP = { "playerHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, playerHP), METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_playerHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyA_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyA = { "enemyA", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, enemyA), Z_Construct_UClass_AEnemyA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyB_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyB = { "enemyB", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, enemyB), Z_Construct_UClass_AEnemyB_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_Player_Statics::NewProp_boss_MetaData[] = {
		{ "Category", "VR_Player" },
		{ "ModuleRelativePath", "Public/VR_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVR_Player_Statics::NewProp_boss = { "boss", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVR_Player, boss), Z_Construct_UClass_ABoss_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::NewProp_boss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::NewProp_boss_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVR_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_capsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_bodyComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_weaponsMain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_magComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgunComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_gunComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_cameraRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_playerCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_leftGunLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_rightGunLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_moveComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_handComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_grabComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_shotgun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_mag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_playerHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_enemyB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVR_Player_Statics::NewProp_boss,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVR_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVR_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVR_Player_Statics::ClassParams = {
		&AVR_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVR_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVR_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVR_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVR_Player, 1425600442);
	template<> SUBWAY_API UClass* StaticClass<AVR_Player>()
	{
		return AVR_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_Player(Z_Construct_UClass_AVR_Player, &AVR_Player::StaticClass, TEXT("/Script/Subway"), TEXT("AVR_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
