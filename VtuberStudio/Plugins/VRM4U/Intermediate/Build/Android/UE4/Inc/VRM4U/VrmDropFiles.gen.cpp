// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmDropFiles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmDropFiles() {}
// Cross Module References
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature();
	VRM4U_API UClass* Z_Construct_UClass_UVrmDropFilesComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmDropFilesComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics
	{
		struct VrmDropFilesComponent_eventOnDropFiles_Parms
		{
			FString FileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmDropFilesComponent_eventOnDropFiles_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmDropFiles.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmDropFilesComponent, nullptr, "OnDropFiles__DelegateSignature", nullptr, nullptr, sizeof(VrmDropFilesComponent_eventOnDropFiles_Parms), Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVrmDropFilesComponent::execVRMGetOpenFileName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->VRMGetOpenFileName(Z_Param_Out_Filename);
		P_NATIVE_END;
	}
	void UVrmDropFilesComponent::StaticRegisterNativesUVrmDropFilesComponent()
	{
		UClass* Class = UVrmDropFilesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VRMGetOpenFileName", &UVrmDropFilesComponent::execVRMGetOpenFileName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics
	{
		struct VrmDropFilesComponent_eventVRMGetOpenFileName_Parms
		{
			FString Filename;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmDropFilesComponent_eventVRMGetOpenFileName_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmDropFilesComponent_eventVRMGetOpenFileName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmDropFilesComponent_eventVRMGetOpenFileName_Parms), &Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmDropFiles.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmDropFilesComponent, nullptr, "VRMGetOpenFileName", nullptr, nullptr, sizeof(VrmDropFilesComponent_eventVRMGetOpenFileName_Parms), Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmDropFilesComponent_NoRegister()
	{
		return UVrmDropFilesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmDropFilesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropFiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmDropFilesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmDropFilesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature, "OnDropFiles__DelegateSignature" }, // 1222140047
		{ &Z_Construct_UFunction_UVrmDropFilesComponent_VRMGetOpenFileName, "VRMGetOpenFileName" }, // 3472882409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmDropFilesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc). */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "VrmDropFiles.h" },
		{ "ModuleRelativePath", "Public/VrmDropFiles.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmDropFilesComponent_Statics::NewProp_OnDropFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmDropFiles.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmDropFilesComponent_Statics::NewProp_OnDropFiles = { "OnDropFiles", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmDropFilesComponent, OnDropFiles), Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmDropFilesComponent_Statics::NewProp_OnDropFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDropFilesComponent_Statics::NewProp_OnDropFiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmDropFilesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmDropFilesComponent_Statics::NewProp_OnDropFiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmDropFilesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmDropFilesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmDropFilesComponent_Statics::ClassParams = {
		&UVrmDropFilesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmDropFilesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDropFilesComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmDropFilesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDropFilesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmDropFilesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmDropFilesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmDropFilesComponent, 2254519488);
	template<> VRM4U_API UClass* StaticClass<UVrmDropFilesComponent>()
	{
		return UVrmDropFilesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmDropFilesComponent(Z_Construct_UClass_UVrmDropFilesComponent, &UVrmDropFilesComponent::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmDropFilesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmDropFilesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
