// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TY_BaseUserWidget.generated.h"

/**
 *
 */
UCLASS() //UCLASS(Meta=(DisableNativeTick))
class UE_VTUBERSTUDIO_API UTY_BaseUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	/*

	virtual void NativeConstruct() override;
	
	UPROPERTY(Meta = (BindWidget))
		class USizeBox* SizeBox;

	UPROPERTY(Meta = (BindWidget))
		class UCanvasPanel* CanvasPanel;

	UPROPERTY(Meta = (BindWidget))
		class UButton* SlotButton;

	UPROPERTY(Meta = (BindWidget))
		class UTextBlock* TextBlock;

	UPROPERTY(Meta = (BindWidget))
		class UTextBox* TextBox;
	
	UPROPERTY(Meta = (BindWidget))
		class USpacer* Spacer;
*/

};
