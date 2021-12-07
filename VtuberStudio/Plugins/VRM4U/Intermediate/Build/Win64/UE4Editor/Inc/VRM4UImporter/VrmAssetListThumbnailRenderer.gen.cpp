// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VrmAssetListThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAssetListThumbnailRenderer() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister();
// End Cross Module References
	void UVrmAssetListThumbnailRenderer::StaticRegisterNativesUVrmAssetListThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer_NoRegister()
	{
		return UVrmAssetListThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshThumbnail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmAssetListThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/VrmAssetListThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail_MetaData[] = {
		{ "Comment", "//void DrawGrid(int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas);\n" },
		{ "ModuleRelativePath", "Private/VrmAssetListThumbnailRenderer.h" },
		{ "ToolTip", "void DrawGrid(int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail = { "meshThumbnail", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAssetListThumbnailRenderer, meshThumbnail), Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAssetListThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::ClassParams = {
		&UVrmAssetListThumbnailRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmAssetListThumbnailRenderer, 155894494);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UVrmAssetListThumbnailRenderer>()
	{
		return UVrmAssetListThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmAssetListThumbnailRenderer(Z_Construct_UClass_UVrmAssetListThumbnailRenderer, &UVrmAssetListThumbnailRenderer::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UVrmAssetListThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAssetListThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
