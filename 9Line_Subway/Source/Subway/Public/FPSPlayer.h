// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSPlayer.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FPlayerInputDelegate, class UInputComponent*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmmoChanged, int32, CurrantAmmo, int32, MagazineAmmo);

UCLASS()
class SUBWAY_API AFPSPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintAssignable)
	FAmmoChanged OnAmmoChanged;

	// StartingWeaponClass ������Ƽ�� AWeaponBase Ÿ���� �ֵ鸸 �Ҵ�(TSubclassOf)����
	UPROPERTY(EditAnywhere, Category = "Test")
	TSubclassOf<class AWeaponBase> StartingWeaponClass;

	//int32 WeaponIndex;
	//TArray <AWeaponBase*> WeaponArray;

	bool blsAiming;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Weapon)
	class AWeaponBase* CurrentWeapon; // �������̽� Ÿ���� Ŀ��Ʈ���� Ŭ������ ������
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category = FPSCamera)
	class UCameraComponent* fpsCamera;

	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
	class USkeletalMeshComponent* bodyMesh;

	UPROPERTY(VisibleAnywhere, Category = PlayerMove)
	class UPlayerMove* playerMove;

	FPlayerInputDelegate OnInputDelegate;

	void OnFire();
	void Reload();
public:
	// health System
	UPROPERTY(EditAnywhere, Category = PlayerHP)
	int PlayerHP = 5;

	// �ǰ� �Լ�
	void OnDamageProcess();
};
