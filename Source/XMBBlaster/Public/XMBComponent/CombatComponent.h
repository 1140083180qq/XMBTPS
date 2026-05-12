// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameTypes/CombatState.h"
#include "PlayerController/XMBPlayerController.h"
#include "UI/HUD/XMBHUD.h"
#include "Weapon/WeaponBase.h"
#include "GameTypes/WeaponTypes.h"

#include "CombatComponent.generated.h"

class AProjectile;
class AXMBCharacterBase;

/** 射线检测长度（80000单位） */


/**
 * @class UCombatComponent
 * @brief 战斗组件
 * 
 * 管理角色的所有战斗相关功能：
 * - 武器装备与切换
 * - 瞄准状态（正常瞄准、肩射瞄准）
 * - 开火控制（全自动/半自动）
 * - 换弹逻辑
 * - 弹药管理
 * - 准心射线检测
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** 声明友元类，允许角色直接访问私有成员 */
	friend class AXMBCharacterBase;
	
	/** 构造函数，初始化默认值 */
	UCombatComponent();
	
	/** 设置网络复制属性 */
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	/**
	 * @brief 装备武器
	 * @param WeaponToEquip - 要装备的武器指针
	 * 将武器附加到角色身上并设置相关状态
	 */
	void EquipWeapon(AWeaponBase* WeaponToEquip);
	
	/** 触发换弹流程 */
	void Reload();

	/**
	 * @brief 完成换弹（蓝图可调用）
	 * 播放完换弹动画后调用，更新弹药数量和战斗状态
	 */
	UFUNCTION(BlueprintCallable)
	void FinishReloading();
	
	/**
	 * @brief 设置开火按钮状态
	 * @param bPressed - true为按下，false为释放
	 */
	void FireButtonPressed(bool bPressed);

	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();

	/** 多播RPC：通知所有客户端执行霰弹枪装填结束动画跳转 */
	UFUNCTION(NetMulticast, Reliable)
	void MulticastJumpToShotgunEnd();

	/** 霰弹枪装填动画跳转到结束Section的内部实现（不涉及网络） */
	void JumpToShotgunEnd();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenadeFinished();

	UFUNCTION(Reliable,Server)
	void ServerLaunchGrenade(const FVector_NetQuantize& Target);

protected:
	/** 组件初始化 */
	virtual void BeginPlay() override;
	
	/** 每帧更新，处理持续开火逻辑 */
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	 * @brief 设置瞄准状态
	 * @param bIsAiming - 是否正在瞄准
	 */
	void SetAiming(bool bIsAiming);
	
	/** 服务器RPC：设置瞄准状态 */
	UFUNCTION(Server, Reliable)
	void ServerSetAiming(bool bIsAiming);
	
	/**
	 * @brief 设置肩射瞄准状态
	 * @param bIsShoulderAiming - 是否正在肩射
	 */
	void SetShoulderAiming(bool bIsShoulderAiming);
	
	/** 服务器RPC：设置肩射瞄准状态 */
	UFUNCTION(Server, Reliable)
	void ServerSetShoulderAiming(bool bIsShoulderAiming);

	/** 装备武器变化时的回调 */
	UFUNCTION()
	void OnRep_EquippedWeapon();
	
	/** 执行开火逻辑 */
	void Fire();

	/**
	 * @brief 服务器RPC：执行开火
	 * @param TraceHitTarget - 射线检测命中的目标位置（使用网络量化压缩的向量类型以节省带宽）
	 */
	// 仅从客户端调用服务器执行，其他客户端不可见；在服务器调用并执行时，客户端也不可见
	// Server表示从客户端上调用并在服务器上执行；非常重要的同步需要Reliable传到服务器
	UFUNCTION(Server, Reliable)//TODO:需要了解FVector_NetQuantize这一个类型对于网络复制的作用
	void ServerFire(const FVector_NetQuantize& TraceHitTarget);

	/**
	 * @brief 多播开火效果
	 * @param TraceHitTarget - 命中目标位置
	 * 在所有客户端上显示开火特效
	 */
	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	/**
	 * @brief 从准心发射射线检测
	 * @param TraceHitResult - 输出的射线检测结果
	 * 设置UIComponent以便绘制射线命中点
	 */
	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	/** 服务器RPC：请求换弹 */
	UFUNCTION(Server, Reliable)
	void ServerReload();

	/** 处理换弹逻辑的具体实现 */
	void HandleReload();

	/**
	 * @return 计算需要补充的弹药数量
	 */
	int32 AmountToReload();

	void ThrowGrenade();

	UFUNCTION(Server,Reliable)
	void ServerThrowGrenade();

	void DropEquippedWeapon();

	void AttachActorToRightHand(AActor* ActorToAttach);
	void AttachActorToLeftHand(AActor* ActorToAttach);
	void UpdateCarriedAmmo();

	void PlayEquipWeaponSound();

	void ReloadEmptyWeapon();

	UFUNCTION(BlueprintCallable)
	void ShowAttachedGrenade(bool bShowGrenade);

	UFUNCTION(BlueprintCallable)
	void LaunchGrenade();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> GrenadeClass;
	
