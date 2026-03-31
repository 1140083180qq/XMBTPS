// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerController/XMBPlayerController.h"
#include "UI/HUD/XMBHUD.h"
#include "Weapon/WeaponBase.h"

#include "CombatComponent.generated.h"

class AXMBCharacterBase;
#define TRACE_LENGTH 80000;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCombatComponent();
	friend class AXMBCharacterBase;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void EquipWeapon(AWeaponBase* WeaponToEquip);
	/*XMBUITEST*/
	// 【新增】提供只读访问，安全获取已装备武器
	FORCEINLINE AWeaponBase* GetEquippedWeapon() const { return EquippedWeapon; }
	FORCEINLINE bool IsAiming() const { return bAiming; }
	FORCEINLINE bool IsShoulderAiming() const { return bShoulderAiming; }
	FORCEINLINE bool IsFireButtonPressed() const { return bFireButtonPressed; }
	/*XMBUITEST*/

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetAiming(bool bIsAiming);
	UFUNCTION(Server,Reliable)
	void ServerSetAiming(bool bIsAiming);
	
	void SetShoulderAiming(bool bIsShoulderAiming);
	UFUNCTION(Server,Reliable)
	void ServerSetShoulderAiming(bool bIsShoulderAiming);

	UFUNCTION()
	void OnRep_EquippedWeapon();

	void FireButtonPressed(bool bPressed);

	//到第五章第四节的一半为止，这一部分仅可以从客户端调用服务器执行，别的客户端看不见;以及在服务器调用且执行，客户端看不见
	//server表示从客户端上调用并在服务器上执行//非常重要的同步需要Reliable传到服务器
	UFUNCTION(Server, Reliable)//TODO:需要了解FVector_NetQuantize这一个类型对于网络复制的作用
	void ServerFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

private:
	AXMBCharacterBase* Owner;

	UPROPERTY(Replicatedusing = OnRep_EquippedWeapon)//这里需要设置复制，否则在进行武器装备仅会在服务器执行，客户端不执行(Character内目前仅有HasAuthority进行判断)
	AWeaponBase* EquippedWeapon;

	UPROPERTY(Replicated)
	bool bAiming;
	UPROPERTY(Replicated)
	bool bShoulderAiming;
	UPROPERTY(Replicated)
	bool bFireButtonPressed;

	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;
	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;
	UPROPERTY(EditAnywhere)
	float ShoulderAimWalkSpeed;

	AXMBPlayerController* XMBController;
	
	AXMBHUD* HUD;

	FVector HitTarget;
	
};

