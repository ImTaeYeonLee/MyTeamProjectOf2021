// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkitEditor/Public/RenderTargetPreview/Asset/FinalOutputPreviewFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalOutputPreviewFactory() {}
// Cross Module References
	LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UFinalOutputPreviewFactory_NoRegister();
	LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UFinalOutputPreviewFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// End Cross Module References
	void UFinalOutputPreviewFactory::StaticRegisterNativesUFinalOutputPreviewFactory()
	{
	}
	UClass* Z_Construct_UClass_UFinalOutputPreviewFactory_NoRegister()
	{
		return UFinalOutputPreviewFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFinalOutputPreviewFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderTargetPreview/Asset/FinalOutputPreviewFactory.h" },
		{ "ModuleRelativePath", "Public/RenderTargetPreview/Asset/FinalOutputPreviewFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFinalOutputPreviewFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::ClassParams = {
		&UFinalOutputPreviewFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFinalOutputPreviewFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFinalOutputPreviewFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFinalOutputPreviewFactory, 1431582500);
	template<> LIVESTREAMINGTOOLKITEDITOR_API UClass* StaticClass<UFinalOutputPreviewFactory>()
	{
		return UFinalOutputPreviewFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFinalOutputPreviewFactory(Z_Construct_UClass_UFinalOutputPreviewFactory, &UFinalOutputPreviewFactory::StaticClass, TEXT("/Script/LivestreamingToolkitEditor"), TEXT("UFinalOutputPreviewFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFinalOutputPreviewFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
