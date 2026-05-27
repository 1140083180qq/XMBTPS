
// ============================================================
// @file AnimInstanceBase.cpp
// @brief 动画实例基类实现 - 为动画蓝图提供数据驱动
//
// 【核心功能概述】：
// 本类继承 UAnimInstance，是动画蓝图的 C++ 逻辑后端。
// 每帧从角色（AXMBCharacterBase）提取实时游戏状态，
// 计算动画所需的各种参数并暴露给动画蓝图使用：
//
// 【参数输出列表】（全部为 BlueprintReadOnly，动画蓝图直接读取）：
// - 移动状态: Speed / bIsInAir / bIsAccelerating / bIsCrouched
// - 战斗状态: bIsWeaponEquipped / bAiming / bShoulderAiming
// - 瞄准偏移: AO_Yaw / AO_Pitch（驱动 AimOffset 混合空间）
// - 倾斜: Lean（移动方向与朝向差值导致的身体倾斜）
// - 转身: ETurningInPlace（原地转身方向）
// - IK: LeftHandTransform（FABRIK 左手定位武器）/ RightHandRotation（瞄准时右手旋转）
// - 开关标志: bUseFABRIK / bUseAimOffset / bTransformRightHand / bRotateRootBone / bElimmed
// ============================================================

#include "Anim/AnimInstanceBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameTypes/TurningInPlace.h"
#include "Kismet/KismetMathLibrary.h"

/**
 * @brief 动画初始化 - 在动画实例创建时调用一次
 *
 * 【逻辑说明】：
 * 通过 TryGetPawnOwner() 获取拥有此动画实例的 Pawn（即 AXMBCharacterBase），
 * 并缓存到 XMBCharacter 指针中。后续每帧的 NativeUpdateAnimation 将复用此缓存。
 *
 * 【为什么在 Initialize 而非每帧获取？】Cast 操作有一定开销，
 * 且角色引用在生命周期内不会改变，缓存一次即可
 */
void UAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	// 从动画实例的拥有者 Pawn 获取角色引用并缓存
	XMBCharacter = Cast<AXMBCharacterBase>(TryGetPawnOwner());
}

