// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "XMBCharacterBase.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class XMBBLASTER_API AXMBCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AXMBCharacterBase();

protected:
	
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OverheadWidget;

};
