// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeletalMeshComponent;
class UVrmMetaObject;
class UObject;
class UVrmAssetListObject;
struct FImportOptionData;
struct FLatentActionInfo;
enum class EVRMImportMaterialType : uint8;
#ifdef VRM4ULOADER_LoaderBPFunctionLibrary_generated_h
#error "LoaderBPFunctionLibrary.generated.h already included, missing '#pragma once' in LoaderBPFunctionLibrary.h"
#endif
#define VRM4ULOADER_LoaderBPFunctionLibrary_generated_h

#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReturnedData_Statics; \
	VRM4ULOADER_API static class UScriptStruct* StaticStruct();


template<> VRM4ULOADER_API UScriptStruct* StaticStruct<struct FReturnedData>();

#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics; \
	VRM4ULOADER_API static class UScriptStruct* StaticStruct();


template<> VRM4ULOADER_API UScriptStruct* StaticStruct<struct FMeshInfo_VRM4U>();

#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_SPARSE_DATA
#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTailBone); \
	DECLARE_FUNCTION(execCopyVirtualBone); \
	DECLARE_FUNCTION(execCopyPhysicsAsset); \
	DECLARE_FUNCTION(execVRMReTransformHumanoidBone); \
	DECLARE_FUNCTION(execLoadVRMFileAsync); \
	DECLARE_FUNCTION(execLoadVRMFile); \
	DECLARE_FUNCTION(execVRMSetLoadMaterialType);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTailBone); \
	DECLARE_FUNCTION(execCopyVirtualBone); \
	DECLARE_FUNCTION(execCopyPhysicsAsset); \
	DECLARE_FUNCTION(execVRMReTransformHumanoidBone); \
	DECLARE_FUNCTION(execLoadVRMFileAsync); \
	DECLARE_FUNCTION(execLoadVRMFile); \
	DECLARE_FUNCTION(execVRMSetLoadMaterialType);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoaderBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULoaderBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4ULoader"), NO_API) \
	DECLARE_SERIALIZER(ULoaderBPFunctionLibrary)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_INCLASS \
private: \
	static void StaticRegisterNativesULoaderBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULoaderBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4ULoader"), NO_API) \
	DECLARE_SERIALIZER(ULoaderBPFunctionLibrary)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoaderBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoaderBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoaderBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoaderBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoaderBPFunctionLibrary(ULoaderBPFunctionLibrary&&); \
	NO_API ULoaderBPFunctionLibrary(const ULoaderBPFunctionLibrary&); \
public:


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoaderBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoaderBPFunctionLibrary(ULoaderBPFunctionLibrary&&); \
	NO_API ULoaderBPFunctionLibrary(const ULoaderBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoaderBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoaderBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoaderBPFunctionLibrary)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_78_PROLOG
#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_RPC_WRAPPERS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_INCLASS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4ULOADER_API UClass* StaticClass<class ULoaderBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h


#define FOREACH_ENUM_EPATHTYPE(op) \
	op(EPathType::Absolute) \
	op(EPathType::Relative) 

enum class EPathType : uint8;
template<> VRM4ULOADER_API UEnum* StaticEnum<EPathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
