// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/DoorOpenActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorOpenActor() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_ADoorOpenActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ADoorOpenActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ADoorOpenActor::StaticRegisterNativesADoorOpenActor()
	{
	}
	UClass* Z_Construct_UClass_ADoorOpenActor_NoRegister()
	{
		return ADoorOpenActor::StaticClass();
	}
	struct Z_Construct_UClass_ADoorOpenActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LDoorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LDoorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RDoorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RDoorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenDoor_MetaData[];
#endif
		static void NewProp_OpenDoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Open_MetaData[];
#endif
		static void NewProp_Open_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Open;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LDoorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LDoorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RDoorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RDoorRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorOpenActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorOpenActor.h" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_MainMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_MainMesh = { "MainMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorOpenActor, MainMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_MainMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_MainMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorMesh = { "LDoorMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorOpenActor, LDoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorMesh = { "RDoorMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorOpenActor, RDoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	void Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor_SetBit(void* Obj)
	{
		((ADoorOpenActor*)Obj)->OpenDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor = { "OpenDoor", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoorOpenActor), &Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	void Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open_SetBit(void* Obj)
	{
		((ADoorOpenActor*)Obj)->Open = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open = { "Open", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoorOpenActor), &Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_DoorRotation_MetaData[] = {
		{ "Category", "Rotator" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_DoorRotation = { "DoorRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorOpenActor, DoorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_DoorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_DoorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorRotation_MetaData[] = {
		{ "Category", "Rotator" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorRotation = { "LDoorRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorOpenActor, LDoorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorRotation_MetaData[] = {
		{ "Category", "Rotator" },
		{ "ModuleRelativePath", "Public/DoorOpenActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorRotation = { "RDoorRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorOpenActor, RDoorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorOpenActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_MainMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_OpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_Open,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_DoorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_LDoorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorOpenActor_Statics::NewProp_RDoorRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorOpenActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorOpenActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorOpenActor_Statics::ClassParams = {
		&ADoorOpenActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorOpenActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorOpenActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorOpenActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorOpenActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorOpenActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorOpenActor, 3988590926);
	template<> SUBWAY_API UClass* StaticClass<ADoorOpenActor>()
	{
		return ADoorOpenActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorOpenActor(Z_Construct_UClass_ADoorOpenActor, &ADoorOpenActor::StaticClass, TEXT("/Script/Subway"), TEXT("ADoorOpenActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorOpenActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
