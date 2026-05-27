// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Character/XMBCharacterBase.h"
#include "AnimInstanceBase.generated.h"

/**
 * @class UAnimInstanceBase
 * @brief 动画实例基类
 * 
 * 为动画蓝图提供数据驱动：
 * - 每帧从角色获取状态数据并传递给动画蓝图
 * - 计算瞄准偏移(AimOffset)、倾斜(Lean)、转身(TurnInPlace)等参数
 * - 控制IK（FABRIK）和骨骼变换开关
 */
UCLASS()
class XMBBLASTER_API UAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()

public:
	/** 动画初始化时缓存角色引用 */
	virtual void NativeInitializeAnimation() override;
	
	/** 
	 * @brief 每帧更新动画参数
	 * @param DeltaSeconds - 帧间隔时间
	 * 从角色获取实时状态并计算动画所需的各种参数
	 */
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:

	/* ====== 对象引用 ====== */

	/** 拥有此动画实例的角色 */
	UPROPERTY(BlueprintReadWrite, Category = Character, meta = (allowprivateaccess = "true"))
	AXMBCharacterBase* XMBCharacter;

	
	/** 当前装备的武器引用 */
	AWeaponBase* EquippedWeapon;

	/* ====== 移动/状态属性（供蓝图读取） ====== */

	/** 角色当前水平移动速度 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float Speed;

	/** 角色是否在空中 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsInAir;

	/** 角色是否有输入加速（是否在移动） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsAccelerating;

	/** 角色是否已装备武器 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsWeaponEquipped;

	/** 角色是否处于蹲伏状态 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bIsCrouched;

	/** 角色是否正在瞄准 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bAiming;

	/** 角色是否正在肩射瞄准 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bShoulderAiming;

	/* ====== 瞄准偏移参数 ====== */

	/**
	 * 相机相对于角色Y轴的偏移角度（Yaw方向）
	 * 用于驱动上半身的左右转动动画
	 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float YawOffset;
	
	/**
	 * 倾斜角度
	 * 根据移动方向与朝向的差值计算，用于驱动身体倾斜效果
	 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float Lean;

	/** 上一帧的角色旋转 */
	FRotator CharacterRotationLastFrame;
	
	/** 当前帧的角色旋转 */
	FRotator CharacterRotation;
	
	/** 两帧之间的旋转差值 */
	FRotator DeltaRotation;

	/** 
	 * 瞄准偏移Yaw值
	 * 传递给动画蓝图用于混合空间驱动上半身水平转向
	 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float AO_Yaw;

	/** 
	 * 瞄准偏移Pitch值
	 * 传递给动画蓝图用于混合空间驱动上下俯仰
	 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	float AO_Pitch;

	/** 左手IK变换（用于让左手握住武器） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	FTransform LeftHandTransform;

	/** 当前原地转身状态 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	ETurningInPlace TurningInPlace;
	
	/** 右手旋转（用于武器瞄准时调整手持位置） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	FRotator RightHandRotation;

	/** 是否为本地控制的角色 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bLocallyControlled;

	/** 是否需要旋转根骨骼（用于淘汰动画等特殊状态） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bRotateRootBone;

	/** 角色是否已被淘汰（死亡） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bElimmed;

	/** 是否使用FABRIK IK（左手定位武器） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bUseFABRIK;

	/** 是否使用瞄准偏移混合空间 */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bUseAimOffset;

	/** 是否需要变换右手旋转（瞄准时调整枪口位置） */
	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bTransformRightHand;

	UPROPERTY(BlueprintReadOnly, Category = Movement, meta = (allowprivateaccess = "true"))
	bool bHoldingTheFlag;
};
