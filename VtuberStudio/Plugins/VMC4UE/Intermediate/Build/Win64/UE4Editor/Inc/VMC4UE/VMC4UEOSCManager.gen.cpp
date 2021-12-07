// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/VMC4UEOSCManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEOSCManager() {}
// Cross Module References
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEOSCManager_NoRegister();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEOSCManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister();
	UEOSC_API UClass* Z_Construct_UClass_UUEOSCReceiver_NoRegister();
// End Cross Module References
	void UVMC4UEOSCManager::StaticRegisterNativesUVMC4UEOSCManager()
	{
	}
	UClass* Z_Construct_UClass_UVMC4UEOSCManager_NoRegister()
	{
		return UVMC4UEOSCManager::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEOSCManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamingSkeletalMeshTransformMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingSkeletalMeshTransformMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingSkeletalMeshTransformMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StreamingSkeletalMeshTransformMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OscReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OscReceivers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEOSCManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEOSCManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Include/VMC4UEOSCManager.h" },
		{ "ModuleRelativePath", "Include/VMC4UEOSCManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_ValueProp = { "StreamingSkeletalMeshTransformMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_Key_KeyProp = { "StreamingSkeletalMeshTransformMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_MetaData[] = {
		{ "ModuleRelativePath", "Include/VMC4UEOSCManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap = { "StreamingSkeletalMeshTransformMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEOSCManager, StreamingSkeletalMeshTransformMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers_Inner = { "OscReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUEOSCReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Include/VMC4UEOSCManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers = { "OscReceivers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEOSCManager, OscReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMC4UEOSCManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_StreamingSkeletalMeshTransformMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEOSCManager_Statics::NewProp_OscReceivers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEOSCManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEOSCManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEOSCManager_Statics::ClassParams = {
		&UVMC4UEOSCManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVMC4UEOSCManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEOSCManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEOSCManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEOSCManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEOSCManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEOSCManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEOSCManager, 1814341353);
	template<> VMC4UE_API UClass* StaticClass<UVMC4UEOSCManager>()
	{
		return UVMC4UEOSCManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEOSCManager(Z_Construct_UClass_UVMC4UEOSCManager, &UVMC4UEOSCManager::StaticClass, TEXT("/Script/VMC4UE"), TEXT("UVMC4UEOSCManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEOSCManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
