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

	// �ʿ�Ӽ� : ��� ����, ��������
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNode> nodeFactory1;
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNode> nodeFactory2;
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNode> nodeFactory3;
	UPROPERTY(EditDefaultsOnly, Category = "Setting")
	TSubclassOf<class ATY_RhythmRewardNodeB> nodeFactoryB;

	// ���� Spawn
	UFUNCTION(BlueprintCallable)
	void CircleShot1();
	//============================================
	UFUNCTION(BlueprintCallable)
	void CircleShot2();
	//============================================
	UFUNCTION(BlueprintCallable)
	void CircleShot3();
	//============================================
	// ���� Spawn �� Ÿ�ٿ��Է� �̵�
	UFUNCTION(BlueprintCallable)
	void CicleShotGoto();
	//============================================
	int m;
	float a;
	float phi;
	TArray<float>* v = new TArray<float>;
	TArray<float>* xx = new TArray<float>;
	// ������� Spawn
	void ShapeAwake();
	void ShapeInit();
	UFUNCTION(BlueprintCallable)
	void ShapeShot();
	//============================================
	float rotSpeed = 100.f;
	// ȸ��
	UFUNCTION(BlueprintCallable)
	void Spin();
	//============================================

	// Ÿ�ٿ��Է�
	UFUNCTION(BlueprintCallable)
	void TargetGoto();
	//============================================

	// ��Ʈ ���
	UFUNCTION(BlueprintCallable)
	void HeartShot();

	
};
