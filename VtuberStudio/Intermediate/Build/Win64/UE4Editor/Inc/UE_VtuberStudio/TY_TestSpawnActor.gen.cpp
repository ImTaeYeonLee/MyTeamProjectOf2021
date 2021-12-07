// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_TestSpawnActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_TestSpawnActor() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_TestSpawnActor_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_TestSpawnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_RhythmRewardNode_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_RhythmRewardNodeB_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATY_TestSpawnActor::execHeartShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HeartShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execTargetGoto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetGoto();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execSpin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execShapeShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShapeShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execCicleShotGoto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CicleShotGoto();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execCircleShot3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CircleShot3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execCircleShot2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CircleShot2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATY_TestSpawnActor::execCircleShot1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CircleShot1();
		P_NATIVE_END;
	}
	void ATY_TestSpawnActor::StaticRegisterNativesATY_TestSpawnActor()
	{
		UClass* Class = ATY_TestSpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CicleShotGoto", &ATY_TestSpawnActor::execCicleShotGoto },
			{ "CircleShot1", &ATY_TestSpawnActor::execCircleShot1 },
			{ "CircleShot2", &ATY_TestSpawnActor::execCircleShot2 },
			{ "CircleShot3", &ATY_TestSpawnActor::execCircleShot3 },
			{ "HeartShot", &ATY_TestSpawnActor::execHeartShot },
			{ "ShapeShot", &ATY_TestSpawnActor::execShapeShot },
			{ "Spin", &ATY_TestSpawnActor::execSpin },
			{ "TargetGoto", &ATY_TestSpawnActor::execTargetGoto },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//============================================\n// ???? Spawn ?? \xc5\xb8?\xd9\xbf??\xd4\xb7? ?\xcc\xb5?\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
		{ "ToolTip", "???? Spawn ?? \xc5\xb8?\xd9\xbf??\xd4\xb7? ?\xcc\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "CicleShotGoto", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? Spawn\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
		{ "ToolTip", "???? Spawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "CircleShot1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//============================================\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "CircleShot2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//============================================\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "CircleShot3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ??\xc6\xae ????\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
		{ "ToolTip", "??\xc6\xae ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "HeartShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "ShapeShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_Spin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_Spin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc8\xb8??\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
		{ "ToolTip", "\xc8\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_Spin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "Spin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_Spin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_Spin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_Spin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_Spin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc5\xb8?\xd9\xbf??\xd4\xb7?\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
		{ "ToolTip", "\xc5\xb8?\xd9\xbf??\xd4\xb7?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATY_TestSpawnActor, nullptr, "TargetGoto", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATY_TestSpawnActor_NoRegister()
	{
		return ATY_TestSpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_ATY_TestSpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeFactory1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_nodeFactory1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeFactory2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_nodeFactory2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeFactory3_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_nodeFactory3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeFactoryB_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_nodeFactoryB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_TestSpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATY_TestSpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_CicleShotGoto, "CicleShotGoto" }, // 2468351903
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot1, "CircleShot1" }, // 2394738264
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot2, "CircleShot2" }, // 820923002
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_CircleShot3, "CircleShot3" }, // 2939102165
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_HeartShot, "HeartShot" }, // 2270737723
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_ShapeShot, "ShapeShot" }, // 2212140738
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_Spin, "Spin" }, // 131448882
		{ &Z_Construct_UFunction_ATY_TestSpawnActor_TargetGoto, "TargetGoto" }, // 3439708614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_TestSpawnActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TY_TestSpawnActor.h" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory1_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ?\xca\xbf??\xd3\xbc? : ???? ????, ????????\n" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc? : ???? ????, ????????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory1 = { "nodeFactory1", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_TestSpawnActor, nodeFactory1), Z_Construct_UClass_ATY_RhythmRewardNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory2_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory2 = { "nodeFactory2", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_TestSpawnActor, nodeFactory2), Z_Construct_UClass_ATY_RhythmRewardNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory3_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory3 = { "nodeFactory3", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_TestSpawnActor, nodeFactory3), Z_Construct_UClass_ATY_RhythmRewardNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactoryB_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_TestSpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactoryB = { "nodeFactoryB", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_TestSpawnActor, nodeFactoryB), Z_Construct_UClass_ATY_RhythmRewardNodeB_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactoryB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactoryB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATY_TestSpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactory3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_TestSpawnActor_Statics::NewProp_nodeFactoryB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_TestSpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_TestSpawnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_TestSpawnActor_Statics::ClassParams = {
		&ATY_TestSpawnActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATY_TestSpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestSpawnActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_TestSpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_TestSpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_TestSpawnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_TestSpawnActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_TestSpawnActor, 1309148437);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_TestSpawnActor>()
	{
		return ATY_TestSpawnActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_TestSpawnActor(Z_Construct_UClass_ATY_TestSpawnActor, &ATY_TestSpawnActor::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_TestSpawnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_TestSpawnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
