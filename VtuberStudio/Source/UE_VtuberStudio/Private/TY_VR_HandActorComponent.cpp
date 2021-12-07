// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_VR_HandActorComponent.h"
#include "TY_PC_PlayerPawn.h" // 테스트 플레이어 참조
#include "TY_VR_HandAnimInstance.h"
#include "Animation/AnimInstance.h"

UTY_VR_HandActorComponent::UTY_VR_HandActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UTY_VR_HandActorComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<ATY_PC_PlayerPawn>(GetOwner());

	if (player)
	{
		l_handAnim = Cast<UTY_VR_HandAnimInstance>(player->leftHand->GetAnimInstance());
		r_handAnim = Cast<UTY_VR_HandAnimInstance>(player->rightHand->GetAnimInstance());
	}
}


void UTY_VR_HandActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	l_handAnim->gripValue = FMath::Lerp(l_handAnim->gripValue, targetGripValueLeft, gripSpeed * DeltaTime);
	r_handAnim->gripValue = FMath::Lerp(r_handAnim->gripValue, targetGripValueRight, gripSpeed * DeltaTime);
}

