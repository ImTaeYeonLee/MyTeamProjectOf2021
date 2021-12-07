// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmSkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSkeletalMeshComponent() {}
// Cross Module References
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent_NoRegister();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
// End Cross Module References
	void UVrmSkeletalMeshComponent::StaticRegisterNativesUVrmSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent_NoRegister()
	{
		return UVrmSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///UCLASS(meta=(BlueprintSpawnableComponent))\n" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "VrmSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VrmSkeletalMeshComponent.h" },
		{ "ToolTip", "//UCLASS(meta=(BlueprintSpawnableComponent))" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::ClassParams = {
		&UVrmSkeletalMeshComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmSkeletalMeshComponent, 1303712663);
	template<> VRM4ULOADER_API UClass* StaticClass<UVrmSkeletalMeshComponent>()
	{
		return UVrmSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmSkeletalMeshComponent(Z_Construct_UClass_UVrmSkeletalMeshComponent, &UVrmSkeletalMeshComponent::StaticClass, TEXT("/Script/VRM4ULoader"), TEXT("UVrmSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
