// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmImportMaterialSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmImportMaterialSet() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UVrmImportMaterialSet::StaticRegisterNativesUVrmImportMaterialSet()
	{
	}
	UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister()
	{
		return UVrmImportMaterialSet::StaticClass();
	}
	struct Z_Construct_UClass_UVrmImportMaterialSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opaque_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Opaque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueTwoSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translucent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Translucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentTwoSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentTwoSided;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmImportMaterialSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmImportMaterialSet.h" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque = { "Opaque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportMaterialSet, Opaque), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided = { "OpaqueTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportMaterialSet, OpaqueTwoSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent = { "Translucent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportMaterialSet, Translucent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided = { "TranslucentTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmImportMaterialSet, TranslucentTwoSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmImportMaterialSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmImportMaterialSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::ClassParams = {
		&UVrmImportMaterialSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmImportMaterialSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmImportMaterialSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmImportMaterialSet, 2151519379);
	template<> VRM4U_API UClass* StaticClass<UVrmImportMaterialSet>()
	{
		return UVrmImportMaterialSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmImportMaterialSet(Z_Construct_UClass_UVrmImportMaterialSet, &UVrmImportMaterialSet::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmImportMaterialSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmImportMaterialSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
