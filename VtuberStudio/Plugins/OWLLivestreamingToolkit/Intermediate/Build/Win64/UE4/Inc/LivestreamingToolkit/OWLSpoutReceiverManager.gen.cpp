// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/OWLSpoutReceiverManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutReceiverManager() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLSpoutReceiverManager_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLSpoutReceiverManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FOWLSpoutReceiverInterface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("OWLSpoutReceiverInterface"), sizeof(FOWLSpoutReceiverInterface), Get_Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FOWLSpoutReceiverInterface>()
{
	return FOWLSpoutReceiverInterface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOWLSpoutReceiverInterface(FOWLSpoutReceiverInterface::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("OWLSpoutReceiverInterface"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFOWLSpoutReceiverInterface
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFOWLSpoutReceiverInterface()
	{
		UScriptStruct::DeferCppStructOps<FOWLSpoutReceiverInterface>(FName(TEXT("OWLSpoutReceiverInterface")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFOWLSpoutReceiverInterface;
	struct Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFirstAvailableSender_MetaData[];
#endif
		static void NewProp_UseFirstAvailableSender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFirstAvailableSender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutReceiverInterface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLSpoutReceiverInterface*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit(void* Obj)
	{
		((FOWLSpoutReceiverInterface*)Obj)->UseFirstAvailableSender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender = { "UseFirstAvailableSender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "Comment", "/* Name of the sender we are receiving from */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Name of the sender we are receiving from" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWLSpoutReceiverInterface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWLSpoutReceiverInterface, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"OWLSpoutReceiverInterface",
		sizeof(FOWLSpoutReceiverInterface),
		alignof(FOWLSpoutReceiverInterface),
		Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OWLSpoutReceiverInterface"), sizeof(FOWLSpoutReceiverInterface), Get_Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Hash() { return 4000367411U; }
	DEFINE_FUNCTION(AOWLSpoutReceiverManager::execGetAvailableSenderNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSenderNames();
		P_NATIVE_END;
	}
	void AOWLSpoutReceiverManager::StaticRegisterNativesAOWLSpoutReceiverManager()
	{
		UClass* Class = AOWLSpoutReceiverManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableSenderNames", &AOWLSpoutReceiverManager::execGetAvailableSenderNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics
	{
		struct OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Receiver" },
		{ "Comment", "/** Returns a list of spout sender names that are available at this moment in time. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Returns a list of spout sender names that are available at this moment in time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutReceiverManager, nullptr, "GetAvailableSenderNames", nullptr, nullptr, sizeof(OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms), Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWLSpoutReceiverManager_NoRegister()
	{
		return AOWLSpoutReceiverManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWLSpoutReceiverManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpoutReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpoutReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpoutReceivers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Watermark_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Watermark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames, "GetAvailableSenderNames" }, // 1203220753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLSpoutReceiverManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_Inner = { "SpoutReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_MetaData[] = {
		{ "Category", "Off World Live Spout Receiver Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers = { "SpoutReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLSpoutReceiverManager, SpoutReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_Watermark_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_Watermark = { "Watermark", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLSpoutReceiverManager, Watermark), Z_Construct_UClass_UOWLWatermark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_Watermark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_Watermark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLSpoutReceiverManager, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_Watermark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutReceiverManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::ClassParams = {
		&AOWLSpoutReceiverManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLSpoutReceiverManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWLSpoutReceiverManager, 1594328595);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<AOWLSpoutReceiverManager>()
	{
		return AOWLSpoutReceiverManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWLSpoutReceiverManager(Z_Construct_UClass_AOWLSpoutReceiverManager, &AOWLSpoutReceiverManager::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("AOWLSpoutReceiverManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutReceiverManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
