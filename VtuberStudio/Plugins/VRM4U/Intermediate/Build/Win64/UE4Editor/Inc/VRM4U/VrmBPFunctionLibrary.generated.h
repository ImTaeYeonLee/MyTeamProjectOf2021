// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class USkeletalMeshComponent;
enum class EVRMWidgetMode : uint8;
class UActorComponent;
struct FLinearColor;
class UAnimationAsset;
class USkeleton;
struct FTransform;
struct FVector;
struct FCameraTrackingFocusSettings;
struct FPostProcessSettings;
class UCineCameraComponent;
struct FCameraFilmbackSettings;
class ULightComponent;
class UPrimitiveComponent;
class USkeletalMesh;
class UTextureRenderTarget2D;
struct FAssetData;
class UMaterialInterface;
class UMaterialInstanceConstant;
class UTexture;
#ifdef VRM4U_VrmBPFunctionLibrary_generated_h
#error "VrmBPFunctionLibrary.generated.h already included, missing '#pragma once' in VrmBPFunctionLibrary.h"
#endif
#define VRM4U_VrmBPFunctionLibrary_generated_h

#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_SPARSE_DATA
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVRMGetUEVersion); \
	DECLARE_FUNCTION(execVRMGetAllActorsHasSceneComponent); \
	DECLARE_FUNCTION(execVRMBakeAnim); \
	DECLARE_FUNCTION(execVRMSetWidgetMode); \
	DECLARE_FUNCTION(execVRMAllowTranslucentSelection); \
	DECLARE_FUNCTION(execVRMAddTickPrerequisite); \
	DECLARE_FUNCTION(execVRMSetTransparentWindow); \
	DECLARE_FUNCTION(execVRMExecuteConsoleCommand); \
	DECLARE_FUNCTION(execVRMGetAnimationAssetData); \
	DECLARE_FUNCTION(execVRMGetPlayMode); \
	DECLARE_FUNCTION(execVRMGetCameraTransform); \
	DECLARE_FUNCTION(execVRMSetActorLabel); \
	DECLARE_FUNCTION(execVRMMakeCameraTrackingFocusSettings); \
	DECLARE_FUNCTION(execVRMSetPostProcessSettingFromCineCamera); \
	DECLARE_FUNCTION(execVRMSetCameraFilmback); \
	DECLARE_FUNCTION(execVRMGetCameraFilmback); \
	DECLARE_FUNCTION(execVRMSetPostProcessSettingAO); \
	DECLARE_FUNCTION(execVRMSetSpecularScale); \
	DECLARE_FUNCTION(execVRMSetShadowSlopeBias); \
	DECLARE_FUNCTION(execVRMSetCastRaytracedShadow); \
	DECLARE_FUNCTION(execVRMSetLightingChannelLight); \
	DECLARE_FUNCTION(execVRMSetLightingChannelPrim); \
	DECLARE_FUNCTION(execVRMGetShadowEnable); \
	DECLARE_FUNCTION(execVRMRenderingThreadEnable); \
	DECLARE_FUNCTION(execVRMCreateRenderTarget2D); \
	DECLARE_FUNCTION(execVRMGetAssetsByPackageName); \
	DECLARE_FUNCTION(execVRMSetImportedBounds); \
	DECLARE_FUNCTION(execVRMSetMaterial); \
	DECLARE_FUNCTION(execVRMDuplicateAsset); \
	DECLARE_FUNCTION(execVRMChangeMaterialStaticSwitch); \
	DECLARE_FUNCTION(execVRMChangeMaterialVectorParameter); \
	DECLARE_FUNCTION(execVRMChangeMaterialScalarParameter); \
	DECLARE_FUNCTION(execVRMChangeMaterialBlendMode); \
	DECLARE_FUNCTION(execVRMChangeMaterialShadingModel); \
	DECLARE_FUNCTION(execVRMChangeMaterialSkipEditChange); \
	DECLARE_FUNCTION(execVRMChangeMaterialTexture); \
	DECLARE_FUNCTION(execVRMChangeMaterialParent); \
	DECLARE_FUNCTION(execVRMUpdateTextureProperty); \
	DECLARE_FUNCTION(execVRMDrawMaterialToRenderTarget); \
	DECLARE_FUNCTION(execVRMGetMobileMode); \
	DECLARE_FUNCTION(execVRMGetMaterialPropertyOverrides); \
	DECLARE_FUNCTION(execVRMUpdateRefPose); \
	DECLARE_FUNCTION(execVRMInitAnim); \
	DECLARE_FUNCTION(execVRMGetHumanoidParentBone); \
	DECLARE_FUNCTION(execVRMGetHumanoidBoneNameList); \
	DECLARE_FUNCTION(execVRMGetRefBoneTransform); \
	DECLARE_FUNCTION(execVRMGetMorphTargetList); \
	DECLARE_FUNCTION(execVRMTransMatrix);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVRMGetUEVersion); \
	DECLARE_FUNCTION(execVRMGetAllActorsHasSceneComponent); \
	DECLARE_FUNCTION(execVRMBakeAnim); \
	DECLARE_FUNCTION(execVRMSetWidgetMode); \
	DECLARE_FUNCTION(execVRMAllowTranslucentSelection); \
	DECLARE_FUNCTION(execVRMAddTickPrerequisite); \
	DECLARE_FUNCTION(execVRMSetTransparentWindow); \
	DECLARE_FUNCTION(execVRMExecuteConsoleCommand); \
	DECLARE_FUNCTION(execVRMGetAnimationAssetData); \
	DECLARE_FUNCTION(execVRMGetPlayMode); \
	DECLARE_FUNCTION(execVRMGetCameraTransform); \
	DECLARE_FUNCTION(execVRMSetActorLabel); \
	DECLARE_FUNCTION(execVRMMakeCameraTrackingFocusSettings); \
	DECLARE_FUNCTION(execVRMSetPostProcessSettingFromCineCamera); \
	DECLARE_FUNCTION(execVRMSetCameraFilmback); \
	DECLARE_FUNCTION(execVRMGetCameraFilmback); \
	DECLARE_FUNCTION(execVRMSetPostProcessSettingAO); \
	DECLARE_FUNCTION(execVRMSetSpecularScale); \
	DECLARE_FUNCTION(execVRMSetShadowSlopeBias); \
	DECLARE_FUNCTION(execVRMSetCastRaytracedShadow); \
	DECLARE_FUNCTION(execVRMSetLightingChannelLight); \
	DECLARE_FUNCTION(execVRMSetLightingChannelPrim); \
	DECLARE_FUNCTION(execVRMGetShadowEnable); \
	DECLARE_FUNCTION(execVRMRenderingThreadEnable); \
	DECLARE_FUNCTION(execVRMCreateRenderTarget2D); \
	DECLARE_FUNCTION(execVRMGetAssetsByPackageName); \
	DECLARE_FUNCTION(execVRMSetImportedBounds); \
	DECLARE_FUNCTION(execVRMSetMaterial); \
	DECLARE_FUNCTION(execVRMDuplicateAsset); \
	DECLARE_FUNCTION(execVRMChangeMaterialStaticSwitch); \
	DECLARE_FUNCTION(execVRMChangeMaterialVectorParameter); \
	DECLARE_FUNCTION(execVRMChangeMaterialScalarParameter); \
	DECLARE_FUNCTION(execVRMChangeMaterialBlendMode); \
	DECLARE_FUNCTION(execVRMChangeMaterialShadingModel); \
	DECLARE_FUNCTION(execVRMChangeMaterialSkipEditChange); \
	DECLARE_FUNCTION(execVRMChangeMaterialTexture); \
	DECLARE_FUNCTION(execVRMChangeMaterialParent); \
	DECLARE_FUNCTION(execVRMUpdateTextureProperty); \
	DECLARE_FUNCTION(execVRMDrawMaterialToRenderTarget); \
	DECLARE_FUNCTION(execVRMGetMobileMode); \
	DECLARE_FUNCTION(execVRMGetMaterialPropertyOverrides); \
	DECLARE_FUNCTION(execVRMUpdateRefPose); \
	DECLARE_FUNCTION(execVRMInitAnim); \
	DECLARE_FUNCTION(execVRMGetHumanoidParentBone); \
	DECLARE_FUNCTION(execVRMGetHumanoidBoneNameList); \
	DECLARE_FUNCTION(execVRMGetRefBoneTransform); \
	DECLARE_FUNCTION(execVRMGetMorphTargetList); \
	DECLARE_FUNCTION(execVRMTransMatrix);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVrmBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVrmBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmBPFunctionLibrary)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUVrmBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVrmBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVrmBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmBPFunctionLibrary)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmBPFunctionLibrary(UVrmBPFunctionLibrary&&); \
	NO_API UVrmBPFunctionLibrary(const UVrmBPFunctionLibrary&); \
public:


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmBPFunctionLibrary(UVrmBPFunctionLibrary&&); \
	NO_API UVrmBPFunctionLibrary(const UVrmBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmBPFunctionLibrary)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_45_PROLOG
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_RPC_WRAPPERS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_INCLASS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h


#define FOREACH_ENUM_EVRMWIDGETMODE(op) \
	op(EVRMWidgetMode::WM_Translate) \
	op(EVRMWidgetMode::WM_Rotate) \
	op(EVRMWidgetMode::WM_Scale) 

enum class EVRMWidgetMode : uint8;
template<> VRM4U_API UEnum* StaticEnum<EVRMWidgetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
