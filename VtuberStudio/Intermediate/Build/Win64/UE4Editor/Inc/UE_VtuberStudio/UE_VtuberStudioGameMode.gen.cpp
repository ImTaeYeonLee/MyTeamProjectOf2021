// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/UE_VtuberStudioGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_VtuberStudioGameMode() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_AUE_VtuberStudioGameMode_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_AUE_VtuberStudioGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
// End Cross Module References
	void AUE_VtuberStudioGameMode::StaticRegisterNativesAUE_VtuberStudioGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE_VtuberStudioGameMode_NoRegister()
	{
		return AUE_VtuberStudioGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE_VtuberStudioGameMode.h" },
		{ "ModuleRelativePath", "Public/UE_VtuberStudioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_VtuberStudioGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::ClassParams = {
		&AUE_VtuberStudioGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE_VtuberStudioGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE_VtuberStudioGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_VtuberStudioGameMode, 3621849090);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<AUE_VtuberStudioGameMode>()
	{
		return AUE_VtuberStudioGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_VtuberStudioGameMode(Z_Construct_UClass_AUE_VtuberStudioGameMode, &AUE_VtuberStudioGameMode::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("AUE_VtuberStudioGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_VtuberStudioGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
