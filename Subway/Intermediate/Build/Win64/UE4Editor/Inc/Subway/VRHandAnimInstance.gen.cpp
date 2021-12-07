// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/VRHandAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRHandAnimInstance() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UVRHandAnimInstance_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UVRHandAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void UVRHandAnimInstance::StaticRegisterNativesUVRHandAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UVRHandAnimInstance_NoRegister()
	{
		return UVRHandAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVRHandAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gripValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gripValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRHandAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRHandAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VRHandAnimInstance.h" },
		{ "ModuleRelativePath", "Public/VRHandAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRHandAnimInstance_Statics::NewProp_gripValue_MetaData[] = {
		{ "Category", "AnimSettings" },
		{ "ModuleRelativePath", "Public/VRHandAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRHandAnimInstance_Statics::NewProp_gripValue = { "gripValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRHandAnimInstance, gripValue), METADATA_PARAMS(Z_Construct_UClass_UVRHandAnimInstance_Statics::NewProp_gripValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRHandAnimInstance_Statics::NewProp_gripValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRHandAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRHandAnimInstance_Statics::NewProp_gripValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRHandAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRHandAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRHandAnimInstance_Statics::ClassParams = {
		&UVRHandAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRHandAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRHandAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVRHandAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRHandAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRHandAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRHandAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRHandAnimInstance, 2390245558);
	template<> SUBWAY_API UClass* StaticClass<UVRHandAnimInstance>()
	{
		return UVRHandAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRHandAnimInstance(Z_Construct_UClass_UVRHandAnimInstance, &UVRHandAnimInstance::StaticClass, TEXT("/Script/Subway"), TEXT("UVRHandAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRHandAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
