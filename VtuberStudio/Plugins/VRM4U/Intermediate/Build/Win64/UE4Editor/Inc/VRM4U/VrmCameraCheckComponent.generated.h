// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_VrmCameraCheckComponent_generated_h
#error "VrmCameraCheckComponent.generated.h already included, missing '#pragma once' in VrmCameraCheckComponent.h"
#endif
#define VRM4U_VrmCameraCheckComponent_generated_h

#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_32_DELEGATE \
static inline void FVrmCameraCheckDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmCameraCheckDelegate) \
{ \
	VrmCameraCheckDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_SPARSE_DATA
#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraCheck);


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraCheck);


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmCameraCheckComponent(); \
	friend struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmCameraCheckComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmCameraCheckComponent)


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUVrmCameraCheckComponent(); \
	friend struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmCameraCheckComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmCameraCheckComponent)


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmCameraCheckComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmCameraCheckComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmCameraCheckComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmCameraCheckComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmCameraCheckComponent(UVrmCameraCheckComponent&&); \
	NO_API UVrmCameraCheckComponent(const UVrmCameraCheckComponent&); \
public:


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmCameraCheckComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmCameraCheckComponent(UVrmCameraCheckComponent&&); \
	NO_API UVrmCameraCheckComponent(const UVrmCameraCheckComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmCameraCheckComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmCameraCheckComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmCameraCheckComponent)


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_PRIVATE_PROPERTY_OFFSET
#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_25_PROLOG
#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_SPARSE_DATA \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_RPC_WRAPPERS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_INCLASS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_SPARSE_DATA \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_INCLASS_NO_PURE_DECLS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmCameraCheckComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmCameraCheckComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
