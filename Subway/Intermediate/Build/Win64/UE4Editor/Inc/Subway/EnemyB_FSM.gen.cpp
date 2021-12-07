// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/EnemyB_FSM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyB_FSM() {}
// Cross Module References
	SUBWAY_API UEnum* Z_Construct_UEnum_Subway_EEnemyBState();
	UPackage* Z_Construct_UPackage__Script_Subway();
	SUBWAY_API UClass* Z_Construct_UClass_UEnemyB_FSM_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UEnemyB_FSM();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SUBWAY_API UClass* Z_Construct_UClass_AEnemyB_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UEnemyBAnimInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EEnemyBState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Subway_EEnemyBState, Z_Construct_UPackage__Script_Subway(), TEXT("EEnemyBState"));
		}
		return Singleton;
	}
	template<> SUBWAY_API UEnum* StaticEnum<EEnemyBState>()
	{
		return EEnemyBState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyBState(EEnemyBState_StaticEnum, TEXT("/Script/Subway"), TEXT("EEnemyBState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Subway_EEnemyBState_Hash() { return 3890990288U; }
	UEnum* Z_Construct_UEnum_Subway_EEnemyBState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Subway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyBState"), 0, Get_Z_Construct_UEnum_Subway_EEnemyBState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyBState::Idle", (int64)EEnemyBState::Idle },
				{ "EEnemyBState::Move", (int64)EEnemyBState::Move },
				{ "EEnemyBState::Attack", (int64)EEnemyBState::Attack },
				{ "EEnemyBState::Damage", (int64)EEnemyBState::Damage },
				{ "EEnemyBState::Die", (int64)EEnemyBState::Die },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EEnemyBState::Attack" },
				{ "BlueprintType", "true" },
				{ "Damage.Name", "EEnemyBState::Damage" },
				{ "Die.Name", "EEnemyBState::Die" },
				{ "Idle.Name", "EEnemyBState::Idle" },
				{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
				{ "Move.Name", "EEnemyBState::Move" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Subway,
				nullptr,
				"EEnemyBState",
				"EEnemyBState",
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
	DEFINE_FUNCTION(UEnemyB_FSM::execOnDamageEndEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamageEndEvent();
		P_NATIVE_END;
	}
	void UEnemyB_FSM::StaticRegisterNativesUEnemyB_FSM()
	{
		UClass* Class = UEnemyB_FSM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamageEndEvent", &UEnemyB_FSM::execOnDamageEndEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyB_FSM, nullptr, "OnDamageEndEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyB_FSM_NoRegister()
	{
		return UEnemyB_FSM::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyB_FSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ai_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ai;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_state_B_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_state_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_state_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_idleDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransADelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransADelayTime;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knockback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_knockback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_knockbackPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_knockbackPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyB_FSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyB_FSM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyB_FSM_OnDamageEndEvent, "OnDamageEndEvent" }, // 3480411829
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyB_FSM.h" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "//me & target & CharacterMovement\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "me & target & CharacterMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, me), Z_Construct_UClass_AEnemyB_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, target), Z_Construct_UClass_AVR_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_ai_MetaData[] = {
		{ "Comment", "// Enemy ?? ?????\xcf\xb0? ?\xd6\xb4? AIController ????\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "Enemy ?? ?????\xcf\xb0? ?\xd6\xb4? AIController ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_ai = { "ai", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_ai_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_ai_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B = { "m_state_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, m_state_B), Z_Construct_UEnum_Subway_EEnemyBState, METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_anim_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, anim), Z_Construct_UClass_UEnemyBAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_idleDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_idleDelayTime = { "idleDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, idleDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_idleDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_idleDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_TransADelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_TransADelayTime = { "TransADelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, TransADelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_TransADelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_TransADelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, currentTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackDelayTime = { "attackDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, attackDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackRange_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//????\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackRange = { "attackRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, attackRange), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "EnemyBStats" },
		{ "Comment", "//Boss Movement\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "Boss Movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "EnemyBStats" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// health System\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "health System" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, Health), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockback_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// ?\xc7\xb0? ???? ?? ?\xcb\xb9? ??\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "?\xc7\xb0? ???? ?? ?\xcb\xb9? ??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockback = { "knockback", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, knockback), METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockbackPos_MetaData[] = {
		{ "Comment", "// ?\xc7\xb0? ???? ?? ?\xcb\xb9? ???? ????\n" },
		{ "ModuleRelativePath", "Public/EnemyB_FSM.h" },
		{ "ToolTip", "?\xc7\xb0? ???? ?? ?\xcb\xb9? ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockbackPos = { "knockbackPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyB_FSM, knockbackPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockbackPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockbackPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyB_FSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_ai,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_m_state_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_idleDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_TransADelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_attackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyB_FSM_Statics::NewProp_knockbackPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyB_FSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyB_FSM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyB_FSM_Statics::ClassParams = {
		&UEnemyB_FSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyB_FSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyB_FSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyB_FSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyB_FSM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyB_FSM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyB_FSM, 1564424497);
	template<> SUBWAY_API UClass* StaticClass<UEnemyB_FSM>()
	{
		return UEnemyB_FSM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyB_FSM(Z_Construct_UClass_UEnemyB_FSM, &UEnemyB_FSM::StaticClass, TEXT("/Script/Subway"), TEXT("UEnemyB_FSM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyB_FSM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
