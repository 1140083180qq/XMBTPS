// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "OverheadWidget.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DisplayText;

	void SetDisplayText(FString TextToDisplay);

	UFUNCTION(BlueprintCallable)
	void ShowPlayerNetRole(APawn* InPawn);

protected:
	virtual void NativeDestruct() override;
	
	void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld);
	
};
