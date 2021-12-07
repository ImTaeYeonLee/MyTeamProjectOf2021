// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_VTUBERSTUDIO_TY_VR_GrabActorComponent_generated_h
#error "TY_VR_GrabActorComponent.generated.h already included, missing '#pragma once' in TY_VR_GrabActorComponent.h"
#endif
#define UE_VTUBERSTUDIO_TY_VR_GrabActorComponent_generated_h

#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_SPARSE_DATA
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_RPC_WRAPPERS
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTY_VR_GrabActorComponent(); \
	friend struct Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics; \
public: \
	DECLARE_CLASS(UTY_VR_GrabActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(UTY_VR_GrabActorComponent)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTY_VR_GrabActorComponent(); \
	friend struct Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics; \
public: \
	DECLARE_CLASS(UTY_VR_GrabActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(UTY_VR_GrabActorComponent)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTY_VR_GrabActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTY_VR_GrabActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTY_VR_GrabActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTY_VR_GrabActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTY_VR_GrabActorComponent(UTY_VR_GrabActorComponent&&); \
	NO_API UTY_VR_GrabActorComponent(const UTY_VR_GrabActorComponent&); \
public:


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTY_VR_GrabActorComponent(UTY_VR_GrabActorComponent&&); \
	NO_API UTY_VR_GrabActorComponent(const UTY_VR_GrabActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTY_VR_GrabActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTY_VR_GrabActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTY_VR_GrabActorComponent)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_17_PROLOG
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_RPC_WRAPPERS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_INCLASS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_VTUBERSTUDIO_API UClass* StaticClass<class UTY_VR_GrabActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Source_UE_VtuberStudio_Public_TY_VR_GrabActorComponent_h


#define FOREACH_ENUM_EGRABTYPE(op) \
	op(EGrabType::EGT_LineType) \
	op(EGrabType::EGT_SweepType) 

enum class EGrabType : uint8;
template<> UE_VTUBERSTUDIO_API UEnum* StaticEnum<EGrabType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
