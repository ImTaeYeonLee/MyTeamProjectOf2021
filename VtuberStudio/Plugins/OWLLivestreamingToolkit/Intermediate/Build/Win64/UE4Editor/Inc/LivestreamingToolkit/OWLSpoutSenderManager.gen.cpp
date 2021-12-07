// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/OWLSpoutSenderManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutSenderManager() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLWatermark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FOWLSpoutSenderInterface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVESTREAMINGTOOLKIT_API uint32 Get_Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("OWLSpoutSenderInterface"), sizeof(FOWLSpoutSenderInterface), Get_Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Hash());
	}
	return Singleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FOWLSpoutSenderInterface>()
{
	return FOWLSpoutSenderInterface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOWLSpoutSenderInterface(FOWLSpoutSenderInterface::StaticStruct, TEXT("/Script/LivestreamingToolkit"), TEXT("OWLSpoutSenderInterface"), false, nullptr, nullptr);
static struct FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFOWLSpoutSenderInterface
{
	FScriptStruct_LivestreamingToolkit_StaticRegisterNativesFOWLSpoutSenderInterface()
	{
		UScriptStruct::DeferCppStructOps<FOWLSpoutSenderInterface>(FName(TEXT("OWLSpoutSenderInterface")));
	}
} ScriptStruct_LivestreamingToolkit_StaticRegisterNativesFOWLSpoutSenderInterface;
	struct Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandaloneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutSenderInterface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLSpoutSenderInterface*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in editor targets */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in editor targets" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWLSpoutSenderInterface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in game (standalone/packaged) targets  */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in game (standalone/packaged) targets" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWLSpoutSenderInterface, StandaloneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWLSpoutSenderInterface, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_RenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_RenderTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"OWLSpoutSenderInterface",
		sizeof(FOWLSpoutSenderInterface),
		alignof(FOWLSpoutSenderInterface),
		Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OWLSpoutSenderInterface"), sizeof(FOWLSpoutSenderInterface), Get_Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Hash() { return 2865879795U; }
	void AOWLSpoutSenderManager::StaticRegisterNativesAOWLSpoutSenderManager()
	{
	}
	UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister()
	{
		return AOWLSpoutSenderManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWLSpoutSenderManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpoutSenders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpoutSenders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpoutSenders;
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
	UObject* (*const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLSpoutSenderManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner = { "SpoutSenders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders = { "SpoutSenders", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLSpoutSenderManager, SpoutSenders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_Watermark_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_Watermark = { "Watermark", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLSpoutSenderManager, Watermark), Z_Construct_UClass_UOWLWatermark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_Watermark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_Watermark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLSpoutSenderManager, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_Watermark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLSpoutSenderManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutSenderManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams = {
		&AOWLSpoutSenderManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLSpoutSenderManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWLSpoutSenderManager, 853000122);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<AOWLSpoutSenderManager>()
	{
		return AOWLSpoutSenderManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWLSpoutSenderManager(Z_Construct_UClass_AOWLSpoutSenderManager, &AOWLSpoutSenderManager::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("AOWLSpoutSenderManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutSenderManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
