// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCameraCheckComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCameraCheckComponent() {}
// Cross Module References
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCameraCheckComponent, nullptr, "VrmCameraCheckDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVrmCameraCheckComponent::execSetCameraCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	void UVrmCameraCheckComponent::StaticRegisterNativesUVrmCameraCheckComponent()
	{
		UClass* Class = UVrmCameraCheckComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCameraCheck", &UVrmCameraCheckComponent::execSetCameraCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics
	{
		struct VrmCameraCheckComponent_eventSetCameraCheck_Parms
		{
			bool bCheckOn;
		};
		static void NewProp_bCheckOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmCameraCheckComponent_eventSetCameraCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmCameraCheckComponent_eventSetCameraCheck_Parms), &Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCameraCheckComponent, nullptr, "SetCameraCheck", nullptr, nullptr, sizeof(VrmCameraCheckComponent_eventSetCameraCheck_Parms), Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister()
	{
		return UVrmCameraCheckComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCameraMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmCameraCheckComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmCameraCheckComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck, "SetCameraCheck" }, // 163842498
		{ &Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature, "VrmCameraCheckDelegate__DelegateSignature" }, // 3083234042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmCameraCheckComponent.h" },
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove = { "OnCameraMove", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmCameraCheckComponent, OnCameraMove), Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmCameraCheckComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCameraCheckComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmCameraCheckComponent_Statics::ClassParams = {
		&UVrmCameraCheckComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmCameraCheckComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmCameraCheckComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmCameraCheckComponent, 3363697787);
	template<> VRM4U_API UClass* StaticClass<UVrmCameraCheckComponent>()
	{
		return UVrmCameraCheckComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmCameraCheckComponent(Z_Construct_UClass_UVrmCameraCheckComponent, &UVrmCameraCheckComponent::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmCameraCheckComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCameraCheckComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
