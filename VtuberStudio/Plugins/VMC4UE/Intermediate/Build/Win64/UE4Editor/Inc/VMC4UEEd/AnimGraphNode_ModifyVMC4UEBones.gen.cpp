// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UEEd/Include/AnimGraphNode_ModifyVMC4UEBones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ModifyVMC4UEBones() {}
// Cross Module References
	VMC4UEED_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_NoRegister();
	VMC4UEED_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VMC4UEEd();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones();
// End Cross Module References
	void UAnimGraphNode_ModifyVMC4UEBones::StaticRegisterNativesUAnimGraphNode_ModifyVMC4UEBones()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_NoRegister()
	{
		return UAnimGraphNode_ModifyVMC4UEBones::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UEEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Include/AnimGraphNode_ModifyVMC4UEBones.h" },
		{ "Keywords", "VMC4UE Modify Transform" },
		{ "ModuleRelativePath", "Include/AnimGraphNode_ModifyVMC4UEBones.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Include/AnimGraphNode_ModifyVMC4UEBones.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_ModifyVMC4UEBones, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ModifyVMC4UEBones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::ClassParams = {
		&UAnimGraphNode_ModifyVMC4UEBones::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_ModifyVMC4UEBones, 2914432157);
	template<> VMC4UEED_API UClass* StaticClass<UAnimGraphNode_ModifyVMC4UEBones>()
	{
		return UAnimGraphNode_ModifyVMC4UEBones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_ModifyVMC4UEBones(Z_Construct_UClass_UAnimGraphNode_ModifyVMC4UEBones, &UAnimGraphNode_ModifyVMC4UEBones::StaticClass, TEXT("/Script/VMC4UEEd"), TEXT("UAnimGraphNode_ModifyVMC4UEBones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ModifyVMC4UEBones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
