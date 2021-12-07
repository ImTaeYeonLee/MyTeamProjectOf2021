// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UEditor/Public/VrmEditorBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmEditorBPFunctionLibrary() {}
// Cross Module References
	VRM4UEDITOR_API UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary_NoRegister();
	VRM4UEDITOR_API UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRM4UEditor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmEditorBPFunctionLibrary::execEvaluateCurvesFromSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Seq);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrameNo);
		P_GET_TARRAY_REF(FString,Z_Param_Out_names);
		P_GET_TARRAY_REF(float,Z_Param_Out_curves);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVrmEditorBPFunctionLibrary::EvaluateCurvesFromSequence(Z_Param_Seq,Z_Param_FrameNo,Z_Param_Out_names,Z_Param_Out_curves);
		P_NATIVE_END;
	}
	void UVrmEditorBPFunctionLibrary::StaticRegisterNativesUVrmEditorBPFunctionLibrary()
	{
		UClass* Class = UVrmEditorBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateCurvesFromSequence", &UVrmEditorBPFunctionLibrary::execEvaluateCurvesFromSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics
	{
		struct VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms
		{
			const UMovieSceneSequence* Seq;
			float FrameNo;
			TArray<FString> names;
			TArray<float> curves;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seq_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Seq;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameNo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_names_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_names;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_curves_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_curves;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq = { "Seq", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, Seq), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_FrameNo = { "FrameNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, FrameNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names_Inner = { "names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names = { "names", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, names), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves_Inner = { "curves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves = { "curves", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, curves), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_Seq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_FrameNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"VRM4U\")\n//static void VRMGetMorphTargetList(const USkeletalMesh *target, TArray<FString> &morphTargetList);\n" },
		{ "ModuleRelativePath", "Public/VrmEditorBPFunctionLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"VRM4U\")\nstatic void VRMGetMorphTargetList(const USkeletalMesh *target, TArray<FString> &morphTargetList);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorBPFunctionLibrary, nullptr, "EvaluateCurvesFromSequence", nullptr, nullptr, sizeof(VrmEditorBPFunctionLibrary_eventEvaluateCurvesFromSequence_Parms), Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary_NoRegister()
	{
		return UVrmEditorBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_EvaluateCurvesFromSequence, "EvaluateCurvesFromSequence" }, // 3445718642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmEditorBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmEditorBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmEditorBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::ClassParams = {
		&UVrmEditorBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmEditorBPFunctionLibrary, 1060590042);
	template<> VRM4UEDITOR_API UClass* StaticClass<UVrmEditorBPFunctionLibrary>()
	{
		return UVrmEditorBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmEditorBPFunctionLibrary(Z_Construct_UClass_UVrmEditorBPFunctionLibrary, &UVrmEditorBPFunctionLibrary::StaticClass, TEXT("/Script/VRM4UEditor"), TEXT("UVrmEditorBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmEditorBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
