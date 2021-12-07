// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_BaseUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_BaseUserWidget() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_BaseUserWidget_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_BaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
// End Cross Module References
	void UTY_BaseUserWidget::StaticRegisterNativesUTY_BaseUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UTY_BaseUserWidget_NoRegister()
	{
		return UTY_BaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTY_BaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_BaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_BaseUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TY_BaseUserWidget.h" },
		{ "ModuleRelativePath", "Public/TY_BaseUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_BaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_BaseUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_BaseUserWidget_Statics::ClassParams = {
		&UTY_BaseUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_BaseUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_BaseUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_BaseUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_BaseUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_BaseUserWidget, 284163443);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_BaseUserWidget>()
	{
		return UTY_BaseUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_BaseUserWidget(Z_Construct_UClass_UTY_BaseUserWidget, &UTY_BaseUserWidget::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_BaseUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_BaseUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
