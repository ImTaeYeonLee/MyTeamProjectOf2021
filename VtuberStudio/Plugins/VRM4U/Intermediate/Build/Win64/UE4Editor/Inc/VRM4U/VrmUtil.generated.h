// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_VrmUtil_generated_h
#error "VrmUtil.generated.h already included, missing '#pragma once' in VrmUtil.h"
#endif
#define VRM4U_VrmUtil_generated_h

#define UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportOptionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VRM4U_API UScriptStruct* StaticStruct<struct FImportOptionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VtuberStudio_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h


#define FOREACH_ENUM_EVRMIMPORTMATERIALTYPE(op) \
	op(EVRMImportMaterialType::VRMIMT_Auto) \
	op(EVRMImportMaterialType::VRMIMT_MToon) \
	op(EVRMImportMaterialType::VRMIMT_MToonUnlit) \
	op(EVRMImportMaterialType::VRMIMT_SSS) \
	op(EVRMImportMaterialType::VRMIMT_SSSProfile) \
	op(EVRMImportMaterialType::VRMIMT_Unlit) \
	op(EVRMImportMaterialType::VRMIMT_glTF) \
	op(EVRMImportMaterialType::VRMIMT_Custom) 

enum class EVRMImportMaterialType : uint8;
template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
