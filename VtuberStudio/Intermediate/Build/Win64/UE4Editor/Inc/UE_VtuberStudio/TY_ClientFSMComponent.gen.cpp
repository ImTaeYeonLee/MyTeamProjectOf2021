// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_ClientFSMComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_ClientFSMComponent() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UEnum* Z_Construct_UEnum_UE_VtuberStudio_EClientFSMState();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_ClientFSMComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_ClientFSMComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EClientFSMState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_VtuberStudio_EClientFSMState, Z_Construct_UPackage__Script_UE_VtuberStudio(), TEXT("EClientFSMState"));
		}
		return Singleton;
	}
	template<> UE_VTUBERSTUDIO_API UEnum* StaticEnum<EClientFSMState>()
	{
		return EClientFSMState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClientFSMState(EClientFSMState_StaticEnum, TEXT("/Script/UE_VtuberStudio"), TEXT("EClientFSMState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_VtuberStudio_EClientFSMState_Hash() { return 871030118U; }
	UEnum* Z_Construct_UEnum_UE_VtuberStudio_EClientFSMState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_VtuberStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClientFSMState"), 0, Get_Z_Construct_UEnum_UE_VtuberStudio_EClientFSMState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClientFSMState::Normal", (int64)EClientFSMState::Normal },
				{ "EClientFSMState::Boost", (int64)EClientFSMState::Boost },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boost.Name", "EClientFSMState::Boost" },
				{ "ModuleRelativePath", "Public/TY_ClientFSMComponent.h" },
				{ "Normal.Name", "EClientFSMState::Normal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
				nullptr,
				"EClientFSMState",
				"EClientFSMState",
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
	void UTY_ClientFSMComponent::StaticRegisterNativesUTY_ClientFSMComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_ClientFSMComponent_NoRegister()
	{
		return UTY_ClientFSMComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_ClientFSMComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_normalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boostSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boostSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_ClientFSMComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_ClientFSMComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_ClientFSMComponent.h" },
		{ "ModuleRelativePath", "Public/TY_ClientFSMComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_normalSpeed_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TY_ClientFSMComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_normalSpeed = { "normalSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_ClientFSMComponent, normalSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_normalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_normalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_boostSpeed_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TY_ClientFSMComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_boostSpeed = { "boostSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_ClientFSMComponent, boostSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_boostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_boostSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_ClientFSMComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_normalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_ClientFSMComponent_Statics::NewProp_boostSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_ClientFSMComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_ClientFSMComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_ClientFSMComponent_Statics::ClassParams = {
		&UTY_ClientFSMComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_ClientFSMComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_ClientFSMComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_ClientFSMComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_ClientFSMComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_ClientFSMComponent, 597427708);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_ClientFSMComponent>()
	{
		return UTY_ClientFSMComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_ClientFSMComponent(Z_Construct_UClass_UTY_ClientFSMComponent, &UTY_ClientFSMComponent::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_ClientFSMComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_ClientFSMComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
