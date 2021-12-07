// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESceneCapturePrimitiveRenderMode : uint8;
struct FVector;
struct FPostProcessSettings;
struct FIntPoint;
enum class EStreamResolution : uint8;
#ifdef LIVESTREAMINGTOOLKIT_OWLInstantSpoutCamera_generated_h
#error "OWLInstantSpoutCamera.generated.h already included, missing '#pragma once' in OWLInstantSpoutCamera.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLInstantSpoutCamera_generated_h

#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_SPARSE_DATA
#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTAAMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetTAAMotionBlur); \
	DECLARE_FUNCTION(execGetTemporalAAEnabled); \
	DECLARE_FUNCTION(execSetTemporalAA); \
	DECLARE_FUNCTION(execGetbUseRayTracingIfEnabled); \
	DECLARE_FUNCTION(execSetbUseRayTracingIfEnabled); \
	DECLARE_FUNCTION(execGetMaxViewDistanceOverride); \
	DECLARE_FUNCTION(execSetMaxViewDistanceOverride); \
	DECLARE_FUNCTION(execGetLODDistanceFactor); \
	DECLARE_FUNCTION(execSetLODDistanceFactor); \
	DECLARE_FUNCTION(execGetShowOnlyActors); \
	DECLARE_FUNCTION(execSetShowOnlyActors); \
	DECLARE_FUNCTION(execGetHiddenActors); \
	DECLARE_FUNCTION(execSetHiddenActors); \
	DECLARE_FUNCTION(execGetbAlwaysPersistRenderingState); \
	DECLARE_FUNCTION(execSetbAlwaysPersistRenderingState); \
	DECLARE_FUNCTION(execGetbCaptureOnMovement); \
	DECLARE_FUNCTION(execSetbCaptureOnMovement); \
	DECLARE_FUNCTION(execGetbCaptureEveryFrame); \
	DECLARE_FUNCTION(execSetbCaptureEveryFrame); \
	DECLARE_FUNCTION(execGetCaptureSource); \
	DECLARE_FUNCTION(execSetCaptureSource); \
	DECLARE_FUNCTION(execGetPrimitiveRenderMode); \
	DECLARE_FUNCTION(execSetPrimitiveRenderMode); \
	DECLARE_FUNCTION(execGetbDisableFlipCopyGLES); \
	DECLARE_FUNCTION(execSetbDisableFlipCopyGLES); \
	DECLARE_FUNCTION(execGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent); \
	DECLARE_FUNCTION(execSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent); \
	DECLARE_FUNCTION(execGetClipPlaneNormal); \
	DECLARE_FUNCTION(execSetClipPlaneNormal); \
	DECLARE_FUNCTION(execGetClipPlaneBase); \
	DECLARE_FUNCTION(execSetClipPlaneBase); \
	DECLARE_FUNCTION(execGetbEnableClipPlane); \
	DECLARE_FUNCTION(execSetbEnableClipPlane); \
	DECLARE_FUNCTION(execGetPostProcessBlendWeight); \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight); \
	DECLARE_FUNCTION(execGetPostProcessSettings); \
	DECLARE_FUNCTION(execSetPostProcessSettings); \
	DECLARE_FUNCTION(execGetCompositeMode); \
	DECLARE_FUNCTION(execSetCompositeMode); \
	DECLARE_FUNCTION(execGetFOVAngle); \
	DECLARE_FUNCTION(execSetFOVAngle); \
	DECLARE_FUNCTION(execGetCustomStreamResolution); \
	DECLARE_FUNCTION(execSetCustomStreamResolution); \
	DECLARE_FUNCTION(execGetStreamResolution); \
	DECLARE_FUNCTION(execSetStreamResolution); \
	DECLARE_FUNCTION(execGetUseCustomStreamResolution); \
	DECLARE_FUNCTION(execSetUseCustomStreamResolution); \
	DECLARE_FUNCTION(execGetEffectiveOutputSize); \
	DECLARE_FUNCTION(execGetCameraEnabled); \
	DECLARE_FUNCTION(execSetCameraEnabled); \
	DECLARE_FUNCTION(execGetCameraName);


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTAAMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetTAAMotionBlur); \
	DECLARE_FUNCTION(execGetTemporalAAEnabled); \
	DECLARE_FUNCTION(execSetTemporalAA); \
	DECLARE_FUNCTION(execGetbUseRayTracingIfEnabled); \
	DECLARE_FUNCTION(execSetbUseRayTracingIfEnabled); \
	DECLARE_FUNCTION(execGetMaxViewDistanceOverride); \
	DECLARE_FUNCTION(execSetMaxViewDistanceOverride); \
	DECLARE_FUNCTION(execGetLODDistanceFactor); \
	DECLARE_FUNCTION(execSetLODDistanceFactor); \
	DECLARE_FUNCTION(execGetShowOnlyActors); \
	DECLARE_FUNCTION(execSetShowOnlyActors); \
	DECLARE_FUNCTION(execGetHiddenActors); \
	DECLARE_FUNCTION(execSetHiddenActors); \
	DECLARE_FUNCTION(execGetbAlwaysPersistRenderingState); \
	DECLARE_FUNCTION(execSetbAlwaysPersistRenderingState); \
	DECLARE_FUNCTION(execGetbCaptureOnMovement); \
	DECLARE_FUNCTION(execSetbCaptureOnMovement); \
	DECLARE_FUNCTION(execGetbCaptureEveryFrame); \
	DECLARE_FUNCTION(execSetbCaptureEveryFrame); \
	DECLARE_FUNCTION(execGetCaptureSource); \
	DECLARE_FUNCTION(execSetCaptureSource); \
	DECLARE_FUNCTION(execGetPrimitiveRenderMode); \
	DECLARE_FUNCTION(execSetPrimitiveRenderMode); \
	DECLARE_FUNCTION(execGetbDisableFlipCopyGLES); \
	DECLARE_FUNCTION(execSetbDisableFlipCopyGLES); \
	DECLARE_FUNCTION(execGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent); \
	DECLARE_FUNCTION(execSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent); \
	DECLARE_FUNCTION(execGetClipPlaneNormal); \
	DECLARE_FUNCTION(execSetClipPlaneNormal); \
	DECLARE_FUNCTION(execGetClipPlaneBase); \
	DECLARE_FUNCTION(execSetClipPlaneBase); \
	DECLARE_FUNCTION(execGetbEnableClipPlane); \
	DECLARE_FUNCTION(execSetbEnableClipPlane); \
	DECLARE_FUNCTION(execGetPostProcessBlendWeight); \
	DECLARE_FUNCTION(execSetPostProcessBlendWeight); \
	DECLARE_FUNCTION(execGetPostProcessSettings); \
	DECLARE_FUNCTION(execSetPostProcessSettings); \
	DECLARE_FUNCTION(execGetCompositeMode); \
	DECLARE_FUNCTION(execSetCompositeMode); \
	DECLARE_FUNCTION(execGetFOVAngle); \
	DECLARE_FUNCTION(execSetFOVAngle); \
	DECLARE_FUNCTION(execGetCustomStreamResolution); \
	DECLARE_FUNCTION(execSetCustomStreamResolution); \
	DECLARE_FUNCTION(execGetStreamResolution); \
	DECLARE_FUNCTION(execSetStreamResolution); \
	DECLARE_FUNCTION(execGetUseCustomStreamResolution); \
	DECLARE_FUNCTION(execSetUseCustomStreamResolution); \
	DECLARE_FUNCTION(execGetEffectiveOutputSize); \
	DECLARE_FUNCTION(execGetCameraEnabled); \
	DECLARE_FUNCTION(execSetCameraEnabled); \
	DECLARE_FUNCTION(execGetCameraName);


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLInstantSpoutCamera(); \
	friend struct Z_Construct_UClass_AOWLInstantSpoutCamera_Statics; \
