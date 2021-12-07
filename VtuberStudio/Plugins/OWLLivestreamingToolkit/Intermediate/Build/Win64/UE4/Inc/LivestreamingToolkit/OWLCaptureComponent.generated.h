// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class AActor;
class UPrimitiveComponent;
class UCameraComponent;
#ifdef LIVESTREAMINGTOOLKIT_OWLCaptureComponent_generated_h
#error "OWLCaptureComponent.generated.h already included, missing '#pragma once' in OWLCaptureComponent.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLCaptureComponent_generated_h

#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_SPARSE_DATA
#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentUMGWidget); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent); \
	DECLARE_FUNCTION(execGetTargetCamera);


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentUMGWidget); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent); \
	DECLARE_FUNCTION(execGetTargetCamera);


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLCaptureComponent(); \
	friend struct Z_Construct_UClass_UOWLCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UOWLCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(UOWLCaptureComponent)


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOWLCaptureComponent(); \
	friend struct Z_Construct_UClass_UOWLCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UOWLCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(UOWLCaptureComponent)


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWLCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWLCaptureComponent(UOWLCaptureComponent&&); \
	NO_API UOWLCaptureComponent(const UOWLCaptureComponent&); \
public:


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWLCaptureComponent(UOWLCaptureComponent&&); \
	NO_API UOWLCaptureComponent(const UOWLCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLCaptureComponent)


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InternalRT() { return STRUCT_OFFSET(UOWLCaptureComponent, InternalRT); } \
	FORCEINLINE static uint32 __PPO__CameraMesh() { return STRUCT_OFFSET(UOWLCaptureComponent, CameraMesh); } \
	FORCEINLINE static uint32 __PPO__CineCameraMesh() { return STRUCT_OFFSET(UOWLCaptureComponent, CineCameraMesh); } \
	FORCEINLINE static uint32 __PPO__Watermark() { return STRUCT_OFFSET(UOWLCaptureComponent, Watermark); }


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_22_PROLOG
#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_SPARSE_DATA \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_INCLASS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_SPARSE_DATA \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<class UOWLCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
