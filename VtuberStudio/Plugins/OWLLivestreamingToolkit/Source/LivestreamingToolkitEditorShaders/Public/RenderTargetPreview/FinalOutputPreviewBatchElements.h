// Copyright Off World Live Limited, 2020-2021 with the exception of code taken from Unreal Engine source explicitly marked as Copyright Epic Games

#pragma once

#include "CoreMinimal.h"
#include "BatchedElements.h"

/**
 * This class is heavily based on of UE4's Texture2DPreview
 * which can be found in UnrealEd editor module.
 *
 * It sets up the FSimpleElementTexture2DPreviewPS shaders with all the necessary defaults
 * at the same time letting us hardcode the gamma correction value to 1.0f
 * so we can display the render target as it will look in spout receivers
 *
 * We copy parts of the implementation of TextureEditor as it is important for us to
 * keep the style/ functionality the user is accustomed to from texture editor
 * while restricting the irrelevant functionality (which cannot be done by extending editor classes).
 */

class LIVESTREAMINGTOOLKITEDITORSHADERS_API FFinalOutputPreviewBatchedElementParameters : public FBatchedElementParameters
{
public:
	FFinalOutputPreviewBatchedElementParameters(){}

	/** Binds vertex and pixel shaders for this element */
	virtual void BindShaders(FRHICommandList& RHICmdList, FGraphicsPipelineStateInitializer& GraphicsPSOInit, ERHIFeatureLevel::Type InFeatureLevel, const FMatrix& InTransform, const float InGamma, const FMatrix& ColorWeights, const FTexture* Texture) override;
};

