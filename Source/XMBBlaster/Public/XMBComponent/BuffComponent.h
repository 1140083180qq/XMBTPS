
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
	
protected:
	virtual void BeginPlay() override;
	void HealRampUp(float DeltaTime);
	
private:

	UPROPERTY()
	AXMBCharacterBase* Owner;

	//TODO:是否可以考虑用map设置多个buff同时生效
	bool bHealing = false;
	float HealingRate = 0;
	float AmountToHeal = 0.f;

		
};
