// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Weapon/WeaponBase.h"
#include "GameTypes/TurningInPlace.h"
#include "Components/TimelineComponent.h"
#include "Interfaces/InteractWithCrosshairsInterface.h"

#include "XMBComponent/UIComponent.h"

#include "XMBCharacterBase.generated.h"

enum class ETeam : uint8;
class UNiagaraComponent;
class UNiagaraSystem;
class ULagCompensationComponent;
class UBoxComponent;
class UBuffComponent;
class UCameraComponent;
class USpringArmComponent;
class UCombatComponent;
class AXMBPlayerState;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);

UCLASS()
class XMBBLASTER_API AXMBCharacterBase : public ACharacter, public IInteractWithCrosshairsInterface
{
	GENERATED_BODY()

public:
	AXMBCharacterBase();
	virtual void PostInitializeComponents() override;//组件初始化完成后的回调

	virtual void Destroyed() override;


	bool IsWeaponEquipped();
	bool IsAiming();
	bool IsShoulderAiming();
	ECombatState GetCombatState() const;
	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE bool ShouldRotateRootBone() const { return bRotateRootBone; }
	FORCEINLINE bool IsElimmed() const { return bElimmed; }
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE void SetHealth(float Amount) { Health = Amount; }
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }
	FORCEINLINE void SetMaxHealth(float Amount)  { MaxHealth = Amount; }
	FORCEINLINE float GetShield() const { return Shield; }
	FORCEINLINE void SetShield(float Amount) { Shield = Amount; }
	FORCEINLINE float GetMaxShield() const { return MaxShield; }
	FORCEINLINE void SetMaxShield(float Amount) { MaxShield = Amount; }
	FORCEINLINE bool GetDisableGameplay() const { return bDisableGameplay; }
	FORCEINLINE UAnimMontage* GetReloadMontage() const { return ReloadMontage; }
	FORCEINLINE UStaticMeshComponent* GetAttachedGrenade() const { return AttachedGrenade; }
	FORCEINLINE ULagCompensationComponent* GetLagCompensation() const { return LagCompensationComponent; }
	bool IsLocallyReloading();
	FORCEINLINE bool IsHoldingTheFlag() const;
	
	/*XMBUITEST*/
	FORCEINLINE UCombatComponent* GetCombatComponent() const { return CombatComponent; }
	FORCEINLINE UUIComponent* GetUIComponent() const { return UIComponent; }
	FORCEINLINE UBuffComponent* GetBuffComponent() const { return BuffComponent; }
	/*XMBUITEST*/
	/*--------- RELOADTEST----------*/
	void ExecuteReloadMontage(FName SectionName, bool bIsSniper);
	/*---------RELOADTEST----------*/
	
	void PlayFireMontage(bool bAiming);
	void PlayElimMontage();
	void PlayReloadMontage();
	void PlayThrowGrenadeMontage();
	void PlaySwapWeaponMontage();

	/*
	 * 武器
	 */
	AWeaponBase* GetEquippedWeapon();//获取当前装备武器
	FVector GetHitTarget() const;//获取当前屏幕中心点
	void SetOverlappingWeapon(AWeaponBase* Weapon);//一旦overlappingWeapon这个变量发生改变时，复制才会起作用。仅当OverlappingWeapon在Server发生变化时，才会让Client发生变化
	
	UFUNCTION(BlueprintImplementableEvent)
	void ShowSniperScopeWidget(bool bShowScope);//设置狙击枪开镜

	virtual void OnRep_ReplicatedMovement() override;//当角色移动时，会自动调用这个类//具体参考于Actor.h

	
	/*
	 * 死亡
	 */
	void Elim(bool bPlayerLeftGame);//这个函数仅在服务器执行
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastElim(bool bPlayerLeftGame);
	
	UPROPERTY(Replicated)//TODO:这个变量仅用来设置禁止使用技能以及用来设置游戏开始前的弹药不消耗(但是可以开枪)
	bool bDisableGameplay = false;//这个变量用于禁止玩家进行输入,false为可以，true为不可以

	
	/*
	 * 更新HUD
	 */
	UFUNCTION()
	void UpdateHUDHealth();

	UFUNCTION()
	void UpdateHUDShield();

	void UpdateHUDAmmo();


	/*
	 * 碰撞盒子
	 */
	UPROPERTY()
	TMap<FName, UBoxComponent*> HitCollisionBoxes;


	/*
	 * 交换武器
	 */
	bool bFinishedSwapping = false;


	/*
	 * MainMenu
	 */
	UFUNCTION(Server,Reliable)
	void ServerLeaveGame();

	FOnLeftGame OnLeftGame;

	UFUNCTION(NetMulticast,Reliable)
	void MulticastGainedTheLead();

	UFUNCTION(NetMulticast,Reliable)
	void MulticastLostTheLead();


	/*
	 *Team 
	 */
	void SetTeamColor(ETeam Team);

	ETeam GetTeam();

	void SetHoldingTheFlag(bool bHolding);
	
