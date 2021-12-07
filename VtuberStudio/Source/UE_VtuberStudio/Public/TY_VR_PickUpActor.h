// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TY_VR_PickUpActor.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_VR_PickUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATY_VR_PickUpActor();

protected:
	virtual void BeginPlay() override;

public:	
	//virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, Category = PickUPSettings)
	class USceneComponent* firstComp;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
	class UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUPSettings)
	class UStaticMeshComponent* meshComp;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
	class UStaticMeshComponent* meshComp02;

	UPROPERTY(EditAnywhere, Category = PickUPSettings)
	FVector grabOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUPSettings) // 잡힌 상태인지 확인할 변수. 블프에서 쓸거라서 변수로 잡혔고 안잡혔고를 확인할 것이다.
	bool isAttaching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUPSettings) // 잡힌 상태인지 확인할 변수. 블프에서 쓸거라서 변수로 잡혔고 안잡혔고를 확인할 것이다.
	bool pickObjectGravityNPhysics;

};
