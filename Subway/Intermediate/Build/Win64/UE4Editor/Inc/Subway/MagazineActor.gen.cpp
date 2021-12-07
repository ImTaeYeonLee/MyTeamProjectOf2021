// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subway/Public/MagazineActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagazineActor() {}
// Cross Module References
	SUBWAY_API UClass* Z_Construct_UClass_AMagazineActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AMagazineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Subway();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AVR_Player_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AShotGunActor_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponPistol_NoRegister();
	SUBWAY_API UClass* Z_Construct_UClass_AWeaponShotgun_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagazineActor::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AMagazineActor::StaticRegisterNativesAMagazineActor()
	{
		UClass* Class = AMagazineActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &AMagazineActor::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics
	{
		struct MagazineActor_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagazineActor_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagazineActor_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagazineActor_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagazineActor_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MagazineActor_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagazineActor_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagazineActor_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagazineActor, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(MagazineActor_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagazineActor_NoRegister()
	{
		return AMagazineActor::StaticClass();
	}
	struct Z_Construct_UClass_AMagazineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgunActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pistol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pistol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_grabOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gunMagSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gunMagSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotgunMagSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shotgunMagSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagazineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Subway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagazineActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagazineActor_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 2755980564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagazineActor.h" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_player_MetaData[] = {
		{ "Category", "MagazineActor" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, player), Z_Construct_UClass_AVR_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_pickupActor_MetaData[] = {
		{ "Category", "MagazineActor" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_pickupActor = { "pickupActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, pickupActor), Z_Construct_UClass_APickUpActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_pickupActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_pickupActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunActor_MetaData[] = {
		{ "Category", "MagazineActor" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunActor = { "shotgunActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, shotgunActor), Z_Construct_UClass_AShotGunActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_pistol_MetaData[] = {
		{ "Category", "MagazineActor" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_pistol = { "pistol", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, pistol), Z_Construct_UClass_AWeaponPistol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_pistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_pistol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgun_MetaData[] = {
		{ "Category", "MagazineActor" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgun = { "shotgun", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, shotgun), Z_Construct_UClass_AWeaponShotgun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_grabOffset_MetaData[] = {
		{ "Category", "PickUPSettings" },
		{ "Comment", "// ???\xcf\xbf? ?????? Offset ???? ????\n" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
		{ "ToolTip", "???\xcf\xbf? ?????? Offset ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_grabOffset = { "grabOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, grabOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_grabOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_grabOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_gunMagSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_gunMagSound = { "gunMagSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, gunMagSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_gunMagSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_gunMagSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunMagSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MagazineActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunMagSound = { "shotgunMagSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagazineActor, shotgunMagSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunMagSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunMagSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagazineActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_pickupActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_pistol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_grabOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_gunMagSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagazineActor_Statics::NewProp_shotgunMagSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagazineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagazineActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagazineActor_Statics::ClassParams = {
		&AMagazineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagazineActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagazineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagazineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagazineActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagazineActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagazineActor, 3205631903);
	template<> SUBWAY_API UClass* StaticClass<AMagazineActor>()
	{
		return AMagazineActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagazineActor(Z_Construct_UClass_AMagazineActor, &AMagazineActor::StaticClass, TEXT("/Script/Subway"), TEXT("AMagazineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagazineActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
