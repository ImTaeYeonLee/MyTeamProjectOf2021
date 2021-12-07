// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VMC4UE_AnimNode_ModifyVMC4UEMorph_generated_h
#error "AnimNode_ModifyVMC4UEMorph.generated.h already included, missing '#pragma once' in AnimNode_ModifyVMC4UEMorph.h"
#endif
#define VMC4UE_AnimNode_ModifyVMC4UEMorph_generated_h

#define UE_VtuberStudio_Plugins_VMC4UE_Source_VMC4UE_Include_AnimNode_ModifyVMC4UEMorph_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ModifyVMC4UEMorph_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> VMC4UE_API UScriptStruct* StaticStruct<struct FAnimNode_ModifyVMC4UEMorph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VtuberStudio_Plugins_VMC4UE_Source_VMC4UE_Include_AnimNode_ModifyVMC4UEMorph_h


#define FOREACH_ENUM_EMVC4UEMODIFYCURVEAPPLYMODE(op) \
	op(EMVC4UEModifyCurveApplyMode::Add) \
	op(EMVC4UEModifyCurveApplyMode::Scale) \
	op(EMVC4UEModifyCurveApplyMode::Blend) \
	op(EMVC4UEModifyCurveApplyMode::WeightedMovingAverage) \
	op(EMVC4UEModifyCurveApplyMode::RemapCurve) 

enum class EMVC4UEModifyCurveApplyMode : uint8;
template<> VMC4UE_API UEnum* StaticEnum<EMVC4UEModifyCurveApplyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
