

#include "XMBComponent/BuffComponent.h"

#include "Character/XMBCharacterBase.h"


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