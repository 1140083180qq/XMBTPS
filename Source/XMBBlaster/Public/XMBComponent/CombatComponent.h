// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapon/WeaponBase.h"

#include "CombatComponent.generated.h"

class AXMBCharacterBase;



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCombatComponent();
	friend class AXMBCharacterBase;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void EquipWeapon(AWeaponBase* WeaponToEquip);

protected:
	virtual void BeginPlay() override;


private:
	AXMBCharacterBase* Owner;

	UPROPERTY(Replicated)//这里需要设置复制，否则在进行武器装备仅会在服务器执行，客户端不执行(Character内目前仅有HasAuthority进行判断)
	AWeaponBase* EquippedWeapon;

	UPROPERTY(Replicated)
	bool bAiming;
	UPROPERTY(Replicated)
	bool bShoulderAiming;
};