/**
 * @brief 每帧更新动画参数 - 动画系统的核心数据泵
 * @param DeltaSeconds - 本帧的时间增量（用于插值计算平滑过渡）
 *
 * 【完整更新流程分为以下几个模块】：
 *
 * ════════════════════════════════════════
 * 模块1: 安全检查与基础移动状态
 * ════════════════════════════════════════
 * - 惰性获取角色引用（若之前为空则重新尝试获取）
 * - 计算 Speed：水平移动速度（忽略Z轴的下落/跳跃分量）
 * - 获取空中状态、加速状态、蹲伏状态
 *
 * ════════════════════════════════════════
 * 模块2: 战斗状态读取
 * ════════════════════════════════════════
 * - 武器装备状态、瞄准状态、肩射瞄准状态
 * - 转身状态枚举、根骨骼旋转标志、淘汰状态
 *
 * ════════════════════════════════════════
 * 模块3: YawOffset（横移偏移）计算 ★核心算法★
 * ════════════════════════════════════════
 * 实现Strafing（横移）效果——让上半身朝向瞄准方向、
 * 下半身（脚部）朝向移动方向，两者之间产生一个Yaw偏移角。
 *
 * 算法步骤:
 * a) AimRotation = 相机的基准瞄准方向（GetBaseAimRotation）
 *    这是控制器/相机所指向的方向
 * b) MovementRotation = 角色实际速度方向转成的旋转角度（MakeRotFromX(Velocity)）
 *    这代表脚部/身体实际朝哪个方向移动
 * c) DeltaRot = MovementRotation 与 AimRotation 的归一化差值
 *    表示"身体需要相对相机偏转多少度"
 * d) 使用 RInterpTo 平滑插值到目标差值（速率10），避免突变
 * e) 提取 DeltaRotation.Yaw 作为最终的 YawOffset 输出给动画蓝图
 *
 * 示例场景：
 * - 按W前进+鼠标右偏30°看 → DeltaRot.Yaw ≈ -30° → 上半身右偏30°
 * - 按W前进+正前方看     → DeltaRot.Yaw ≈ 0°   → 上半身无偏移
 *
 * ════════════════════════════════════════
 * 模块4: Lean（倾斜）计算 ★物理感算法★
 * ════════════════════════════════════════
 * 根据角色的转向角速度计算身体的左右倾斜量，
 * 模拟惯性带来的物理倾斜效果。
 *
 * 算法步骤:
 * a) 保存上一帧的角色 ActorRotation 到 CharacterRotationLastFrame
 * b) 获取当前帧的 ActorRotation 到 CharacterRotation
 * c) Delta = 当前旋转 - 上次旋转 = 这一帧内发生的旋转变化量
 * d) Target = Delta.Yaw / DeltaSeconds = Yaw轴的角速度（度/秒）
 *    例：一帧转了2°，帧间隔0.016s → 角速 = 125°/秒
 * e) 使用 FInterpTo 以速率6平滑过渡到目标角速度
 * f) Clamp 到 [-90, 90] 范围防止过度倾斜
 *
 * 正值 = 向右转（身体向右倾斜）, 负值 = 向左转（身体向左倾斜）
 *
 * ════════════════════════════════════════
 * 模块5: IK（逆向动力学）计算
 * ════════════════════════════════════════
 * a) LeftHandTransform (左手IK):
 *    - 从武器骨骼的 "LeftHandSocket" 插槽获取世界坐标变换
 *    - 使用 TransformToBoneSpace 将世界坐标转换为角色骨骼空间的相对坐标
 *    - 动画蓝图中的 FABRIK IK 节点会使用此变换将左手精确定位到武器的握把位置
 *
 * b) RightHandRotation (右手旋转):
 *    - 获取武器骨骼 "hand_r" 插槽的世界位置
 *    - 使用 FindLookAtRotation 让右手朝向"从枪口到命中点"的方向
 *    - 即让枪口跟随准心指向的目标位置
 *    - 使用 RInterpTo 以速率10平滑过渡
 *
 * ════════════════════════════════════════
 * 模块6: 功能开关控制
 * ════════════════════════════════════════
 * 根据战斗状态和游戏禁用标志控制各种动画功能的启用/禁用：
 * - bUseFABRIK: 换弹时禁用左手IK（换弹动画有自己预设的手部动作）
 * - bUseAimOffset: 换弹或游戏禁用时禁用瞄准偏移
 * - bTransformRightHand: 换弹或游戏禁用时禁用右手旋转调整
 */
