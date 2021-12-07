// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VtuberStudio/Public/TY_PC_CameraWheelActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTY_PC_CameraWheelActorComponent() {}
// Cross Module References
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_UTY_PC_CameraWheelActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UE_VtuberStudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Streamer_Character_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_Client_Character_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_CameraMan_Pawn_NoRegister();
	UE_VTUBERSTUDIO_API UClass* Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister();
// End Cross Module References
	void UTY_PC_CameraWheelActorComponent::StaticRegisterNativesUTY_PC_CameraWheelActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_NoRegister()
	{
		return UTY_PC_CameraWheelActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraTurnInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cameraTurnInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_camSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_streamerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clientCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_clientCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraManPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraManPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pcPlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcPlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VtuberStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TY_PC_CameraWheelActorComponent.h" },
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput_MetaData[] = {
		{ "Comment", "/*\n\x09// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PlayerCamera\")\n\x09\x09""class UCameraComponent* playerCamera_pc;\n\n\x09// \xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????\n\x09UPROPERTY(VisibleAnywhere, Category = \"PlayerCamera\")\n\x09\x09""class USpringArmComponent* playerCameraSpringArm;\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
		{ "ToolTip", "// \xc4\xab?\xde\xb6? ??????\xc6\xae ????\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PlayerCamera\")\n        class UCameraComponent* playerCamera_pc;\n\n// \xc4\xab?\xde\xb6? ???? ?\xdc\xbe\xc6\xbf? ?????? ????, SpringArm ??????\xc6\xae ????\nUPROPERTY(VisibleAnywhere, Category = \"PlayerCamera\")\n        class USpringArmComponent* playerCameraSpringArm;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput = { "cameraTurnInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, cameraTurnInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_camSpeed_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// \xc4\xab?\xde\xb6? \xc8\xb8???? ?\xd3\xb5??? ????, ????\n" },
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? \xc8\xb8???? ?\xd3\xb5??? ????, ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_camSpeed = { "camSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, camSpeed), METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_camSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_camSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_streamerCharacter_MetaData[] = {
		{ "Comment", "// ?? ??????\xc6\xae?? ?????? ?????? ????\n" },
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
		{ "ToolTip", "?? ??????\xc6\xae?? ?????? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_streamerCharacter = { "streamerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, streamerCharacter), Z_Construct_UClass_ATY_Streamer_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_streamerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_streamerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_clientCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_clientCharacter = { "clientCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, clientCharacter), Z_Construct_UClass_ATY_Client_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_clientCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_clientCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraManPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraManPawn = { "cameraManPawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, cameraManPawn), Z_Construct_UClass_ATY_CameraMan_Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraManPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraManPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_pcPlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_pcPlayerPawn = { "pcPlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, pcPlayerPawn), Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_pcPlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_pcPlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_me_MetaData[] = {
		{ "ModuleRelativePath", "Public/TY_PC_CameraWheelActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTY_PC_CameraWheelActorComponent, me), Z_Construct_UClass_ATY_PC_PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_me_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraTurnInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_camSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_streamerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_clientCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_cameraManPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_pcPlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::NewProp_me,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTY_PC_CameraWheelActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::ClassParams = {
		&UTY_PC_CameraWheelActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTY_PC_CameraWheelActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTY_PC_CameraWheelActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTY_PC_CameraWheelActorComponent, 1949218246);
	template<> UE_VTUBERSTUDIO_API UClass* StaticClass<UTY_PC_CameraWheelActorComponent>()
	{
		return UTY_PC_CameraWheelActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTY_PC_CameraWheelActorComponent(Z_Construct_UClass_UTY_PC_CameraWheelActorComponent, &UTY_PC_CameraWheelActorComponent::StaticClass, TEXT("/Script/UE_VtuberStudio"), TEXT("UTY_PC_CameraWheelActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTY_PC_CameraWheelActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
