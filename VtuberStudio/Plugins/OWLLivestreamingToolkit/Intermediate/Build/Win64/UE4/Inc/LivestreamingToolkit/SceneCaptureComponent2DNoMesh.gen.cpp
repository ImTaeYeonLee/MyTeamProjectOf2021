// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/InstantCamera/SceneCaptureComponent2DNoMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent2DNoMesh() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_USceneCaptureComponent2DNoMesh_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_USceneCaptureComponent2DNoMesh();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	void USceneCaptureComponent2DNoMesh::StaticRegisterNativesUSceneCaptureComponent2DNoMesh()
	{
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent2DNoMesh_NoRegister()
	{
		return USceneCaptureComponent2DNoMesh::StaticClass();
	}
	struct Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "InstantCamera/SceneCaptureComponent2DNoMesh.h" },
		{ "ModuleRelativePath", "Public/InstantCamera/SceneCaptureComponent2DNoMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponent2DNoMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::ClassParams = {
		&USceneCaptureComponent2DNoMesh::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCaptureComponent2DNoMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneCaptureComponent2DNoMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneCaptureComponent2DNoMesh, 2119793535);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<USceneCaptureComponent2DNoMesh>()
	{
		return USceneCaptureComponent2DNoMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponent2DNoMesh(Z_Construct_UClass_USceneCaptureComponent2DNoMesh, &USceneCaptureComponent2DNoMesh::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("USceneCaptureComponent2DNoMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent2DNoMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
