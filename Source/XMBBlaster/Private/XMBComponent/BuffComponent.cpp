

#include "XMBComponent/BuffComponent.h"

#include "Character/XMBCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

UBuffComponent::UBuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HealRampUp(DeltaTime);
	ShieldRampUp(DeltaTime);
}


void UBuffComponent::Heal(float HealAmount, float HealingTime)
{
	bHealing = true;
	HealingRate = HealAmount / HealingTime;
	AmountToHeal += HealAmount;
}


void UBuffComponent::HealRampUp(float DeltaTime)
{
	if (!bHealing || Owner == nullptr || Owner->IsElimmed()) return;

	const float HealThisFrame = HealingRate * DeltaTime;
	Owner->SetHealth(FMath::Clamp(Owner->GetHealth() + HealThisFrame, 0.f , Owner->GetMaxHealth()));
	Owner->UpdateHUDHealth();
	AmountToHeal -= HealThisFrame;

	if (AmountToHeal <= 0.f || Owner->GetHealth() >= Owner->GetMaxHealth())
	{
		bHealing = false;
		AmountToHeal = 0.f;
	}
}


void UBuffComponent::SetInitialSpeeds(float BaseSpeed, float CrouchSpeed)
{
	InitialBaseSpeed = BaseSpeed;
	InitialCrouchSpeed = CrouchSpeed;
}


void UBuffComponent::SpeedBuff(float InBuffBaseSpeed, float InBuffCrouchSpeed, float InBuffTime)
{
	if (Owner == nullptr) return;

	Owner->GetWorldTimerManager().SetTimer(
		SpeedBuffTimer,
		this,
		&UBuffComponent::ResetSpeeds,
		InBuffTime);

	if (Owner->GetCharacterMovement())
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = InBuffBaseSpeed;
		Owner->GetCharacterMovement()->MaxWalkSpeedCrouched = InBuffCrouchSpeed;
	}
	MulticastSpeedBuff(InBuffBaseSpeed,InBuffCrouchSpeed);
}


void UBuffComponent::MulticastSpeedBuff_Implementation(float InBuffBaseSpeed, float InBuffCrouchSpeed)
{
	if (Owner->GetCharacterMovement() && Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = InBuffBaseSpeed;
		Owner->GetCharacterMovement()->MaxWalkSpeedCrouched = InBuffCrouchSpeed;
	}
}


void UBuffComponent::ResetSpeeds()
{
	if (Owner == nullptr || Owner->GetCharacterMovement() == nullptr) return;

	Owner->GetCharacterMovement()->MaxWalkSpeed = InitialBaseSpeed;
	Owner->GetCharacterMovement()->MaxWalkSpeedCrouched = InitialCrouchSpeed;
	MulticastSpeedBuff(InitialBaseSpeed,InitialCrouchSpeed);
}


void UBuffComponent::SetInitialJumpVelocity(float ZVelocity)
{
	InitialJumpVelocity = ZVelocity;
}


void UBuffComponent::JumpBuff(float InBuffJumpVelocity, float InBuffTime)
{
	if (Owner == nullptr) return;

	Owner->GetWorldTimerManager().SetTimer(
		JumpBuffTimer,
		this,
		&UBuffComponent::ResetJumpZVelocity,
		InBuffTime);

	if (Owner->GetCharacterMovement())
	{
		Owner->GetCharacterMovement()->JumpZVelocity = InBuffJumpVelocity;
	}
	MulticastJumpBuff_Implementation(InBuffJumpVelocity);
}

void UBuffComponent::MulticastJumpBuff_Implementation(float InBuffJumpVelocity)
{
	if (Owner->GetCharacterMovement() && Owner)
	{
		Owner->GetCharacterMovement()->JumpZVelocity = InBuffJumpVelocity;
	}
}


void UBuffComponent::ResetJumpZVelocity()
{
	if (Owner->GetCharacterMovement() && Owner)
	{
		Owner->GetCharacterMovement()->JumpZVelocity = InitialJumpVelocity;
	}
	MulticastJumpBuff_Implementation(InitialJumpVelocity);
}


void UBuffComponent::ReplenishShield(float InShieldAmount, float InReplenishTime)
{
	bReplenishingShield = true;
	ShieldReplenishRate = InShieldAmount / InReplenishTime;
	ShieldReplenishAmount += InShieldAmount;
}


void UBuffComponent::ShieldRampUp(float DeltaTime)
{
	if (!bReplenishingShield || Owner == nullptr || Owner->IsElimmed()) return;

	const float ReplenishThisFrame = ShieldReplenishRate * DeltaTime;
	Owner->SetShield(FMath::Clamp(Owner->GetShield() + ReplenishThisFrame, 0.f , Owner->GetMaxShield()));
	Owner->UpdateHUDShield();
	ShieldReplenishAmount -= ReplenishThisFrame;

	if (ShieldReplenishAmount <= 0.f || Owner->GetShield() >= Owner->GetMaxShield())
	{
		bReplenishingShield = false;
		ShieldReplenishAmount = 0.f;
	}
}