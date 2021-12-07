// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBWAY_FPSPlayer_generated_h
#error "FPSPlayer.generated.h already included, missing '#pragma once' in FPSPlayer.h"
#endif
#define SUBWAY_FPSPlayer_generated_h

#define Subway_Source_Subway_Public_FPSPlayer_h_10_DELEGATE \
struct _Script_Subway_eventAmmoChanged_Parms \
{ \
	int32 CurrantAmmo; \
	int32 MagazineAmmo; \
}; \
static inline void FAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& AmmoChanged, int32 CurrantAmmo, int32 MagazineAmmo) \
{ \
	_Script_Subway_eventAmmoChanged_Parms Parms; \
	Parms.CurrantAmmo=CurrantAmmo; \
	Parms.MagazineAmmo=MagazineAmmo; \
	AmmoChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Subway_Source_Subway_Public_FPSPlayer_h_15_SPARSE_DATA
#define Subway_Source_Subway_Public_FPSPlayer_h_15_RPC_WRAPPERS
#define Subway_Source_Subway_Public_FPSPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Subway_Source_Subway_Public_FPSPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayer(); \
	friend struct Z_Construct_UClass_AFPSPlayer_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayer)


#define Subway_Source_Subway_Public_FPSPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayer(); \
	friend struct Z_Construct_UClass_AFPSPlayer_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Subway"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayer)


#define Subway_Source_Subway_Public_FPSPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayer(AFPSPlayer&&); \
	NO_API AFPSPlayer(const AFPSPlayer&); \
public:


#define Subway_Source_Subway_Public_FPSPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayer(AFPSPlayer&&); \
	NO_API AFPSPlayer(const AFPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayer)


#define Subway_Source_Subway_Public_FPSPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnAmmoChanged() { return STRUCT_OFFSET(AFPSPlayer, OnAmmoChanged); } \
	FORCEINLINE static uint32 __PPO__StartingWeaponClass() { return STRUCT_OFFSET(AFPSPlayer, StartingWeaponClass); }


#define Subway_Source_Subway_Public_FPSPlayer_h_12_PROLOG
#define Subway_Source_Subway_Public_FPSPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_FPSPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_FPSPlayer_h_15_SPARSE_DATA \
	Subway_Source_Subway_Public_FPSPlayer_h_15_RPC_WRAPPERS \
	Subway_Source_Subway_Public_FPSPlayer_h_15_INCLASS \
	Subway_Source_Subway_Public_FPSPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Subway_Source_Subway_Public_FPSPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Subway_Source_Subway_Public_FPSPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	Subway_Source_Subway_Public_FPSPlayer_h_15_SPARSE_DATA \
	Subway_Source_Subway_Public_FPSPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_FPSPlayer_h_15_INCLASS_NO_PURE_DECLS \
	Subway_Source_Subway_Public_FPSPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBWAY_API UClass* StaticClass<class AFPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Subway_Source_Subway_Public_FPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
