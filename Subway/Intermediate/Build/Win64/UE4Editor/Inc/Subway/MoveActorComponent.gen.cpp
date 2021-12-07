// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/MoveActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveActorComponent() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UMoveActorComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UMoveActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void UMoveActorComponent::StaticRegisterNativesUMoveActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UMoveActorComponent_NoRegister()
	{
		return UMoveActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoveActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MoveActorComponent.h" },
		{ "ModuleRelativePath", "Public/MoveActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveActorComponent_Statics::ClassParams = {
		&UMoveActorComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveActorComponent, 3541321298);
	template<> SUBWAY_API UClass* StaticClass<UMoveActorComponent>()
	{
		return UMoveActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveActorComponent(Z_Construct_UClass_UMoveActorComponent, &UMoveActorComponent::StaticClass, TEXT("/Script/Subway"), TEXT("UMoveActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
