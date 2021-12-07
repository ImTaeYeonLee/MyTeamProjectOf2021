// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/OWLCineCamCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCineCamCapture() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLCineCamCapture_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLCineCamCapture();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
// End Cross Module References
	void AOWLCineCamCapture::StaticRegisterNativesAOWLCineCamCapture()
	{
	}
	UClass* Z_Construct_UClass_AOWLCineCamCapture_NoRegister()
	{
		return AOWLCineCamCapture::StaticClass();
	}
	struct Z_Construct_UClass_AOWLCineCamCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLCineCamCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCineCamCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "OWLCineCamCapture.h" },
		{ "ModuleRelativePath", "Public/OWLCineCamCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCineCamCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLCineCamCapture, CaptureComponent), Z_Construct_UClass_UOWLCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLCineCamCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLCineCamCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLCineCamCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWLCineCamCapture_Statics::ClassParams = {
		&AOWLCineCamCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLCineCamCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCineCamCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLCineCamCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCineCamCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLCineCamCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWLCineCamCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWLCineCamCapture, 3358410552);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<AOWLCineCamCapture>()
	{
		return AOWLCineCamCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWLCineCamCapture(Z_Construct_UClass_AOWLCineCamCapture, &AOWLCineCamCapture::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("AOWLCineCamCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLCineCamCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