private:
	/** 拥有此组件的角色指针 */
	UPROPERTY()
	AXMBCharacterBase* Owner;

	/** 当前装备的武器（需复制） */
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeaponBase* EquippedWeapon;

	/** 是否处于瞄准状态（网络复制） */
	UPROPERTY(Replicated)
	bool bAiming;
	
	/** 是否处于肩射瞄准状态（网络复制） */
	UPROPERTY(Replicated)
	bool bShoulderAiming;
	
	/** 是否按住开火按钮（网络复制） */
	UPROPERTY(Replicated)
	bool bFireButtonPressed;

	/** 基础移动速度（非瞄准状态） */
	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;
	
	/** 瞄准时的移动速度 */
	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;
	
	/** 肩射瞄准时的移动速度 */
	UPROPERTY(EditAnywhere)
	float ShoulderAimWalkSpeed;

	/** 缓存的玩家控制器 */
	UPROPERTY()
	AXMBPlayerController* XMBController;

	/** 缓存的HUD引用 */
	UPROPERTY()
	AXMBHUD* HUD;

	/** 当前准心射线命中的目标位置 */
	FVector HitTarget;

	

	/*
	 * 控制开火
	 */

	/** 启动开火计时器 */
	void StartFireTimer();
	
	/** 开火计时器结束回调 */
	void FireTimerFinished();

	/**
	 * @return 当前是否可以开火（检查弹药、冷却、状态等）
	 */
	bool CanFire();

	/** 开火冷却计时器句柄 */
	FTimerHandle FireTimer;
	
	/** 
	 * 是否可以开火的标志
	 * 开枪时设为false，由计时器回调重新设为true
	 */
	bool bCanFire = true;

	/*
	 * 弹药相关
	*/

	/** 携带弹药变化时的回调 */
	UFUNCTION()
	void OnRep_CarriedAmmo();
	
	/** 携带的备用弹药量（网络复制） */
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;

	//步枪弹药
	UPROPERTY(EditAnywhere)
	int32 StartingArAmmo = 30;

	//火箭弹药
	UPROPERTY(EditAnywhere)
	int32 StartingRocketAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingPistolAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingSMGAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingShotGunAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingSniperAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingGrenadeLauncherAmmo = 0;

	UPROPERTY(ReplicatedUsing = OnRep_Grenades)
	int32 Grenades = 20;
	
	UPROPERTY(EditAnywhere)
	int32 MaxGrenades = 98;

	/** 不同武器类型与其对应携带弹药数量的映射表 */
	TMap<EWeaponType, int32> CarriedAmmoMap;

	/** 初始化角色所携带各武器类型的弹药数量 */
	void InitializeCarriedAmmo();

	UFUNCTION()
	void OnRep_Grenades();

	/** 当前战斗状态（空闲/换弹等） */
	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;

	/** 战斗状态变化时的回调 */
	UFUNCTION()
	void OnRep_CombatState();

	/** 更新HUD上的弹药显示值 */
	void UpdateAmmoValues();

	void UpdateShotgunAmmoValues();

	void UpdateHUDGrenades();

	/** 霰弹枪装填防重入：记录上一次成功执行 UpdateShotgunAmmoValues 的帧号 */
	int64 ShotgunReloadFrameCounter = -1;

public:
	/** @return 当前装备的武器 */
	FORCEINLINE AWeaponBase* GetEquippedWeapon() const { return EquippedWeapon; }
	
	/** @return 是否正在瞄准 */
	FORCEINLINE bool IsAiming() const { return bAiming; }
	
	/** @return 是否正在肩射瞄准 */
	FORCEINLINE bool IsShoulderAiming() const { return bShoulderAiming; }
	
	/** @return 是否按住开火按钮 */
	FORCEINLINE bool IsFireButtonPressed() const { return bFireButtonPressed; }

	FORCEINLINE int32 GetGrenades() const { return Grenades; }
};

