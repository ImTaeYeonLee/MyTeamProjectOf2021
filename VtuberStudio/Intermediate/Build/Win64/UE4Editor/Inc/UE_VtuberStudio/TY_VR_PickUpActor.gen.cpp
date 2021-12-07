// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_VR_PickUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_VR_PickUpActor() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_VR_PickUpActor_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_VR_PickUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ATY_VR_PickUpActor::StaticRegisterNativesATY_VR_PickUpActor()
	{
	}
	UClass* Z_Construct_UClass_ATY_VR_PickUpActor_NoRegister()
	{
		return ATY_VR_PickUpActor::StaticClass();
	}
	struct Z_Construct_UClass_ATY_VR_PickUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_firstComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp02_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttaching_MetaData[];
#endif
		static void NewProp_isAttaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickObjectGravityNPhysics_MetaData[];
#endif
		static void NewProp_pickObjectGravityNPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pickObjectGravityNPhysics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATY_VR_PickUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TY_VR_PickUpActor.h" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_firstComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "//virtual void Tick(float DeltaTime) override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
		{ "ToolTip", "virtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_firstComp = { "firstComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_VR_PickUpActor, firstComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_firstComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_firstComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_VR_PickUpActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_VR_PickUpActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp02_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp02 = { "meshComp02", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_VR_PickUpActor, meshComp02), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp02_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATY_VR_PickUpActor, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "// ???? ???????? \xc8\xae???? ????. ???????? ???\xc5\xb6??? ?????? ?????? ?????????? \xc8\xae???? ???\xcc\xb4?.\n" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
		{ "ToolTip", "???? ???????? \xc8\xae???? ????. ???????? ???\xc5\xb6??? ?????? ?????? ?????????? \xc8\xae???? ???\xcc\xb4?." },
	};
#endif
	void Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching_SetBit(void* Obj)
	{
		((ATY_VR_PickUpActor*)Obj)->isAttaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching = { "isAttaching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATY_VR_PickUpActor), &Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "// ???? ???????? \xc8\xae???? ????. ???????? ???\xc5\xb6??? ?????? ?????? ?????????? \xc8\xae???? ???\xcc\xb4?.\n" },
		{ "ModuleRelativePath", "Public/TY_VR_PickUpActor.h" },
		{ "ToolTip", "???? ???????? \xc8\xae???? ????. ???????? ???\xc5\xb6??? ?????? ?????? ?????????? \xc8\xae???? ???\xcc\xb4?." },
	};
#endif
	void Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics_SetBit(void* Obj)
	{
		((ATY_VR_PickUpActor*)Obj)->pickObjectGravityNPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics = { "pickObjectGravityNPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATY_VR_PickUpActor), &Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATY_VR_PickUpActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_firstComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_meshComp02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_isAttaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATY_VR_PickUpActor_Statics::NewProp_pickObjectGravityNPhysics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATY_VR_PickUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATY_VR_PickUpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATY_VR_PickUpActor_Statics::ClassParams = {
		&ATY_VR_PickUpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATY_VR_PickUpActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATY_VR_PickUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATY_VR_PickUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATY_VR_PickUpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATY_VR_PickUpActor, 9123494);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<ATY_VR_PickUpActor>()
	{
		return ATY_VR_PickUpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATY_VR_PickUpActor(Z_Construct_UClass_ATY_VR_PickUpActor, &ATY_VR_PickUpActor::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("ATY_VR_PickUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATY_VR_PickUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
