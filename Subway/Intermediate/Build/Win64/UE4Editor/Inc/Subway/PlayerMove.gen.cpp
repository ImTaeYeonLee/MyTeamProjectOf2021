// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/PlayerMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMove() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UPlayerMove();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Subway();
	SUBWAY_API UClass* Z_Construct_UClass_AFPSPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerMove::execGetIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAiming();
		P_NATIVE_END;
	}
	void UPlayerMove::StaticRegisterNativesUPlayerMove()
	{
		UClass* Class = UPlayerMove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsAiming", &UPlayerMove::execGetIsAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics
	{
		struct PlayerMove_eventGetIsAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerMove_eventGetIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerMove_eventGetIsAiming_Parms), &Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMove, nullptr, "GetIsAiming", nullptr, nullptr, sizeof(PlayerMove_eventGetIsAiming_Parms), Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMove_GetIsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerMove_GetIsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerMove_NoRegister()
	{
		return UPlayerMove::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerMove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMove_GetIsAiming, "GetIsAiming" }, // 4174123349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerMove.h" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "// ?\xca\xbf??\xd3\xbc?:????????\n" },
		{ "ModuleRelativePath", "Public/PlayerMove.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc?:????????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMove_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMove, me), Z_Construct_UClass_AFPSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::NewProp_me_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMove_Statics::NewProp_me,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMove_Statics::ClassParams = {
		&UPlayerMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerMove, 429706687);
	template<> SUBWAY_API UClass* StaticClass<UPlayerMove>()
	{
		return UPlayerMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMove(Z_Construct_UClass_UPlayerMove, &UPlayerMove::StaticClass, TEXT("/Script/Subway"), TEXT("UPlayerMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
