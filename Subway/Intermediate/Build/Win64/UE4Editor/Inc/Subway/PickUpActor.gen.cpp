// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/PickUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpActor() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_APickUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	void APickUpActor::StaticRegisterNativesAPickUpActor()
	{
	}
	UClass* Z_Construct_UClass_APickUpActor_NoRegister()
	{
		return APickUpActor::StaticClass();
	}
	struct Z_Construct_UClass_APickUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpActor.h" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "// ???\xcf\xbf? ?????? Offset ???? ????\n" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
		{ "ToolTip", "???\xcf\xbf? ?????? Offset ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_gun_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_gun = { "gun", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, gun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_gun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_gun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUpActor_Statics::ClassParams = {
		&APickUpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickUpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpActor, 1405988666);
	template<> SUBWAY_API UClass* StaticClass<APickUpActor>()
	{
		return APickUpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpActor(Z_Construct_UClass_APickUpActor, &APickUpActor::StaticClass, TEXT("/Script/Subway"), TEXT("APickUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
