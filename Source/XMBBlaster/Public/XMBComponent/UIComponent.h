// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XMBComponent/CombatComponent.h"  
#include "Weapon/WeaponBase.h"             
#include "Components/ActorComponent.h"
#include "UI/HUD/XMBHUD.h"
#include "UIComponent.generated.h"

class AXMBPlayerController;
class AXMBCharacterBase;

/**
 * @class UUIComponent
 * @brief UI组件
 * 
 * 处理所有UI相关的逻辑：
 * - 准心绘制与动态调整（散布、颜色变化）
 * - 相机FOV插值（瞄准缩放）
 * - HUD数据包更新
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UUIComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** 声明友元类 */
	friend class AXMBCharacterBase;
	
	/** 构造函数 */
	UUIComponent();
	
	/*XMBUITEST*/
	/** @return 当前的HUD数据包（包含准心纹理等信息） */
	FORCEINLINE FHUDPackage GetHUDPackage() { return HUDPackage; }
	
	/** @return 准心是否发生变化（用于判断是否需要改变颜色） */
	FORCEINLINE bool GetbIsChange() { return bIsChange; }

	FORCEINLINE float GetCrosshairShootingFactor() const { return CrosshairShootingFactor;}
	FORCEINLINE void SetCrosshairShootingFactor(float InFactor) { CrosshairShootingFactor = InFactor; }
	
	/**
	 * @brief 设置准心变化标志
	 * @param InChange - 是否有变化
	 */
	void SetbIsChange(bool InChange) { bIsChange = InChange; }
	/*XMBUITEST*/

	

protected:
	/** 组件初始化 */
	virtual void BeginPlay() override;
	
	/** 每帧更新，处理准心和FOV */
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	 * @brief 更新准心显示
	 * @param DeltaTime - 帧间隔时间
	 * 根据速度、跳跃、射击等因素动态计算准心散布
	 */
	void SetHUDCrosshairs(float DeltaTime);

private:
	/** 拥有此组件的角色指针 */
	UPROPERTY()
	AXMBCharacterBase* Owner;

	/** 缓存的玩家控制器 */
	AXMBPlayerController* XMBController;

	/** 缓存的HUD引用 */
	AXMBHUD* HUD;

	/*XMBUITEST*/
	/** 缓存的战斗组件引用 */
	UCombatComponent* CombatComp;        
	
	/** 缓存的当前装备武器（仅在更换武器时才更新准心） */
	AWeaponBase* CachedEquippedWeapon;
	
	/** 
	 * 准心变化标志
	 * 用于被CombatComponent内的Tick判断是否因命中Actor而改变准心颜色 
	 */
	bool bIsChange = false;
	/*XMBUITEST*/

	/*
	 * HUD and 准心数据
	 */

	/** HUD数据包（包含准心各方向纹理、颜色、散布值等） */
	FHUDPackage HUDPackage;
	
	/** 速度影响因子（角色移动越快，准心散布越大） */
	float CrosshairVelocityFactor;
	
	/** 空中影响因子（角色在空中时增加准心散布） */
	float CrosshairInAirFactor;
	
	/** 瞄准影响因子（瞄准时缩小准心散布） */
	float CrosshairAimFactor;
	
	/** 射击影响因子（开火瞬间扩大准心散布） */
	float CrosshairShootingFactor;

	/**
	 * FOV（视场角）控制
	 * 此处还涉及到了角色摄像机内的景深的聚焦
	 * TODO:此处可以考虑肩射换成改变摄像机位置与FOV
	 */

	/** BeginPlay时记录的默认FOV */
	float DefaultFOV;

	/** 缩放后的FOV值（瞄准时使用） */
	UPROPERTY(EditAnywhere, Category = Combat)
	float ZoomedFOV = 30.f;

	/** 当前实际的FOV值 */
	float CurrentFOV;

	/** 进入/退出瞄准时的FOV插值速度 */
	UPROPERTY(EditAnywhere, Category = Combat)
	float ZoomInterpSpeed = 20.f;

	/**
	 * @brief FOV插值处理
	 * @param DeltaTime - 帧间隔时间
	 * 平滑过渡当前FOV到目标FOV
	 */
	void InterpFOV(float DeltaTime);
	
	/** 是否为本地控制器拥有的角色（仅本地玩家需要更新准心和FOV） */
	bool bIsLocalControllered = false;

	

};
