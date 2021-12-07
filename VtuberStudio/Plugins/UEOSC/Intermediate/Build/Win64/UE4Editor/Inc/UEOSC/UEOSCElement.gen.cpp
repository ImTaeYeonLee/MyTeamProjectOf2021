// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEOSC/Include/UEOSCElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEOSCElement() {}
// Cross Module References
	UEOSC_API UEnum* Z_Construct_UEnum_UEOSC_EUEOSCElementType();
	UPackage* Z_Construct_UPackage__Script_UEOSC();
	UEOSC_API UScriptStruct* Z_Construct_UScriptStruct_FUEOSCMessage();
	UEOSC_API UScriptStruct* Z_Construct_UScriptStruct_FUEOSCElement();
// End Cross Module References
	static UEnum* EUEOSCElementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UEOSC_EUEOSCElementType, Z_Construct_UPackage__Script_UEOSC(), TEXT("EUEOSCElementType"));
		}
		return Singleton;
	}
	template<> UEOSC_API UEnum* StaticEnum<EUEOSCElementType>()
	{
		return EUEOSCElementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUEOSCElementType(EUEOSCElementType_StaticEnum, TEXT("/Script/UEOSC"), TEXT("EUEOSCElementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UEOSC_EUEOSCElementType_Hash() { return 2992912583U; }
	UEnum* Z_Construct_UEnum_UEOSC_EUEOSCElementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UEOSC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUEOSCElementType"), 0, Get_Z_Construct_UEnum_UEOSC_EUEOSCElementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUEOSCElementType::OET_Int32", (int64)EUEOSCElementType::OET_Int32 },
				{ "EUEOSCElementType::OET_Float", (int64)EUEOSCElementType::OET_Float },
				{ "EUEOSCElementType::OET_String", (int64)EUEOSCElementType::OET_String },
				{ "EUEOSCElementType::OET_Blob", (int64)EUEOSCElementType::OET_Blob },
				{ "EUEOSCElementType::OET_Bool", (int64)EUEOSCElementType::OET_Bool },
				{ "EUEOSCElementType::OET_Nil", (int64)EUEOSCElementType::OET_Nil },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Include/UEOSCElement.h" },
				{ "OET_Blob.DisplayName", "Blob" },
				{ "OET_Blob.Name", "EUEOSCElementType::OET_Blob" },
				{ "OET_Bool.DisplayName", "Bool" },
				{ "OET_Bool.Name", "EUEOSCElementType::OET_Bool" },
				{ "OET_Float.DisplayName", "Float" },
				{ "OET_Float.Name", "EUEOSCElementType::OET_Float" },
				{ "OET_Int32.DisplayName", "Int32" },
				{ "OET_Int32.Name", "EUEOSCElementType::OET_Int32" },
				{ "OET_Nil.DisplayName", "Nil" },
				{ "OET_Nil.Name", "EUEOSCElementType::OET_Nil" },
				{ "OET_String.DisplayName", "String" },
				{ "OET_String.Name", "EUEOSCElementType::OET_String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UEOSC,
				nullptr,
				"EUEOSCElementType",
				"EUEOSCElementType",
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
class UScriptStruct* FUEOSCMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UEOSC_API uint32 Get_Z_Construct_UScriptStruct_FUEOSCMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEOSCMessage, Z_Construct_UPackage__Script_UEOSC(), TEXT("UEOSCMessage"), sizeof(FUEOSCMessage), Get_Z_Construct_UScriptStruct_FUEOSCMessage_Hash());
	}
	return Singleton;
}
template<> UEOSC_API UScriptStruct* StaticStruct<FUEOSCMessage>()
{
	return FUEOSCMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUEOSCMessage(FUEOSCMessage::StaticStruct, TEXT("/Script/UEOSC"), TEXT("UEOSCMessage"), false, nullptr, nullptr);
static struct FScriptStruct_UEOSC_StaticRegisterNativesFUEOSCMessage
{
	FScriptStruct_UEOSC_StaticRegisterNativesFUEOSCMessage()
	{
		UScriptStruct::DeferCppStructOps<FUEOSCMessage>(FName(TEXT("UEOSCMessage")));
	}
} ScriptStruct_UEOSC_StaticRegisterNativesFUEOSCMessage;
	struct Z_Construct_UScriptStruct_FUEOSCMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEOSCMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/UEOSCElement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUEOSCMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEOSCMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEOSCMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEOSC,
		nullptr,
		&NewStructOps,
		"UEOSCMessage",
		sizeof(FUEOSCMessage),
		alignof(FUEOSCMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUEOSCMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEOSCMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUEOSCMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUEOSCMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UEOSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UEOSCMessage"), sizeof(FUEOSCMessage), Get_Z_Construct_UScriptStruct_FUEOSCMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUEOSCMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUEOSCMessage_Hash() { return 2054469639U; }
class UScriptStruct* FUEOSCElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UEOSC_API uint32 Get_Z_Construct_UScriptStruct_FUEOSCElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEOSCElement, Z_Construct_UPackage__Script_UEOSC(), TEXT("UEOSCElement"), sizeof(FUEOSCElement), Get_Z_Construct_UScriptStruct_FUEOSCElement_Hash());
	}
	return Singleton;
}
template<> UEOSC_API UScriptStruct* StaticStruct<FUEOSCElement>()
{
	return FUEOSCElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUEOSCElement(FUEOSCElement::StaticStruct, TEXT("/Script/UEOSC"), TEXT("UEOSCElement"), false, nullptr, nullptr);
static struct FScriptStruct_UEOSC_StaticRegisterNativesFUEOSCElement
{
	FScriptStruct_UEOSC_StaticRegisterNativesFUEOSCElement()
	{
		UScriptStruct::DeferCppStructOps<FUEOSCElement>(FName(TEXT("UEOSCElement")));
	}
} ScriptStruct_UEOSC_StaticRegisterNativesFUEOSCElement;
	struct Z_Construct_UScriptStruct_FUEOSCElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEOSCElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Include/UEOSCElement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUEOSCElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEOSCElement>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEOSCElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEOSC,
		nullptr,
		&NewStructOps,
		"UEOSCElement",
		sizeof(FUEOSCElement),
		alignof(FUEOSCElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUEOSCElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEOSCElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUEOSCElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUEOSCElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UEOSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UEOSCElement"), sizeof(FUEOSCElement), Get_Z_Construct_UScriptStruct_FUEOSCElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUEOSCElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUEOSCElement_Hash() { return 2152489033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
