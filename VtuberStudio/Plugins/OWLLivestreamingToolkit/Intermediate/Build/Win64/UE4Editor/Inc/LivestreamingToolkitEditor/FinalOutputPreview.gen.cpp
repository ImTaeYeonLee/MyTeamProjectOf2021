// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkitEditor/Public/RenderTargetPreview/Asset/FinalOutputPreview.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalOutputPreview() {}
// Cross Module References
	LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UFinalOutputPreview_NoRegister();
	LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UFinalOutputPreview();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void UFinalOutputPreview::StaticRegisterNativesUFinalOutputPreview()
	{
	}
	UClass* Z_Construct_UClass_UFinalOutputPreview_NoRegister()
	{
		return UFinalOutputPreview::StaticClass();
	}
	struct Z_Construct_UClass_UFinalOutputPreview_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFinalOutputPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFinalOutputPreview_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderTargetPreview/Asset/FinalOutputPreview.h" },
		{ "ModuleRelativePath", "Public/RenderTargetPreview/Asset/FinalOutputPreview.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFinalOutputPreview_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "FinalOutputPreview" },
		{ "ModuleRelativePath", "Public/RenderTargetPreview/Asset/FinalOutputPreview.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFinalOutputPreview_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFinalOutputPreview, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFinalOutputPreview_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFinalOutputPreview_Statics::NewProp_RenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFinalOutputPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFinalOutputPreview_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFinalOutputPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFinalOutputPreview>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFinalOutputPreview_Statics::ClassParams = {
		&UFinalOutputPreview::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFinalOutputPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFinalOutputPreview_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFinalOutputPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFinalOutputPreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFinalOutputPreview()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFinalOutputPreview_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFinalOutputPreview, 1964344500);
	template<> LIVESTREAMINGTOOLKITEDITOR_API UClass* StaticClass<UFinalOutputPreview>()
	{
		return UFinalOutputPreview::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFinalOutputPreview(Z_Construct_UClass_UFinalOutputPreview, &UFinalOutputPreview::StaticClass, TEXT("/Script/LivestreamingToolkitEditor"), TEXT("UFinalOutputPreview"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFinalOutputPreview);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
