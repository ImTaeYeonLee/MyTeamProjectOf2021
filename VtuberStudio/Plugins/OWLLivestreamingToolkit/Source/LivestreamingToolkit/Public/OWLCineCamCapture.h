// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "OWLCineCamCapture.generated.h"

UCLASS(hidecategories = (Collision, Attachment, Actor))
class LIVESTREAMINGTOOLKIT_API AOWLCineCamCapture : public ACineCameraActor
{
	GENERATED_BODY()

public:
	AOWLCineCamCapture(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Category = DecalActor, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UOWLCaptureComponent* CaptureComponent = nullptr;
};