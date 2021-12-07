// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEOSC_UEOSCElement_generated_h
#error "UEOSCElement.generated.h already included, missing '#pragma once' in UEOSCElement.h"
#endif
#define UEOSC_UEOSCElement_generated_h

#define VtuberStudio_Plugins_UEOSC_Source_UEOSC_Include_UEOSCElement_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEOSCMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEOSC_API UScriptStruct* StaticStruct<struct FUEOSCMessage>();

#define VtuberStudio_Plugins_UEOSC_Source_UEOSC_Include_UEOSCElement_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEOSCElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UEOSC_API UScriptStruct* StaticStruct<struct FUEOSCElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VtuberStudio_Plugins_UEOSC_Source_UEOSC_Include_UEOSCElement_h


#define FOREACH_ENUM_EUEOSCELEMENTTYPE(op) \
	op(EUEOSCElementType::OET_Int32) \
	op(EUEOSCElementType::OET_Float) \
	op(EUEOSCElementType::OET_String) \
	op(EUEOSCElementType::OET_Blob) \
	op(EUEOSCElementType::OET_Bool) \
	op(EUEOSCElementType::OET_Nil) 

enum class EUEOSCElementType : uint8;
template<> UEOSC_API UEnum* StaticEnum<EUEOSCElementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
