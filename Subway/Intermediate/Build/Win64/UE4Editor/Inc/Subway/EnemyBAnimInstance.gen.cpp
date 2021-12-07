// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/EnemyBAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBAnimInstance() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UEnemyBAnimInstance_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UEnemyBAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void UEnemyBAnimInstance::StaticRegisterNativesUEnemyBAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UEnemyBAnimInstance_NoRegister()
	{
		return UEnemyBAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHead_MetaData[];
#endif
		static void NewProp_isHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBody_MetaData[];
#endif
		static void NewProp_isBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMoving_MetaData[];
#endif
		static void NewProp_isMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDamaging_MetaData[];
#endif
		static void NewProp_isDamaging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDamaging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDie_MetaData[];
#endif
		static void NewProp_isDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyBAnimInstance.h" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead_SetBit(void* Obj)
	{
		((UEnemyBAnimInstance*)Obj)->isHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead = { "isHead", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyBAnimInstance), &Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody_SetBit(void* Obj)
	{
		((UEnemyBAnimInstance*)Obj)->isBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody = { "isBody", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyBAnimInstance), &Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving_SetBit(void* Obj)
	{
		((UEnemyBAnimInstance*)Obj)->isMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving = { "isMoving", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyBAnimInstance), &Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging_SetBit(void* Obj)
	{
		((UEnemyBAnimInstance*)Obj)->isDamaging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging = { "isDamaging", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyBAnimInstance), &Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((UEnemyBAnimInstance*)Obj)->isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyBAnimInstance), &Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/EnemyBAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie_SetBit(void* Obj)
	{
		((UEnemyBAnimInstance*)Obj)->isDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie = { "isDie", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyBAnimInstance), &Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyBAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDamaging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBAnimInstance_Statics::NewProp_isDie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBAnimInstance_Statics::ClassParams = {
		&UEnemyBAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyBAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyBAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyBAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyBAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyBAnimInstance, 1829837654);
	template<> SUBWAY_API UClass* StaticClass<UEnemyBAnimInstance>()
	{
		return UEnemyBAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyBAnimInstance(Z_Construct_UClass_UEnemyBAnimInstance, &UEnemyBAnimInstance::StaticClass, TEXT("/Script/Subway"), TEXT("UEnemyBAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
