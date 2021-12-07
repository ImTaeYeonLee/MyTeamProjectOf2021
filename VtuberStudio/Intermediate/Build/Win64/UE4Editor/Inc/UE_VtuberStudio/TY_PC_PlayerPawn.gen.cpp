// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_PC_PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_PC_PlayerPawn() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_PC_PlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_PC_MoveActorComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_MoveActorComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_HandActorComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_GrabActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATY_PC_PlayerPawn::execBoostOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoostOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_PC_PlayerPawn::execBoostOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoostOn();
		P_NATIVE_END;
	}
	void ATY_PC_PlayerPawn::StaticRegisterNativesATY_PC_PlayerPawn()
	{
		UClass* Class = ATY_PC_PlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoostOff", &ATY_PC_PlayerPawn::execBoostOff },
			{ "BoostOn", &ATY_PC_PlayerPawn::execBoostOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_PC_PlayerPawn, nullptr, "BoostOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_PC_PlayerPawn, nullptr, "BoostOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister()
	{
		return ATY_PC_PlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATY_PC_PlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCameraController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCameraController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCamera_pc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera_pc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCameraSpringArm_pc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCameraSpringArm_pc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCam_vr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCam_vr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCameraSpringArm_vr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCameraSpringArm_vr;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightLog;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBoost_MetaData[];
#endif
		static void NewProp_isBoost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boostTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boostTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOff, "BoostOff" }, // 3691301197
		{ &Z_Construct_UFunction_ATY_PC_PlayerPawn_BoostOn, "BoostOn" }, // 3449562563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TY_PC_PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "PlayerMove" },
		{ "Comment", "// PC?? ???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
		{ "ToolTip", "PC?? ???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, playerMove), Z_Construct_UClass_UTY_PC_MoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraController_MetaData[] = {
		{ "Category", "PlayerCameraController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraController = { "playerCameraController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, playerCameraController), Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCamera_pc_MetaData[] = {
		{ "Category", "PlayerCamera" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??????\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCamera_pc = { "playerCamera_pc", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, playerCamera_pc), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCamera_pc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCamera_pc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_pc_MetaData[] = {
		{ "Category", "PlayerCamera" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_pc = { "playerCameraSpringArm_pc", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, playerCameraSpringArm_pc), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_pc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_pc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_capsuleComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "// VR?? ???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
		{ "ToolTip", "VR?? ???? ??????\xc6\xae?? ?\xdf\xb0??\xcf\xb1?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_capsuleComp = { "capsuleComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, capsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_capsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_capsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_bodyComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_bodyComp = { "bodyComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, bodyComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_bodyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_bodyComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_cameraRoot_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_cameraRoot = { "cameraRoot", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, cameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_cameraRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_cameraRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCam_vr_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCam_vr = { "playerCam_vr", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, playerCam_vr), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCam_vr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCam_vr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_vr_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_vr = { "playerCameraSpringArm_vr", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, playerCameraSpringArm_vr), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_vr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_vr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftController = { "leftController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, leftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightController = { "rightController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, rightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, leftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, rightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftLog_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftLog = { "leftLog", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, leftLog), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightLog_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightLog = { "rightLog", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, rightLog), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_moveComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, moveComp), Z_Construct_UClass_UTY_VR_MoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_moveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_moveComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_handComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_handComp = { "handComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, handComp), Z_Construct_UClass_UTY_VR_HandActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_handComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_handComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_grabComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_grabComp = { "grabComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, grabComp), Z_Construct_UClass_UTY_VR_GrabActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_grabComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_grabComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "Comment", "//----------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost_SetBit(void* Obj)
	{
		((ATY_PC_PlayerPawn*)Obj)->isBoost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost = { "isBoost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATY_PC_PlayerPawn), &Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_boostTime_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "ModuleRelativePath", "Public/TY_PC_PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_boostTime = { "boostTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_PC_PlayerPawn, boostTime), METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_boostTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_boostTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCamera_pc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_pc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_capsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_bodyComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_cameraRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCam_vr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_playerCameraSpringArm_vr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_leftLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_rightLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_moveComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_handComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_grabComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_isBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::NewProp_boostTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_PC_PlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::ClassParams = {
		&ATY_PC_PlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_PC_PlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_PC_PlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_PC_PlayerPawn, 3890810301);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_PC_PlayerPawn>()
	{
		return ATY_PC_PlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_PC_PlayerPawn(Z_Construct_UClass_ATY_PC_PlayerPawn, &ATY_PC_PlayerPawn::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_PC_PlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_PC_PlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
