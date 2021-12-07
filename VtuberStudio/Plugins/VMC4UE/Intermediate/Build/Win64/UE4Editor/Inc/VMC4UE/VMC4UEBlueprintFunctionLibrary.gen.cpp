// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/VMC4UEBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEBlueprintFunctionLibrary() {}
// Cross Module References
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_NoRegister();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
// End Cross Module References
	DEFINE_FUNCTION(UVMC4UEBlueprintFunctionLibrary::execRefreshConnection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVMC4UEBlueprintFunctionLibrary::RefreshConnection(Z_Param_Seconds);
		P_NATIVE_END;
	}
	void UVMC4UEBlueprintFunctionLibrary::StaticRegisterNativesUVMC4UEBlueprintFunctionLibrary()
	{
		UClass* Class = UVMC4UEBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshConnection", &UVMC4UEBlueprintFunctionLibrary::execRefreshConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics
	{
		struct VMC4UEBlueprintFunctionLibrary_eventRefreshConnection_Parms
		{
			float Seconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventRefreshConnection_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, nullptr, "RefreshConnection", nullptr, nullptr, sizeof(VMC4UEBlueprintFunctionLibrary_eventRefreshConnection_Parms), Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_NoRegister()
	{
		return UVMC4UEBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_RefreshConnection, "RefreshConnection" }, // 3484889210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::ClassParams = {
		&UVMC4UEBlueprintFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEBlueprintFunctionLibrary, 3896838855);
	template<> VMC4UE_API UClass* StaticClass<UVMC4UEBlueprintFunctionLibrary>()
	{
		return UVMC4UEBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEBlueprintFunctionLibrary(Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, &UVMC4UEBlueprintFunctionLibrary::StaticClass, TEXT("/Script/VMC4UE"), TEXT("UVMC4UEBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
