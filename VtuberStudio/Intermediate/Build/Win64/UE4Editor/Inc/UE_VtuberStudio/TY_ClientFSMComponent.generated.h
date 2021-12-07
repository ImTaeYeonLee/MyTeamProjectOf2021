// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_VTUBERSTUDIO_TY_ClientFSMComponent_generated_h
#error "TY_ClientFSMComponent.generated.h already included, missing '#pragma once' in TY_ClientFSMComponent.h"
#endif
#define UE_VTUBERSTUDIO_TY_ClientFSMComponent_generated_h

#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_SPARSE_DATA
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_RPC_WRAPPERS
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTY_ClientFSMComponent(); \
	friend struct Z_Construct_UClass_UTY_ClientFSMComponent_Statics; \
public: \
	DECLARE_CLASS(UTY_ClientFSMComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(UTY_ClientFSMComponent)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTY_ClientFSMComponent(); \
	friend struct Z_Construct_UClass_UTY_ClientFSMComponent_Statics; \
public: \
	DECLARE_CLASS(UTY_ClientFSMComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(UTY_ClientFSMComponent)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTY_ClientFSMComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTY_ClientFSMComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTY_ClientFSMComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTY_ClientFSMComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTY_ClientFSMComponent(UTY_ClientFSMComponent&&); \
	NO_API UTY_ClientFSMComponent(const UTY_ClientFSMComponent&); \
public:


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTY_ClientFSMComponent(UTY_ClientFSMComponent&&); \
	NO_API UTY_ClientFSMComponent(const UTY_ClientFSMComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTY_ClientFSMComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTY_ClientFSMComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTY_ClientFSMComponent)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_16_PROLOG
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_RPC_WRAPPERS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_INCLASS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_VTUBERSTUDIO_API UClass* StaticClass<class UTY_ClientFSMComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Source_UE_VtuberStudio_Public_TY_ClientFSMComponent_h


#define FOREACH_ENUM_ECLIENTFSMSTATE(op) \
	op(EClientFSMState::Normal) \
	op(EClientFSMState::Boost) 

enum class EClientFSMState : uint8;
template<> UE_VTUBERSTUDIO_API UEnum* StaticEnum<EClientFSMState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
