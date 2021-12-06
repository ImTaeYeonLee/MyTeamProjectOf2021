// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "WeaponShotgun.generated.h"

UCLASS()
class SUBWAY_API AWeaponShotgun :public AWeaponBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponShotgun();

	UFUNCTION(BlueprintCallable) // �������Ʈ���� �ҷ��� �� �ֵ��� UFUNCTION ����
	virtual void Fire() override;
	
	UFUNCTION(BlueprintCallable)
	virtual void Reload() override;

	UPROPERTY(EditAnywhere, Category = Setting) // �ִ� ��Ÿ�� ������ �ִԸ�Ÿ�� Ÿ���� anim ���� ����
		class UAnimMontage* anim;

	UPROPERTY(BlueprintReadWrite)
		bool isFire = false;

	UPROPERTY(BlueprintReadWrite)
	FHitResult Hit;

	UPROPERTY()
	bool needToReroad;

	class APickUpActor* pistolParentActor;
	class AShotGunActor* shotGunParentActor;
	class AVR_Player* vrPlayer;
	class AFPSPlayer* fpsPlayer;
};
