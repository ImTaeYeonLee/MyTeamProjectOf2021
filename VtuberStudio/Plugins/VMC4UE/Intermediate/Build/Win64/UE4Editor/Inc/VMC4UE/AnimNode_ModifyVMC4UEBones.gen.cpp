// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/AnimNode_ModifyVMC4UEBones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyVMC4UEBones() {}
// Cross Module References
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEVRMMapping_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ModifyVMC4UEBones>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ModifyVMC4UEBones cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_ModifyVMC4UEBones::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones, Z_Construct_UPackage__Script_VMC4UE(), TEXT("AnimNode_ModifyVMC4UEBones"), sizeof(FAnimNode_ModifyVMC4UEBones), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FAnimNode_ModifyVMC4UEBones>()
{
	return FAnimNode_ModifyVMC4UEBones::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyVMC4UEBones(FAnimNode_ModifyVMC4UEBones::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("AnimNode_ModifyVMC4UEBones"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFAnimNode_ModifyVMC4UEBones
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFAnimNode_ModifyVMC4UEBones()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_ModifyVMC4UEBones>(FName(TEXT("AnimNode_ModifyVMC4UEBones")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFAnimNode_ModifyVMC4UEBones;
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_VRMMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEBones.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyVMC4UEBones>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_VRMMapping_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEBones.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_VRMMapping = { "VRMMapping", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyVMC4UEBones, VRMMapping), Z_Construct_UClass_UVMC4UEVRMMapping_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_VRMMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_VRMMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEBones.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyVMC4UEBones, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_VRMMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::NewProp_Port,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ModifyVMC4UEBones",
		sizeof(FAnimNode_ModifyVMC4UEBones),
		alignof(FAnimNode_ModifyVMC4UEBones),
		Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyVMC4UEBones"), sizeof(FAnimNode_ModifyVMC4UEBones), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEBones_Hash() { return 1379168266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
