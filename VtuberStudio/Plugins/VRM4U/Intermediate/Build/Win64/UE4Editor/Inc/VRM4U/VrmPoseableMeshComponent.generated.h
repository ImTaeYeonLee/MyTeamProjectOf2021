// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef VRM4U_VrmPoseableMeshComponent_generated_h
#error "VrmPoseableMeshComponent.generated.h already included, missing '#pragma once' in VrmPoseableMeshComponent.h"
#endif
#define VRM4U_VrmPoseableMeshComponent_generated_h

#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_SPARSE_DATA
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVRMCopyPoseAndMorphFromSkeletalComponent);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVRMCopyPoseAndMorphFromSkeletalComponent);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmPoseableMeshComponent(); \
	friend struct Z_Construct_UClass_UVrmPoseableMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmPoseableMeshComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmPoseableMeshComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUVrmPoseableMeshComponent(); \
	friend struct Z_Construct_UClass_UVrmPoseableMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmPoseableMeshComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmPoseableMeshComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmPoseableMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmPoseableMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmPoseableMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmPoseableMeshComponent(UVrmPoseableMeshComponent&&); \
	NO_API UVrmPoseableMeshComponent(const UVrmPoseableMeshComponent&); \
public:


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmPoseableMeshComponent(UVrmPoseableMeshComponent&&); \
	NO_API UVrmPoseableMeshComponent(const UVrmPoseableMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmPoseableMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmPoseableMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmPoseableMeshComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_12_PROLOG
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_RPC_WRAPPERS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_INCLASS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmPoseableMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmPoseableMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
