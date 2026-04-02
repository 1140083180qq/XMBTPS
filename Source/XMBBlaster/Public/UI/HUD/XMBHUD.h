// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/Widget/CharacterOverlayWidget.h"
#include "XMBHUD.generated.h"

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

	FORCEINLINE void SetHUDPackage(const FHUDPackage& Package) { HUDPackage = Package; }

	UPROPERTY(EditAnywhere,Category = "Player States")
	TSubclassOf<UUserWidget> CharacterOverlayWidgetClass;
	
	UCharacterOverlayWidget* CharacterOverlayWidget;

protected:
	virtual void BeginPlay() override;
	void AddCharacterOverlayWidget();
	
private:
	FHUDPackage HUDPackage;
	
	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportContent,FVector2D Spread, FLinearColor CrosshairColor);

	UPROPERTY(EditAnywhere)
	float CrosshaitSpreadMax = 16.f;
	
};
