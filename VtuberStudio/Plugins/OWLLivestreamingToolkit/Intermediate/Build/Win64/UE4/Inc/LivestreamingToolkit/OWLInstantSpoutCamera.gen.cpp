// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/InstantCamera/OWLInstantSpoutCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLInstantSpoutCamera() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UEnum* Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLInstantSpoutCamera_NoRegister();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_AOWLInstantSpoutCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_USceneCaptureComponent2DNoMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* EStreamResolution_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution, Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("EStreamResolution"));
		}
		return Singleton;
	}
	template<> LIVESTREAMINGTOOLKIT_API UEnum* StaticEnum<EStreamResolution>()
	{
		return EStreamResolution_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreamResolution(EStreamResolution_StaticEnum, TEXT("/Script/LivestreamingToolkit"), TEXT("EStreamResolution"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution_Hash() { return 681304613U; }
	UEnum* Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LivestreamingToolkit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreamResolution"), 0, Get_Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStreamResolution::RS_240p", (int64)EStreamResolution::RS_240p },
				{ "EStreamResolution::RS_360p", (int64)EStreamResolution::RS_360p },
				{ "EStreamResolution::RS_480p", (int64)EStreamResolution::RS_480p },
				{ "EStreamResolution::RS_720p", (int64)EStreamResolution::RS_720p },
				{ "EStreamResolution::RS_1080p", (int64)EStreamResolution::RS_1080p },
				{ "EStreamResolution::RS_1440p", (int64)EStreamResolution::RS_1440p },
				{ "EStreamResolution::RS_4K", (int64)EStreamResolution::RS_4K },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Output texture resolution */" },
				{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
				{ "RS_1080p.Comment", "/* 1920x1080p */" },
				{ "RS_1080p.DisplayName", "1080p" },
				{ "RS_1080p.Name", "EStreamResolution::RS_1080p" },
				{ "RS_1080p.ToolTip", "1920x1080p" },
				{ "RS_1440p.Comment", "/* 2560x1440p */" },
				{ "RS_1440p.DisplayName", "1440p" },
				{ "RS_1440p.Name", "EStreamResolution::RS_1440p" },
				{ "RS_1440p.ToolTip", "2560x1440p" },
				{ "RS_240p.Comment", "/* 426x240p */" },
				{ "RS_240p.DisplayName", "426x240p" },
				{ "RS_240p.Name", "EStreamResolution::RS_240p" },
				{ "RS_240p.ToolTip", "426x240p" },
				{ "RS_360p.Comment", "/*  640x360p */" },
				{ "RS_360p.DisplayName", "640x360p" },
				{ "RS_360p.Name", "EStreamResolution::RS_360p" },
				{ "RS_360p.ToolTip", "640x360p" },
				{ "RS_480p.Comment", "/* 854x480p */" },
				{ "RS_480p.DisplayName", "854x480p" },
				{ "RS_480p.Name", "EStreamResolution::RS_480p" },
				{ "RS_480p.ToolTip", "854x480p" },
				{ "RS_4K.Comment", "/* 3840x2160p */" },
				{ "RS_4K.DisplayName", "4K" },
				{ "RS_4K.Name", "EStreamResolution::RS_4K" },
				{ "RS_4K.ToolTip", "3840x2160p" },
				{ "RS_720p.Comment", "/* 1280x720p */" },
				{ "RS_720p.DisplayName", "720p" },
				{ "RS_720p.Name", "EStreamResolution::RS_720p" },
				{ "RS_720p.ToolTip", "1280x720p" },
				{ "ToolTip", "Output texture resolution" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
				nullptr,
				"EStreamResolution",
				"EStreamResolution",
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
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetTAAMotionBlurEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTAAMotionBlurEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetTAAMotionBlur)
	{
		P_GET_UBOOL(Z_Param_EnableTAAMotionBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTAAMotionBlur(Z_Param_EnableTAAMotionBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetTemporalAAEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTemporalAAEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetTemporalAA)
	{
		P_GET_UBOOL(Z_Param_EnableTemporalAA);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemporalAA(Z_Param_EnableTemporalAA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbUseRayTracingIfEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbUseRayTracingIfEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbUseRayTracingIfEnabled)
	{
		P_GET_UBOOL(Z_Param_NewbUseRayTracingIfEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbUseRayTracingIfEnabled(Z_Param_NewbUseRayTracingIfEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetMaxViewDistanceOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxViewDistanceOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetMaxViewDistanceOverride)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxViewDistanceOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxViewDistanceOverride(Z_Param_NewMaxViewDistanceOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetLODDistanceFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLODDistanceFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetLODDistanceFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLODDistanceFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODDistanceFactor(Z_Param_NewLODDistanceFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetShowOnlyActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetShowOnlyActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetShowOnlyActors)
	{
		P_GET_TARRAY(AActor*,Z_Param_NewShowOnlyActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowOnlyActors(Z_Param_NewShowOnlyActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetHiddenActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetHiddenActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetHiddenActors)
	{
		P_GET_TARRAY(AActor*,Z_Param_NewHiddenActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHiddenActors(Z_Param_NewHiddenActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbAlwaysPersistRenderingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbAlwaysPersistRenderingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbAlwaysPersistRenderingState)
	{
		P_GET_UBOOL(Z_Param_NewbAlwaysPersistRenderingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbAlwaysPersistRenderingState(Z_Param_NewbAlwaysPersistRenderingState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbCaptureOnMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetbCaptureOnMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbCaptureOnMovement)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewbCaptureOnMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbCaptureOnMovement(Z_Param_NewbCaptureOnMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbCaptureEveryFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetbCaptureEveryFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbCaptureEveryFrame)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewbCaptureEveryFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbCaptureEveryFrame(Z_Param_NewbCaptureEveryFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetCaptureSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESceneCaptureSource>*)Z_Param__Result=P_THIS->GetCaptureSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetCaptureSource)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewCaptureSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCaptureSource(ESceneCaptureSource(Z_Param_NewCaptureSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetPrimitiveRenderMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESceneCapturePrimitiveRenderMode*)Z_Param__Result=P_THIS->GetPrimitiveRenderMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetPrimitiveRenderMode)
	{
		P_GET_ENUM(ESceneCapturePrimitiveRenderMode,Z_Param_NewPrimitiveRenderMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitiveRenderMode(ESceneCapturePrimitiveRenderMode(Z_Param_NewPrimitiveRenderMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbDisableFlipCopyGLES)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbDisableFlipCopyGLES();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbDisableFlipCopyGLES)
	{
		P_GET_UBOOL(Z_Param_NewbDisableFlipCopyGLES);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbDisableFlipCopyGLES(Z_Param_NewbDisableFlipCopyGLES);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent)
	{
		P_GET_UBOOL(Z_Param_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent(Z_Param_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetClipPlaneNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClipPlaneNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetClipPlaneNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_NewClipPlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClipPlaneNormal(Z_Param_NewClipPlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetClipPlaneBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClipPlaneBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetClipPlaneBase)
	{
		P_GET_STRUCT(FVector,Z_Param_NewClipPlaneBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClipPlaneBase(Z_Param_NewClipPlaneBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetbEnableClipPlane)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetbEnableClipPlane();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetbEnableClipPlane)
	{
		P_GET_UBOOL(Z_Param_NewbEnableClipPlane);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetbEnableClipPlane(Z_Param_NewbEnableClipPlane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetPostProcessBlendWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPostProcessBlendWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetPostProcessBlendWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPostProcessBlendWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessBlendWeight(Z_Param_NewPostProcessBlendWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetPostProcessSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPostProcessSettings*)Z_Param__Result=P_THIS->GetPostProcessSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetPostProcessSettings)
	{
		P_GET_STRUCT(FPostProcessSettings,Z_Param_NewPostProcessSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessSettings(Z_Param_NewPostProcessSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetCompositeMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESceneCaptureCompositeMode>*)Z_Param__Result=P_THIS->GetCompositeMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetCompositeMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewCompositeMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompositeMode(ESceneCaptureCompositeMode(Z_Param_NewCompositeMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetFOVAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFOVAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetFOVAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOVAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFOVAngle(Z_Param_NewFOVAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetCustomStreamResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetCustomStreamResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetCustomStreamResolution)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_NewCustomStreamResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomStreamResolution(Z_Param_NewCustomStreamResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetStreamResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EStreamResolution*)Z_Param__Result=P_THIS->GetStreamResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetStreamResolution)
	{
		P_GET_ENUM(EStreamResolution,Z_Param_NewStreamResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStreamResolution(EStreamResolution(Z_Param_NewStreamResolution));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetUseCustomStreamResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseCustomStreamResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetUseCustomStreamResolution)
	{
		P_GET_UBOOL(Z_Param_ShouldUseCustomStreamResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCustomStreamResolution(Z_Param_ShouldUseCustomStreamResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetEffectiveOutputSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetEffectiveOutputSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetCameraEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCameraEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execSetCameraEnabled)
	{
		P_GET_UBOOL(Z_Param_NewCameraEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraEnabled(Z_Param_NewCameraEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLInstantSpoutCamera::execGetCameraName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCameraName();
		P_NATIVE_END;
	}
	void AOWLInstantSpoutCamera::StaticRegisterNativesAOWLInstantSpoutCamera()
	{
		UClass* Class = AOWLInstantSpoutCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetbAlwaysPersistRenderingState", &AOWLInstantSpoutCamera::execGetbAlwaysPersistRenderingState },
			{ "GetbCaptureEveryFrame", &AOWLInstantSpoutCamera::execGetbCaptureEveryFrame },
			{ "GetbCaptureOnMovement", &AOWLInstantSpoutCamera::execGetbCaptureOnMovement },
			{ "GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent", &AOWLInstantSpoutCamera::execGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent },
			{ "GetbDisableFlipCopyGLES", &AOWLInstantSpoutCamera::execGetbDisableFlipCopyGLES },
			{ "GetbEnableClipPlane", &AOWLInstantSpoutCamera::execGetbEnableClipPlane },
			{ "GetbUseRayTracingIfEnabled", &AOWLInstantSpoutCamera::execGetbUseRayTracingIfEnabled },
			{ "GetCameraEnabled", &AOWLInstantSpoutCamera::execGetCameraEnabled },
			{ "GetCameraName", &AOWLInstantSpoutCamera::execGetCameraName },
			{ "GetCaptureSource", &AOWLInstantSpoutCamera::execGetCaptureSource },
			{ "GetClipPlaneBase", &AOWLInstantSpoutCamera::execGetClipPlaneBase },
			{ "GetClipPlaneNormal", &AOWLInstantSpoutCamera::execGetClipPlaneNormal },
			{ "GetCompositeMode", &AOWLInstantSpoutCamera::execGetCompositeMode },
			{ "GetCustomStreamResolution", &AOWLInstantSpoutCamera::execGetCustomStreamResolution },
			{ "GetEffectiveOutputSize", &AOWLInstantSpoutCamera::execGetEffectiveOutputSize },
			{ "GetFOVAngle", &AOWLInstantSpoutCamera::execGetFOVAngle },
			{ "GetHiddenActors", &AOWLInstantSpoutCamera::execGetHiddenActors },
			{ "GetLODDistanceFactor", &AOWLInstantSpoutCamera::execGetLODDistanceFactor },
			{ "GetMaxViewDistanceOverride", &AOWLInstantSpoutCamera::execGetMaxViewDistanceOverride },
			{ "GetPostProcessBlendWeight", &AOWLInstantSpoutCamera::execGetPostProcessBlendWeight },
			{ "GetPostProcessSettings", &AOWLInstantSpoutCamera::execGetPostProcessSettings },
			{ "GetPrimitiveRenderMode", &AOWLInstantSpoutCamera::execGetPrimitiveRenderMode },
			{ "GetShowOnlyActors", &AOWLInstantSpoutCamera::execGetShowOnlyActors },
			{ "GetStreamResolution", &AOWLInstantSpoutCamera::execGetStreamResolution },
			{ "GetTAAMotionBlurEnabled", &AOWLInstantSpoutCamera::execGetTAAMotionBlurEnabled },
			{ "GetTemporalAAEnabled", &AOWLInstantSpoutCamera::execGetTemporalAAEnabled },
			{ "GetUseCustomStreamResolution", &AOWLInstantSpoutCamera::execGetUseCustomStreamResolution },
			{ "SetbAlwaysPersistRenderingState", &AOWLInstantSpoutCamera::execSetbAlwaysPersistRenderingState },
			{ "SetbCaptureEveryFrame", &AOWLInstantSpoutCamera::execSetbCaptureEveryFrame },
			{ "SetbCaptureOnMovement", &AOWLInstantSpoutCamera::execSetbCaptureOnMovement },
			{ "SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent", &AOWLInstantSpoutCamera::execSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent },
			{ "SetbDisableFlipCopyGLES", &AOWLInstantSpoutCamera::execSetbDisableFlipCopyGLES },
			{ "SetbEnableClipPlane", &AOWLInstantSpoutCamera::execSetbEnableClipPlane },
			{ "SetbUseRayTracingIfEnabled", &AOWLInstantSpoutCamera::execSetbUseRayTracingIfEnabled },
			{ "SetCameraEnabled", &AOWLInstantSpoutCamera::execSetCameraEnabled },
			{ "SetCaptureSource", &AOWLInstantSpoutCamera::execSetCaptureSource },
			{ "SetClipPlaneBase", &AOWLInstantSpoutCamera::execSetClipPlaneBase },
			{ "SetClipPlaneNormal", &AOWLInstantSpoutCamera::execSetClipPlaneNormal },
			{ "SetCompositeMode", &AOWLInstantSpoutCamera::execSetCompositeMode },
			{ "SetCustomStreamResolution", &AOWLInstantSpoutCamera::execSetCustomStreamResolution },
			{ "SetFOVAngle", &AOWLInstantSpoutCamera::execSetFOVAngle },
			{ "SetHiddenActors", &AOWLInstantSpoutCamera::execSetHiddenActors },
			{ "SetLODDistanceFactor", &AOWLInstantSpoutCamera::execSetLODDistanceFactor },
			{ "SetMaxViewDistanceOverride", &AOWLInstantSpoutCamera::execSetMaxViewDistanceOverride },
			{ "SetPostProcessBlendWeight", &AOWLInstantSpoutCamera::execSetPostProcessBlendWeight },
			{ "SetPostProcessSettings", &AOWLInstantSpoutCamera::execSetPostProcessSettings },
			{ "SetPrimitiveRenderMode", &AOWLInstantSpoutCamera::execSetPrimitiveRenderMode },
			{ "SetShowOnlyActors", &AOWLInstantSpoutCamera::execSetShowOnlyActors },
			{ "SetStreamResolution", &AOWLInstantSpoutCamera::execSetStreamResolution },
			{ "SetTAAMotionBlur", &AOWLInstantSpoutCamera::execSetTAAMotionBlur },
			{ "SetTemporalAA", &AOWLInstantSpoutCamera::execSetTemporalAA },
			{ "SetUseCustomStreamResolution", &AOWLInstantSpoutCamera::execSetUseCustomStreamResolution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbAlwaysPersistRenderingState_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetbAlwaysPersistRenderingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetbAlwaysPersistRenderingState_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbAlwaysPersistRenderingState", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbAlwaysPersistRenderingState_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbCaptureEveryFrame_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetbCaptureEveryFrame_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbCaptureEveryFrame", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbCaptureEveryFrame_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbCaptureOnMovement_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetbCaptureOnMovement_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbCaptureOnMovement", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbCaptureOnMovement_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbDisableFlipCopyGLES_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetbDisableFlipCopyGLES_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetbDisableFlipCopyGLES_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbDisableFlipCopyGLES", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbDisableFlipCopyGLES_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbEnableClipPlane_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetbEnableClipPlane_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetbEnableClipPlane_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbEnableClipPlane", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbEnableClipPlane_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics
	{
		struct OWLInstantSpoutCamera_eventGetbUseRayTracingIfEnabled_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetbUseRayTracingIfEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetbUseRayTracingIfEnabled_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetbUseRayTracingIfEnabled", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetbUseRayTracingIfEnabled_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics
	{
		struct OWLInstantSpoutCamera_eventGetCameraEnabled_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetCameraEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetCameraEnabled_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetCameraEnabled", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetCameraEnabled_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics
	{
		struct OWLInstantSpoutCamera_eventGetCameraName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetCameraName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetCameraName", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetCameraName_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics
	{
		struct OWLInstantSpoutCamera_eventGetCaptureSource_Parms
		{
			TEnumAsByte<ESceneCaptureSource> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetCaptureSource_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetCaptureSource", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetCaptureSource_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics
	{
		struct OWLInstantSpoutCamera_eventGetClipPlaneBase_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetClipPlaneBase_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetClipPlaneBase", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetClipPlaneBase_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics
	{
		struct OWLInstantSpoutCamera_eventGetClipPlaneNormal_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetClipPlaneNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetClipPlaneNormal", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetClipPlaneNormal_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics
	{
		struct OWLInstantSpoutCamera_eventGetCompositeMode_Parms
		{
			TEnumAsByte<ESceneCaptureCompositeMode> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetCompositeMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetCompositeMode", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetCompositeMode_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics
	{
		struct OWLInstantSpoutCamera_eventGetCustomStreamResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetCustomStreamResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetCustomStreamResolution", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetCustomStreamResolution_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics
	{
		struct OWLInstantSpoutCamera_eventGetEffectiveOutputSize_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetEffectiveOutputSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetEffectiveOutputSize", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetEffectiveOutputSize_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics
	{
		struct OWLInstantSpoutCamera_eventGetFOVAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetFOVAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetFOVAngle", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetFOVAngle_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics
	{
		struct OWLInstantSpoutCamera_eventGetHiddenActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetHiddenActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetHiddenActors", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetHiddenActors_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics
	{
		struct OWLInstantSpoutCamera_eventGetLODDistanceFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetLODDistanceFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanarReflection" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetLODDistanceFactor", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetLODDistanceFactor_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics
	{
		struct OWLInstantSpoutCamera_eventGetMaxViewDistanceOverride_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetMaxViewDistanceOverride_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetMaxViewDistanceOverride", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetMaxViewDistanceOverride_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics
	{
		struct OWLInstantSpoutCamera_eventGetPostProcessBlendWeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetPostProcessBlendWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetPostProcessBlendWeight", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetPostProcessBlendWeight_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics
	{
		struct OWLInstantSpoutCamera_eventGetPostProcessSettings_Parms
		{
			FPostProcessSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetPostProcessSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetPostProcessSettings", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetPostProcessSettings_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics
	{
		struct OWLInstantSpoutCamera_eventGetPrimitiveRenderMode_Parms
		{
			ESceneCapturePrimitiveRenderMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetPrimitiveRenderMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetPrimitiveRenderMode", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetPrimitiveRenderMode_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics
	{
		struct OWLInstantSpoutCamera_eventGetShowOnlyActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetShowOnlyActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetShowOnlyActors", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetShowOnlyActors_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics
	{
		struct OWLInstantSpoutCamera_eventGetStreamResolution_Parms
		{
			EStreamResolution ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventGetStreamResolution_Parms, ReturnValue), Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetStreamResolution", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetStreamResolution_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics
	{
		struct OWLInstantSpoutCamera_eventGetTAAMotionBlurEnabled_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetTAAMotionBlurEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetTAAMotionBlurEnabled_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetTAAMotionBlurEnabled", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetTAAMotionBlurEnabled_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics
	{
		struct OWLInstantSpoutCamera_eventGetTemporalAAEnabled_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetTemporalAAEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetTemporalAAEnabled_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetTemporalAAEnabled", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetTemporalAAEnabled_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics
	{
		struct OWLInstantSpoutCamera_eventGetUseCustomStreamResolution_Parms
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
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventGetUseCustomStreamResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventGetUseCustomStreamResolution_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "GetUseCustomStreamResolution", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventGetUseCustomStreamResolution_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbAlwaysPersistRenderingState_Parms
		{
			bool NewbAlwaysPersistRenderingState;
		};
		static void NewProp_NewbAlwaysPersistRenderingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewbAlwaysPersistRenderingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::NewProp_NewbAlwaysPersistRenderingState_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetbAlwaysPersistRenderingState_Parms*)Obj)->NewbAlwaysPersistRenderingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::NewProp_NewbAlwaysPersistRenderingState = { "NewbAlwaysPersistRenderingState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetbAlwaysPersistRenderingState_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::NewProp_NewbAlwaysPersistRenderingState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::NewProp_NewbAlwaysPersistRenderingState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbAlwaysPersistRenderingState", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbAlwaysPersistRenderingState_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbCaptureEveryFrame_Parms
		{
			uint8 NewbCaptureEveryFrame;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewbCaptureEveryFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::NewProp_NewbCaptureEveryFrame = { "NewbCaptureEveryFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetbCaptureEveryFrame_Parms, NewbCaptureEveryFrame), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::NewProp_NewbCaptureEveryFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbCaptureEveryFrame", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbCaptureEveryFrame_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbCaptureOnMovement_Parms
		{
			uint8 NewbCaptureOnMovement;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewbCaptureOnMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::NewProp_NewbCaptureOnMovement = { "NewbCaptureOnMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetbCaptureOnMovement_Parms, NewbCaptureOnMovement), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::NewProp_NewbCaptureOnMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbCaptureOnMovement", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbCaptureOnMovement_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms
		{
			bool NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent;
		};
		static void NewProp_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms*)Obj)->NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent = { "NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::NewProp_NewbConsiderUnrenderedOpaquePixelAsFullyTranslucent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbDisableFlipCopyGLES_Parms
		{
			bool NewbDisableFlipCopyGLES;
		};
		static void NewProp_NewbDisableFlipCopyGLES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewbDisableFlipCopyGLES;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::NewProp_NewbDisableFlipCopyGLES_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetbDisableFlipCopyGLES_Parms*)Obj)->NewbDisableFlipCopyGLES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::NewProp_NewbDisableFlipCopyGLES = { "NewbDisableFlipCopyGLES", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetbDisableFlipCopyGLES_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::NewProp_NewbDisableFlipCopyGLES_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::NewProp_NewbDisableFlipCopyGLES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbDisableFlipCopyGLES", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbDisableFlipCopyGLES_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbEnableClipPlane_Parms
		{
			bool NewbEnableClipPlane;
		};
		static void NewProp_NewbEnableClipPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewbEnableClipPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::NewProp_NewbEnableClipPlane_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetbEnableClipPlane_Parms*)Obj)->NewbEnableClipPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::NewProp_NewbEnableClipPlane = { "NewbEnableClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetbEnableClipPlane_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::NewProp_NewbEnableClipPlane_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::NewProp_NewbEnableClipPlane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbEnableClipPlane", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbEnableClipPlane_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics
	{
		struct OWLInstantSpoutCamera_eventSetbUseRayTracingIfEnabled_Parms
		{
			bool NewbUseRayTracingIfEnabled;
		};
		static void NewProp_NewbUseRayTracingIfEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewbUseRayTracingIfEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::NewProp_NewbUseRayTracingIfEnabled_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetbUseRayTracingIfEnabled_Parms*)Obj)->NewbUseRayTracingIfEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::NewProp_NewbUseRayTracingIfEnabled = { "NewbUseRayTracingIfEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetbUseRayTracingIfEnabled_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::NewProp_NewbUseRayTracingIfEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::NewProp_NewbUseRayTracingIfEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetbUseRayTracingIfEnabled", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetbUseRayTracingIfEnabled_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics
	{
		struct OWLInstantSpoutCamera_eventSetCameraEnabled_Parms
		{
			bool NewCameraEnabled;
		};
		static void NewProp_NewCameraEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewCameraEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::NewProp_NewCameraEnabled_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetCameraEnabled_Parms*)Obj)->NewCameraEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::NewProp_NewCameraEnabled = { "NewCameraEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetCameraEnabled_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::NewProp_NewCameraEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::NewProp_NewCameraEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetCameraEnabled", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetCameraEnabled_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics
	{
		struct OWLInstantSpoutCamera_eventSetCaptureSource_Parms
		{
			TEnumAsByte<ESceneCaptureSource> NewCaptureSource;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCaptureSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::NewProp_NewCaptureSource = { "NewCaptureSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetCaptureSource_Parms, NewCaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::NewProp_NewCaptureSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetCaptureSource", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetCaptureSource_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics
	{
		struct OWLInstantSpoutCamera_eventSetClipPlaneBase_Parms
		{
			FVector NewClipPlaneBase;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewClipPlaneBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::NewProp_NewClipPlaneBase = { "NewClipPlaneBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetClipPlaneBase_Parms, NewClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::NewProp_NewClipPlaneBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetClipPlaneBase", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetClipPlaneBase_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics
	{
		struct OWLInstantSpoutCamera_eventSetClipPlaneNormal_Parms
		{
			FVector NewClipPlaneNormal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewClipPlaneNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::NewProp_NewClipPlaneNormal = { "NewClipPlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetClipPlaneNormal_Parms, NewClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::NewProp_NewClipPlaneNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetClipPlaneNormal", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetClipPlaneNormal_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics
	{
		struct OWLInstantSpoutCamera_eventSetCompositeMode_Parms
		{
			TEnumAsByte<ESceneCaptureCompositeMode> NewCompositeMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCompositeMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::NewProp_NewCompositeMode = { "NewCompositeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetCompositeMode_Parms, NewCompositeMode), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::NewProp_NewCompositeMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetCompositeMode", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetCompositeMode_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics
	{
		struct OWLInstantSpoutCamera_eventSetCustomStreamResolution_Parms
		{
			FIntPoint NewCustomStreamResolution;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCustomStreamResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::NewProp_NewCustomStreamResolution = { "NewCustomStreamResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetCustomStreamResolution_Parms, NewCustomStreamResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::NewProp_NewCustomStreamResolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetCustomStreamResolution", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetCustomStreamResolution_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics
	{
		struct OWLInstantSpoutCamera_eventSetFOVAngle_Parms
		{
			float NewFOVAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFOVAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::NewProp_NewFOVAngle = { "NewFOVAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetFOVAngle_Parms, NewFOVAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::NewProp_NewFOVAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetFOVAngle", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetFOVAngle_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics
	{
		struct OWLInstantSpoutCamera_eventSetHiddenActors_Parms
		{
			TArray<AActor*> NewHiddenActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHiddenActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewHiddenActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::NewProp_NewHiddenActors_Inner = { "NewHiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::NewProp_NewHiddenActors = { "NewHiddenActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetHiddenActors_Parms, NewHiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::NewProp_NewHiddenActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::NewProp_NewHiddenActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetHiddenActors", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetHiddenActors_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics
	{
		struct OWLInstantSpoutCamera_eventSetLODDistanceFactor_Parms
		{
			float NewLODDistanceFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLODDistanceFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::NewProp_NewLODDistanceFactor = { "NewLODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetLODDistanceFactor_Parms, NewLODDistanceFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::NewProp_NewLODDistanceFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanarReflection" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetLODDistanceFactor", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetLODDistanceFactor_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics
	{
		struct OWLInstantSpoutCamera_eventSetMaxViewDistanceOverride_Parms
		{
			float NewMaxViewDistanceOverride;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxViewDistanceOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::NewProp_NewMaxViewDistanceOverride = { "NewMaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetMaxViewDistanceOverride_Parms, NewMaxViewDistanceOverride), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::NewProp_NewMaxViewDistanceOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetMaxViewDistanceOverride", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetMaxViewDistanceOverride_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics
	{
		struct OWLInstantSpoutCamera_eventSetPostProcessBlendWeight_Parms
		{
			float NewPostProcessBlendWeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPostProcessBlendWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::NewProp_NewPostProcessBlendWeight = { "NewPostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetPostProcessBlendWeight_Parms, NewPostProcessBlendWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::NewProp_NewPostProcessBlendWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetPostProcessBlendWeight", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetPostProcessBlendWeight_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics
	{
		struct OWLInstantSpoutCamera_eventSetPostProcessSettings_Parms
		{
			FPostProcessSettings NewPostProcessSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPostProcessSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::NewProp_NewPostProcessSettings = { "NewPostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetPostProcessSettings_Parms, NewPostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::NewProp_NewPostProcessSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetPostProcessSettings", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetPostProcessSettings_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics
	{
		struct OWLInstantSpoutCamera_eventSetPrimitiveRenderMode_Parms
		{
			ESceneCapturePrimitiveRenderMode NewPrimitiveRenderMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPrimitiveRenderMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPrimitiveRenderMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::NewProp_NewPrimitiveRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::NewProp_NewPrimitiveRenderMode = { "NewPrimitiveRenderMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetPrimitiveRenderMode_Parms, NewPrimitiveRenderMode), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::NewProp_NewPrimitiveRenderMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::NewProp_NewPrimitiveRenderMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetPrimitiveRenderMode", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetPrimitiveRenderMode_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics
	{
		struct OWLInstantSpoutCamera_eventSetShowOnlyActors_Parms
		{
			TArray<AActor*> NewShowOnlyActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewShowOnlyActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewShowOnlyActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::NewProp_NewShowOnlyActors_Inner = { "NewShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::NewProp_NewShowOnlyActors = { "NewShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetShowOnlyActors_Parms, NewShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::NewProp_NewShowOnlyActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::NewProp_NewShowOnlyActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetShowOnlyActors", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetShowOnlyActors_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics
	{
		struct OWLInstantSpoutCamera_eventSetStreamResolution_Parms
		{
			EStreamResolution NewStreamResolution;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStreamResolution_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStreamResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::NewProp_NewStreamResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::NewProp_NewStreamResolution = { "NewStreamResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWLInstantSpoutCamera_eventSetStreamResolution_Parms, NewStreamResolution), Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::NewProp_NewStreamResolution_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::NewProp_NewStreamResolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetStreamResolution", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetStreamResolution_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics
	{
		struct OWLInstantSpoutCamera_eventSetTAAMotionBlur_Parms
		{
			bool EnableTAAMotionBlur;
		};
		static void NewProp_EnableTAAMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTAAMotionBlur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::NewProp_EnableTAAMotionBlur_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetTAAMotionBlur_Parms*)Obj)->EnableTAAMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::NewProp_EnableTAAMotionBlur = { "EnableTAAMotionBlur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetTAAMotionBlur_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::NewProp_EnableTAAMotionBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::NewProp_EnableTAAMotionBlur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetTAAMotionBlur", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetTAAMotionBlur_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics
	{
		struct OWLInstantSpoutCamera_eventSetTemporalAA_Parms
		{
			bool EnableTemporalAA;
		};
		static void NewProp_EnableTemporalAA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTemporalAA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::NewProp_EnableTemporalAA_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetTemporalAA_Parms*)Obj)->EnableTemporalAA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::NewProp_EnableTemporalAA = { "EnableTemporalAA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetTemporalAA_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::NewProp_EnableTemporalAA_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::NewProp_EnableTemporalAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::Function_MetaDataParams[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetTemporalAA", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetTemporalAA_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics
	{
		struct OWLInstantSpoutCamera_eventSetUseCustomStreamResolution_Parms
		{
			bool ShouldUseCustomStreamResolution;
		};
		static void NewProp_ShouldUseCustomStreamResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldUseCustomStreamResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::NewProp_ShouldUseCustomStreamResolution_SetBit(void* Obj)
	{
		((OWLInstantSpoutCamera_eventSetUseCustomStreamResolution_Parms*)Obj)->ShouldUseCustomStreamResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::NewProp_ShouldUseCustomStreamResolution = { "ShouldUseCustomStreamResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWLInstantSpoutCamera_eventSetUseCustomStreamResolution_Parms), &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::NewProp_ShouldUseCustomStreamResolution_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::NewProp_ShouldUseCustomStreamResolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLInstantSpoutCamera, nullptr, "SetUseCustomStreamResolution", nullptr, nullptr, sizeof(OWLInstantSpoutCamera_eventSetUseCustomStreamResolution_Parms), Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWLInstantSpoutCamera_NoRegister()
	{
		return AOWLInstantSpoutCamera::StaticClass();
	}
	struct Z_Construct_UClass_AOWLInstantSpoutCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CameraName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraEnabled_MetaData[];
#endif
		static void NewProp_CameraEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CameraEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomStreamResolution_MetaData[];
#endif
		static void NewProp_UseCustomStreamResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomStreamResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StreamResolution_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StreamResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStreamResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomStreamResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompositeMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableClipPlane_MetaData[];
#endif
		static void NewProp_bEnableClipPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipPlaneBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipPlaneNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[];
#endif
		static void NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableFlipCopyGLES_MetaData[];
#endif
		static void NewProp_bDisableFlipCopyGLES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableFlipCopyGLES;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimitiveRenderMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveRenderMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimitiveRenderMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureEveryFrame_MetaData[];
#endif
		static void NewProp_bCaptureEveryFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureEveryFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureOnMovement_MetaData[];
#endif
		static void NewProp_bCaptureOnMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureOnMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPersistRenderingState_MetaData[];
#endif
		static void NewProp_bAlwaysPersistRenderingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPersistRenderingState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRayTracingIfEnabled_MetaData[];
#endif
		static void NewProp_bUseRayTracingIfEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRayTracingIfEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemporalAAEnabled_MetaData[];
#endif
		static void NewProp_TemporalAAEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TemporalAAEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TAAMotionBlurEnabled_MetaData[];
#endif
		static void NewProp_TAAMotionBlurEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TAAMotionBlurEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbAlwaysPersistRenderingState, "GetbAlwaysPersistRenderingState" }, // 18215664
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureEveryFrame, "GetbCaptureEveryFrame" }, // 811382405
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbCaptureOnMovement, "GetbCaptureOnMovement" }, // 844882148
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent, "GetbConsiderUnrenderedOpaquePixelAsFullyTranslucent" }, // 3279291079
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbDisableFlipCopyGLES, "GetbDisableFlipCopyGLES" }, // 609796768
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbEnableClipPlane, "GetbEnableClipPlane" }, // 392974573
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetbUseRayTracingIfEnabled, "GetbUseRayTracingIfEnabled" }, // 2936719633
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraEnabled, "GetCameraEnabled" }, // 1956170015
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCameraName, "GetCameraName" }, // 728310423
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCaptureSource, "GetCaptureSource" }, // 3163443757
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneBase, "GetClipPlaneBase" }, // 2780275068
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetClipPlaneNormal, "GetClipPlaneNormal" }, // 2073820958
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCompositeMode, "GetCompositeMode" }, // 817410341
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetCustomStreamResolution, "GetCustomStreamResolution" }, // 864575673
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetEffectiveOutputSize, "GetEffectiveOutputSize" }, // 3834346595
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetFOVAngle, "GetFOVAngle" }, // 200552373
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetHiddenActors, "GetHiddenActors" }, // 2168644538
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetLODDistanceFactor, "GetLODDistanceFactor" }, // 2604872863
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetMaxViewDistanceOverride, "GetMaxViewDistanceOverride" }, // 3961652064
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessBlendWeight, "GetPostProcessBlendWeight" }, // 1045590459
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPostProcessSettings, "GetPostProcessSettings" }, // 635385650
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetPrimitiveRenderMode, "GetPrimitiveRenderMode" }, // 3164058961
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetShowOnlyActors, "GetShowOnlyActors" }, // 3441972071
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetStreamResolution, "GetStreamResolution" }, // 2347500794
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTAAMotionBlurEnabled, "GetTAAMotionBlurEnabled" }, // 515267586
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetTemporalAAEnabled, "GetTemporalAAEnabled" }, // 3799512832
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_GetUseCustomStreamResolution, "GetUseCustomStreamResolution" }, // 1390975724
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbAlwaysPersistRenderingState, "SetbAlwaysPersistRenderingState" }, // 586522991
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureEveryFrame, "SetbCaptureEveryFrame" }, // 4290314997
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbCaptureOnMovement, "SetbCaptureOnMovement" }, // 3630436076
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent, "SetbConsiderUnrenderedOpaquePixelAsFullyTranslucent" }, // 917277665
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbDisableFlipCopyGLES, "SetbDisableFlipCopyGLES" }, // 3994455992
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbEnableClipPlane, "SetbEnableClipPlane" }, // 3351827441
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetbUseRayTracingIfEnabled, "SetbUseRayTracingIfEnabled" }, // 60759139
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCameraEnabled, "SetCameraEnabled" }, // 887179150
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCaptureSource, "SetCaptureSource" }, // 4015057541
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneBase, "SetClipPlaneBase" }, // 3389136240
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetClipPlaneNormal, "SetClipPlaneNormal" }, // 3390875537
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCompositeMode, "SetCompositeMode" }, // 921870496
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetCustomStreamResolution, "SetCustomStreamResolution" }, // 752431961
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetFOVAngle, "SetFOVAngle" }, // 928903362
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetHiddenActors, "SetHiddenActors" }, // 3922751823
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetLODDistanceFactor, "SetLODDistanceFactor" }, // 2764638702
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetMaxViewDistanceOverride, "SetMaxViewDistanceOverride" }, // 3952149981
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessBlendWeight, "SetPostProcessBlendWeight" }, // 798536900
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPostProcessSettings, "SetPostProcessSettings" }, // 3970294427
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetPrimitiveRenderMode, "SetPrimitiveRenderMode" }, // 3667427871
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetShowOnlyActors, "SetShowOnlyActors" }, // 3002972702
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetStreamResolution, "SetStreamResolution" }, // 259831230
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTAAMotionBlur, "SetTAAMotionBlur" }, // 3830982685
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetTemporalAA, "SetTemporalAA" }, // 1039615122
		{ &Z_Construct_UFunction_AOWLInstantSpoutCamera_SetUseCustomStreamResolution, "SetUseCustomStreamResolution" }, // 3122388047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraName_MetaData[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "Comment", "/* Name by which the camera can be identified in OBS */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Name by which the camera can be identified in OBS" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, CameraName), METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled_MetaData[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "Comment", "/* Name by which the camera can be identified in OBS */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Name by which the camera can be identified in OBS" },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->CameraEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled = { "CameraEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution_MetaData[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "Comment", "/* Texture resolution for camera render output */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Texture resolution for camera render output" },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->UseCustomStreamResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution = { "UseCustomStreamResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution_MetaData[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "Comment", "/* Texture resolution for camera render output */" },
		{ "DisplayPriority", "2" },
		{ "editcondition", "!UseCustomStreamResolution" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Texture resolution for camera render output" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution = { "StreamResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, StreamResolution), Z_Construct_UEnum_LivestreamingToolkit_EStreamResolution, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CustomStreamResolution_MetaData[] = {
		{ "Category", "Off World Live Instant Spout Camera Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Texture resolution for camera render output */" },
		{ "DisplayPriority", "2" },
		{ "editcondition", "UseCustomStreamResolution" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Texture resolution for camera render output" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CustomStreamResolution = { "CustomStreamResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, CustomStreamResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CustomStreamResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CustomStreamResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Camera field of view (in degrees). */" },
		{ "DisplayName", "Field of View" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Camera field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, FOVAngle), METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_FOVAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CompositeMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** When enabled, the scene capture will composite into the render target instead of overwriting its contents. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "When enabled, the scene capture will composite into the render target instead of overwriting its contents." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CompositeMode = { "CompositeMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, CompositeMode), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CompositeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CompositeMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/**\n\x09 * Enables a clip plane while rendering the scene capture which is useful for portals.\n\x09 * The global clip plane must be enabled in the renderer project settings for this to work.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Enables a clip plane while rendering the scene capture which is useful for portals.\nThe global clip plane must be enabled in the renderer project settings for this to work." },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bEnableClipPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane = { "bEnableClipPlane", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneBase_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Base position for the clip plane, can be any position on the plane. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Base position for the clip plane, can be any position on the plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneBase = { "ClipPlaneBase", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, ClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneNormal_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Normal for the plane. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Normal for the plane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneNormal = { "ClipPlaneNormal", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, ClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Treat unrendered opaque pixels as fully translucent. This is important for effects such as exponential weight fog, so it does not get applied on unrendered opaque pixels. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Treat unrendered opaque pixels as fully translucent. This is important for effects such as exponential weight fog, so it does not get applied on unrendered opaque pixels." },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent = { "bConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/**\n\x09 * Scene captures render an extra flip pass for LDR color on GLES so that the final output is oriented correctly.\n\x09 * This check disabled the extra flip pass, improving performance, but causes the capture to be flipped vertically.\n\x09 * (Does not affect scene captures on other non-GLES renderers or with non-LDR output)\n\x09 */" },
		{ "DisplayName", "Disable Flip Copy GLES" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Scene captures render an extra flip pass for LDR color on GLES so that the final output is oriented correctly.\nThis check disabled the extra flip pass, improving performance, but causes the capture to be flipped vertically.\n(Does not affect scene captures on other non-GLES renderers or with non-LDR output)" },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bDisableFlipCopyGLES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES = { "bDisableFlipCopyGLES", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Controls what primitives get rendered into the scene capture. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Controls what primitives get rendered into the scene capture." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode = { "PrimitiveRenderMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, PrimitiveRenderMode), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureSource_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "DisplayName", "Capture Source" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved." },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bCaptureEveryFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame = { "bCaptureEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint." },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bCaptureOnMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement = { "bCaptureOnMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed. */" },
		{ "editcondition", "!bCaptureEveryFrame" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed." },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bAlwaysPersistRenderingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState = { "bAlwaysPersistRenderingState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** The actors to hide in the scene capture. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "The actors to hide in the scene capture." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, LODDistanceFactor), METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_LODDistanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_MaxViewDistanceOverride_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
		{ "UIMax", "10000" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_MaxViewDistanceOverride = { "MaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, MaxViewDistanceOverride), METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_MaxViewDistanceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_MaxViewDistanceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to use ray tracing for this capture. Ray Tracing must be enabled in the project. */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Whether to use ray tracing for this capture. Ray Tracing must be enabled in the project." },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->bUseRayTracingIfEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled = { "bUseRayTracingIfEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/* Toggles Temporal AntiAliasing */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Toggles Temporal AntiAliasing" },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->TemporalAAEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled = { "TemporalAAEnabled", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/* Toggles Temporal AntiAliasing Motion BLur */" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "Toggles Temporal AntiAliasing Motion BLur" },
	};
#endif
	void Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled_SetBit(void* Obj)
	{
		((AOWLInstantSpoutCamera*)Obj)->TAAMotionBlurEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled = { "TAAMotionBlurEnabled", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWLInstantSpoutCamera), &Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2DNoMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_Camera_MetaData[] = {
		{ "Comment", "/* A camera to show the preview in the viewport */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
		{ "ToolTip", "A camera to show the preview in the viewport" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InstantCamera/OWLInstantSpoutCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWLInstantSpoutCamera, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_DummyRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CameraEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_UseCustomStreamResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_StreamResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CustomStreamResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_FOVAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CompositeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PostProcessBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bEnableClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ClipPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bDisableFlipCopyGLES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_PrimitiveRenderMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bCaptureOnMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bAlwaysPersistRenderingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_HiddenActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_ShowOnlyActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_LODDistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_MaxViewDistanceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_bUseRayTracingIfEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TemporalAAEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_TAAMotionBlurEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::NewProp_DummyRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLInstantSpoutCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::ClassParams = {
		&AOWLInstantSpoutCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLInstantSpoutCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWLInstantSpoutCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWLInstantSpoutCamera, 1712157217);
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<AOWLInstantSpoutCamera>()
	{
		return AOWLInstantSpoutCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWLInstantSpoutCamera(Z_Construct_UClass_AOWLInstantSpoutCamera, &AOWLInstantSpoutCamera::StaticClass, TEXT("/Script/LivestreamingToolkit"), TEXT("AOWLInstantSpoutCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLInstantSpoutCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
