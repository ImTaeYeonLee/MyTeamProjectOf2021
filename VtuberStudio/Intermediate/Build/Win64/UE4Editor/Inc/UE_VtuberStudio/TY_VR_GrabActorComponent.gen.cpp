// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_VR_GrabActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_VR_GrabActorComponent() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UEnum* Z_Construct_UEnum_UE_VtuberStudio_EGrabType();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_GrabActorComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_VR_GrabActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EGrabType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_VtuberStudio_EGrabType, Z_Construct_UPackage__Script_UE_VtuberStudio(), TEXT("EGrabType"));
		}
		return Singleton;
	}
	template<> UE_VTUBERSTUDIO_API UEnum* StaticEnum<EGrabType>()
	{
		return EGrabType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrabType(EGrabType_StaticEnum, TEXT("/Script/UE_VtuberStudio"), TEXT("EGrabType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_VtuberStudio_EGrabType_Hash() { return 1912909602U; }
	UEnum* Z_Construct_UEnum_UE_VtuberStudio_EGrabType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_VtuberStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrabType"), 0, Get_Z_Construct_UEnum_UE_VtuberStudio_EGrabType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrabType::EGT_LineType", (int64)EGrabType::EGT_LineType },
				{ "EGrabType::EGT_SweepType", (int64)EGrabType::EGT_SweepType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EGT_LineType.DisplayName", "LineType" },
				{ "EGT_LineType.Name", "EGrabType::EGT_LineType" },
				{ "EGT_SweepType.DisplayName", "SweepType" },
				{ "EGT_SweepType.Name", "EGrabType::EGT_SweepType" },
				{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
				nullptr,
				"EGrabType",
				"EGrabType",
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
	void UTY_VR_GrabActorComponent::StaticRegisterNativesUTY_VR_GrabActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_VR_GrabActorComponent_NoRegister()
	{
		return UTY_VR_GrabActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_grabDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_myGrabType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myGrabType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_myGrabType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowing_MetaData[];
#endif
		static void NewProp_bIsShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_VR_GrabActorComponent.h" },
		{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_grabDistance_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_grabDistance = { "grabDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_GrabActorComponent, grabDistance), METADATA_PARAMS(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_grabDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_grabDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType = { "myGrabType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_GrabActorComponent, myGrabType), Z_Construct_UEnum_UE_VtuberStudio_EGrabType, METADATA_PARAMS(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing_SetBit(void* Obj)
	{
		((UTY_VR_GrabActorComponent*)Obj)->bIsShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing = { "bIsShowing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTY_VR_GrabActorComponent), &Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_endPos_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_endPos = { "endPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_GrabActorComponent, endPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_endPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_endPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_startPos_MetaData[] = {
		{ "Category", "GrabSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_GrabActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_VR_GrabActorComponent, startPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_startPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_startPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_grabDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_myGrabType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_bIsShowing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_endPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::NewProp_startPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_VR_GrabActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::ClassParams = {
		&UTY_VR_GrabActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_VR_GrabActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_VR_GrabActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_VR_GrabActorComponent, 332752125);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_VR_GrabActorComponent>()
	{
		return UTY_VR_GrabActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_VR_GrabActorComponent(Z_Construct_UClass_UTY_VR_GrabActorComponent, &UTY_VR_GrabActorComponent::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_VR_GrabActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_VR_GrabActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
