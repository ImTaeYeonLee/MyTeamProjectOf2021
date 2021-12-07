// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_ObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_ObjectBase() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_ObjectBase_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_ObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Streamer_Character_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Client_Character_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_CameraMan_Pawn_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_AUE_VtuberStudioCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATY_ObjectBase::execOnEndCursorOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndCursorOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_ObjectBase::execOnBeginCursorOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginCursorOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_ObjectBase::execOnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClicked();
		P_NATIVE_END;
	}
	void ATY_ObjectBase::StaticRegisterNativesATY_ObjectBase()
	{
		UClass* Class = ATY_ObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginCursorOver", &ATY_ObjectBase::execOnBeginCursorOver },
			{ "OnClicked", &ATY_ObjectBase::execOnClicked },
			{ "OnEndCursorOver", &ATY_ObjectBase::execOnEndCursorOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_ObjectBase, nullptr, "OnBeginCursorOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_ObjectBase_OnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_ObjectBase_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_ObjectBase_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_ObjectBase, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_ObjectBase_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_ObjectBase_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_ObjectBase_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_ObjectBase_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_ObjectBase, nullptr, "OnEndCursorOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATY_ObjectBase_NoRegister()
	{
		return ATY_ObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_ATY_ObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_streamerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_clientCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraManPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraManPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pcPlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcPlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vtsCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vtsCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_holdLoc_MetaData[];
#endif
		static void NewProp_holdLoc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_holdLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMuituply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMuituply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDrawOutline_MetaData[];
#endif
		static void NewProp_isDrawOutline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDrawOutline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_ObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATY_ObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATY_ObjectBase_OnBeginCursorOver, "OnBeginCursorOver" }, // 136473127
		{ &Z_Construct_UFunction_ATY_ObjectBase_OnClicked, "OnClicked" }, // 1739801473
		{ &Z_Construct_UFunction_ATY_ObjectBase_OnEndCursorOver, "OnEndCursorOver" }, // 1123179392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TY_ObjectBase.h" },
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_staticMesh_MetaData[] = {
		{ "Category", "test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_staticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_staticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_index_MetaData[] = {
		{ "Category", "test" },
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, index), METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh_Inner = { "mesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "test" },
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, mesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_streamerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_streamerCharacter = { "streamerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, streamerCharacter), Z_Construct_UClass_ATY_Streamer_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_streamerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_streamerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_clientCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_clientCharacter = { "clientCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, clientCharacter), Z_Construct_UClass_ATY_Client_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_clientCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_clientCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_cameraManPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_cameraManPawn = { "cameraManPawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, cameraManPawn), Z_Construct_UClass_ATY_CameraMan_Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_cameraManPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_cameraManPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_pcPlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_pcPlayerPawn = { "pcPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, pcPlayerPawn), Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_pcPlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_pcPlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_vtsCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_vtsCharacter = { "vtsCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, vtsCharacter), Z_Construct_UClass_AUE_VtuberStudioCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_vtsCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_vtsCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	void Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc_SetBit(void* Obj)
	{
		((ATY_ObjectBase*)Obj)->holdLoc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc = { "holdLoc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATY_ObjectBase), &Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_ScaleMuituply_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_ScaleMuituply = { "ScaleMuituply", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_ObjectBase, ScaleMuituply), METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_ScaleMuituply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_ScaleMuituply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_ObjectBase.h" },
	};
#endif
	void Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline_SetBit(void* Obj)
	{
		((ATY_ObjectBase*)Obj)->isDrawOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline = { "isDrawOutline", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATY_ObjectBase), &Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATY_ObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_staticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_streamerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_clientCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_cameraManPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_pcPlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_vtsCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_holdLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_ScaleMuituply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_ObjectBase_Statics::NewProp_isDrawOutline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_ObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_ObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_ObjectBase_Statics::ClassParams = {
		&ATY_ObjectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATY_ObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_ObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_ObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_ObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_ObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_ObjectBase, 2966136671);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_ObjectBase>()
	{
		return ATY_ObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_ObjectBase(Z_Construct_UClass_ATY_ObjectBase, &ATY_ObjectBase::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_ObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_ObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
