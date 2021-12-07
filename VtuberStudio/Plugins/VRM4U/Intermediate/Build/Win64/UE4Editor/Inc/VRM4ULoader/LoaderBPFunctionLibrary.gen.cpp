// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/LoaderBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoaderBPFunctionLibrary() {}
// Cross Module References
	VRM4ULOADER_API UEnum* Z_Construct_UEnum_VRM4ULoader_EPathType();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
	VRM4ULOADER_API UScriptStruct* Z_Construct_UScriptStruct_FReturnedData();
	VRM4ULOADER_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo_VRM4U();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VRM4ULOADER_API UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary_NoRegister();
	VRM4ULOADER_API UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
// End Cross Module References
	static UEnum* EPathType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRM4ULoader_EPathType, Z_Construct_UPackage__Script_VRM4ULoader(), TEXT("EPathType"));
		}
		return Singleton;
	}
	template<> VRM4ULOADER_API UEnum* StaticEnum<EPathType>()
	{
		return EPathType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathType(EPathType_StaticEnum, TEXT("/Script/VRM4ULoader"), TEXT("EPathType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRM4ULoader_EPathType_Hash() { return 1304193164U; }
	UEnum* Z_Construct_UEnum_VRM4ULoader_EPathType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4ULoader();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathType"), 0, Get_Z_Construct_UEnum_VRM4ULoader_EPathType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathType::Absolute", (int64)EPathType::Absolute },
				{ "EPathType::Relative", (int64)EPathType::Relative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.Name", "EPathType::Absolute" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
				{ "Relative.Name", "EPathType::Relative" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRM4ULoader,
				nullptr,
				"EPathType",
				"EPathType",
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
class UScriptStruct* FReturnedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4ULOADER_API uint32 Get_Z_Construct_UScriptStruct_FReturnedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReturnedData, Z_Construct_UPackage__Script_VRM4ULoader(), TEXT("ReturnedData"), sizeof(FReturnedData), Get_Z_Construct_UScriptStruct_FReturnedData_Hash());
	}
	return Singleton;
}
template<> VRM4ULOADER_API UScriptStruct* StaticStruct<FReturnedData>()
{
	return FReturnedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReturnedData(FReturnedData::StaticStruct, TEXT("/Script/VRM4ULoader"), TEXT("ReturnedData"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4ULoader_StaticRegisterNativesFReturnedData
{
	FScriptStruct_VRM4ULoader_StaticRegisterNativesFReturnedData()
	{
		UScriptStruct::DeferCppStructOps<FReturnedData>(FName(TEXT("ReturnedData")));
	}
} ScriptStruct_VRM4ULoader_StaticRegisterNativesFReturnedData;
	struct Z_Construct_UScriptStruct_FReturnedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_meshInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meshInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReturnedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReturnedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FReturnedData*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FReturnedData), &Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes = { "NumMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReturnedData, NumMeshes), METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_Inner = { "meshInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshInfo_VRM4U, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo = { "meshInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReturnedData, meshInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReturnedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
		nullptr,
		&NewStructOps,
		"ReturnedData",
		sizeof(FReturnedData),
		alignof(FReturnedData),
		Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReturnedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReturnedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4ULoader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReturnedData"), sizeof(FReturnedData), Get_Z_Construct_UScriptStruct_FReturnedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReturnedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReturnedData_Hash() { return 2273361806U; }
class UScriptStruct* FMeshInfo_VRM4U::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4ULOADER_API uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo_VRM4U, Z_Construct_UPackage__Script_VRM4ULoader(), TEXT("MeshInfo_VRM4U"), sizeof(FMeshInfo_VRM4U), Get_Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Hash());
	}
	return Singleton;
}
template<> VRM4ULOADER_API UScriptStruct* StaticStruct<FMeshInfo_VRM4U>()
{
	return FMeshInfo_VRM4U::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshInfo_VRM4U(FMeshInfo_VRM4U::StaticStruct, TEXT("/Script/VRM4ULoader"), TEXT("MeshInfo_VRM4U"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4ULoader_StaticRegisterNativesFMeshInfo_VRM4U
{
	FScriptStruct_VRM4ULoader_StaticRegisterNativesFMeshInfo_VRM4U()
	{
		UScriptStruct::DeferCppStructOps<FMeshInfo_VRM4U>(FName(TEXT("MeshInfo_VRM4U")));
	}
} ScriptStruct_VRM4ULoader_StaticRegisterNativesFMeshInfo_VRM4U;
	struct Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfo_VRM4U>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_Inner = { "Triangles2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2 = { "Triangles2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Triangles2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "Comment", "//\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"ReturnedData\")\n//\x09\x09TArray<FProcMeshTangent> MeshTangents;\n" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"ReturnedData\")\n       TArray<FProcMeshTangent> MeshTangents;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
		nullptr,
		&NewStructOps,
		"MeshInfo_VRM4U",
		sizeof(FMeshInfo_VRM4U),
		alignof(FMeshInfo_VRM4U),
		Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo_VRM4U()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4ULoader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshInfo_VRM4U"), sizeof(FMeshInfo_VRM4U), Get_Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Hash() { return 3022688128U; }
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execCreateTailBone)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_TARRAY_REF(FString,Z_Param_Out_boneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::CreateTailBone(Z_Param_skeletalMesh,Z_Param_Out_boneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execCopyVirtualBone)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_dstMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_srcMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::CopyVirtualBone(Z_Param_dstMesh,Z_Param_srcMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execCopyPhysicsAsset)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_dstMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_srcMesh);
		P_GET_UBOOL(Z_Param_bResetCollisionTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::CopyPhysicsAsset(Z_Param_dstMesh,Z_Param_srcMesh,Z_Param_bResetCollisionTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execVRMReTransformHumanoidBone)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_targetHumanoidSkeleton);
		P_GET_OBJECT(UVrmMetaObject,Z_Param_meta);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_displaySkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::VRMReTransformHumanoidBone(Z_Param_targetHumanoidSkeleton,Z_Param_meta,Z_Param_displaySkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execLoadVRMFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
		P_GET_OBJECT_REF(UVrmAssetListObject,Z_Param_Out_OutVrmAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
		P_GET_STRUCT_REF(FImportOptionData,Z_Param_Out_OptionForRuntimeLoad);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoaderBPFunctionLibrary::LoadVRMFileAsync(Z_Param_WorldContextObject,Z_Param_InVrmAsset,Z_Param_Out_OutVrmAsset,Z_Param_filepath,Z_Param_Out_OptionForRuntimeLoad,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execLoadVRMFile)
	{
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
		P_GET_OBJECT_REF(UVrmAssetListObject,Z_Param_Out_OutVrmAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
		P_GET_STRUCT_REF(FImportOptionData,Z_Param_Out_OptionForRuntimeLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::LoadVRMFile(Z_Param_InVrmAsset,Z_Param_Out_OutVrmAsset,Z_Param_filepath,Z_Param_Out_OptionForRuntimeLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execVRMSetLoadMaterialType)
	{
		P_GET_ENUM(EVRMImportMaterialType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::VRMSetLoadMaterialType(EVRMImportMaterialType(Z_Param_type));
		P_NATIVE_END;
	}
	void ULoaderBPFunctionLibrary::StaticRegisterNativesULoaderBPFunctionLibrary()
	{
		UClass* Class = ULoaderBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPhysicsAsset", &ULoaderBPFunctionLibrary::execCopyPhysicsAsset },
			{ "CopyVirtualBone", &ULoaderBPFunctionLibrary::execCopyVirtualBone },
			{ "CreateTailBone", &ULoaderBPFunctionLibrary::execCreateTailBone },
			{ "LoadVRMFile", &ULoaderBPFunctionLibrary::execLoadVRMFile },
			{ "LoadVRMFileAsync", &ULoaderBPFunctionLibrary::execLoadVRMFileAsync },
			{ "VRMReTransformHumanoidBone", &ULoaderBPFunctionLibrary::execVRMReTransformHumanoidBone },
			{ "VRMSetLoadMaterialType", &ULoaderBPFunctionLibrary::execVRMSetLoadMaterialType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics
	{
		struct LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms
		{
			USkeletalMesh* dstMesh;
			const USkeletalMesh* srcMesh;
			bool bResetCollisionTransform;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dstMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_srcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_srcMesh;
		static void NewProp_bResetCollisionTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetCollisionTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_dstMesh = { "dstMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms, dstMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh = { "srcMesh", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms, srcMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh_MetaData)) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms*)Obj)->bResetCollisionTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform = { "bResetCollisionTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_dstMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "///\n" },
		{ "CPP_Default_bResetCollisionTransform", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "CopyPhysicsAsset", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics
	{
		struct LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms
		{
			USkeletalMesh* dstMesh;
			const USkeletalMesh* srcMesh;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dstMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_srcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_srcMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_dstMesh = { "dstMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms, dstMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh = { "srcMesh", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms, srcMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh_MetaData)) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_dstMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "CopyVirtualBone", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics
	{
		struct LoaderBPFunctionLibrary_eventCreateTailBone_Parms
		{
			USkeletalMesh* skeletalMesh;
			TArray<FString> boneName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_boneName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCreateTailBone_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_Inner = { "boneName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCreateTailBone_Parms, boneName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_MetaData)) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCreateTailBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCreateTailBone_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_skeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "CreateTailBone", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventCreateTailBone_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics
	{
		struct LoaderBPFunctionLibrary_eventLoadVRMFile_Parms
		{
			const UVrmAssetListObject* InVrmAsset;
			UVrmAssetListObject* OutVrmAsset;
			FString filepath;
			FImportOptionData OptionForRuntimeLoad;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutVrmAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filepath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionForRuntimeLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionForRuntimeLoad;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OutVrmAsset = { "OutVrmAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, OutVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, filepath), METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad = { "OptionForRuntimeLoad", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, OptionForRuntimeLoad), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad_MetaData)) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventLoadVRMFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OutVrmAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "LoadVRMFile", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics
	{
		struct LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms
		{
			const UObject* WorldContextObject;
			const UVrmAssetListObject* InVrmAsset;
			UVrmAssetListObject* OutVrmAsset;
			FString filepath;
			FImportOptionData OptionForRuntimeLoad;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutVrmAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filepath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionForRuntimeLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionForRuntimeLoad;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OutVrmAsset = { "OutVrmAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, OutVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, filepath), METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad = { "OptionForRuntimeLoad", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, OptionForRuntimeLoad), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OutVrmAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "LoadVRMFileAsync", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics
	{
		struct LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms
		{
			USkeletalMeshComponent* targetHumanoidSkeleton;
			const UVrmMetaObject* meta;
			const USkeletalMeshComponent* displaySkeleton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetHumanoidSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetHumanoidSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displaySkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_displaySkeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton = { "targetHumanoidSkeleton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms, targetHumanoidSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms, meta), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton = { "displaySkeleton", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms, displaySkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton_MetaData)) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "///\n" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "VRMReTransformHumanoidBone", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics
	{
		struct LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms
		{
			EVRMImportMaterialType type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms, type), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "VRMSetLoadMaterialType", nullptr, nullptr, sizeof(LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary_NoRegister()
	{
		return ULoaderBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset, "CopyPhysicsAsset" }, // 2429995719
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone, "CopyVirtualBone" }, // 195423859
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone, "CreateTailBone" }, // 995805310
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile, "LoadVRMFile" }, // 3612357261
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync, "LoadVRMFileAsync" }, // 900715859
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone, "VRMReTransformHumanoidBone" }, // 607408662
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType, "VRMSetLoadMaterialType" }, // 4246625261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LoaderBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoaderBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::ClassParams = {
		&ULoaderBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoaderBPFunctionLibrary, 3239356556);
	template<> VRM4ULOADER_API UClass* StaticClass<ULoaderBPFunctionLibrary>()
	{
		return ULoaderBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoaderBPFunctionLibrary(Z_Construct_UClass_ULoaderBPFunctionLibrary, &ULoaderBPFunctionLibrary::StaticClass, TEXT("/Script/VRM4ULoader"), TEXT("ULoaderBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoaderBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
