// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Engine/TextureRenderTarget2D.h"
#include "FinalOutputPreview.generated.h"

UCLASS()
class LIVESTREAMINGTOOLKITEDITOR_API UFinalOutputPreview : public UObject
{
	GENERATED_BODY()

public:

	UFinalOutputPreview(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, Category = FinalOutputPreview)
	UTextureRenderTarget2D* RenderTarget = nullptr;
};