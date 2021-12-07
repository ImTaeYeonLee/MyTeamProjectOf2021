// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_SoundMeterCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_SoundMeterCube() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_SoundMeterCube_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_SoundMeterCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
// End Cross Module References
	void ATY_SoundMeterCube::StaticRegisterNativesATY_SoundMeterCube()
	{
	}
	UClass* Z_Construct_UClass_ATY_SoundMeterCube_NoRegister()
	{
		return ATY_SoundMeterCube::StaticClass();
	}
	struct Z_Construct_UClass_ATY_SoundMeterCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_SoundMeterCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_SoundMeterCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TY_SoundMeterCube.h" },
		{ "ModuleRelativePath", "Public/TY_SoundMeterCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_SoundMeterCube.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_SoundMeterCube, speed), METADATA_PARAMS(Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_lifeSpan_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_SoundMeterCube.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_lifeSpan = { "lifeSpan", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_SoundMeterCube, lifeSpan), METADATA_PARAMS(Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_lifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_lifeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATY_SoundMeterCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_SoundMeterCube_Statics::NewProp_lifeSpan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_SoundMeterCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_SoundMeterCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_SoundMeterCube_Statics::ClassParams = {
		&ATY_SoundMeterCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATY_SoundMeterCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATY_SoundMeterCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_SoundMeterCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_SoundMeterCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_SoundMeterCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_SoundMeterCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_SoundMeterCube, 3882792710);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_SoundMeterCube>()
	{
		return ATY_SoundMeterCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_SoundMeterCube(Z_Construct_UClass_ATY_SoundMeterCube, &ATY_SoundMeterCube::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_SoundMeterCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_SoundMeterCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
