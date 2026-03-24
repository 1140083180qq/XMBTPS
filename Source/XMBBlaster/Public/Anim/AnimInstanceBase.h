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

	//物体数据
	UPROPERTY(BlueprintReadOnly, Category = Character, meta = (allowprivateaccess = "true"))
	AXMBCharacterBase* XMBCharacter;

	
	AWeaponBase* EquippedWeapon;

	//属性数据

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float Speed;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsInAir;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsAccelerating;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsWeaponEquipped;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsCrouched;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bAiming;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bShoulderAiming;

	//当前相机在Y方向上相对于Y轴的偏移
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float YawOffset;
	
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float Lean;//倾斜角度

	FRotator CharacterRotationLastFrame;
	FRotator CharacterRotation;
	FRotator DeltaRotation;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float AO_Yaw;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float AO_Pitch;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	FTransform LeftHandTransform;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	ETurningInPlace TurningInPlace;
};
