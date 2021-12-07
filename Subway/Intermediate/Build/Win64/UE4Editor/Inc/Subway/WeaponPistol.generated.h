// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_WeaponPistol_generated_h
#error "WeaponPistol.generated.h already included, missing '#pragma once' in WeaponPistol.h"
#endif
#define SUBWAY_WeaponPistol_generated_h

#define Subway_Source_Subway_Public_WeaponPistol_h_12_SPARSE_DATA
#define Subway_Source_Subway_Public_WeaponPistol_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execFire);


#define Subway_Source_Subway_Public_WeaponPistol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execFire);


#define Subway_Source_Subway_Public_WeaponPistol_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponPistol(); \
	friend struct Z_Construct_UClass_AWeaponPistol_Statics; \
public: \
	DECLARE_CLASS(AWeaponPistol, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPistol)


#define Subway_Source_Subway_Public_WeaponPistol_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponPistol(); \
	friend struct Z_Construct_UClass_AWeaponPistol_Statics; \
public: \
	DECLARE_CLASS(AWeaponPistol, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPistol)


#define Subway_Source_Subway_Public_WeaponPistol_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponPistol(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponPistol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPistol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPistol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPistol(AWeaponPistol&&); \
	NO_API AWeaponPistol(const AWeaponPistol&); \
public:


#define Subway_Source_Subway_Public_WeaponPistol_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPistol(AWeaponPistol&&); \
	NO_API AWeaponPistol(const AWeaponPistol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPistol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPistol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponPistol)


#define Subway_Source_Subway_Public_WeaponPistol_h_12_PRIVATE_PROPERTY_OFFSET
#define Subway_Source_Subway_Public_WeaponPistol_h_9_PROLOG
#define Subway_Source_Subway_Public_WeaponPistol_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_WeaponPistol_h_12_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_WeaponPistol_h_12_SPARSE_DATA \
	Subway_Source_Subway_Public_WeaponPistol_h_12_RPC_WRAPPERS \
	Subway_Source_Subway_Public_WeaponPistol_h_12_INCLASS \
	Subway_Source_Subway_Public_WeaponPistol_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_WeaponPistol_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_WeaponPistol_h_12_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_WeaponPistol_h_12_SPARSE_DATA \
	Subway_Source_Subway_Public_WeaponPistol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_WeaponPistol_h_12_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_WeaponPistol_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class AWeaponPistol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_WeaponPistol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
