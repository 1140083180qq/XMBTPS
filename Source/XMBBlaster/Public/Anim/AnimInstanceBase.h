// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Character/XMBCharacterBase.h"
#include "AnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API UAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:


	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float Speed;

	UPROPERTY(BlueprintReadOnly, Category = Character, meta = (allowprivateaccess = "true"))
	AXMBCharacterBase* XMBCharacter;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsInAir;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsAccelerating;
	
};
