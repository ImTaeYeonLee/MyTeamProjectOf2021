// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "WeaponPistol.generated.h"

UCLASS()
class SUBWAY_API AWeaponPistol : public AWeaponBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponPistol();

	UFUNCTION(BlueprintCallable)
	virtual void Fire() override;

	UFUNCTION(BlueprintCallable)
	virtual void Reload() override;

	UPROPERTY(BlueprintReadWrite)
	bool isFire = false;

	UPROPERTY(BlueprintReadWrite)
	FHitResult HitResults;


	//UPROPERTY(EditAnywhere, Category=Setting) // �ִ� ��Ÿ�� ������ �ִԸ�Ÿ�� Ÿ���� anim ���� ����
	//class UAnimMontage* anim;

	class APickUpActor* pistolParentActor;
	class AShotGunActor* shotGunParentActor;
};
