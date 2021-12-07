// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_EnemyA_FSM_generated_h
#error "EnemyA_FSM.generated.h already included, missing '#pragma once' in EnemyA_FSM.h"
#endif
#define SUBWAY_EnemyA_FSM_generated_h

#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_SPARSE_DATA
#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDamageEndEvent);


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDamageEndEvent);


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyA_FSM(); \
	friend struct Z_Construct_UClass_UEnemyA_FSM_Statics; \
public: \
	DECLARE_CLASS(UEnemyA_FSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(UEnemyA_FSM)


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyA_FSM(); \
	friend struct Z_Construct_UClass_UEnemyA_FSM_Statics; \
public: \
	DECLARE_CLASS(UEnemyA_FSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(UEnemyA_FSM)


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyA_FSM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyA_FSM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyA_FSM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyA_FSM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyA_FSM(UEnemyA_FSM&&); \
	NO_API UEnemyA_FSM(const UEnemyA_FSM&); \
public:


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyA_FSM(UEnemyA_FSM&&); \
	NO_API UEnemyA_FSM(const UEnemyA_FSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyA_FSM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyA_FSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyA_FSM)


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_PRIVATE_PROPERTY_OFFSET
#define Subway_Source_Subway_Public_EnemyA_FSM_h_21_PROLOG
#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_SPARSE_DATA \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_RPC_WRAPPERS \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_INCLASS \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_EnemyA_FSM_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_SPARSE_DATA \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_EnemyA_FSM_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class UEnemyA_FSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_EnemyA_FSM_h


#define FOREACH_ENUM_EENEMYASTATE(op) \
	op(EEnemyAState::Idle) \
	op(EEnemyAState::Move) \
	op(EEnemyAState::Run) \
	op(EEnemyAState::Attack) \
	op(EEnemyAState::Damage) \
	op(EEnemyAState::HeadBody) \
	op(EEnemyAState::Die) 

enum class EEnemyAState : uint8;
template<> SUBWAY_API UEnum* StaticEnum<EEnemyAState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
