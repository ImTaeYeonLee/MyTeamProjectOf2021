// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/AnimNode_ModifyVMC4UEMorph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyVMC4UEMorph() {}
// Cross Module References
	VMC4UE_API UEnum* Z_Construct_UEnum_VMC4UE_EMVC4UEModifyCurveApplyMode();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEVRMMapping_NoRegister();
// End Cross Module References
	static UEnum* EMVC4UEModifyCurveApplyMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VMC4UE_EMVC4UEModifyCurveApplyMode, Z_Construct_UPackage__Script_VMC4UE(), TEXT("EMVC4UEModifyCurveApplyMode"));
		}
		return Singleton;
	}
	template<> VMC4UE_API UEnum* StaticEnum<EMVC4UEModifyCurveApplyMode>()
	{
		return EMVC4UEModifyCurveApplyMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMVC4UEModifyCurveApplyMode(EMVC4UEModifyCurveApplyMode_StaticEnum, TEXT("/Script/VMC4UE"), TEXT("EMVC4UEModifyCurveApplyMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VMC4UE_EMVC4UEModifyCurveApplyMode_Hash() { return 2599740245U; }
	UEnum* Z_Construct_UEnum_VMC4UE_EMVC4UEModifyCurveApplyMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMVC4UEModifyCurveApplyMode"), 0, Get_Z_Construct_UEnum_VMC4UE_EMVC4UEModifyCurveApplyMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMVC4UEModifyCurveApplyMode::Add", (int64)EMVC4UEModifyCurveApplyMode::Add },
				{ "EMVC4UEModifyCurveApplyMode::Scale", (int64)EMVC4UEModifyCurveApplyMode::Scale },
				{ "EMVC4UEModifyCurveApplyMode::Blend", (int64)EMVC4UEModifyCurveApplyMode::Blend },
				{ "EMVC4UEModifyCurveApplyMode::WeightedMovingAverage", (int64)EMVC4UEModifyCurveApplyMode::WeightedMovingAverage },
				{ "EMVC4UEModifyCurveApplyMode::RemapCurve", (int64)EMVC4UEModifyCurveApplyMode::RemapCurve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Comment", "/** Add new value to input curve value */" },
				{ "Add.Name", "EMVC4UEModifyCurveApplyMode::Add" },
				{ "Add.ToolTip", "Add new value to input curve value" },
				{ "Blend.Comment", "/** Blend input with new curve value, using Alpha setting on the node */" },
				{ "Blend.Name", "EMVC4UEModifyCurveApplyMode::Blend" },
				{ "Blend.ToolTip", "Blend input with new curve value, using Alpha setting on the node" },
				{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEMorph.h" },
				{ "RemapCurve.Comment", "/** Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02) */" },
				{ "RemapCurve.Name", "EMVC4UEModifyCurveApplyMode::RemapCurve" },
				{ "RemapCurve.ToolTip", "Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02)" },
				{ "Scale.Comment", "/** Scale input value by new value */" },
				{ "Scale.Name", "EMVC4UEModifyCurveApplyMode::Scale" },
				{ "Scale.ToolTip", "Scale input value by new value" },
				{ "WeightedMovingAverage.Comment", "/** Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower) */" },
				{ "WeightedMovingAverage.Name", "EMVC4UEModifyCurveApplyMode::WeightedMovingAverage" },
				{ "WeightedMovingAverage.ToolTip", "Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VMC4UE,
				nullptr,
				"EMVC4UEModifyCurveApplyMode",
				"EMVC4UEModifyCurveApplyMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FAnimNode_ModifyVMC4UEMorph>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ModifyVMC4UEMorph cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_ModifyVMC4UEMorph::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph, Z_Construct_UPackage__Script_VMC4UE(), TEXT("AnimNode_ModifyVMC4UEMorph"), sizeof(FAnimNode_ModifyVMC4UEMorph), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FAnimNode_ModifyVMC4UEMorph>()
{
	return FAnimNode_ModifyVMC4UEMorph::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph(FAnimNode_ModifyVMC4UEMorph::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("AnimNode_ModifyVMC4UEMorph"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFAnimNode_ModifyVMC4UEMorph
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFAnimNode_ModifyVMC4UEMorph()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_ModifyVMC4UEMorph>(FName(TEXT("AnimNode_ModifyVMC4UEMorph")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFAnimNode_ModifyVMC4UEMorph;
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEMorph.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyVMC4UEMorph>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEMorph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyVMC4UEMorph, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_SourcePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_VRMMapping_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEMorph.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_VRMMapping = { "VRMMapping", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyVMC4UEMorph, VRMMapping), Z_Construct_UClass_UVMC4UEVRMMapping_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_VRMMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_VRMMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Include/AnimNode_ModifyVMC4UEMorph.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyVMC4UEMorph, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_SourcePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_VRMMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::NewProp_Port,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ModifyVMC4UEMorph",
		sizeof(FAnimNode_ModifyVMC4UEMorph),
		alignof(FAnimNode_ModifyVMC4UEMorph),
		Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyVMC4UEMorph"), sizeof(FAnimNode_ModifyVMC4UEMorph), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Hash() { return 1954612931U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
