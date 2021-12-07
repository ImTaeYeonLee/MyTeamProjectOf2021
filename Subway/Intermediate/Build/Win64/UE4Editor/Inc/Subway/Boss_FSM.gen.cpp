// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/Boss_FSM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_FSM() {}
// Cross Module References
	SUBWAY_API UEnum* Z_Construct_UEnum_Subway_EBossState();
	UPackage* Z_Construct_UPackage__Script_Subway();
	SUBWAY_API UClass* Z_Construct_UClass_UBoss_FSM_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UBoss_FSM();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SUBWAY_API UClass* Z_Construct_UClass_ABoss_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EBossState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Subway_EBossState, Z_Construct_UPackage__Script_Subway(), TEXT("EBossState"));
		}
		return Singleton;
	}
	template<> SUBWAY_API UEnum* StaticEnum<EBossState>()
	{
		return EBossState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBossState(EBossState_StaticEnum, TEXT("/Script/Subway"), TEXT("EBossState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Subway_EBossState_Hash() { return 2467368541U; }
	UEnum* Z_Construct_UEnum_Subway_EBossState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Subway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBossState"), 0, Get_Z_Construct_UEnum_Subway_EBossState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBossState::Idle", (int64)EBossState::Idle },
				{ "EBossState::Trans", (int64)EBossState::Trans },
				{ "EBossState::Taunt", (int64)EBossState::Taunt },
				{ "EBossState::Move", (int64)EBossState::Move },
				{ "EBossState::Attack", (int64)EBossState::Attack },
				{ "EBossState::Damage", (int64)EBossState::Damage },
				{ "EBossState::HeadBodyArm", (int64)EBossState::HeadBodyArm },
				{ "EBossState::Die", (int64)EBossState::Die },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EBossState::Attack" },
				{ "BlueprintType", "true" },
				{ "Damage.Name", "EBossState::Damage" },
				{ "Die.Name", "EBossState::Die" },
				{ "HeadBodyArm.Name", "EBossState::HeadBodyArm" },
				{ "Idle.Name", "EBossState::Idle" },
				{ "ModuleRelativePath", "Public/Boss_FSM.h" },
				{ "Move.Name", "EBossState::Move" },
				{ "Taunt.Name", "EBossState::Taunt" },
				{ "Trans.Name", "EBossState::Trans" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Subway,
				nullptr,
				"EBossState",
				"EBossState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBoss_FSM::StaticRegisterNativesUBoss_FSM()
	{
	}
	UClass* Z_Construct_UClass_UBoss_FSM_NoRegister()
	{
		return UBoss_FSM::StaticClass();
	}
	struct Z_Construct_UClass_UBoss_FSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_state_Boss_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_state_Boss_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_state_Boss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ai_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ai;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_idleDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TauntDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TauntDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knockback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_knockback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knockbackPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_knockbackPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoss_FSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Boss_FSM.h" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "//me & target & CharacterMovement\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "me & target & CharacterMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, me), Z_Construct_UClass_ABoss_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, target), Z_Construct_UClass_AVR_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//class AFPSPlayer* target;\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "class AFPSPlayer* target;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss = { "m_state_Boss", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, m_state_Boss), Z_Construct_UEnum_Subway_EBossState, METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_anim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, anim), Z_Construct_UClass_UBossAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_ai_MetaData[] = {
		{ "Comment", "// Enemy ?? ?????\xcf\xb0? ?\xd6\xb4? AIController ????\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "Enemy ?? ?????\xcf\xb0? ?\xd6\xb4? AIController ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_ai = { "ai", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_ai_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_ai_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_idleDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_idleDelayTime = { "idleDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, idleDelayTime), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_idleDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_idleDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TransDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TransDelayTime = { "TransDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, TransDelayTime), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TransDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TransDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TauntDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TauntDelayTime = { "TauntDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, TauntDelayTime), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TauntDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TauntDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, currentTime), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackDelayTime = { "attackDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, attackDelayTime), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackRange_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//????\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackRange = { "attackRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, attackRange), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "EnemyAStats" },
		{ "Comment", "//Boss Movement\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "Boss Movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "EnemyAStats" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockback_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// ?\xc7\xb0? ???? ?? ?\xcb\xb9? ??\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "?\xc7\xb0? ???? ?? ?\xcb\xb9? ??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockback = { "knockback", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, knockback), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockbackPos_MetaData[] = {
		{ "Comment", "// ?\xc7\xb0? ???? ?? ?\xcb\xb9? ???? ????\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "?\xc7\xb0? ???? ?? ?\xcb\xb9? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockbackPos = { "knockbackPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, knockbackPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockbackPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockbackPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_FSM_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// health System\n" },
		{ "ModuleRelativePath", "Public/Boss_FSM.h" },
		{ "ToolTip", "health System" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBoss_FSM_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoss_FSM, Health), METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoss_FSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_m_state_Boss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_ai,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_idleDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TransDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_TauntDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_attackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_knockbackPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoss_FSM_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoss_FSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoss_FSM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoss_FSM_Statics::ClassParams = {
		&UBoss_FSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoss_FSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoss_FSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_FSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoss_FSM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoss_FSM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoss_FSM, 3392644508);
	template<> SUBWAY_API UClass* StaticClass<UBoss_FSM>()
	{
		return UBoss_FSM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoss_FSM(Z_Construct_UClass_UBoss_FSM, &UBoss_FSM::StaticClass, TEXT("/Script/Subway"), TEXT("UBoss_FSM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoss_FSM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
