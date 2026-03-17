// Fill out your copyright notice in the Description page of Project Settings.


#include "Anim/AnimInstanceBase.h"
#include "GameFramework/CharacterMovementComponent.h"

void UAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	XMBCharacter = Cast<AXMBCharacterBase>(TryGetPawnOwner());
} 

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (XMBCharacter == nullptr)
	{
		XMBCharacter = Cast<AXMBCharacterBase>(TryGetPawnOwner());
	}
	if (XMBCharacter == nullptr) return;

	FVector Velocity = XMBCharacter->GetVelocity();
	Velocity.Z = 0.f;
	Speed = Velocity.Size();

	bIsInAir = XMBCharacter->GetCharacterMovement()->IsFalling();

	bIsAccelerating = XMBCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f;
	
}
