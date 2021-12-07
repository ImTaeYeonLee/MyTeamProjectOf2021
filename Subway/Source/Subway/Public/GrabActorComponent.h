// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GrabActorComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SUBWAY_API UGrabActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGrabActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

private:
	void ShowGrabLine();
	void HideGrabLine();
	void DrawGrabLine();
	void GrabAction();
	void ReleaseAction();
	void Test1();
	void Test2();
	void Fire();
	void Reload();
	void ShotgunReload();



	bool bIsShowing = false;
	class AWeaponBase* pickObject;
	class AShotGunActor* shotgunobject;
	class AMagazineActor* magzineActor;
	class AVR_Player* player;
	class AActor* gunTarget;

	FHitResult grabObject;

	void GrabPickObject();
	void GrabShotgunObject();
public:
	UPROPERTY(EditAnywhere, Category=AAA)
	FVector grabOffset;
	UPROPERTY(EditAnywhere, Category = AAA)
	class APickUpActor* pickupActor;

	UPROPERTY(EditAnywhere, Category = AAA)
	float grabRange = 15;

	void LeftDrawGrabLine();
	void LeftGrabAction();
	void LeftReleaseAction();
	void Test3();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GravSettings)
	class AWeaponPistol* pistol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GravSettings)
	class AWeaponShotgun* shotgun;

	UPROPERTY(EditAnywhere, Category = GravSettings)
		float grabDistance = 1000.f;

	UPROPERTY(EditAnywhere, Category = GravSettings)
		class UHapticFeedbackEffect_Base* shotHaptic;

	bool bIsPistol = false;
	bool bIsShotgun = false;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		class USoundBase* gunSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		class USoundBase* shotgunSound;
private:
	void GrabMagzine(AActor* grabActor);
	void GrabLeftShotgunObject(AActor* grabActor);
};
