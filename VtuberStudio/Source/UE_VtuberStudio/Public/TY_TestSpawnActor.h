// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TY_TestSpawnActor.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_TestSpawnActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATY_TestSpawnActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 필요속성 : 노드 공장, 생성조건
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNode> nodeFactory1;
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNode> nodeFactory2;
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNode> nodeFactory3;
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNodeB> nodeFactoryB;

	// 원형 Spawn
	UFUNCTION(BlueprintCallable)
	void CircleShot1();
	//============================================
	UFUNCTION(BlueprintCallable)
	void CircleShot2();
	//============================================
	UFUNCTION(BlueprintCallable)
	void CircleShot3();
	//============================================
	// 원형 Spawn 후 타겟에게로 이동
	UFUNCTION(BlueprintCallable)
	void CicleShotGoto();
	//============================================
	int m;
	float a;
	float phi;
	TArray<float>* v = new TArray<float>;
	TArray<float>* xx = new TArray<float>;
	// 모양으로 Spawn
	void ShapeAwake();
	void ShapeInit();
	UFUNCTION(BlueprintCallable)
	void ShapeShot();
	//============================================
	float rotSpeed = 100.f;
	// 회전
	UFUNCTION(BlueprintCallable)
	void Spin();
	//============================================

	// 타겟에게로
	UFUNCTION(BlueprintCallable)
	void TargetGoto();
	//============================================

	// 하트 모양
	UFUNCTION(BlueprintCallable)
	void HeartShot();

	
};
