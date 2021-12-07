// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_VTUBERSTUDIO_TY_DancerFSM_generated_h
#error "TY_DancerFSM.generated.h already included, missing '#pragma once' in TY_DancerFSM.h"
#endif
#define UE_VTUBERSTUDIO_TY_DancerFSM_generated_h

#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_SPARSE_DATA
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_RPC_WRAPPERS
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTY_DancerFSM(); \
	friend struct Z_Construct_UClass_UTY_DancerFSM_Statics; \
public: \
	DECLARE_CLASS(UTY_DancerFSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(UTY_DancerFSM)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTY_DancerFSM(); \
	friend struct Z_Construct_UClass_UTY_DancerFSM_Statics; \
public: \
	DECLARE_CLASS(UTY_DancerFSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(UTY_DancerFSM)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTY_DancerFSM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTY_DancerFSM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTY_DancerFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTY_DancerFSM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTY_DancerFSM(UTY_DancerFSM&&); \
	NO_API UTY_DancerFSM(const UTY_DancerFSM&); \
public:


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTY_DancerFSM(UTY_DancerFSM&&); \
	NO_API UTY_DancerFSM(const UTY_DancerFSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTY_DancerFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTY_DancerFSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTY_DancerFSM)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_18_PROLOG
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_RPC_WRAPPERS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_INCLASS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_VTUBERSTUDIO_API UClass* StaticClass<class UTY_DancerFSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Source_UE_VtuberStudio_Public_TY_DancerFSM_h


#define FOREACH_ENUM_EDANCERSTATE(op) \
	op(EDancerState::Idle) \
	op(EDancerState::GoToTarget) \
	op(EDancerState::PlayMontage) \
	op(EDancerState::GoToBackstage) 

enum class EDancerState : uint8;
template<> UE_VTUBERSTUDIO_API UEnum* StaticEnum<EDancerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
