// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_DancerFSM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_DancerFSM() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UEnum* Z_Construct_UEnum_UE_VtuberStudio_EDancerState();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_DancerFSM_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_DancerFSM();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Dancer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	static UEnum* EDancerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_VtuberStudio_EDancerState, Z_Construct_UPackage__Script_UE_VtuberStudio(), TEXT("EDancerState"));
		}
		return Singleton;
	}
	template<> UE_VTUBERSTUDIO_API UEnum* StaticEnum<EDancerState>()
	{
		return EDancerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDancerState(EDancerState_StaticEnum, TEXT("/Script/UE_VtuberStudio"), TEXT("EDancerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_VtuberStudio_EDancerState_Hash() { return 2402287259U; }
	UEnum* Z_Construct_UEnum_UE_VtuberStudio_EDancerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_VtuberStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDancerState"), 0, Get_Z_Construct_UEnum_UE_VtuberStudio_EDancerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDancerState::Idle", (int64)EDancerState::Idle },
				{ "EDancerState::GoToTarget", (int64)EDancerState::GoToTarget },
				{ "EDancerState::PlayMontage", (int64)EDancerState::PlayMontage },
				{ "EDancerState::GoToBackstage", (int64)EDancerState::GoToBackstage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// UENUM ?????????? ???? ???? \n" },
				{ "GoToBackstage.Name", "EDancerState::GoToBackstage" },
				{ "GoToTarget.Name", "EDancerState::GoToTarget" },
				{ "Idle.Name", "EDancerState::Idle" },
				{ "ModuleRelativePath", "Public/TY_DancerFSM.h" },
				{ "PlayMontage.Name", "EDancerState::PlayMontage" },
				{ "ToolTip", "UENUM ?????????? ???? ????" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
				nullptr,
				"EDancerState",
				"EDancerState",
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
	void UTY_DancerFSM::StaticRegisterNativesUTY_DancerFSM()
	{
	}
	UClass* Z_Construct_UClass_UTY_DancerFSM_NoRegister()
	{
		return UTY_DancerFSM::StaticClass();
	}
	struct Z_Construct_UClass_UTY_DancerFSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ai_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ai;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_DancerFSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_DancerFSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_DancerFSM.h" },
		{ "ModuleRelativePath", "Public/TY_DancerFSM.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_me_MetaData[] = {
		{ "Comment", "//bAIMoveTo = true;\n" },
		{ "ModuleRelativePath", "Public/TY_DancerFSM.h" },
		{ "ToolTip", "bAIMoveTo = true;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_DancerFSM, me), Z_Construct_UClass_ATY_Dancer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/TY_DancerFSM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_DancerFSM, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_ai_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// ?????\xcf\xb4? AI Controller?? ?????\xd1\xb4?\n" },
		{ "ModuleRelativePath", "Public/TY_DancerFSM.h" },
		{ "ToolTip", "?????\xcf\xb4? AI Controller?? ?????\xd1\xb4?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_ai = { "ai", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_DancerFSM, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_ai_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_ai_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_DancerFSM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_me,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_DancerFSM_Statics::NewProp_ai,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_DancerFSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_DancerFSM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_DancerFSM_Statics::ClassParams = {
		&UTY_DancerFSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_DancerFSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_DancerFSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_DancerFSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_DancerFSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_DancerFSM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_DancerFSM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_DancerFSM, 1120218312);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_DancerFSM>()
	{
		return UTY_DancerFSM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_DancerFSM(Z_Construct_UClass_UTY_DancerFSM, &UTY_DancerFSM::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_DancerFSM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_DancerFSM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
