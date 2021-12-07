// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLSpoutReceiver.h"
#include "OWLSpoutReceiverManager.generated.h"

class UOWLWatermark;

USTRUCT(BlueprintType)
struct LIVESTREAMINGTOOLKIT_API FOWLSpoutReceiverInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	bool Active = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	bool UseFirstAvailableSender = true;

	/* Name of the sender we are receiving from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	FString Name = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLSpoutReceiver)
	UTextureRenderTarget2D* RenderTarget = nullptr;

private:
	OWLSpoutReceiver SpoutReceiver;

public:
	void Receive()
	{
		SpoutReceiver.ReceiveRenderTarget(Name, RenderTarget, UseFirstAvailableSender);
	}

	void TryClose()
	{
		if (SpoutReceiver.Initialised)
		{
			SpoutReceiver.Close();
			Active = false;
		}
	}
};

UCLASS()
class LIVESTREAMINGTOOLKIT_API AOWLSpoutReceiverManager : public AActor
{
	GENERATED_BODY()

public:

	/** Returns a list of spout sender names that are available at this moment in time. */
	UFUNCTION(BlueprintCallable, Category = "Off World Live Spout Receiver")
	TArray<FString> GetAvailableSenderNames();
	
	// Sets default values for this actor's properties
	AOWLSpoutReceiverManager(const FObjectInitializer& ObjectInitializer);

	virtual bool ShouldTickIfViewportsOnly() const override;
	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void Destroyed() override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Spout Receiver Settings")
	TArray<FOWLSpoutReceiverInterface> SpoutReceivers;

private:
	UPROPERTY()
	UOWLWatermark* Watermark;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* SceneComponent;
};