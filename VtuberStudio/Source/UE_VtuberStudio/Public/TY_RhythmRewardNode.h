// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TY_RhythmRewardNode.generated.h"

class UMaterialInstanceDynamic; // ���̳��� ���͸��� Ŭ���� ����

UCLASS()
class UE_VTUBERSTUDIO_API ATY_RhythmRewardNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATY_RhythmRewardNode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UMaterialInstanceDynamic* DynamicMaterial;

	UPROPERTY(EditAnywhere, Category = "Setting")
	class UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere, Category = "Setting")
	class UStaticMeshComponent* bodyComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	float speed = 500;

	UPROPERTY(VisibleAnywhere, Category = "Setting")
	FVector dir;

	//==========================================
	// ����ȿ�� �Ӽ�
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	class UParticleSystem* explosionFactory;

	// ���� ����
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	class USoundBase* explosionSound;

	UFUNCTION()
		void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	class ATY_PC_PlayerPawn* gamePlayer;
	class ATY_RhythmRewardNode* me;
	class ATY_Test_GameMode* gameMode;

	int score = 1;
};
