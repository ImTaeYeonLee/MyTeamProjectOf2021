// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_EnemyB_FSM_generated_h
#error "EnemyB_FSM.generated.h already included, missing '#pragma once' in EnemyB_FSM.h"
#endif
#define SUBWAY_EnemyB_FSM_generated_h

#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_SPARSE_DATA
#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDamageEndEvent);


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDamageEndEvent);


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyB_FSM(); \
	friend struct Z_Construct_UClass_UEnemyB_FSM_Statics; \
public: \
	DECLARE_CLASS(UEnemyB_FSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(UEnemyB_FSM)


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyB_FSM(); \
	friend struct Z_Construct_UClass_UEnemyB_FSM_Statics; \
public: \
	DECLARE_CLASS(UEnemyB_FSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(UEnemyB_FSM)


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyB_FSM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyB_FSM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyB_FSM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyB_FSM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyB_FSM(UEnemyB_FSM&&); \
	NO_API UEnemyB_FSM(const UEnemyB_FSM&); \
public:


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyB_FSM(UEnemyB_FSM&&); \
	NO_API UEnemyB_FSM(const UEnemyB_FSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyB_FSM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyB_FSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyB_FSM)


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_PRIVATE_PROPERTY_OFFSET
#define Subway_Source_Subway_Public_EnemyB_FSM_h_19_PROLOG
#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_SPARSE_DATA \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_RPC_WRAPPERS \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_INCLASS \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_EnemyB_FSM_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_SPARSE_DATA \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_EnemyB_FSM_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class UEnemyB_FSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_EnemyB_FSM_h


#define FOREACH_ENUM_EENEMYBSTATE(op) \
	op(EEnemyBState::Idle) \
	op(EEnemyBState::Move) \
	op(EEnemyBState::Attack) \
	op(EEnemyBState::Damage) \
	op(EEnemyBState::Die) 

enum class EEnemyBState : uint8;
template<> SUBWAY_API UEnum* StaticEnum<EEnemyBState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
