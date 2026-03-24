// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Weapon/WeaponBase.h"
#include "TurningInPlace.h"

#include "XMBCharacterBase.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UCombatComponent;


UCLASS()
class XMBBLASTER_API AXMBCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AXMBCharacterBase();
	virtual void PostInitializeComponents() override;

	void SetOverlappingWeapon(AWeaponBase* Weapon);//一旦overlappingWeapon这个变量发生改变时，复制才会起作用。仅当OverlappingWeapon在Server发生变化时，才会让Client发生变化
	
	bool IsWeaponEquipped();
	bool IsAiming();
	bool IsShoulderAiming();
	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }

	AWeaponBase* GetEquippedWeapon();
	
protected:
	// virtual void Tick(float DeltaSeconds) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	void EquipButtonPressed();
	UFUNCTION(BlueprintCallable)
	void CrouchButtonPressed();
	UFUNCTION(BlueprintCallable)
	void AimButtonPressed();
	UFUNCTION(BlueprintCallable)
	void AimButtonReleased();
	UFUNCTION(BlueprintCallable)
	void ShoulderAimButtonPressed();
	UFUNCTION(BlueprintCallable)
	void ShoulderAimButtonReleased();

	UFUNCTION(BlueprintCallable)
	void AimOffset(float DeltaTime);

	virtual void Jump() override;

private:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OverheadWidget;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon);
	AWeaponBase* OverlappingWeapon;

	UPROPERTY(VisibleAnywhere)
	UCombatComponent* CombatComponent;

	UFUNCTION(Server,Reliable)//需要了解RPC的可靠与不可靠执行，出现不可靠执行的几种情形。知道解决不可靠执行的几种办法。
	void ServerEquipButtonPressed();
	
	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeaponBase* LastWeapon);

	
	
	float AO_Yaw;
	float InterpAO_Yaw;//用于设置转身时的Yaw插值
	float AO_Pitch;
	FRotator StartingAimRotation;

	ETurningInPlace TurningInPlace;

	void TurnInPlace(float DeltaTime);
	
};


