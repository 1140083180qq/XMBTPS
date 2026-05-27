// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ElimAnnouncement.generated.h"

class UTextBlock;
class UHorizontalBox;
/**
 * 
 */
UCLASS()
class XMBBLASTER_API UElimAnnouncement : public UUserWidget
{
	GENERATED_BODY()

public:
	void SerElimAnnouncementText(FString AttackerName, FString VictimName);

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* AnnouncementBox;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnouncementText;
	
};
