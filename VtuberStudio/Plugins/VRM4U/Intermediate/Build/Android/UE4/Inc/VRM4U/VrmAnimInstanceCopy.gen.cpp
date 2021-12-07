// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAnimInstanceCopy.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAnimInstanceCopy() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceCopy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FVrmAnimInstanceCopyProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FVrmAnimInstanceCopyProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

class UScriptStruct* FVrmAnimInstanceCopyProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmAnimInstanceCopyProxy"), sizeof(FVrmAnimInstanceCopyProxy), Get_Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmAnimInstanceCopyProxy>()
{
	return FVrmAnimInstanceCopyProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVrmAnimInstanceCopyProxy(FVrmAnimInstanceCopyProxy::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VrmAnimInstanceCopyProxy"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVrmAnimInstanceCopyProxy
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVrmAnimInstanceCopyProxy()
	{
		UScriptStruct::DeferCppStructOps<FVrmAnimInstanceCopyProxy>(FName(TEXT("VrmAnimInstanceCopyProxy")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVrmAnimInstanceCopyProxy;
	struct Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmAnimInstanceCopyProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VrmAnimInstanceCopyProxy",
		sizeof(FVrmAnimInstanceCopyProxy),
		alignof(FVrmAnimInstanceCopyProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VrmAnimInstanceCopyProxy"), sizeof(FVrmAnimInstanceCopyProxy), Get_Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Hash() { return 332946463U; }
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetVrmSpringBoneIgnoreWingBone)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_boneNameList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmSpringBoneIgnoreWingBone(Z_Param_Out_boneNameList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetVrmSpringBoneBool)
	{
		P_GET_UBOOL(Z_Param_bIgnoreVrmSpringBone);
		P_GET_UBOOL(Z_Param_bIgnorePhysicsCollision);
		P_GET_UBOOL(Z_Param_bIgnoreVRMCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmSpringBoneBool(Z_Param_bIgnoreVrmSpringBone,Z_Param_bIgnorePhysicsCollision,Z_Param_bIgnoreVRMCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetVrmSpringBoneParam)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_gravityScale);
		P_GET_STRUCT(FVector,Z_Param_gravityAdd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_stiffnessScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_stiffnessAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmSpringBoneParam(Z_Param_gravityScale,Z_Param_gravityAdd,Z_Param_stiffnessScale,Z_Param_stiffnessAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetSkeletalMeshCopyDataForCustomSpring)
	{
		P_GET_OBJECT(UVrmMetaObject,Z_Param_dstMetaForCustomSpring);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshCopyDataForCustomSpring(Z_Param_dstMetaForCustomSpring);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetSkeletalMeshCopyData)
	{
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_dstAssetList);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_srcSkeletalMesh);
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_srcAssetList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshCopyData(Z_Param_dstAssetList,Z_Param_srcSkeletalMesh,Z_Param_srcAssetList);
		P_NATIVE_END;
	}
	void UVrmAnimInstanceCopy::StaticRegisterNativesUVrmAnimInstanceCopy()
	{
		UClass* Class = UVrmAnimInstanceCopy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSkeletalMeshCopyData", &UVrmAnimInstanceCopy::execSetSkeletalMeshCopyData },
			{ "SetSkeletalMeshCopyDataForCustomSpring", &UVrmAnimInstanceCopy::execSetSkeletalMeshCopyDataForCustomSpring },
			{ "SetVrmSpringBoneBool", &UVrmAnimInstanceCopy::execSetVrmSpringBoneBool },
			{ "SetVrmSpringBoneIgnoreWingBone", &UVrmAnimInstanceCopy::execSetVrmSpringBoneIgnoreWingBone },
			{ "SetVrmSpringBoneParam", &UVrmAnimInstanceCopy::execSetVrmSpringBoneParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics
	{
		struct VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms
		{
			UVrmAssetListObject* dstAssetList;
			USkeletalMeshComponent* srcSkeletalMesh;
			UVrmAssetListObject* srcAssetList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dstAssetList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_srcSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_srcSkeletalMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_srcAssetList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_dstAssetList = { "dstAssetList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, dstAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh = { "srcSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, srcSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcAssetList = { "srcAssetList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, srcAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_dstAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcAssetList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetSkeletalMeshCopyData", nullptr, nullptr, sizeof(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics
	{
		struct VrmAnimInstanceCopy_eventSetSkeletalMeshCopyDataForCustomSpring_Parms
		{
			UVrmMetaObject* dstMetaForCustomSpring;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dstMetaForCustomSpring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::NewProp_dstMetaForCustomSpring = { "dstMetaForCustomSpring", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyDataForCustomSpring_Parms, dstMetaForCustomSpring), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::NewProp_dstMetaForCustomSpring,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetSkeletalMeshCopyDataForCustomSpring", nullptr, nullptr, sizeof(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyDataForCustomSpring_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics
	{
		struct VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms
		{
			bool bIgnoreVrmSpringBone;
			bool bIgnorePhysicsCollision;
			bool bIgnoreVRMCollision;
		};
		static void NewProp_bIgnoreVrmSpringBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVrmSpringBone;
		static void NewProp_bIgnorePhysicsCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsCollision;
		static void NewProp_bIgnoreVRMCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVRMCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnoreVrmSpringBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone = { "bIgnoreVrmSpringBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnorePhysicsCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision = { "bIgnorePhysicsCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnoreVRMCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision = { "bIgnoreVRMCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_bIgnorePhysicsCollision", "false" },
		{ "CPP_Default_bIgnoreVRMCollision", "false" },
		{ "CPP_Default_bIgnoreVrmSpringBone", "false" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetVrmSpringBoneBool", nullptr, nullptr, sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics
	{
		struct VrmAnimInstanceCopy_eventSetVrmSpringBoneIgnoreWingBone_Parms
		{
			TArray<FName> boneNameList;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneNameList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boneNameList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_Inner = { "boneNameList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList = { "boneNameList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneIgnoreWingBone_Parms, boneNameList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetVrmSpringBoneIgnoreWingBone", nullptr, nullptr, sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneIgnoreWingBone_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics
	{
		struct VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms
		{
			float gravityScale;
			FVector gravityAdd;
			float stiffnessScale;
			float stiffnessAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravityScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gravityAdd;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stiffnessScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stiffnessAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityScale = { "gravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, gravityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityAdd = { "gravityAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, gravityAdd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessScale = { "stiffnessScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, stiffnessScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessAdd = { "stiffnessAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, stiffnessAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_gravityAdd", "" },
		{ "CPP_Default_gravityScale", "1.000000" },
		{ "CPP_Default_stiffnessAdd", "0.000000" },
		{ "CPP_Default_stiffnessScale", "1.000000" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetVrmSpringBoneParam", nullptr, nullptr, sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister()
	{
		return UVrmAnimInstanceCopy::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcSkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcVrmAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcVrmAssetList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstVrmAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DstVrmAssetList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DstVrmMetaForCustomSpring_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DstVrmMetaForCustomSpring;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InitialMorphName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMorphName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InitialMorphName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialMorphValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMorphValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InitialMorphValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnimStop_MetaData[];
#endif
		static void NewProp_bUseAnimStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnimStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimStop_MetaData[];
#endif
		static void NewProp_bAnimStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyStop_MetaData[];
#endif
		static void NewProp_bCopyStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreHeightScale_MetaData[];
#endif
		static void NewProp_bIgnoreHeightScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreHeightScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData, "SetSkeletalMeshCopyData" }, // 2961386515
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring, "SetSkeletalMeshCopyDataForCustomSpring" }, // 1367898396
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool, "SetVrmSpringBoneBool" }, // 442295561
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone, "SetVrmSpringBoneIgnoreWingBone" }, // 884933454
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam, "SetVrmSpringBoneParam" }, // 1455017554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VrmAnimInstanceCopy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent_MetaData[] = {
		{ "Category", "Rendering" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent = { "SrcSkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAnimInstanceCopy, SrcSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList = { "SrcVrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAnimInstanceCopy, SrcVrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList = { "DstVrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAnimInstanceCopy, DstVrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring = { "DstVrmMetaForCustomSpring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAnimInstanceCopy, DstVrmMetaForCustomSpring), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_Inner = { "InitialMorphName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName = { "InitialMorphName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAnimInstanceCopy, InitialMorphName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_Inner = { "InitialMorphValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue = { "InitialMorphValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmAnimInstanceCopy, InitialMorphValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bUseAnimStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop = { "bUseAnimStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bAnimStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop = { "bAnimStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bCopyStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop = { "bCopyStop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bIgnoreHeightScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale = { "bIgnoreHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreHeightScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAnimInstanceCopy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::ClassParams = {
		&UVrmAnimInstanceCopy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmAnimInstanceCopy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmAnimInstanceCopy, 3191560879);
	template<> VRM4U_API UClass* StaticClass<UVrmAnimInstanceCopy>()
	{
		return UVrmAnimInstanceCopy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmAnimInstanceCopy(Z_Construct_UClass_UVrmAnimInstanceCopy, &UVrmAnimInstanceCopy::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmAnimInstanceCopy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAnimInstanceCopy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
