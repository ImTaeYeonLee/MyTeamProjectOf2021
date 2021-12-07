// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/OWLPROBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLPROBlueprintFunctionLibrary() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execOWLLogInStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOWLPROBlueprintFunctionLibrary::OWLLogInStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execOWLLogOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLPROBlueprintFunctionLibrary::OWLLogOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execOWLLogIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLPROBlueprintFunctionLibrary::OWLLogIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execDrawUMGToRenderTarget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UMGWidget);
		P_GET_STRUCT(FIntPoint,Z_Param_Size);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLPROBlueprintFunctionLibrary::DrawUMGToRenderTarget(Z_Param_UMGWidget,Z_Param_Size,Z_Param_DeltaTime,Z_Param_Out_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execGetIsRuntimeViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOWLPROBlueprintFunctionLibrary::GetIsRuntimeViewportRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execGetIsEditorViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOWLPROBlueprintFunctionLibrary::GetIsEditorViewportRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execToggleRuntimeViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLPROBlueprintFunctionLibrary::ToggleRuntimeViewportRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLPROBlueprintFunctionLibrary::execToggleEditorViewportRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOWLPROBlueprintFunctionLibrary::ToggleEditorViewportRendering();
		P_NATIVE_END;
	}
	void UOWLPROBlueprintFunctionLibrary::StaticRegisterNativesUOWLPROBlueprintFunctionLibrary()
	{
		UClass* Class = UOWLPROBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawUMGToRenderTarget", &UOWLPROBlueprintFunctionLibrary::execDrawUMGToRenderTarget },
			{ "GetIsEditorViewportRendering", &UOWLPROBlueprintFunctionLibrary::execGetIsEditorViewportRendering },
			{ "GetIsRuntimeViewportRendering", &UOWLPROBlueprintFunctionLibrary::execGetIsRuntimeViewportRendering },
			{ "OWLLogIn", &UOWLPROBlueprintFunctionLibrary::execOWLLogIn },
			{ "OWLLogInStatus", &UOWLPROBlueprintFunctionLibrary::execOWLLogInStatus },
			{ "OWLLogOut", &UOWLPROBlueprintFunctionLibrary::execOWLLogOut },
			{ "ToggleEditorViewportRendering", &UOWLPROBlueprintFunctionLibrary::execToggleEditorViewportRendering },
			{ "ToggleRuntimeViewportRendering", &UOWLPROBlueprintFunctionLibrary::execToggleRuntimeViewportRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics
	{
		struct OWLPROBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms
		{
			UUserWidget* UMGWidget;
			FIntPoint Size;
			float DeltaTime;
			UTextureRenderTarget2D* RenderTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMGWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMGWidget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget = { "UMGWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLPROBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, UMGWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLPROBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLPROBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLPROBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09 * Use this to render any UMG Widgets\n\x09 */" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Use this to render any UMG Widgets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "DrawUMGToRenderTarget", nullptr, nullptr, sizeof(OWLPROBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms), Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics
	{
		struct OWLPROBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLPROBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLPROBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms), &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "Comment", "/**\n\x09* rendering status of the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "rendering status of the viewport that renders at Editor time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "GetIsEditorViewportRendering", nullptr, nullptr, sizeof(OWLPROBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms), Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics
	{
		struct OWLPROBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLPROBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLPROBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms), &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "Comment", "/**\n\x09* rendering status of the viewport at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "rendering status of the viewport at PIE or Standalone game time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "GetIsRuntimeViewportRendering", nullptr, nullptr, sizeof(OWLPROBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms), Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* bind this function to the key of your choice to create a way to log in in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "bind this function to the key of your choice to create a way to log in in packaged games" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "OWLLogIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics
	{
		struct OWLPROBlueprintFunctionLibrary_eventOWLLogInStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLPROBlueprintFunctionLibrary_eventOWLLogInStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLPROBlueprintFunctionLibrary_eventOWLLogInStatus_Parms), &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* this function will return true if the user is logged in and false if they are logged out\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "this function will return true if the user is logged in and false if they are logged out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "OWLLogInStatus", nullptr, nullptr, sizeof(OWLPROBlueprintFunctionLibrary_eventOWLLogInStatus_Parms), Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* bind this function to the key of your choice to create a way to log in in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "bind this function to the key of your choice to create a way to log in in packaged games" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "OWLLogOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "Comment", "/**\n\x09* toggle the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "toggle the viewport that renders at Editor time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "ToggleEditorViewportRendering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "Comment", "/**\n\x09* toggle the viewport that render at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
		{ "ToolTip", "toggle the viewport that render at PIE or Standalone game time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, nullptr, "ToggleRuntimeViewportRendering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_NoRegister()
	{
		return UOWLPROBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_DrawUMGToRenderTarget, "DrawUMGToRenderTarget" }, // 1795154272
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsEditorViewportRendering, "GetIsEditorViewportRendering" }, // 2157935973
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_GetIsRuntimeViewportRendering, "GetIsRuntimeViewportRendering" }, // 1881741310
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogIn, "OWLLogIn" }, // 1760592950
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogInStatus, "OWLLogInStatus" }, // 2486870381
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_OWLLogOut, "OWLLogOut" }, // 3647743480
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleEditorViewportRendering, "ToggleEditorViewportRendering" }, // 197206567
		{ &Z_Construct_UFunction_UOWLPROBlueprintFunctionLibrary_ToggleRuntimeViewportRendering, "ToggleRuntimeViewportRendering" }, // 915441897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OWLPROBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OWLPROBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLPROBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::ClassParams = {
		&UOWLPROBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWLPROBlueprintFunctionLibrary, 1202052702);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLPROBlueprintFunctionLibrary>()
	{
		return UOWLPROBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWLPROBlueprintFunctionLibrary(Z_Construct_UClass_UOWLPROBlueprintFunctionLibrary, &UOWLPROBlueprintFunctionLibrary::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("UOWLPROBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLPROBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
