// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/GunTargetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunTargetActor() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AGunTargetActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AGunTargetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AGunTargetActor::StaticRegisterNativesAGunTargetActor()
	{
	}
	UClass* Z_Construct_UClass_AGunTargetActor_NoRegister()
	{
		return AGunTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_AGunTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_returnDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_returnDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTime;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunTargetActor.h" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "TargetMesh" },
		{ "Comment", "// StaticMesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
		{ "ToolTip", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunTargetActor, Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "TargetMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunTargetActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_returnDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
		{ "ToolTip", "?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_returnDelayTime = { "returnDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunTargetActor, returnDelayTime), METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_returnDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_returnDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunTargetActor, currentTime), METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
	};
#endif
	void Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor_SetBit(void* Obj)
	{
		((AGunTargetActor*)Obj)->OpenDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor = { "OpenDoor", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGunTargetActor), &Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
	};
#endif
	void Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open_SetBit(void* Obj)
	{
		((AGunTargetActor*)Obj)->Open = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open = { "Open", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGunTargetActor), &Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunTargetActor_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Rotator" },
		{ "ModuleRelativePath", "Public/GunTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGunTargetActor_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunTargetActor, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::NewProp_TargetRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_returnDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_OpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_Open,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunTargetActor_Statics::NewProp_TargetRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunTargetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunTargetActor_Statics::ClassParams = {
		&AGunTargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunTargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunTargetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunTargetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunTargetActor, 298012119);
	template<> SUBWAY_API UClass* StaticClass<AGunTargetActor>()
	{
		return AGunTargetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunTargetActor(Z_Construct_UClass_AGunTargetActor, &AGunTargetActor::StaticClass, TEXT("/Script/Subway"), TEXT("AGunTargetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunTargetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
