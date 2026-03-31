// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Weapon/WeaponBase.h"
#include "TurningInPlace.h"
#include "Interfaces/InteractWithCrosshairsInterface.h"
#include "XMBComponent/UIComponent.h"

#include "XMBCharacterBase.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UCombatComponent;


UCLASS()
class XMBBLASTER_API AXMBCharacterBase : public ACharacter, public IInteractWithCrosshairsInterface
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
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE bool ShouldRotateRootBone() const { return bRotateRootBone; }
	
	AWeaponBase* GetEquippedWeapon();

	void PlayFireMontage(bool bAiming);
	

	UFUNCTION(NetMulticast,Unreliable)
	void MulticastHit();

	/*XMBUITEST*/
	FORCEINLINE UCombatComponent* GetCombatComponent() const { return CombatComponent; }
	FORCEINLINE UUIComponent* GetUIComponent() const { return UIComponent; }
	/*XMBUITEST*/

	FVector GetHitTarget() const;

	virtual void OnRep_ReplicatedMovement() override;//当角色移动时，会自动调用这个类//具体参考于Actor.h
protected:
	virtual void Tick(float DeltaSeconds) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	void CalculateAO_Pitch();//获取相机俯仰角，传给动画蓝图驱动上半身上下转动。


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
	UFUNCTION(BlueprintCallable)
	void SimProxiesTurn();//本地玩家用 AimOffset（通过相机方向判断），但远程角色没有相机信息。所以改用帧间 Actor 旋转差（ProxyYaw）来判断是否在转身。

	virtual void Jump() override;

	UFUNCTION(BlueprintCallable)
	void FireButtonPressed();
	UFUNCTION(BlueprintCallable)
	void FireButtonReleased();

	void PlayHitReactMontage();

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

	UPROPERTY(VisibleAnywhere)
	UUIComponent* UIComponent;

	UFUNCTION(Server,Reliable)//需要了解RPC的可靠与不可靠执行，出现不可靠执行的几种情形。知道解决不可靠执行的几种办法。
	void ServerEquipButtonPressed();
	
	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeaponBase* LastWeapon);

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* FireWeaponMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* HitReactMontage;
	
	float AO_Yaw;
	float InterpAO_Yaw;//用于设置转身时的Yaw插值
	float AO_Pitch;
	FRotator StartingAimRotation;//上次停止移动时的瞄准方向（"锚点"）

	ETurningInPlace TurningInPlace;

	void TurnInPlace(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	void HideCameraIfCharacterClose();

	UPROPERTY(EditAnywhere)
	float CameraThreshold = 200.f;

	bool bRotateRootBone;
	float TurnThreshold = 0.5f;//每帧旋转角度的阈值
	FRotator ProxyRotationLastFrame;
	FRotator ProxyRotation;
	float ProxyYaw;
	float TimeSinceLastMovementReplication;
	float CalculateSpeed();//计算角色的水平移动速度（忽略 Z 轴的下落/跳跃分量）。用于判断角色是否在移动。
	
};