protected:
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;


	void DropOrDestroyWeapon(AWeaponBase* Weapon);
	void DropOrDestroyWeapons();

	
	
	/*
	 * 动画
	 */
	void CalculateAO_Pitch();//获取相机俯仰角，传给动画蓝图驱动上半身上下转动。

	
	/*
	 * 输入
	 */
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
	void ReloadButtonPressed();
	UFUNCTION(BlueprintCallable)
	void GrenadeButtonPressed();
	UFUNCTION(BlueprintCallable)
	void FireButtonPressed();
	UFUNCTION(BlueprintCallable)
	void FireButtonReleased();
	UFUNCTION(BlueprintCallable)
	void QuitButtonReleased();

	virtual void Jump() override;

	UFUNCTION(BlueprintCallable)
	void AimOffset(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void SimProxiesTurn();//本地玩家用 AimOffset（通过相机方向判断），但远程角色没有相机信息。所以改用帧间 Actor 旋转差（ProxyYaw）来判断是否在转身。

	//此处要放在Tick内，因为无法及时更新HUD。TODO:尝试使用计时器
	void PollInit();
	bool bDoOnce = true;
	void RotateInPlace(float DeltaSeconds);
	
	void PlayHitReactMontage();//播放受击动画

	
	/*
	 * 伤害
	 */
	//使用变量的复制比使用RPC对网络更节俭。为了节省网络，此处对伤害不使用RPC，删除了multicast。
	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatorController,AActor* DmaageCauser);



	/*
	 * 用于网络延迟补偿的碰撞盒子
	 */

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Head;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Pelvis;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Spine_02;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Spine_03;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Upperarm_l;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Upperarm_r;
	
	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Lowerarm_l;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Lowerarm_r;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Hand_l;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Hand_r;

	// UPROPERTY(EditAnywhere,Category = "HitBox")
	// UBoxComponent* Backpack;

	// UPROPERTY(EditAnywhere,Category = "HitBox")
	// UBoxComponent* Blanket;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Thigh_l;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Thigh_r;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Calf_l;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Calf_r;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Foot_l;

	UPROPERTY(EditAnywhere,Category = "HitBox")
	UBoxComponent* Foot_r;

	

	void SetSpawnPoint();
	void OnPlayerStateInitialized();

	

private:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* OverheadWidget;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon);
	AWeaponBase* OverlappingWeapon;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCombatComponent* CombatComponent;

	UPROPERTY(VisibleAnywhere)
	UUIComponent* UIComponent;

	UPROPERTY(VisibleAnywhere)
	UBuffComponent* BuffComponent;

	UPROPERTY(VisibleAnywhere)
	ULagCompensationComponent* LagCompensationComponent;



	
	/*
	 * 蒙太奇
	 */
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* FireWeaponMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* HitReactMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ElimMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ReloadMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* SniperReloadMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ThrowGrenadeMontage;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* SwapWeaponMontage;

	/*装备武器输入*/
	UFUNCTION(Server,Reliable)//需要了解RPC的可靠与不可靠执行，出现不可靠执行的几种情形。知道解决不可靠执行的几种办法。
	void ServerEquipButtonPressed();
	
	UFUNCTION()//RPC
	void OnRep_OverlappingWeapon(AWeaponBase* LastWeapon);

	
	/*
	 * 动画
	 */
	float AO_Yaw;
	float InterpAO_Yaw;//用于设置转身时的Yaw插值
	float AO_Pitch;
	FRotator StartingAimRotation;//上次停止移动时的瞄准方向（"锚点"）

	ETurningInPlace TurningInPlace;

	void TurnInPlace(float DeltaTime);

	
	/*瞄准类的东西*/
	bool bRotateRootBone;
	
	float TurnThreshold = 0.5f;//每帧旋转角度的阈值
	FRotator ProxyRotationLastFrame;
	FRotator ProxyRotation;
	float ProxyYaw;
	float TimeSinceLastMovementReplication;
	float CalculateSpeed();//计算角色的水平移动速度（忽略 Z 轴的下落/跳跃分量）。用于判断角色是否在移动。

	
	/*
	 * 摄像机
	 */
	UFUNCTION(BlueprintCallable)
	void HideCameraIfCharacterClose();

	UPROPERTY(EditAnywhere, Category = Camera)
	float CameraThreshold = 200.f;
	

	UPROPERTY()//控制器指针缓存
	AXMBPlayerController* XMBPlayerController;

	
	/*
	 * 溶解效果
	 */
	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;
	
	FOnTimelineFloat DissolveTrack;

	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);
	void StartDissolve();

	UPROPERTY(EditAnywhere,Category = Dissolve)
	UCurveFloat* DissolveCurve;

	//在运行时可以改变的实例
	UPROPERTY(VisibleAnywhere,Category = Elim)
	UMaterialInstanceDynamic* DynamicDissolveMaterialInstance;

	//在蓝图中设置的材质实例，用于DynamicDissolveMaterialInstance↑
	UPROPERTY(EditAnywhere,Category = Elim)
	UMaterialInstance* DissolveMaterialInstance;

	/*
	 * Team Colors
	 */
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* RedDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* RedMaterial;
	
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlueDissolveMatInst;
	
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlueMaterial;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* OriginalMaterial;
	
	/*
	 * Elim bot
	 */
	UPROPERTY(EditAnywhere,Category = Elim)
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere,Category = Elim)
	USoundCue* ElimBotSound;

	UPROPERTY()
	AXMBPlayerState* XMBPlayerState;

	bool bElimmed = false;
	FTimerHandle ElimTimer;
	
	UPROPERTY(EditDefaultsOnly,Category = Elim)
	float ElimDelay = 3.f;

	void ElimTimerFinished();

	bool bLeftGame = false;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CrownSystem;

	UPROPERTY()
	UNiagaraComponent* CrownComponent;



	//
	UPROPERTY()
	ABlasterGameMode* BlasterGameMode;

	
	
	/*
	 * Grenade
	 */
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedGrenade;

	
	/*
	 * Player Health
	 */
	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth,VisibleAnywhere,Category = "Player States")
	float MaxHealth = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "Player States")
	float Health = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_MaxShield,VisibleAnywhere,Category = "Player States")
	float MaxShield = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Shield, VisibleAnywhere, Category = "Player States")
	float Shield = 25.f;

	UFUNCTION()
	void OnRep_Health(float LastHealth);

	UFUNCTION()
	void OnRep_MaxHealth();

	UFUNCTION()
	void OnRep_Shield(float LastShield);

	UFUNCTION()
	void OnRep_MaxShield();
};



