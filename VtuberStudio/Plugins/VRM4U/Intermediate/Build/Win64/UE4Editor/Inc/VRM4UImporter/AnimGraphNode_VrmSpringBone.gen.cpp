// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmSpringBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmSpringBone() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone();
// End Cross Module References
	void UAnimGraphNode_VrmSpringBone::StaticRegisterNativesUAnimGraphNode_VrmSpringBone()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_NoRegister()
	{
		return UAnimGraphNode_VrmSpringBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nclass FVrmSpringBoneEditMode : public FAnimNodeEditMode\n{\npublic:\n\x09//IAnimNodeEditMode interface\n\x09virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;\n\x09virtual void ExitMode() override;\n\x09virtual FVector GetWidgetLocation() const override;\n\x09virtual FWidget::EWidgetMode GetWidgetMode() const override;\n\x09virtual void DoTranslation(FVector& InTranslation) override;\n\n\x09static const FEditorModeID VrmSpringBone;\n\nprivate:\n\x09struct FAnimNode_VrmSpringBone* RuntimeNode;\n\x09""class UAnimGraphNode_VrmSpringBone* GraphNode;\n};\n*/" },
		{ "IncludePath", "AnimGraphNode_VrmSpringBone.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
		{ "ToolTip", "class FVrmSpringBoneEditMode : public FAnimNodeEditMode\n{\npublic:\n       //IAnimNodeEditMode interface\n       virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;\n       virtual void ExitMode() override;\n       virtual FVector GetWidgetLocation() const override;\n       virtual FWidget::EWidgetMode GetWidgetMode() const override;\n       virtual void DoTranslation(FVector& InTranslation) override;\n\n       static const FEditorModeID VrmSpringBone;\n\nprivate:\n       struct FAnimNode_VrmSpringBone* RuntimeNode;\n       class UAnimGraphNode_VrmSpringBone* GraphNode;\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_VrmSpringBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmSpringBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::ClassParams = {
		&UAnimGraphNode_VrmSpringBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_VrmSpringBone, 3458729947);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmSpringBone>()
	{
		return UAnimGraphNode_VrmSpringBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_VrmSpringBone(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone, &UAnimGraphNode_VrmSpringBone::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UAnimGraphNode_VrmSpringBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmSpringBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
