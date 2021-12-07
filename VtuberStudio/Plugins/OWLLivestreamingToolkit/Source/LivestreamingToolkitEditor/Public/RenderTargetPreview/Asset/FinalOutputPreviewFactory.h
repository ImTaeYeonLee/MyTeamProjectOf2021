// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FinalOutputPreviewFactory.generated.h"


UCLASS()
class LIVESTREAMINGTOOLKITEDITOR_API UFinalOutputPreviewFactory : public UFactory
{
	GENERATED_BODY()

public:
	UFinalOutputPreviewFactory();
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};