void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	// ════════════════════════════════════════
	// 模块1: 安全检查与角色引用获取
	// ════════════════════════════════════════
	if (XMBCharacter == nullptr)
	{
		// 如果之前的缓存失效（如角色被销毁重生），尝试重新获取
		XMBCharacter = Cast<AXMBCharacterBase>(TryGetPawnOwner());
	}

	if (XMBCharacter == nullptr)
	{
		return; // 无法获取角色则跳过本帧更新
	}

	// ════════════════════════════════════════
	// 模块1(续): 基础移动状态提取
	// ════════════════════════════════════════
	FVector Velocity = XMBCharacter->GetVelocity();
	Velocity.Z = 0.f; // 忽略Z轴分量（下落/跳跃不参与水平速度计算）
	Speed = Velocity.Size(); // 计算水平移动速度大小

	// 从角色移动组件获取各项布尔状态
	bIsInAir = XMBCharacter->GetCharacterMovement()->IsFalling(); // 是否在空中（下落或跳跃中）
	bIsAccelerating = XMBCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f; // 是否有输入加速（是否在按方向键）

	// ════════════════════════════════════════
	// 模块2: 战斗状态读取
	// ════════════════════════════════════════
	bIsWeaponEquipped = XMBCharacter->IsWeaponEquipped(); // 是否装备了武器
	bIsCrouched = XMBCharacter->bIsCrouched;              // 是否处于蹲伏状态（使用原生的 Crouch 变量）
	bAiming = XMBCharacter->IsAiming();                   // 是否正在正常瞄准
	bShoulderAiming = XMBCharacter->IsShoulderAiming();   // 是否正在肩射瞄准
	TurningInPlace = XMBCharacter->GetTurningInPlace();   // 当前原地转身方向（左/右/不转）
	bRotateRootBone = XMBCharacter->ShouldRotateRootBone();// 是否需要旋转根骨骼（淘汰动画等特殊状态）
	EquippedWeapon = XMBCharacter->GetEquippedWeapon();     // 获取当前装备的武器引用
	// TODO: 可优化为仅在装备/更换/丢弃武器时才更新此引用，避免每帧查询
	bElimmed = XMBCharacter->IsElimmed();                 // 角色是否已被淘汰（死亡）
	bHoldingTheFlag = XMBCharacter->IsHoldingTheFlag();

	// ════════════════════════════════════════
	// 模块3: YawOffset 横移偏移计算 ★核心★
	// ════════════════════════════════════════
	/*
	 * 【Strafing 横移原理示意】
	 *
	 * 场景1: 玩家按 W（前进）+ D（右移），同时鼠标向右偏45°看
	 *   GetBaseAimRotation() = (0, 45, 0)    ← 相机朝右前45°
	 *   GetVelocity() = (100, 100, 0)         ← 移动方向也是右前45°
	 *   MakeRotFromX(Velocity) = (0, 45, 0)   ← 速度方向转为旋转
	 *   NormalizedDeltaRotator = (0, 0, 0)    ← 差值为0（方向一致，无需偏移）
	 *
	 * 场景2: 玩家按 W（前进），但鼠标向右偏30°看（边走边侧瞄）
	 *   AimRotation = (0, 30, 0)               ← 相机朝右30°
	 *   Velocity = (0, 100, 0)                ← 向前走
	 *   MovementRotation = (0, 0, 0)          ← 向前的旋转
	 *   DeltaRot = (0, -30, 0)                ← 身体需向右偏30°
	 *   YawOffset = -30                       ← 动画蓝图中上半身向右转30°
	 */
	// 步骤a: 获取相机的基准瞄准旋转（控制器面向的方向）
	FRotator AimRotation = XMBCharacter->GetBaseAimRotation();
	// 步骤b: 将角色速度向量转换为旋转（表示实际的移动朝向）
	FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(XMBCharacter->GetVelocity());
	// 步骤c: 计算两个方向的归一化差值（用于"身体跟随脚部"的效果）
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);
	// 步骤d: 使用旋转插值平滑过渡（速率10），使动画变化更自然不突兀
	DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaSeconds, 10.f);
	// 步骤e: 提取Yaw轴偏移量输出给动画蓝图（用于 AimOffset 混合空间）
	YawOffset = DeltaRotation.Yaw;

	// ════════════════════════════════════════
	// 模块4: Lean 倾斜计算（基于转向角速度）
	// ════════════════════════════════════════
	/*
	 * 【倾斜计算的数学原理】
	 *
	 * Delta = 当前帧旋转 - 上一帧旋转（帧间旋转差）
	 * Target = Delta.Yaw / DeltaSeconds  →  这是 Yaw 轴的角速度（度/秒）
	 * 例: 一帧转了 2°，帧间隔 0.016s → 角速度 = 2 / 0.016 = 125°/s
	 *
	 * Interp = FInterpTo(Lean, Target, 6.f)  →  以速率6平滑过渡
	 * Lean = Clamp(Interp, -90, 90)          →  限制在 ±90° 范围内
	 *
	 * 正值 = 向右转导致身体右倾，负值 = 向左转导致身体左倾
	 */
	// 保存当前帧旋转供下一帧使用（先存旧值再读新值）
	CharacterRotationLastFrame = CharacterRotation;
	// 获取当前帧角色的Actor旋转（Yaw=面朝方向）
	CharacterRotation = XMBCharacter->GetActorRotation();
	// 计算两帧之间的旋转变化量（这一帧角色转了多少度）
	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationLastFrame);
	// 计算Yaw方向的角速度（度/秒）：帧间角度差 ÷ 帧时间
	const float Target = Delta.Yaw / DeltaSeconds;
	// 平滑过渡 Lean 值使倾斜更自然（速率6）
	const float Interp = FMath::FInterpTo(Lean, Target, DeltaSeconds, 6.f);
	// 钳制到 [-90, 90] 范围防止极端倾斜
	Lean = FMath::Clamp(Interp, -90.f, 90.f);

	// ════════════════════════════════════════
	// 模块5: IK（逆向动力学）计算
	// ════════════════════════════════════════
	// 获取角色预计算的 AimOffset Pitch 值（由角色的 CalculateAO_Pitch 方法计算）
	AO_Yaw = XMBCharacter->GetAO_Yaw();
	AO_Pitch = XMBCharacter->GetAO_Pitch();

	// 仅在装备武器且有有效网格体时执行IK计算
	if (bIsWeaponEquipped && EquippedWeapon && EquippedWeapon->GetWeaponMesh() && XMBCharacter->GetMesh())
	{
		// --- 左手 IK（FABRIK）---
		// 从武器模型上的 LeftHandSocket 获取世界空间变换（握把位置）
		LeftHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("LeftHandSocket"), RTS_World);
		// 将世界坐标转换为角色骨骼空间的相对坐标（FABRIK需要的是相对于骨骼的坐标）
		FVector OutPosition;
		FRotator OutRotation;
		XMBCharacter->GetMesh()->TransformToBoneSpace(FName("hand_r"), LeftHandTransform.GetLocation(), FRotator::ZeroRotator, OutPosition, OutRotation);
		LeftHandTransform.SetLocation(OutPosition);      // 更新位置为骨骼空间坐标
		LeftHandTransform.SetRotation(FQuat(OutRotation)); // 更新旋转为骨骼空间旋转

		// --- 右手旋转（瞄准跟随）---
		// 获取武器上右手插槽（hand_r）的世界位置
			FTransform RightHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("hand_r"), RTS_World);
		// 计算从右手位置看向"命中目标反方向"的旋转
		// 即让枪口指向准心命中的目标位置
			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(RightHandTransform.GetLocation(), RightHandTransform.GetLocation() + (RightHandTransform.GetLocation() - XMBCharacter->GetHitTarget()));
		// 平滑插值到目标旋转（速率10）
			RightHandRotation = FMath::RInterpTo(RightHandRotation, LookAtRotation, DeltaSeconds, 10.f);
	}

	// ════════════════════════════════════════
	// 模块6: 功能开关控制
	// ════════════════════════════════════════
	// 换弹期间禁用左手 FABRIK IK（换弹动画有自己的预设手部动作，不需要IK覆盖）
	// bUseFABRIK = XMBCharacter->GetCombatState() != ECombatState::ECS_Reloading;
	// 换弹期间或游戏禁用期间禁用 AimOffset（避免与换弹动画冲突）
	// bUseAimOffset = XMBCharacter->GetCombatState() != ECombatState::ECS_Reloading && !XMBCharacter->GetDisableGameplay();
	// 换弹期间或游戏禁用期间禁用右手旋转调整
	// bTransformRightHand = XMBCharacter->GetCombatState() != ECombatState::ECS_Reloading && !XMBCharacter->GetDisableGameplay();
	
	bUseFABRIK = XMBCharacter->GetCombatState() == ECombatState::ECS_Unoccupied;

	bool bFABRIKOverride = XMBCharacter->IsLocallyControlled()
	&& XMBCharacter->GetCombatState() != ECombatState::ECS_ThrowingGrenade
	&& XMBCharacter->bFinishedSwapping;
	
	if (bFABRIKOverride)
	{
		bUseFABRIK = !XMBCharacter->IsLocallyReloading() ;
	}
	
	bUseAimOffset = XMBCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !XMBCharacter->GetDisableGameplay();
	bTransformRightHand = XMBCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !XMBCharacter->GetDisableGameplay();
	
}
