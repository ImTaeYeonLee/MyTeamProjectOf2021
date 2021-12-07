// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVrmAssetListObject;
#ifdef VRM4ULOADER_VrmLoaderComponent_generated_h
#error "VrmLoaderComponent.generated.h already included, missing '#pragma once' in VrmLoaderComponent.h"
#endif
#define VRM4ULOADER_VrmLoaderComponent_generated_h

#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_45_DELEGATE \
struct VrmLoaderComponent_eventOnFinishLoad_Parms \
{ \
	UVrmAssetListObject* AssetList; \
}; \
static inline void FOnFinishLoad_DelegateWrapper(const FMulticastScriptDelegate& OnFinishLoad, UVrmAssetListObject* AssetList) \
{ \
	VrmLoaderComponent_eventOnFinishLoad_Parms Parms; \
	Parms.AssetList=AssetList; \
	OnFinishLoad.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA
#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadVRMFileAsync); \
	DECLARE_FUNCTION(execLoadVRMFile);


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadVRMFileAsync); \
	DECLARE_FUNCTION(execLoadVRMFile);


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmLoaderComponent(); \
	friend struct Z_Construct_UClass_UVrmLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmLoaderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4ULoader"), NO_API) \
	DECLARE_SERIALIZER(UVrmLoaderComponent)


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUVrmLoaderComponent(); \
	friend struct Z_Construct_UClass_UVrmLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UVrmLoaderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4ULoader"), NO_API) \
	DECLARE_SERIALIZER(UVrmLoaderComponent)


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmLoaderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmLoaderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmLoaderComponent(UVrmLoaderComponent&&); \
	NO_API UVrmLoaderComponent(const UVrmLoaderComponent&); \
public:


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmLoaderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmLoaderComponent(UVrmLoaderComponent&&); \
	NO_API UVrmLoaderComponent(const UVrmLoaderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmLoaderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmLoaderComponent)


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_PRIVATE_PROPERTY_OFFSET
#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_33_PROLOG
#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_RPC_WRAPPERS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_INCLASS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_SPARSE_DATA \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_INCLASS_NO_PURE_DECLS \
	UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmLoaderComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4ULOADER_API UClass* StaticClass<class UVrmLoaderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
