// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/Tools/OWLWatermark.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLWatermark() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void UOWLWatermark::StaticRegisterNativesUOWLWatermark()
	{
	}
	UClass* Z_Construct_UClass_UOWLWatermark_NoRegister()
	{
		return UOWLWatermark::StaticClass();
	}
	struct Z_Construct_UClass_UOWLWatermark_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLWatermark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLWatermark_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tools/OWLWatermark.h" },
		{ "ModuleRelativePath", "Public/Tools/OWLWatermark.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/OWLWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWLWatermark, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLWatermark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLWatermark_Statics::NewProp_TextureTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLWatermark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLWatermark>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWLWatermark_Statics::ClassParams = {
		&UOWLWatermark::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLWatermark_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLWatermark_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLWatermark_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLWatermark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLWatermark()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWLWatermark_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWLWatermark, 2480257359);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLWatermark>()
	{
		return UOWLWatermark::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWLWatermark(Z_Construct_UClass_UOWLWatermark, &UOWLWatermark::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("UOWLWatermark"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLWatermark);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
