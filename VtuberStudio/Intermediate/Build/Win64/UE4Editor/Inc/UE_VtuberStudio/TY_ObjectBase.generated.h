// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_VTUBERSTUDIO_TY_ObjectBase_generated_h
#error "TY_ObjectBase.generated.h already included, missing '#pragma once' in TY_ObjectBase.h"
#endif
#define UE_VTUBERSTUDIO_TY_ObjectBase_generated_h

#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_SPARSE_DATA
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndCursorOver); \
	DECLARE_FUNCTION(execOnBeginCursorOver); \
	DECLARE_FUNCTION(execOnClicked);


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndCursorOver); \
	DECLARE_FUNCTION(execOnBeginCursorOver); \
	DECLARE_FUNCTION(execOnClicked);


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATY_ObjectBase(); \
	friend struct Z_Construct_UClass_ATY_ObjectBase_Statics; \
public: \
	DECLARE_CLASS(ATY_ObjectBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(ATY_ObjectBase)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATY_ObjectBase(); \
	friend struct Z_Construct_UClass_ATY_ObjectBase_Statics; \
public: \
	DECLARE_CLASS(ATY_ObjectBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_VtuberStudio"), NO_API) \
	DECLARE_SERIALIZER(ATY_ObjectBase)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATY_ObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATY_ObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATY_ObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATY_ObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATY_ObjectBase(ATY_ObjectBase&&); \
	NO_API ATY_ObjectBase(const ATY_ObjectBase&); \
public:


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATY_ObjectBase(ATY_ObjectBase&&); \
	NO_API ATY_ObjectBase(const ATY_ObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATY_ObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATY_ObjectBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATY_ObjectBase)


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_9_PROLOG
#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_RPC_WRAPPERS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_INCLASS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_SPARSE_DATA \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_VTUBERSTUDIO_API UClass* StaticClass<class ATY_ObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Source_UE_VtuberStudio_Public_TY_ObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
