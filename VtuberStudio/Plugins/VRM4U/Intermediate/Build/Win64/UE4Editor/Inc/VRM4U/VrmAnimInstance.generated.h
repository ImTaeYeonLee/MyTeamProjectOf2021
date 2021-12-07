// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UVrmMetaObject;
enum class EVRMBlendShapeGroup : uint8;
#ifdef VRM4U_VrmAnimInstance_generated_h
#error "VrmAnimInstance.generated.h already included, missing '#pragma once' in VrmAnimInstance.h"
#endif
#define VRM4U_VrmAnimInstance_generated_h

#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FVrmAnimInstanceProxy>();

#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_SPARSE_DATA
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVrmData); \
	DECLARE_FUNCTION(execSetMorphTargetVRM);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVrmData); \
	DECLARE_FUNCTION(execSetMorphTargetVRM);


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmAnimInstance(); \
	friend struct Z_Construct_UClass_UVrmAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UVrmAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmAnimInstance)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUVrmAnimInstance(); \
	friend struct Z_Construct_UClass_UVrmAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UVrmAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmAnimInstance)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmAnimInstance(UVrmAnimInstance&&); \
	NO_API UVrmAnimInstance(const UVrmAnimInstance&); \
public:


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmAnimInstance(UVrmAnimInstance&&); \
	NO_API UVrmAnimInstance(const UVrmAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstance)


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_PRIVATE_PROPERTY_OFFSET
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_67_PROLOG
#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_RPC_WRAPPERS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_INCLASS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_PRIVATE_PROPERTY_OFFSET \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_SPARSE_DATA \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_INCLASS_NO_PURE_DECLS \
	VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmAnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h


#define FOREACH_ENUM_EVRMBLENDSHAPEGROUP(op) \
	op(EVRMBlendShapeGroup::BSG_Neutoral) \
	op(EVRMBlendShapeGroup::BSG_A) \
	op(EVRMBlendShapeGroup::BSG_I) \
	op(EVRMBlendShapeGroup::BSG_U) \
	op(EVRMBlendShapeGroup::BSG_E) \
	op(EVRMBlendShapeGroup::BSG_O) \
	op(EVRMBlendShapeGroup::BSG_Blink) \
	op(EVRMBlendShapeGroup::BSG_Joy) \
	op(EVRMBlendShapeGroup::BSG_Angry) \
	op(EVRMBlendShapeGroup::BSG_Sorrow) \
	op(EVRMBlendShapeGroup::BSG_Fun) \
	op(EVRMBlendShapeGroup::BSG_LookUp) \
	op(EVRMBlendShapeGroup::BSG_LookDown) \
	op(EVRMBlendShapeGroup::BSG_LookLeft) \
	op(EVRMBlendShapeGroup::BSG_LookRight) \
	op(EVRMBlendShapeGroup::BSG_Blink_L) \
	op(EVRMBlendShapeGroup::BSG_Blink_R) \
	op(EVRMBlendShapeGroup::Num) 

enum class EVRMBlendShapeGroup : uint8;
template<> VRM4U_API UEnum* StaticEnum<EVRMBlendShapeGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
