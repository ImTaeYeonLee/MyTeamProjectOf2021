// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/BossAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_UBossAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Subway();
// End Cross Module References
	void UBossAnimInstance::StaticRegisterNativesUBossAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister()
	{
		return UBossAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBossAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttkOne_MetaData[];
#endif
		static void NewProp_isAttkOne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttkOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttkTwo_MetaData[];
#endif
		static void NewProp_isAttkTwo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttkTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttkThree_MetaData[];
#endif
		static void NewProp_isAttkThree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttkThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTrans_MetaData[];
#endif
		static void NewProp_isTrans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTrans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTaunt_MetaData[];
#endif
		static void NewProp_isTaunt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTaunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMoving_MetaData[];
#endif
		static void NewProp_isMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDamage_MetaData[];
#endif
		static void NewProp_isDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDamage;
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
	UObject* (*const Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BossAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead = { "isHead", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody = { "isBody", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = FSM, BlueprintReadOnly)\n//bool isRtArm = false;\n//UPROPERTY(VisibleAnywhere, Category = FSM, BlueprintReadOnly)\n//bool isLtArm = false;\n" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = FSM, BlueprintReadOnly)\nbool isRtArm = false;\nUPROPERTY(VisibleAnywhere, Category = FSM, BlueprintReadOnly)\nbool isLtArm = false;" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isAttkOne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne = { "isAttkOne", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isAttkTwo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo = { "isAttkTwo", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isAttkThree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree = { "isAttkThree", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isTrans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans = { "isTrans", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isTaunt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt = { "isTaunt", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving = { "isMoving", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage = { "isDamage", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie = { "isDie", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttkThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTrans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isTaunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isDie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams = {
		&UBossAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBossAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBossAnimInstance, 2835216052);
	template<> SUBWAY_API UClass* StaticClass<UBossAnimInstance>()
	{
		return UBossAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBossAnimInstance(Z_Construct_UClass_UBossAnimInstance, &UBossAnimInstance::StaticClass, TEXT("/Script/Subway"), TEXT("UBossAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
