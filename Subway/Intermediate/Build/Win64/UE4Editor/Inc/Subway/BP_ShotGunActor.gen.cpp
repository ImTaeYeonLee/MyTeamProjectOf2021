// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/BP_ShotGunActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_ShotGunActor() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_ABP_ShotGunActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ABP_ShotGunActor();
	SUBWAY_API UClass* Z_Construct_UClass_AShotGunActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void ABP_ShotGunActor::StaticRegisterNativesABP_ShotGunActor()
	{
	}
	UClass* Z_Construct_UClass_ABP_ShotGunActor_NoRegister()
	{
		return ABP_ShotGunActor::StaticClass();
	}
	struct Z_Construct_UClass_ABP_ShotGunActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_ShotGunActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShotGunActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ShotGunActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BP_ShotGunActor.h" },
		{ "ModuleRelativePath", "Public/BP_ShotGunActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_ShotGunActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_ShotGunActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_ShotGunActor_Statics::ClassParams = {
		&ABP_ShotGunActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_ShotGunActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ShotGunActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_ShotGunActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_ShotGunActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP_ShotGunActor, 3968487705);
	template<> SUBWAY_API UClass* StaticClass<ABP_ShotGunActor>()
	{
		return ABP_ShotGunActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_ShotGunActor(Z_Construct_UClass_ABP_ShotGunActor, &ABP_ShotGunActor::StaticClass, TEXT("/Script/Subway"), TEXT("ABP_ShotGunActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_ShotGunActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