public: \
	DECLARE_CLASS(AOWLInstantSpoutCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(AOWLInstantSpoutCamera)


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAOWLInstantSpoutCamera(); \
	friend struct Z_Construct_UClass_AOWLInstantSpoutCamera_Statics; \
public: \
	DECLARE_CLASS(AOWLInstantSpoutCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), NO_API) \
	DECLARE_SERIALIZER(AOWLInstantSpoutCamera)


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWLInstantSpoutCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLInstantSpoutCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLInstantSpoutCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLInstantSpoutCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWLInstantSpoutCamera(AOWLInstantSpoutCamera&&); \
	NO_API AOWLInstantSpoutCamera(const AOWLInstantSpoutCamera&); \
public:


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWLInstantSpoutCamera(AOWLInstantSpoutCamera&&); \
	NO_API AOWLInstantSpoutCamera(const AOWLInstantSpoutCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLInstantSpoutCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLInstantSpoutCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLInstantSpoutCamera)


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AOWLInstantSpoutCamera, DummyRoot); }


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_32_PROLOG
#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_SPARSE_DATA \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_RPC_WRAPPERS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_INCLASS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_SPARSE_DATA \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<class AOWLInstantSpoutCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_InstantCamera_OWLInstantSpoutCamera_h


#define FOREACH_ENUM_ESTREAMRESOLUTION(op) \
	op(EStreamResolution::RS_240p) \
	op(EStreamResolution::RS_360p) \
	op(EStreamResolution::RS_480p) \
	op(EStreamResolution::RS_720p) \
	op(EStreamResolution::RS_1080p) \
	op(EStreamResolution::RS_1440p) \
	op(EStreamResolution::RS_4K) 

enum class EStreamResolution : uint8;
template<> LIVESTREAMINGTOOLKIT_API UEnum* StaticEnum<EStreamResolution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
