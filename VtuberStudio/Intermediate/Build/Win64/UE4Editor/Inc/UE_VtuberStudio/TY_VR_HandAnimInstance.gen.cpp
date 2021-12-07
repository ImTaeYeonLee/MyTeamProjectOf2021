// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_VR_HandAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_VR_HandAnimInstance() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_HandAnimInstance_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_HandAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
// End Cross Module References
	void UTY_VR_HandAnimInstance::StaticRegisterNativesUTY_VR_HandAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTY_VR_HandAnimInstance_NoRegister()
	{
		return UTY_VR_HandAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics
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
	UObject* (*const Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TY_VR_HandAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TY_VR_HandAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::NewProp_gripValue_MetaData[] = {
		{ "Category", "AnimSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_HandAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::NewProp_gripValue = { "gripValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_HandAnimInstance, gripValue), METADATA_PARAMS(Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::NewProp_gripValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::NewProp_gripValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::NewProp_gripValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_VR_HandAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::ClassParams = {
		&UTY_VR_HandAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_VR_HandAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_VR_HandAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_VR_HandAnimInstance, 361963926);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_VR_HandAnimInstance>()
	{
		return UTY_VR_HandAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_VR_HandAnimInstance(Z_Construct_UClass_UTY_VR_HandAnimInstance, &UTY_VR_HandAnimInstance::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_VR_HandAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_VR_HandAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
