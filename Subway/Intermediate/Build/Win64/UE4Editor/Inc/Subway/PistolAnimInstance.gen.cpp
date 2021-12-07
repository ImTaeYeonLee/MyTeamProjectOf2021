// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/PistolAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistolAnimInstance() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UPistolAnimInstance_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UPistolAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void UPistolAnimInstance::StaticRegisterNativesUPistolAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UPistolAnimInstance_NoRegister()
	{
		return UPistolAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPistolAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isShooting_MetaData[];
#endif
		static void NewProp_isShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isShooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isNotShooting_MetaData[];
#endif
		static void NewProp_isNotShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNotShooting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPistolAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPistolAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PistolAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PistolAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting_MetaData[] = {
		{ "Category", "test" },
		{ "ModuleRelativePath", "Public/PistolAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting_SetBit(void* Obj)
	{
		((UPistolAnimInstance*)Obj)->isShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting = { "isShooting", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPistolAnimInstance), &Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting_MetaData[] = {
		{ "Category", "test" },
		{ "ModuleRelativePath", "Public/PistolAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting_SetBit(void* Obj)
	{
		((UPistolAnimInstance*)Obj)->isNotShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting = { "isNotShooting", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPistolAnimInstance), &Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPistolAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isShooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPistolAnimInstance_Statics::NewProp_isNotShooting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPistolAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPistolAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPistolAnimInstance_Statics::ClassParams = {
		&UPistolAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPistolAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPistolAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPistolAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPistolAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPistolAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPistolAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPistolAnimInstance, 350076286);
	template<> SUBWAY_API UClass* StaticClass<UPistolAnimInstance>()
	{
		return UPistolAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPistolAnimInstance(Z_Construct_UClass_UPistolAnimInstance, &UPistolAnimInstance::StaticClass, TEXT("/Script/Subway"), TEXT("UPistolAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPistolAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
