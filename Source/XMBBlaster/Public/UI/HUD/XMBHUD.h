// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/Widget/AnnouncementWidget.h"
#include "UI/Widget/CharacterOverlayWidget.h"
#include "XMBHUD.generated.h"

class UElimAnnouncement;

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY()

public:
	UTexture2D* CrosshairCenter;
	UTexture2D* CrosshairLeft;
	UTexture2D* CrosshairRight;
	UTexture2D* CrosshairTop;
	UTexture2D* CrosshairBottom;
	float CrosshairSpread;
	FLinearColor CrosshairsColor;
	
};

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AXMBHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;

	void AddCharacterOverlayWidget();
	
	void AddAnnouncement();

	UPROPERTY(EditAnywhere,Category = "Player States")
	TSubclassOf<UUserWidget> CharacterOverlayWidgetClass;

	UPROPERTY()
	UCharacterOverlayWidget* CharacterOverlayWidget;
	
	UPROPERTY(EditAnywhere, Category = "Announcements")
	TSubclassOf<UUserWidget> AnnouncementWidgetClass;

	UPROPERTY()
	UAnnouncementWidget* AnnouncementWidget;

	void AddElimAnnouncement(FString Attacker, FString victim);

protected:
	virtual void BeginPlay() override;
	
private:
	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportContent,FVector2D Spread, FLinearColor CrosshairColor);

	UPROPERTY()
	APlayerController* OwningController;
	
	FHUDPackage HUDPackage;

	UPROPERTY(EditAnywhere)
	float CrosshairSpreadMax = 16.f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UElimAnnouncement> ElimAnnouncementClass;

	UPROPERTY(EditAnywhere)
	float ElimAnnouncementTime = 2.f;

	UFUNCTION()
	void ElimAnnouncementTimerFinished(UElimAnnouncement* MsgToRemove);

	UPROPERTY()
	TArray<UElimAnnouncement*> ElimMessages;

public:
	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }
};
