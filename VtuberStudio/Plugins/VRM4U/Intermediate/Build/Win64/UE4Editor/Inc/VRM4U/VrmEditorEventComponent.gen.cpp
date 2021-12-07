// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmEditorEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmEditorEventComponent() {}
// Cross Module References
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature();
	VRM4U_API UClass* Z_Construct_UClass_UVrmEditorEventComponent();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature();
	VRM4U_API UClass* Z_Construct_UClass_UVrmEditorEventComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms
		{
			float CurrentTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::NewProp_CurrentTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmGlobalTimeChangeEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(VrmEditorEventComponent_eventVrmGlobalTimeChangeEventDelegate_Parms), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms
		{
			bool dummy;
		};
		static void NewProp_dummy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dummy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms*)Obj)->dummy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy = { "dummy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms), &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::NewProp_dummy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmSelectionObjectEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(VrmEditorEventComponent_eventVrmSelectionObjectEventDelegate_Parms), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics
	{
		struct VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms
		{
			bool dummy;
		};
		static void NewProp_dummy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dummy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms*)Obj)->dummy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy = { "dummy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms), &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::NewProp_dummy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "VrmSelectionChangedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(VrmEditorEventComponent_eventVrmSelectionChangedEventDelegate_Parms), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVrmEditorEventComponent::execSetGlobalTimeCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalTimeCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmEditorEventComponent::execSetSelectCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	void UVrmEditorEventComponent::StaticRegisterNativesUVrmEditorEventComponent()
	{
		UClass* Class = UVrmEditorEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGlobalTimeCheck", &UVrmEditorEventComponent::execSetGlobalTimeCheck },
			{ "SetSelectCheck", &UVrmEditorEventComponent::execSetSelectCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics
	{
		struct VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms
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
	void Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms), &Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "SetGlobalTimeCheck", nullptr, nullptr, sizeof(VrmEditorEventComponent_eventSetGlobalTimeCheck_Parms), Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics
	{
		struct VrmEditorEventComponent_eventSetSelectCheck_Parms
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
	void Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmEditorEventComponent_eventSetSelectCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmEditorEventComponent_eventSetSelectCheck_Parms), &Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorEventComponent, nullptr, "SetSelectCheck", nullptr, nullptr, sizeof(VrmEditorEventComponent_eventSetSelectCheck_Parms), Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmEditorEventComponent_NoRegister()
	{
		return UVrmEditorEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmEditorEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGlobalTimeChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalTimeChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmEditorEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmEditorEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmEditorEventComponent_SetGlobalTimeCheck, "SetGlobalTimeCheck" }, // 1678612301
		{ &Z_Construct_UFunction_UVrmEditorEventComponent_SetSelectCheck, "SetSelectCheck" }, // 945756576
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature, "VrmGlobalTimeChangeEventDelegate__DelegateSignature" }, // 3239739246
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature, "VrmSelectionChangedEventDelegate__DelegateSignature" }, // 2924212
		{ &Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature, "VrmSelectionObjectEventDelegate__DelegateSignature" }, // 926641624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmEditorEventComponent.h" },
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange = { "OnSelectionChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnSelectionChange), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject = { "OnSelectionObject", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnSelectionObject), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmEditorEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange = { "OnGlobalTimeChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmEditorEventComponent, OnGlobalTimeChange), Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnSelectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmEditorEventComponent_Statics::NewProp_OnGlobalTimeChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmEditorEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmEditorEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmEditorEventComponent_Statics::ClassParams = {
		&UVrmEditorEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmEditorEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmEditorEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmEditorEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmEditorEventComponent, 201031623);
	template<> VRM4U_API UClass* StaticClass<UVrmEditorEventComponent>()
	{
		return UVrmEditorEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmEditorEventComponent(Z_Construct_UClass_UVrmEditorEventComponent, &UVrmEditorEventComponent::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmEditorEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmEditorEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
