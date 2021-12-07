// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmPoseableMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmPoseableMeshComponent() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmPoseableMeshComponent_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmPoseableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmPoseableMeshComponent::execVRMCopyPoseAndMorphFromSkeletalComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VRMCopyPoseAndMorphFromSkeletalComponent(Z_Param_InComponentToCopy);
		P_NATIVE_END;
	}
	void UVrmPoseableMeshComponent::StaticRegisterNativesUVrmPoseableMeshComponent()
	{
		UClass* Class = UVrmPoseableMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VRMCopyPoseAndMorphFromSkeletalComponent", &UVrmPoseableMeshComponent::execVRMCopyPoseAndMorphFromSkeletalComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics
	{
		struct VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms
		{
			USkeletalMeshComponent* InComponentToCopy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponentToCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponentToCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy = { "InComponentToCopy", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms, InComponentToCopy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmPoseableMeshComponent, nullptr, "VRMCopyPoseAndMorphFromSkeletalComponent", nullptr, nullptr, sizeof(VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms), Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmPoseableMeshComponent_NoRegister()
	{
		return UVrmPoseableMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmPoseableMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent, "VRMCopyPoseAndMorphFromSkeletalComponent" }, // 415230538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "VrmPoseableMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmPoseableMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::ClassParams = {
		&UVrmPoseableMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmPoseableMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmPoseableMeshComponent, 1796767900);
	template<> VRM4U_API UClass* StaticClass<UVrmPoseableMeshComponent>()
	{
		return UVrmPoseableMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmPoseableMeshComponent(Z_Construct_UClass_UVrmPoseableMeshComponent, &UVrmPoseableMeshComponent::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmPoseableMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmPoseableMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
