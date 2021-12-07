// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OWLWatermark.generated.h"

/**
 * 
 */
UCLASS()
class LIVESTREAMINGTOOLKIT_API UOWLWatermark : public USceneComponent
{
	GENERATED_BODY()

public:
	virtual void OnRegister() override;

	void Apply(UTextureRenderTarget2D* RT);
	static void UpdateImageArray(UTexture2D* Texture);

private:
	UPROPERTY(Transient)
	UTextureRenderTarget2D* TextureTarget = nullptr;

private:
	void Apply_RenderThread(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* RT);
	UTexture2D* CreateImageTexture();
	void CopyTextureToRenderTargetTexture(UTexture* SourceTexture, UTextureRenderTarget2D* RenderTargetTexture,
		ERHIFeatureLevel::Type FeatureLevel);
	void Enable();
	void Disable();
};