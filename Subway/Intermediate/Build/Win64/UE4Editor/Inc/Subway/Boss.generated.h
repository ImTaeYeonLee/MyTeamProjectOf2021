// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_Boss_generated_h
#error "Boss.generated.h already included, missing '#pragma once' in Boss.h"
#endif
#define SUBWAY_Boss_generated_h

#define Subway_Source_Subway_Public_Boss_h_13_SPARSE_DATA
#define Subway_Source_Subway_Public_Boss_h_13_RPC_WRAPPERS
#define Subway_Source_Subway_Public_Boss_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Subway_Source_Subway_Public_Boss_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define Subway_Source_Subway_Public_Boss_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define Subway_Source_Subway_Public_Boss_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoss(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public:


#define Subway_Source_Subway_Public_Boss_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoss)


#define Subway_Source_Subway_Public_Boss_h_13_PRIVATE_PROPERTY_OFFSET
#define Subway_Source_Subway_Public_Boss_h_10_PROLOG
#define Subway_Source_Subway_Public_Boss_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_Boss_h_13_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_Boss_h_13_SPARSE_DATA \
	Subway_Source_Subway_Public_Boss_h_13_RPC_WRAPPERS \
	Subway_Source_Subway_Public_Boss_h_13_INCLASS \
	Subway_Source_Subway_Public_Boss_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_Boss_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_Boss_h_13_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_Boss_h_13_SPARSE_DATA \
	Subway_Source_Subway_Public_Boss_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_Boss_h_13_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_Boss_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class ABoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_Boss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
