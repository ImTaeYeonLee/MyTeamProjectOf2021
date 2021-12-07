// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_Boss_FSM_generated_h
#error "Boss_FSM.generated.h already included, missing '#pragma once' in Boss_FSM.h"
#endif
#define SUBWAY_Boss_FSM_generated_h

#define Subway_Source_Subway_Public_Boss_FSM_h_25_SPARSE_DATA
#define Subway_Source_Subway_Public_Boss_FSM_h_25_RPC_WRAPPERS
#define Subway_Source_Subway_Public_Boss_FSM_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Subway_Source_Subway_Public_Boss_FSM_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoss_FSM(); \
	friend struct Z_Construct_UClass_UBoss_FSM_Statics; \
public: \
	DECLARE_CLASS(UBoss_FSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(UBoss_FSM)


#define Subway_Source_Subway_Public_Boss_FSM_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBoss_FSM(); \
	friend struct Z_Construct_UClass_UBoss_FSM_Statics; \
public: \
	DECLARE_CLASS(UBoss_FSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(UBoss_FSM)


#define Subway_Source_Subway_Public_Boss_FSM_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoss_FSM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoss_FSM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoss_FSM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoss_FSM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoss_FSM(UBoss_FSM&&); \
	NO_API UBoss_FSM(const UBoss_FSM&); \
public:


#define Subway_Source_Subway_Public_Boss_FSM_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoss_FSM(UBoss_FSM&&); \
	NO_API UBoss_FSM(const UBoss_FSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoss_FSM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoss_FSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoss_FSM)


#define Subway_Source_Subway_Public_Boss_FSM_h_25_PRIVATE_PROPERTY_OFFSET
#define Subway_Source_Subway_Public_Boss_FSM_h_22_PROLOG
#define Subway_Source_Subway_Public_Boss_FSM_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_Boss_FSM_h_25_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_Boss_FSM_h_25_SPARSE_DATA \
	Subway_Source_Subway_Public_Boss_FSM_h_25_RPC_WRAPPERS \
	Subway_Source_Subway_Public_Boss_FSM_h_25_INCLASS \
	Subway_Source_Subway_Public_Boss_FSM_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_Boss_FSM_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_Boss_FSM_h_25_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_Boss_FSM_h_25_SPARSE_DATA \
	Subway_Source_Subway_Public_Boss_FSM_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_Boss_FSM_h_25_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_Boss_FSM_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class UBoss_FSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_Boss_FSM_h


#define FOREACH_ENUM_EBOSSSTATE(op) \
	op(EBossState::Idle) \
	op(EBossState::Trans) \
	op(EBossState::Taunt) \
	op(EBossState::Move) \
	op(EBossState::Attack) \
	op(EBossState::Damage) \
	op(EBossState::HeadBodyArm) \
	op(EBossState::Die) 

enum class EBossState : uint8;
template<> SUBWAY_API UEnum* StaticEnum<EBossState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
