// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/Features/ViewportSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportSettings() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	DEFINE_FUNCTION(UViewportSettings::execOnPostPIEStarted)
	{
		P_GET_UBOOL(Z_Param_isSimulating);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportSettings::OnPostPIEStarted(Z_Param_isSimulating);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportSettings::execBindEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportSettings::BindEvents();
		P_NATIVE_END;
	}
	void UViewportSettings::StaticRegisterNativesUViewportSettings()
	{
		UClass* Class = UViewportSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindEvents", &UViewportSettings::execBindEvents },
			{ "OnPostPIEStarted", &UViewportSettings::execOnPostPIEStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportSettings_BindEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportSettings, nullptr, "BindEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportSettings_BindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics
	{
		struct ViewportSettings_eventOnPostPIEStarted_Parms
		{
			bool isSimulating;
		};
		static void NewProp_isSimulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSimulating;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating_SetBit(void* Obj)
	{
		((ViewportSettings_eventOnPostPIEStarted_Parms*)Obj)->isSimulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating = { "isSimulating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportSettings_eventOnPostPIEStarted_Parms), &Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportSettings, nullptr, "OnPostPIEStarted", nullptr, nullptr, sizeof(ViewportSettings_eventOnPostPIEStarted_Parms), Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UViewportSettings_NoRegister()
	{
		return UViewportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UViewportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportSettings_BindEvents, "BindEvents" }, // 2406605843
		{ &Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted, "OnPostPIEStarted" }, // 1430014219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Features/ViewportSettings.h" },
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportSettings_Statics::ClassParams = {
		&UViewportSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportSettings, 221252047);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UViewportSettings>()
	{
		return UViewportSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportSettings(Z_Construct_UClass_UViewportSettings, &UViewportSettings::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("UViewportSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
