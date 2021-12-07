// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCustomStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCustomStruct() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FVRMRetargetSrcAnimSequence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMRetargetSrcAnimSequence"), sizeof(FVRMRetargetSrcAnimSequence), Get_Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMRetargetSrcAnimSequence>()
{
	return FVRMRetargetSrcAnimSequence::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMRetargetSrcAnimSequence(FVRMRetargetSrcAnimSequence::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMRetargetSrcAnimSequence"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMRetargetSrcAnimSequence
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMRetargetSrcAnimSequence()
	{
		UScriptStruct::DeferCppStructOps<FVRMRetargetSrcAnimSequence>(FName(TEXT("VRMRetargetSrcAnimSequence")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMRetargetSrcAnimSequence;
	struct Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmCustomStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMRetargetSrcAnimSequence>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmCustomStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMRetargetSrcAnimSequence, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMRetargetSrcAnimSequence",
		sizeof(FVRMRetargetSrcAnimSequence),
		alignof(FVRMRetargetSrcAnimSequence),
		Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMRetargetSrcAnimSequence"), sizeof(FVRMRetargetSrcAnimSequence), Get_Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Hash() { return 3479824899U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
