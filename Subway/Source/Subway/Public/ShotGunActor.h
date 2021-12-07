// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShotGunActor.generated.h"

UCLASS()
class SUBWAY_API AShotGunActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShotGunActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UStaticMeshComponent* magComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class USkeletalMeshComponent* gripComp;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UStaticMeshComponent* meshComp;

	// ���Ͽ� ������ Offset ���� ����
	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		FVector grabOffset;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		FVector leftgrabOffset;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
		class UChildActorComponent* shotgun;
};
