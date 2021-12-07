// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/VMC4UEStreamingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEStreamingData() {}
// Cross Module References
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	UEOSC_API UScriptStruct* Z_Construct_UScriptStruct_FUEOSCElement();
// End Cross Module References
	DEFINE_FUNCTION(UVMC4UEStreamingSkeletalMeshTransform::execOnReceived)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Address);
		P_GET_TARRAY_REF(FUEOSCElement,Z_Param_Out_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderIp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceived(Z_Param_Out_Address,Z_Param_Out_Data,Z_Param_SenderIp);
		P_NATIVE_END;
	}
	void UVMC4UEStreamingSkeletalMeshTransform::StaticRegisterNativesUVMC4UEStreamingSkeletalMeshTransform()
	{
		UClass* Class = UVMC4UEStreamingSkeletalMeshTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReceived", &UVMC4UEStreamingSkeletalMeshTransform::execOnReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics
	{
		struct VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms
		{
			FName Address;
			TArray<FUEOSCElement> Data;
			FString SenderIp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderIp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderIp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUEOSCElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp = { "SenderIp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms, SenderIp), METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform, nullptr, "OnReceived", nullptr, nullptr, sizeof(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms), Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister()
	{
		return UVMC4UEStreamingSkeletalMeshTransform::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived, "OnReceived" }, // 4209035638
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Include/VMC4UEStreamingData.h" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEStreamingSkeletalMeshTransform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::ClassParams = {
		&UVMC4UEStreamingSkeletalMeshTransform::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEStreamingSkeletalMeshTransform, 166869430);
	template<> VMC4UE_API UClass* StaticClass<UVMC4UEStreamingSkeletalMeshTransform>()
	{
		return UVMC4UEStreamingSkeletalMeshTransform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEStreamingSkeletalMeshTransform(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform, &UVMC4UEStreamingSkeletalMeshTransform::StaticClass, TEXT("/Script/VMC4UE"), TEXT("UVMC4UEStreamingSkeletalMeshTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEStreamingSkeletalMeshTransform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
