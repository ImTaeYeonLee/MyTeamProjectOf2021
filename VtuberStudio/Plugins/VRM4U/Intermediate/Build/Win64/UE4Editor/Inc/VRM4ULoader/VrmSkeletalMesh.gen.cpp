// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmSkeletalMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSkeletalMesh() {}
// Cross Module References
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMesh_NoRegister();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
// End Cross Module References
	void UVrmSkeletalMesh::StaticRegisterNativesUVrmSkeletalMesh()
	{
	}
	UClass* Z_Construct_UClass_UVrmSkeletalMesh_NoRegister()
	{
		return UVrmSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UVrmSkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VrmSkeletalMesh.h" },
		{ "ModuleRelativePath", "Public/VrmSkeletalMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSkeletalMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmSkeletalMesh_Statics::ClassParams = {
		&UVrmSkeletalMesh::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmSkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmSkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmSkeletalMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmSkeletalMesh, 2696009530);
	template<> VRM4ULOADER_API UClass* StaticClass<UVrmSkeletalMesh>()
	{
		return UVrmSkeletalMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmSkeletalMesh(Z_Construct_UClass_UVrmSkeletalMesh, &UVrmSkeletalMesh::StaticClass, TEXT("/Script/VRM4ULoader"), TEXT("UVrmSkeletalMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSkeletalMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
