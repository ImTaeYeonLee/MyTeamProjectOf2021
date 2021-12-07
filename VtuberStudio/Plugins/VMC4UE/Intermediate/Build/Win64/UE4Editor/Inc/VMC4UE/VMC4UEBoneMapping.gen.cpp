// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/VMC4UEBoneMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEBoneMapping() {}
// Cross Module References
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEVRMMappingData();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBoneMapping();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShape();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeState();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEVRMMapping_NoRegister();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEVRMMapping();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FVMC4UEVRMMappingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEVRMMappingData"), sizeof(FVMC4UEVRMMappingData), Get_Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEVRMMappingData>()
{
	return FVMC4UEVRMMappingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEVRMMappingData(FVMC4UEVRMMappingData::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEVRMMappingData"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEVRMMappingData
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEVRMMappingData()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEVRMMappingData>(FName(TEXT("VMC4UEVRMMappingData")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEVRMMappingData;
	struct Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendShape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEVRMMappingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BoneMapping_MetaData[] = {
		{ "Category", "VRM Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BoneMapping = { "BoneMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEVRMMappingData, BoneMapping), Z_Construct_UScriptStruct_FVMC4UEBoneMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BoneMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BoneMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BlendShape_MetaData[] = {
		{ "Category", "VRM Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEVRMMappingData, BlendShape), Z_Construct_UScriptStruct_FVMC4UEBlendShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BlendShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BlendShape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BoneMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::NewProp_BlendShape,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEVRMMappingData",
		sizeof(FVMC4UEVRMMappingData),
		alignof(FVMC4UEVRMMappingData),
		Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEVRMMappingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEVRMMappingData"), sizeof(FVMC4UEVRMMappingData), Get_Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEVRMMappingData_Hash() { return 2282129180U; }
class UScriptStruct* FVMC4UEBlendShape::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShape_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBlendShape, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBlendShape"), sizeof(FVMC4UEBlendShape), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShape_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBlendShape>()
{
	return FVMC4UEBlendShape::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBlendShape(FVMC4UEBlendShape::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBlendShape"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShape
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShape()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEBlendShape>(FName(TEXT("VMC4UEBlendShape")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShape;
	struct Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Clips_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Clips;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBlendShape>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Blend Shape" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShape, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips_Inner = { "Clips", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips_MetaData[] = {
		{ "Category", "Blend Shape" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShape, Clips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::NewProp_Clips,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBlendShape",
		sizeof(FVMC4UEBlendShape),
		alignof(FVMC4UEBlendShape),
		Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShape()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShape_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBlendShape"), sizeof(FVMC4UEBlendShape), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShape_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBlendShape_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShape_Hash() { return 3775384798U; }
class UScriptStruct* FVMC4UEBlendShapeClip::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBlendShapeClip"), sizeof(FVMC4UEBlendShapeClip), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBlendShapeClip>()
{
	return FVMC4UEBlendShapeClip::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBlendShapeClip(FVMC4UEBlendShapeClip::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBlendShapeClip"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeClip
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeClip()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEBlendShapeClip>(FName(TEXT("VMC4UEBlendShapeClip")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeClip;
	struct Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBlendShapeClip>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Blend Shape Clip" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeClip, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States_MetaData[] = {
		{ "Category", "Blend Shape Clip" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeClip, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::NewProp_States,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBlendShapeClip",
		sizeof(FVMC4UEBlendShapeClip),
		alignof(FVMC4UEBlendShapeClip),
		Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBlendShapeClip"), sizeof(FVMC4UEBlendShapeClip), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeClip_Hash() { return 527138824U; }
class UScriptStruct* FVMC4UEBlendShapeMeshState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBlendShapeMeshState"), sizeof(FVMC4UEBlendShapeMeshState), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBlendShapeMeshState>()
{
	return FVMC4UEBlendShapeMeshState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBlendShapeMeshState(FVMC4UEBlendShapeMeshState::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBlendShapeMeshState"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeMeshState
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeMeshState()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEBlendShapeMeshState>(FName(TEXT("VMC4UEBlendShapeMeshState")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeMeshState;
	struct Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBlendShapeMeshState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Blend Shape Mesh State" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeMeshState, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMC4UEBlendShapeState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Blend Shape Mesh State" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeMeshState, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::NewProp_Targets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBlendShapeMeshState",
		sizeof(FVMC4UEBlendShapeMeshState),
		alignof(FVMC4UEBlendShapeMeshState),
		Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBlendShapeMeshState"), sizeof(FVMC4UEBlendShapeMeshState), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMeshState_Hash() { return 181483629U; }
class UScriptStruct* FVMC4UEBlendShapeState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBlendShapeState"), sizeof(FVMC4UEBlendShapeState), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBlendShapeState>()
{
	return FVMC4UEBlendShapeState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBlendShapeState(FVMC4UEBlendShapeState::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBlendShapeState"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeState
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeState()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEBlendShapeState>(FName(TEXT("VMC4UEBlendShapeState")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeState;
	struct Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBlendShapeState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Blend Shape State" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeState, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Blend Shape State" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeState, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBlendShapeState",
		sizeof(FVMC4UEBlendShapeState),
		alignof(FVMC4UEBlendShapeState),
		Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBlendShapeState"), sizeof(FVMC4UEBlendShapeState), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeState_Hash() { return 2617870069U; }
class UScriptStruct* FVMC4UEBlendShapeMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBlendShapeMesh"), sizeof(FVMC4UEBlendShapeMesh), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBlendShapeMesh>()
{
	return FVMC4UEBlendShapeMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBlendShapeMesh(FVMC4UEBlendShapeMesh::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBlendShapeMesh"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeMesh
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeMesh()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEBlendShapeMesh>(FName(TEXT("VMC4UEBlendShapeMesh")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBlendShapeMesh;
	struct Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBlendShapeMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Blend Shape Mesh" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeMesh, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Blend Shape Mesh" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBlendShapeMesh, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::NewProp_Targets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBlendShapeMesh",
		sizeof(FVMC4UEBlendShapeMesh),
		alignof(FVMC4UEBlendShapeMesh),
		Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBlendShapeMesh"), sizeof(FVMC4UEBlendShapeMesh), Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBlendShapeMesh_Hash() { return 3391704230U; }
class UScriptStruct* FVMC4UEBoneMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBoneMapping, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBoneMapping"), sizeof(FVMC4UEBoneMapping), Get_Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBoneMapping>()
{
	return FVMC4UEBoneMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBoneMapping(FVMC4UEBoneMapping::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBoneMapping"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBoneMapping
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBoneMapping()
	{
		UScriptStruct::DeferCppStructOps<FVMC4UEBoneMapping>(FName(TEXT("VMC4UEBoneMapping")));
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBoneMapping;
	struct Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hips_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Hips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftUpperLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftUpperLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightUpperLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightUpperLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLowerLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftLowerLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLowerLeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightLowerLeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Spine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftUpperArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftUpperArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightUpperArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightUpperArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLowerArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftLowerArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLowerArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightLowerArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftToes_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftToes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightToes_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightToes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEye_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftEye;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEye_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightEye;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Jaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftThumbProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftThumbProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftThumbIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftThumbIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftThumbDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftThumbDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftIndexProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftIndexProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftIndexIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftIndexIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftIndexDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftIndexDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMiddleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftMiddleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMiddleIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftMiddleIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMiddleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftMiddleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRingProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftRingProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRingIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftRingIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRingDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftRingDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLittleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftLittleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLittleIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftLittleIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLittleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftLittleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightThumbProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightThumbProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightThumbIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightThumbIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightThumbDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightThumbDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightIndexProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightIndexProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightIndexIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightIndexIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightIndexDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightIndexDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMiddleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightMiddleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMiddleIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightMiddleIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMiddleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightMiddleDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRingProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightRingProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRingIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightRingIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRingDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightRingDistal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLittleProximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightLittleProximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLittleIntermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightLittleIntermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLittleDistal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightLittleDistal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBoneMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Hips_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Hips = { "Hips", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, Hips), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Hips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Hips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperLeg_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperLeg = { "LeftUpperLeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftUpperLeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperLeg_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperLeg = { "RightUpperLeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightUpperLeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerLeg_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerLeg = { "LeftLowerLeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftLowerLeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerLeg_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerLeg = { "RightLowerLeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightLowerLeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerLeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftFoot_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftFoot = { "LeftFoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftFoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightFoot_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightFoot = { "RightFoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightFoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Spine_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, Spine), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Spine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Spine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Chest_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Chest = { "Chest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, Chest), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Neck_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Neck = { "Neck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, Neck), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, Head), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftShoulder_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftShoulder = { "LeftShoulder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftShoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightShoulder_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightShoulder = { "RightShoulder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightShoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperArm_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperArm = { "LeftUpperArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftUpperArm), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperArm_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperArm = { "RightUpperArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightUpperArm), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerArm_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerArm = { "LeftLowerArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftLowerArm), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerArm_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerArm = { "RightLowerArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightLowerArm), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftHand), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightHand), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftToes_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftToes = { "LeftToes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftToes), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftToes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftToes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightToes_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightToes = { "RightToes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightToes), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightToes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightToes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftEye_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftEye = { "LeftEye", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftEye), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftEye_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftEye_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightEye_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightEye = { "RightEye", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightEye), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightEye_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightEye_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Jaw_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Jaw = { "Jaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, Jaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Jaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Jaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbProximal = { "LeftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftThumbProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbIntermediate = { "LeftThumbIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftThumbIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbDistal = { "LeftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftThumbDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexProximal = { "LeftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftIndexProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexIntermediate = { "LeftIndexIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftIndexIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexDistal = { "LeftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftIndexDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleProximal = { "LeftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftMiddleProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleIntermediate = { "LeftMiddleIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftMiddleIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleDistal = { "LeftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftMiddleDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingProximal = { "LeftRingProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftRingProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingIntermediate = { "LeftRingIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftRingIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingDistal = { "LeftRingDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftRingDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleProximal = { "LeftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftLittleProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleIntermediate = { "LeftLittleIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftLittleIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleDistal = { "LeftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, LeftLittleDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbProximal = { "RightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightThumbProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbIntermediate = { "RightThumbIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightThumbIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbDistal = { "RightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightThumbDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexProximal = { "RightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightIndexProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexIntermediate = { "RightIndexIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightIndexIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexDistal = { "RightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightIndexDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleProximal = { "RightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightMiddleProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleIntermediate = { "RightMiddleIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightMiddleIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleDistal = { "RightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightMiddleDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingProximal = { "RightRingProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightRingProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingIntermediate = { "RightRingIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightRingIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingDistal = { "RightRingDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightRingDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingDistal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleProximal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleProximal = { "RightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightLittleProximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleProximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleIntermediate_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleIntermediate = { "RightLittleIntermediate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightLittleIntermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleIntermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleDistal_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleDistal = { "RightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBoneMapping, RightLittleDistal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleDistal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Hips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerLeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Spine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftUpperArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightUpperArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLowerArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLowerArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftToes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightToes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftEye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightEye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_Jaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftThumbDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftIndexDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftMiddleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftRingDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_LeftLittleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightThumbDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightIndexDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightMiddleDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightRingDistal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleProximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleIntermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::NewProp_RightLittleDistal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBoneMapping",
		sizeof(FVMC4UEBoneMapping),
		alignof(FVMC4UEBoneMapping),
		Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBoneMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBoneMapping"), sizeof(FVMC4UEBoneMapping), Get_Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBoneMapping_Hash() { return 4279766888U; }
	void UVMC4UEVRMMapping::StaticRegisterNativesUVMC4UEVRMMapping()
	{
	}
	UClass* Z_Construct_UClass_UVMC4UEVRMMapping_NoRegister()
	{
		return UVMC4UEVRMMapping::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEVRMMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRMMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEVRMMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEVRMMapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Include/VMC4UEBoneMapping.h" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEVRMMapping_Statics::NewProp_VRMMapping_MetaData[] = {
		{ "Category", "VRM Mapping" },
		{ "ModuleRelativePath", "Include/VMC4UEBoneMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEVRMMapping_Statics::NewProp_VRMMapping = { "VRMMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEVRMMapping, VRMMapping), Z_Construct_UScriptStruct_FVMC4UEVRMMappingData, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEVRMMapping_Statics::NewProp_VRMMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEVRMMapping_Statics::NewProp_VRMMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMC4UEVRMMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEVRMMapping_Statics::NewProp_VRMMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEVRMMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEVRMMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEVRMMapping_Statics::ClassParams = {
		&UVMC4UEVRMMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVMC4UEVRMMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEVRMMapping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEVRMMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEVRMMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEVRMMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEVRMMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEVRMMapping, 1323499775);
	template<> VMC4UE_API UClass* StaticClass<UVMC4UEVRMMapping>()
	{
		return UVMC4UEVRMMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEVRMMapping(Z_Construct_UClass_UVMC4UEVRMMapping, &UVMC4UEVRMMapping::StaticClass, TEXT("/Script/VMC4UE"), TEXT("UVMC4UEVRMMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEVRMMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
