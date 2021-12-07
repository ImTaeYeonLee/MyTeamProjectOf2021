// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/TriggerBoxBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBoxBase() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_ATriggerBoxBase_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_ATriggerBoxBase();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void ATriggerBoxBase::StaticRegisterNativesATriggerBoxBase()
	{
	}
	UClass* Z_Construct_UClass_ATriggerBoxBase_NoRegister()
	{
		return ATriggerBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openTheDoor_MetaData[];
#endif
		static void NewProp_openTheDoor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_openTheDoor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TriggerBoxBase.h" },
		{ "ModuleRelativePath", "Public/TriggerBoxBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/TriggerBoxBase.h" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor_SetBit(void* Obj)
	{
		((ATriggerBoxBase*)Obj)->openTheDoor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor = { "openTheDoor", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxBase), &Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerBoxBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxBase_Statics::NewProp_openTheDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBoxBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBoxBase_Statics::ClassParams = {
		&ATriggerBoxBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerBoxBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBoxBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerBoxBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerBoxBase, 1170256382);
	template<> SUBWAY_API UClass* StaticClass<ATriggerBoxBase>()
	{
		return ATriggerBoxBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBoxBase(Z_Construct_UClass_ATriggerBoxBase, &ATriggerBoxBase::StaticClass, TEXT("/Script/Subway"), TEXT("ATriggerBoxBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBoxBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
