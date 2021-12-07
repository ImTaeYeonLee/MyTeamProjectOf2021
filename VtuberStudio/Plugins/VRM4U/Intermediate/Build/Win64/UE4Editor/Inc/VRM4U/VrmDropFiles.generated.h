// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_VrmDropFiles_generated_h
#error "VrmDropFiles.generated.h already included, missing '#pragma once' in VrmDropFiles.h"
#endif
#define VRM4U_VrmDropFiles_generated_h

#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_43_DELEGATE \
struct VrmDropFilesComponent_eventOnDropFiles_Parms \
{ \
	FString FileName; \
}; \
static inline void FOnDropFiles_DelegateWrapper(const FMulticastScriptDelegate& OnDropFiles, const FString& FileName) \
{ \
	VrmDropFilesComponent_eventOnDropFiles_Parms Parms; \
	Parms.FileName=FileName; \
	OnDropFiles.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_SPARSE_DATA
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVRMGetOpenFileName);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVRMGetOpenFileName);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmDropFilesComponent(); \
	friend struct Z_Construct_UClass_UVrmDropFilesComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmDropFilesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmDropFilesComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUVrmDropFilesComponent(); \
	friend struct Z_Construct_UClass_UVrmDropFilesComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmDropFilesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmDropFilesComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmDropFilesComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmDropFilesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmDropFilesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmDropFilesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmDropFilesComponent(UVrmDropFilesComponent&&); \
	NO_API UVrmDropFilesComponent(const UVrmDropFilesComponent&); \
public:


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmDropFilesComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmDropFilesComponent(UVrmDropFilesComponent&&); \
	NO_API UVrmDropFilesComponent(const UVrmDropFilesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmDropFilesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmDropFilesComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmDropFilesComponent)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_31_PROLOG
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_RPC_WRAPPERS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_INCLASS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmDropFilesComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmDropFilesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
