// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_Streamer_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_Streamer_Character() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Streamer_Character_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Streamer_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_PC_MoveActorComponent_NoRegister();
// End Cross Module References
	void ATY_Streamer_Character::StaticRegisterNativesATY_Streamer_Character()
	{
	}
	UClass* Z_Construct_UClass_ATY_Streamer_Character_NoRegister()
	{
		return ATY_Streamer_Character::StaticClass();
	}
	struct Z_Construct_UClass_ATY_Streamer_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_Streamer_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_Streamer_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TY_Streamer_Character.h" },
		{ "ModuleRelativePath", "Public/TY_Streamer_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_Streamer_Character_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "PlayerMove" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_Streamer_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_Streamer_Character_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_Streamer_Character, playerMove), Z_Construct_UClass_UTY_PC_MoveActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_Streamer_Character_Statics::NewProp_playerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_Streamer_Character_Statics::NewProp_playerMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATY_Streamer_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_Streamer_Character_Statics::NewProp_playerMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_Streamer_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_Streamer_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_Streamer_Character_Statics::ClassParams = {
		&ATY_Streamer_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATY_Streamer_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATY_Streamer_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_Streamer_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_Streamer_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_Streamer_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_Streamer_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_Streamer_Character, 4265101852);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_Streamer_Character>()
	{
		return ATY_Streamer_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_Streamer_Character(Z_Construct_UClass_ATY_Streamer_Character, &ATY_Streamer_Character::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_Streamer_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_Streamer_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
