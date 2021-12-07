// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/WeaponShotgun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponShotgun() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponShotgun_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponShotgun();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponShotgun::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponShotgun::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void AWeaponShotgun::StaticRegisterNativesAWeaponShotgun()
	{
		UClass* Class = AWeaponShotgun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AWeaponShotgun::execFire },
			{ "Reload", &AWeaponShotgun::execReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponShotgun_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponShotgun_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ????????\xc6\xae???? ?\xd2\xb7??? ?? ?\xd6\xb5??? UFUNCTION ????\n" },
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
		{ "ToolTip", "????????\xc6\xae???? ?\xd2\xb7??? ?? ?\xd6\xb5??? UFUNCTION ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponShotgun_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponShotgun, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponShotgun_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponShotgun_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponShotgun_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponShotgun_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponShotgun_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponShotgun_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponShotgun_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponShotgun, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponShotgun_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponShotgun_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponShotgun_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponShotgun_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponShotgun_NoRegister()
	{
		return AWeaponShotgun::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponShotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFire_MetaData[];
#endif
		static void NewProp_isFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_needToReroad_MetaData[];
#endif
		static void NewProp_needToReroad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_needToReroad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponShotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponShotgun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponShotgun_Fire, "Fire" }, // 1238883987
		{ &Z_Construct_UFunction_AWeaponShotgun_Reload, "Reload" }, // 3920795702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponShotgun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponShotgun.h" },
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_anim_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ?\xd6\xb4? ??\xc5\xb8?? ?????? ?\xd6\xb4\xd4\xb8?\xc5\xb8?? \xc5\xb8???? anim ???? ????\n" },
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
		{ "ToolTip", "?\xd6\xb4? ??\xc5\xb8?? ?????? ?\xd6\xb4\xd4\xb8?\xc5\xb8?? \xc5\xb8???? anim ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponShotgun, anim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire_MetaData[] = {
		{ "Category", "WeaponShotgun" },
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire_SetBit(void* Obj)
	{
		((AWeaponShotgun*)Obj)->isFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire = { "isFire", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponShotgun), &Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "WeaponShotgun" },
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponShotgun, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponShotgun.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad_SetBit(void* Obj)
	{
		((AWeaponShotgun*)Obj)->needToReroad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad = { "needToReroad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponShotgun), &Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponShotgun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_isFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponShotgun_Statics::NewProp_needToReroad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponShotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponShotgun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponShotgun_Statics::ClassParams = {
		&AWeaponShotgun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponShotgun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponShotgun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponShotgun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponShotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponShotgun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponShotgun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponShotgun, 1006876103);
	template<> SUBWAY_API UClass* StaticClass<AWeaponShotgun>()
	{
		return AWeaponShotgun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponShotgun(Z_Construct_UClass_AWeaponShotgun, &AWeaponShotgun::StaticClass, TEXT("/Script/Subway"), TEXT("AWeaponShotgun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponShotgun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
