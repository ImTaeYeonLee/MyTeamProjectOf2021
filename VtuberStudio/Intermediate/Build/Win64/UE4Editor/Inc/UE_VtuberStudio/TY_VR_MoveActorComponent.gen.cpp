// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_VR_MoveActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_VR_MoveActorComponent() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_MoveActorComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_MoveActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UTY_VR_MoveActorComponent::StaticRegisterNativesUTY_VR_MoveActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_VR_MoveActorComponent_NoRegister()
	{
		return UTY_VR_MoveActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_simulDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_simulDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shootPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_VR_MoveActorComponent.h" },
		{ "ModuleRelativePath", "Public/TY_VR_MoveActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "MoveSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_MoveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_MoveActorComponent, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_rotateSpeed_MetaData[] = {
		{ "Category", "MoveSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_MoveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_rotateSpeed = { "rotateSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_MoveActorComponent, rotateSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_rotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_rotateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_simulDirection_MetaData[] = {
		{ "Category", "MoveSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_MoveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_simulDirection = { "simulDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_MoveActorComponent, simulDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_simulDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_simulDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_shootPower_MetaData[] = {
		{ "Category", "MoveSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_MoveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_shootPower = { "shootPower", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_MoveActorComponent, shootPower), METADATA_PARAMS(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_shootPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_shootPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_rotateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_simulDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::NewProp_shootPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_VR_MoveActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::ClassParams = {
		&UTY_VR_MoveActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_VR_MoveActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_VR_MoveActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_VR_MoveActorComponent, 3490236498);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_VR_MoveActorComponent>()
	{
		return UTY_VR_MoveActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_VR_MoveActorComponent(Z_Construct_UClass_UTY_VR_MoveActorComponent, &UTY_VR_MoveActorComponent::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_VR_MoveActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_VR_MoveActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
