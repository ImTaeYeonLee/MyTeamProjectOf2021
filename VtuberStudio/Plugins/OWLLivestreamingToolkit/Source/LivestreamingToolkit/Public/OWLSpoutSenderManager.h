// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLSpoutSender.h"
#include "OWLSpoutSenderManager.generated.h"

class UOWLWatermark;

USTRUCT(BlueprintType)
struct LIVESTREAMINGTOOLKIT_API FOWLSpoutSenderInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	bool Active = false;

	/* Spout sender name that is used in editor targets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	FString Name = "";

	/* Spout sender name that is used in game (standalone/packaged) targets  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	FString StandaloneName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	UTextureRenderTarget2D* RenderTarget = nullptr;
	
	OWLSpoutSender SpoutSender;

public:
	void Send(FString SenderName)
	{
		SpoutSender.SendRenderTarget(SenderName, RenderTarget);
	}

	void TryClose(bool keepActive = false)
	{
		if (SpoutSender.Initialised)
		{
			SpoutSender.Close();

			if (!keepActive)
			{
				Active = false;
			}
		}
	}
};

UCLASS()
class LIVESTREAMINGTOOLKIT_API AOWLSpoutSenderManager : public AActor
{
	GENERATED_BODY()

public:
	AOWLSpoutSenderManager(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Spout Sender Settings")
	TArray<FOWLSpoutSenderInterface> SpoutSenders;

private:
	UPROPERTY()
	UOWLWatermark* Watermark;

	TEnumAsByte<EWorldType::Type> StartingWorldType = EWorldType::None;

	UPROPERTY(Category = Components, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* SceneComponent;

	static bool ClosedEditorSenders;
	
private:
	void ValidateAndSend(FString Name, FOWLSpoutSenderInterface& Sender);
	void ApplyWatermarkOnceOnly(UTextureRenderTarget2D* SenderRT);

	void CloseAllSenders(bool keepActive);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Destroyed() override;

public:
	virtual bool ShouldTickIfViewportsOnly() const override;
	virtual void Tick(float DeltaSeconds) override;
};