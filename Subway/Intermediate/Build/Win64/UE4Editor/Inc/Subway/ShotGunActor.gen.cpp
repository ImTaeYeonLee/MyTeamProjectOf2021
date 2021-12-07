// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/ShotGunActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotGunActor() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AShotGunActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AShotGunActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	void AShotGunActor::StaticRegisterNativesAShotGunActor()
	{
	}
	UClass* Z_Construct_UClass_AShotGunActor_NoRegister()
	{
		return AShotGunActor::StaticClass();
	}
	struct Z_Construct_UClass_AShotGunActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_magComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gripComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gripComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftgrabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftgrabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotGunActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShotGunActor.h" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "// Called every frame\n//virtual void Tick(float DeltaTime) override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_magComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_magComp = { "magComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, magComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_magComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_magComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_gripComp_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_gripComp = { "gripComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, gripComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_gripComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_gripComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "// ???\xcf\xbf? ?????? Offset ???? ????\n" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
		{ "ToolTip", "???\xcf\xbf? ?????? Offset ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_leftgrabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_leftgrabOffset = { "leftgrabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, leftgrabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_leftgrabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_leftgrabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotGunActor_Statics::NewProp_shotgun_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShotGunActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShotGunActor_Statics::NewProp_shotgun = { "shotgun", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotGunActor, shotgun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::NewProp_shotgun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::NewProp_shotgun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotGunActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_magComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_gripComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_leftgrabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotGunActor_Statics::NewProp_shotgun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotGunActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotGunActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShotGunActor_Statics::ClassParams = {
		&AShotGunActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShotGunActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShotGunActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShotGunActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotGunActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShotGunActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShotGunActor, 3227120069);
	template<> SUBWAY_API UClass* StaticClass<AShotGunActor>()
	{
		return AShotGunActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShotGunActor(Z_Construct_UClass_AShotGunActor, &AShotGunActor::StaticClass, TEXT("/Script/Subway"), TEXT("AShotGunActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotGunActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
