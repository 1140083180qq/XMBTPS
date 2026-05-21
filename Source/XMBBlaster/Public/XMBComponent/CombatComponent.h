
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


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	friend class AXMBCharacterBase;/** 声明友元类，允许角色直接访问私有成员 */
	UCombatComponent();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;/** 设置网络复制属性 */


	/*
	 * 装备
	 */
	void EquipWeapon(AWeaponBase* WeaponToEquip);/*** @brief 装备武器*/

	void SwapWeapons();

	void SpawnDefaultWeapon();
	
	/*
	 * 开火
	 */
	void FireButtonPressed(bool bPressed);/** 设置开火按钮状态*/

	
	/*
	 * 换弹
	 */
	void Reload();/** 触发换弹流程 */
	
	UFUNCTION(BlueprintCallable)/** 播放完换弹动画后调用，更新弹药数量和战斗状态*/
	void FinishReloading();
	
	UFUNCTION(BlueprintCallable)/*霰弹枪装填*/
	void ShotgunShellReload();

	void PickupAmmo(EWeaponType InWeaponType, int32 AmmoAmount);/*拾取弹夹*/
	
	
	/*
	 * 动画
	 */
	UFUNCTION(NetMulticast, Reliable)/** 多播RPC：通知所有客户端执行霰弹枪装填结束动画跳转 */
	void MulticastJumpToShotgunEnd();
	
	void JumpToShotgunEnd();/** 霰弹枪装填动画跳转到结束Section的内部实现（不涉及网络） */

	UFUNCTION(BlueprintCallable)/*投掷手雷结束*/
	void ThrowGrenadeFinished();
	
	UFUNCTION(Reliable,Server)/*投掷手雷*/
	void ServerLaunchGrenade(const FVector_NetQuantize& Target);


protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;/** 每帧更新，处理持续开火逻辑 */

	
	// WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING
	// WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING // WARNING
	void TraceUnderCrosshairs(FHitResult& TraceHitResult);/** @brief 从准心发射射线检测*/

	UPROPERTY(EditAnywhere)//投掷物类
	TSubclassOf<AProjectile> GrenadeClass;


	
	/*
	 * 瞄准
	 */
	void SetAiming(bool bIsAiming);/** @brief 设置瞄准状态*/
	
	UFUNCTION(Server, Reliable)	/** 服务器RPC：设置瞄准状态 */
	void ServerSetAiming(bool bIsAiming);
	
	void SetShoulderAiming(bool bIsShoulderAiming);/** * @brief 设置肩射瞄准状态*/
	
	UFUNCTION(Server, Reliable)	/** 服务器RPC：设置肩射瞄准状态 */
	void ServerSetShoulderAiming(bool bIsShoulderAiming);


	/*
	 * 装备
	 */
	UFUNCTION()/** 装备武器变化时的回调 */
	void OnRep_EquippedWeapon();

	UFUNCTION()
	void OnRep_SecondaryWeapon();
	
	void DropEquippedWeapon();/*丢弃武器*/

	bool ShouldSwapWeapons();
	
	/*
	 * 开火
	 */
	void Fire();/** 执行开火逻辑 */
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotgun();
	void ShotgunLocalFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	/**
	 * @brief 服务器RPC：执行开火
	 * @param TraceHitTarget - 射线检测命中的目标位置（使用网络量化压缩的向量类型以节省带宽）
	* // 仅从客户端调用服务器执行，其他客户端不可见；在服务器调用并执行时，客户端也不可见
	// Server表示从客户端上调用并在服务器上执行；非常重要的同步需要Reliable传到服务器 */
	UFUNCTION(Server, Reliable)//TODO:需要了解FVector_NetQuantize这一个类型对于网络复制的作用
	void ServerFire(const FVector_NetQuantize& TraceHitTarget);
	
	UFUNCTION(NetMulticast, Reliable)	/*** 在所有客户端上显示开火特效 */
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(Server, Reliable)
	void ServerShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTarget);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTarget);

	
	void ThrowGrenade();/*投掷手雷*/

	UFUNCTION(Server,Reliable)
	void ServerThrowGrenade();/*投掷手雷*/


	
	/*
	 * 装填
	 */
	UFUNCTION(Server, Reliable)/** 服务器RPC：请求换弹 */
	void ServerReload();
	
	void HandleReload();/** 处理换弹逻辑的具体实现 */
	
	int32 AmountToReload();/**@return 计算需要补充的弹药数量*/
	
	void UpdateCarriedAmmo();/*更新携带的弹药数量*/

	void ReloadEmptyWeapon();/*装填空弹药武器*/

	

	/*
	 * 动画
	 */
	/** 绑定武器到角色的RightHandSocket*/
	void AttachActorToRightHand(AActor* ActorToAttach);
	
	void AttachActorToLeftHand(AActor* ActorToAttach);

	void AttachActorToBackpack(AActor* ActorToAttach);
	
	UFUNCTION(BlueprintCallable)/*显示手雷*/
	void ShowAttachedGrenade(bool bShowGrenade);

	UFUNCTION(BlueprintCallable)/*在播放蒙太奇动画时加载手雷*/
	void LaunchGrenade();


	
	void PlayEquipWeaponSound(AWeaponBase* WeaponToEquip);/*播放装备武器的音效*/

	void EquipPrimaryWeapon(AWeaponBase* WeaponToEquip);

	void EquipSecondaryWeapon(AWeaponBase* WeaponToEquip);
	

