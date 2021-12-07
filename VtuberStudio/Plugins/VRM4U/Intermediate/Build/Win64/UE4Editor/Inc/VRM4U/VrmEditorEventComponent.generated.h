// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_VrmEditorEventComponent_generated_h
#error "VrmEditorEventComponent.generated.h already included, missing '#pragma once' in VrmEditorEventComponent.h"
#endif
#define VRM4U_VrmEditorEventComponent_generated_h

#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_DELEGATE \
struct VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms \
{ \
	float CurrentTime; \
}; \
static inline void FVrmGlobalTimeChangeEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmGlobalTimeChangeEventDelegate, float CurrentTime) \
{ \
	VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms Parms; \
	Parms.CurrentTime=CurrentTime; \
	VrmGlobalTimeChangeEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_22_DELEGATE \
struct VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms \
{ \
	bool dummy; \
}; \
static inline void FVrmSelectionObjectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmSelectionObjectEventDelegate, bool dummy) \
{ \
	VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms Parms; \
	Parms.dummy=dummy ? true : false; \
	VrmSelectionObjectEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_21_DELEGATE \
struct VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms \
{ \
	bool dummy; \
}; \
static inline void FVrmSelectionChangedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmSelectionChangedEventDelegate, bool dummy) \
{ \
	VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms Parms; \
	Parms.dummy=dummy ? true : false; \
	VrmSelectionChangedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_SPARSE_DATA
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGlobalTimeCheck); \
	DECLARE_FUNCTION(execSetSelectCheck);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGlobalTimeCheck); \
	DECLARE_FUNCTION(execSetSelectCheck);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmEditorEventComponent(); \
	friend struct Z_Construct_UClass_UVrmEditorEventComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmEditorEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmEditorEventComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVrmEditorEventComponent(); \
	friend struct Z_Construct_UClass_UVrmEditorEventComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmEditorEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmEditorEventComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmEditorEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmEditorEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmEditorEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmEditorEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmEditorEventComponent(UVrmEditorEventComponent&&); \
	NO_API UVrmEditorEventComponent(const UVrmEditorEventComponent&); \
public:


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmEditorEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmEditorEventComponent(UVrmEditorEventComponent&&); \
	NO_API UVrmEditorEventComponent(const UVrmEditorEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmEditorEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmEditorEventComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmEditorEventComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_14_PROLOG
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_RPC_WRAPPERS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_INCLASS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmEditorEventComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmEditorEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
