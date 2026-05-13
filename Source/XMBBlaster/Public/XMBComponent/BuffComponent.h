
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"


class AXMBCharacterBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	friend AXMBCharacterBase;
	
	UBuffComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Heal(float HealAmount, float HealingTime);
	
	void SpeedBuff(float InBuffBaseSpeed, float InBuffCrouchSpeed, float InBuffTime);
	void SetInitialSpeeds(float BaseSpeed, float CrouchSpeed);

	void JumpBuff(float InBuffJumpVelocity, float InBuffTime);
	void SetInitialJumpVelocity(float ZVelocity);
	
	
protected:
	virtual void BeginPlay() override;
	void HealRampUp(float DeltaTime);
	
private:

	UPROPERTY()
	AXMBCharacterBase* Owner;

	/*
	 * Health Buff
	 */
	
	//TODO:是否可以考虑用map设置多个buff同时生效
	bool bHealing = false;
	float HealingRate = 0;
	float AmountToHeal = 0.f;

	/*
	 * Speed Buff
	 */

	FTimerHandle SpeedBuffTimer;
	void ResetSpeeds();
	float InitialBaseSpeed;
	float InitialCrouchSpeed;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpeedBuff(float InBuffBaseSpeed, float InBuffCrouchSpeed);

	/*
	 * Jump Buff
	 */

	FTimerHandle JumpBuffTimer;
	void ResetJumpZVelocity();
	float InitialJumpVelocity;
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastJumpBuff(float InBuffJumpVelocity);
};