private:

	UPROPERTY()	/** 拥有此组件的角色指针 */
	AXMBCharacterBase* Owner;
	
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)/** 当前装备的武器（需复制） */
	AWeaponBase* EquippedWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
	AWeaponBase* SecondaryWeapon;

	UPROPERTY(EditAnywhere)/*角色出生时默认携带武器*/
	TSubclassOf<AWeaponBase> DefaultWeaponClass;
	
	UPROPERTY(Replicated)/** 是否处于瞄准状态（网络复制） */
	bool bAiming;

	bool bAimButtonPressed = false;

	UFUNCTION()
	void OnRep_Aiming();
	
	UPROPERTY(Replicated)/** 是否处于肩射瞄准状态（网络复制） */
	bool bShoulderAiming;

	bool bShoulderAimButtonPressed = false;

	UFUNCTION()
	void OnRep_ShoulderAiming();
	
	UPROPERTY(Replicated)/** 是否按住开火按钮（网络复制） */
	bool bFireButtonPressed;
	
	UPROPERTY(EditAnywhere)/** 基础移动速度（非瞄准状态） */
	float BaseWalkSpeed;
	
	UPROPERTY(EditAnywhere)/** 瞄准时的移动速度 */
	float AimWalkSpeed;
	
	UPROPERTY(EditAnywhere)/** 肩射瞄准时的移动速度 */
	float ShoulderAimWalkSpeed;
	
	UPROPERTY()/** 缓存的玩家控制器 */
	AXMBPlayerController* XMBController;
	
	UPROPERTY()	/** 缓存的HUD引用 */
	AXMBHUD* HUD;
	
	FVector HitTarget;/** 当前准心射线命中的目标位置 */

	
	/*
	 * 控制开火
	 */
	FTimerHandle FireTimer;/** 开火冷却计时器句柄 */
	
	bool bCanFire = true;	/**  是否可以开火的标志  开枪时设为false，由计时器回调重新设为true*/
	
	void StartFireTimer();/** 启动开火计时器 */
	
	void FireTimerFinished();/** 开火计时器结束回调 */
	
	bool CanFire();/**当前是否可以开火（检查弹药、冷却、状态等）*/
	
	

	/*
	 * 弹药相关
	*/
	TMap<EWeaponType, int32> CarriedAmmoMap;/** 不同武器类型与其对应携带弹药数量的映射表 */

	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)	/** 携带的备用弹药量（网络复制） */
	int32 CarriedAmmo;//当前装备武器的弹药

	//步枪弹药
	UPROPERTY(EditAnywhere)
	int32 StartingArAmmo = 30;

	//火箭弹药
	UPROPERTY(EditAnywhere)
	int32 StartingRocketAmmo = 0;

	//手枪弹药
	UPROPERTY(EditAnywhere)
	int32 StartingPistolAmmo = 0;

	//SMG弹药
	UPROPERTY(EditAnywhere)
	int32 StartingSMGAmmo = 0;

	//霰弹枪弹药
	UPROPERTY(EditAnywhere)
	int32 StartingShotGunAmmo = 0;

	//狙击枪弹药
	UPROPERTY(EditAnywhere)
	int32 StartingSniperAmmo = 0;

	//榴弹枪弹药
	UPROPERTY(EditAnywhere)
	int32 StartingGrenadeLauncherAmmo = 0;

	//手雷
	UPROPERTY(ReplicatedUsing = OnRep_Grenades)
	int32 Grenades = 20;

	//手雷最大数
	UPROPERTY(EditAnywhere)
	int32 MaxGrenades = 98;
	
	UPROPERTY(EditAnywhere)
	int32 MaxCarriedAmmo = 999;
	/** 手雷发射标记：LaunchGrenade AnimNotify 触发后设为 true
	 *  用于受击打断时判断是否需要补偿手雷数量：
	 *  - false = 手雷尚未 Spawn → 需要补偿 Grenades+=1
	 *  - true  = 手雷已 Spawn   → 不补偿（手雷已实际生成）
	 */
	bool bGrenadeLaunched = false;
	
	UFUNCTION()/** 携带弹药变化时的回调 */
	void OnRep_CarriedAmmo();
	
	void InitializeCarriedAmmo();/** 初始化角色所携带各武器类型的弹药数量 */

	UFUNCTION()
	void OnRep_Grenades();



	/*
	 * 战斗状态
	 */
	UPROPERTY(ReplicatedUsing = OnRep_CombatState)/** 当前战斗状态（空闲/换弹等） */
	ECombatState CombatState = ECombatState::ECS_Unoccupied;
	
	UFUNCTION()/** 战斗状态变化时的回调 */
	void OnRep_CombatState();



	/*
	 * 装填
	 */
	void UpdateAmmoValues();/** 更新HUD上的弹药显示值 */

	void UpdateShotgunAmmoValues();/*更新霰弹枪上膛子弹*/

	void UpdateHUDGrenades();/*更新HUD手雷*/
	
	int64 ShotgunReloadFrameCounter = -1;/** 霰弹枪装填防重入：记录上一次成功执行 UpdateShotgunAmmoValues 的帧号 */


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



