// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/WeaponPistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPistol() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponPistol_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponPistol();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponPistol::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponPistol::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void AWeaponPistol::StaticRegisterNativesAWeaponPistol()
	{
		UClass* Class = AWeaponPistol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AWeaponPistol::execFire },
			{ "Reload", &AWeaponPistol::execReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponPistol_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponPistol_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponPistol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPistol_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPistol, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponPistol_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPistol_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponPistol_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponPistol_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponPistol_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponPistol_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponPistol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPistol_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPistol, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponPistol_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPistol_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponPistol_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponPistol_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponPistol_NoRegister()
	{
		return AWeaponPistol::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponPistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFire_MetaData[];
#endif
		static void NewProp_isFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponPistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponPistol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponPistol_Fire, "Fire" }, // 768475866
		{ &Z_Construct_UFunction_AWeaponPistol_Reload, "Reload" }, // 441968022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPistol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponPistol.h" },
		{ "ModuleRelativePath", "Public/WeaponPistol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire_MetaData[] = {
		{ "Category", "WeaponPistol" },
		{ "ModuleRelativePath", "Public/WeaponPistol.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire_SetBit(void* Obj)
	{
		((AWeaponPistol*)Obj)->isFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire = { "isFire", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponPistol), &Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPistol_Statics::NewProp_HitResults_MetaData[] = {
		{ "Category", "WeaponPistol" },
		{ "ModuleRelativePath", "Public/WeaponPistol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponPistol_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPistol, HitResults), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AWeaponPistol_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPistol_Statics::NewProp_HitResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPistol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPistol_Statics::NewProp_isFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPistol_Statics::NewProp_HitResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponPistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPistol_Statics::ClassParams = {
		&AWeaponPistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponPistol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPistol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponPistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponPistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponPistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponPistol, 1043953246);
	template<> SUBWAY_API UClass* StaticClass<AWeaponPistol>()
	{
		return AWeaponPistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponPistol(Z_Construct_UClass_AWeaponPistol, &AWeaponPistol::StaticClass, TEXT("/Script/Subway"), TEXT("AWeaponPistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
