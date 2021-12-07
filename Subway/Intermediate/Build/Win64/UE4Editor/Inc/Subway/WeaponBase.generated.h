// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define SUBWAY_WeaponBase_generated_h

#define Subway_Source_Subway_Public_WeaponBase_h_13_SPARSE_DATA
#define Subway_Source_Subway_Public_WeaponBase_h_13_RPC_WRAPPERS
#define Subway_Source_Subway_Public_WeaponBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Subway_Source_Subway_Public_WeaponBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define Subway_Source_Subway_Public_WeaponBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define Subway_Source_Subway_Public_WeaponBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define Subway_Source_Subway_Public_WeaponBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define Subway_Source_Subway_Public_WeaponBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__FireAnimation() { return STRUCT_OFFSET(AWeaponBase, FireAnimation); } \
	FORCEINLINE static uint32 __PPO__ReloadAnimation() { return STRUCT_OFFSET(AWeaponBase, ReloadAnimation); } \
	FORCEINLINE static uint32 __PPO__WeaponName() { return STRUCT_OFFSET(AWeaponBase, WeaponName); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AWeaponBase, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__WeaponMaxAmmo() { return STRUCT_OFFSET(AWeaponBase, WeaponMaxAmmo); } \
	FORCEINLINE static uint32 __PPO__CurrentTotalAmmo() { return STRUCT_OFFSET(AWeaponBase, CurrentTotalAmmo); }


#define Subway_Source_Subway_Public_WeaponBase_h_10_PROLOG
#define Subway_Source_Subway_Public_WeaponBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_WeaponBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_WeaponBase_h_13_SPARSE_DATA \
	Subway_Source_Subway_Public_WeaponBase_h_13_RPC_WRAPPERS \
	Subway_Source_Subway_Public_WeaponBase_h_13_INCLASS \
	Subway_Source_Subway_Public_WeaponBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_WeaponBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_WeaponBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_WeaponBase_h_13_SPARSE_DATA \
	Subway_Source_Subway_Public_WeaponBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_WeaponBase_h_13_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_WeaponBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
