
// ============================================================
// @file UIComponent.cpp
// @brief UI组件实现 - 管理准心散布计算、FOV插值和HUD数据包组装
//
// 【核心功能概述】：
// 本组件挂载在 AXMBCharacterBase 上，负责所有UI相关的实时计算：
//
// 1. 准心动态散布系统（SetHUDCrosshairs）：
//    综合多个因子计算 CrosshairSpread 值：
//    - VelocityFactor: 移动速度越快，准心扩散越大 [0,1]
//    - InAirFactor:   在空中时大幅增加扩散（最高2.25）
//    - AimFactor:      瞄准时收缩准心（负贡献，最高-0.9）
//    - ShootingFactor: 开火瞬间爆发式扩散（+0.75/发，快速衰减）
//
// 2. FOV视场角插值（InterpFOV）：
//    平滑过渡 DefaultFOV ↔ ZoomedFOV（瞄准时缩小视角）
//
// 3. HUD数据包管理：
//    将准心纹理配置、散布值、颜色等打包为 FHUDPackage，
//    传递给 XMBHUD 进行绘制
//
// 【重要设计决策】：仅对本地控制的角色执行以上逻辑（bIsLocalControllered），
// 因为远程代理角色不需要在本机绘制准心或调整FOV
// ============================================================

#include "XMBComponent/UIComponent.h"

#include "Camera/CameraComponent.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerController/XMBPlayerController.h"


/**
 * @brief 构造函数 - 初始化 UI 组件的默认参数
 *
 * 【逻辑说明】：
 * - 启用每帧 Tick（需要每帧更新准心散布和FOV）
 * - 将指针成员初始化为 nullptr（安全的空指针初始状态）
 */
UUIComponent::UUIComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	CombatComp = nullptr;
	CachedEquippedWeapon = nullptr;
}

/**
 * @brief 组件初始化 - 游戏开始时调用
 *
 * 【初始化流程】：
 * 1. 创建空的 FHUDPackage 结构体（默认值：无纹理、白色、零散布）
 * 2. 检查并缓存 Owner 是否为本地控制器拥有的角色
 *    （只有本地玩家才需要更新准心和FOV）
 * 3. 缓存 CombatComponent 引用
 * 4. 从角色的 FollowCamera 获取默认 FOV 作为基准值
 */
void UUIComponent::BeginPlay()
{
	Super::BeginPlay();
	// 初始化空的 HUD 数据包
	HUDPackage = FHUDPackage();

	if (Owner)
	{
		// 记录是否为本地控制的角色（关键标志位，整个 Tick 都依赖此判断）
		bIsLocalControllered = Owner->IsLocallyControlled();
		// 缓存战斗组件引用供后续使用
		CombatComp = Owner->GetCombatComponent();

		// 从相机的当前 FOV 作为默认 FOV 基准值
		if (Owner->GetFollowCamera())
		{
			DefaultFOV = Owner->GetFollowCamera()->FieldOfView;
			CurrentFOV = DefaultFOV; // 当前FOV初始化为默认值
		}
	}
}

/**
 * @brief 每帧更新 - 仅对本地角色执行准心和FOV更新
 *
 * 【逻辑说明】：双重过滤确保只在正确的条件下执行：
 * - Owner 存在（角色有效）
 * - bIsLocalControllered 为 true（是本地控制的玩家）
 *
 * 远程代理角色（其他玩家的角色在本机的表示）不执行此逻辑
 */
void UUIComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 仅对本地控制的角色进行 UI 更新
	if (Owner && bIsLocalControllered)
	{
		InterpFOV(DeltaTime);       // 更新相机FOV（瞄准缩放效果）
		SetHUDCrosshairs(DeltaTime); // 更新准心散布和颜色
	}

}

/**
 * @brief 计算并更新准心的散布值和颜色 - 准心系统的核心算法
 * @param DeltaTime - 本帧时间增量（用于平滑插值）
 *
 * ════════════════════════════════════════════════════════
 * 【完整计算流程】
 * ════════════════════════════════════════════════════════
 *
 * 步骤1: 安全检查与引用获取
 *   - 验证 Owner 和 Controller 有效
 *   - 惰性获取 HUD 和 CombatComponent 引用
 *
 * 步骤2: 武器切换检测（仅在更换武器时更新准心纹理）
 *   - 对比 CachedEquippedWeapon 与当前 EquippedWeapon
 *   - 若不同：从新武器读取5向准心纹理配置到 HUDPackage
 *   - 若卸载武器：重置 HUDPackage 为空
 *   - 这种"仅变更时更新"策略避免每帧重复设置不变的数据
 *
 * 步骤3: 计算 CrosshairVelocityFactor（移动速度因子）
 *   将水平移动速度从 [0, MaxWalkSpeed] 映射到 [0, 1]
 *   示例：速度300 / 最大600 → 因子0.5 → 中等扩散
 *
 * 步骤4: 计算 CrosshairInAirFactor（空中因子）
 *   - 在空中时：插值增加到 2.25（快速扩散，速率2.25）
 *   - 在地面时：插值减小到 0（快速收缩，速率30）
 *   使用 FInterpTo 实现平滑过渡而非突变
 *
 * 步骤5: 计算 CrosshairAimFactor（瞄准因子）
 *   - 瞄准时：插值到 0.9（高速率0.3，快速响应）
 *   - 非瞄准：插值到 0（高速率0.3，快速恢复）
 *   注意此值为正数但在最终公式中做减法（收缩准心）
 *
 * 步骤6: 计算 CrosshairShootingFactor（射击因子）
 *   - 每次开火（FireButtonPressed）：瞬间 +0.75（爆发式扩散）
 *   - 之后每帧快速衰减回 0（速率40，约0.1秒内归零）
 *   模拟开火后坐力导致的准心瞬间扩大然后快速恢复的效果
 *
 * 步骤7: 设置准心颜色
 *   - bIsChange == true（命中可交互对象如角色）：红色
 *   - 否则：白色（默认状态）
 *   bIsChange 由 CombatComponent 的 TraceUnderCrosshairs 射线检测设置
 *
 * 步骤8: 组装最终散布公式
 *   CrosshairSpread = 0.5 + Velocity + InAir - Aim + Shooting
 *   - 基础值 0.5：即使静止站立也保持微小散布（不会缩成一点）
 *   - Velocity (+): 扩散
 *   - InAir (+): 大幅扩散
 *   - Aim (-): 收缩
 *   - Shooting (+): 爆发扩散
 *
 * 步骤9: 将 HUDPackage 传递给 XMBHUD 用于 DrawHUD 绘制
 */
void UUIComponent::SetHUDCrosshairs(float DeltaTime)
{
	// 步骤1: 安全检查
	if (Owner == nullptr || Owner->Controller == nullptr) return;

	// 惰性获取 Controller → HUD 链路引用
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		HUD = HUD == nullptr ? Cast<AXMBHUD>(XMBController->GetHUD()) : HUD;
		if (HUD)
		{
			CombatComp = Owner->GetCombatComponent();
			AWeaponBase* EquippedWeapon = CombatComp ? CombatComp->GetEquippedWeapon() : nullptr;

			// 步骤2: 武器切换检测 —— 仅在更换武器时更新准心纹理配置
			if (CachedEquippedWeapon != EquippedWeapon)
			{
				CachedEquippedWeapon = EquippedWeapon;
				if (CachedEquippedWeapon)
				{
					// 从武器对象读取5向准心纹理配置（不同武器可有不同的准心外观）
					HUDPackage.CrosshairCenter = EquippedWeapon->CrosshairCenter;
					HUDPackage.CrosshairLeft   = EquippedWeapon->CrosshairLeft;
					HUDPackage.CrosshairRight  = EquippedWeapon->CrosshairRight;
					HUDPackage.CrosshairTop    = EquippedWeapon->CrosshairTop;
					HUDPackage.CrosshairBottom = EquippedWeapon->CrosshairBottom;
				}
				else
				{
					// 卸载武器后重置为空包
					HUDPackage = FHUDPackage();
				}
			}

			// ═══════════════════════════════════
			// 步骤3: 移动速度因子计算
			// ═══════════════════════════════════
			// 将 [0, MaxWalkSpeed] 的速度范围线性映射到 [0, 1] 的因子范围
			// TODO: 可以考虑修改移动速度的上限以调整散布敏感度
			FVector2D WalkSpeedRange(0.f, Owner->GetCharacterMovement()->MaxWalkSpeed);
			FVector2D VelocityMultiplierRange(0.f, 1.f);
			FVector Velocity = Owner->GetVelocity();
			Velocity.Z = 0.f; // 仅使用水平速度分量（忽略Z轴）

			// GetMappedRangeValueClamped: 线性映射并钳制到目标范围
			// 例：速度300/最大600 → 因子=0.5；速度≥600 → 因子=1.0（上限）
			CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange, VelocityMultiplierRange, Velocity.Size());

			// ═══════════════════════════════════
			// 步骤4: 空中因子计算
			// ═══════════════════════════════════
			if (Owner->GetCharacterMovement()->IsFalling())
			{
				// 在空中时快速增加扩散至 2.25（模拟跳跃时的不稳定瞄准）
				// 插值速率 2.25 使其在约1秒内达到最大值
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.25f);
			}
			else
			{
				// 落地后快速收敛到 0（插值速率 30，约0.07秒内归零）
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
			}

			// ═══════════════════════════════════
			// 步骤5: 瞄准因子计算
			// ═══════════════════════════════════
			if (CombatComp->IsAiming())
			{
				// 瞄准时快速增加到 0.9（高插值速率 0.3 ≈ 0.3秒内到位）
				// 此值在最终公式中做减法，所以会显著收缩准心
				CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.9f, DeltaTime, 0.3f);
			}
			else
			{
				// 松开瞄准后快速归零
				CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.f, DeltaTime, 0.3f);
			}

			// ═══════════════════════════════════
			// 步骤6: 射击因子计算（爆发式扩散 + 快速衰减）
			// ═══════════════════════════════════
			if (CachedEquippedWeapon && CombatComp->IsFireButtonPressed())
			{
				// 每帧按下开火键时累加 0.75 的扩散量（连续射击会叠加）
				CrosshairShootingFactor += 0.75f;
			}

			// ═══════════════════════════════════
			// 步骤7: 准心颜色设置
			// ═══════════════════════════════════
			if (bIsChange)
			{
				// bIsChange 由射线检测设置：当准心对准了实现 IInteractWithCrosshairsInterface 接口的Actor（即角色）
				HUDPackage.CrosshairsColor = FLinearColor::Red; // 命中角色 → 变红提示可攻击
			}
			else
			{
				HUDPackage.CrosshairsColor = FLinearColor::White; // 默认白色
			}

			// 步骤6(续): 射击因子的快速衰减（即使持续按住也会迅速衰减到接近0）
			// 高插值速率 40 使得扩散在约0.05秒内就几乎消失（产生"瞬间扩大→快速收回"的视觉效果）
			CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.f, DeltaTime, 40.f);

			// ═══════════════════════════════════
			// 步骤8: 最终散布值组装 ★核心公式★
			// ═══════════════════════════════════
			/*
			 * Spread = 0.5(基础) + Velocity(移动) + InAir(空中) - Aim(瞄准收缩) + Shooting(射击)
			 *
			 * 典型场景的Spread值示例：
			 * - 静止站立瞄准: 0.5 + 0 + 0 - 0.9 + 0 = -0.4 → Clamp后≈0 （最密集）
			 * - 全速奔跑:     0.5 + 1.0 + 0 - 0 + 0 = 1.5         （较大扩散）
			 * - 跳跃中:       0.5 + 0 + 2.25 - 0 + 0 = 2.75      （最大扩散）
			 * - 站立射击:     0.5 + 0 + 0 - 0.9 + 0.75*衰减 ≈ 0.6  （轻微扩散）
			 */
			HUDPackage.CrosshairSpread = 0.5f + CrosshairVelocityFactor + CrosshairInAirFactor - CrosshairAimFactor + CrosshairShootingFactor;

			// 步骤9: 将完整的 HUDPackage 传递给 HUD 对象用于绘制
			HUD->SetHUDPackage(HUDPackage);
		}
	}
}

/**
 * @brief 相机 FOV（视场角）插值处理 - 实现瞄准时的视角缩放效果
 * @param DeltaTime - 本帧时间增量
 *
 * 【功能说明】：在进入/退出瞄准状态时平滑地过渡相机FOV。
 * 这是 FPS/TPS 游戏中常见的"瞄准放大"效果。
 *
 * 【插值逻辑】：
 * - 进入瞄准时（IsAiming == true）：
 *   目标FOV = 当前武器的 ZoomedFOV（通常为 30° 左右的窄视角）
 *   插值速率 = 武器的 ZoomInterpSpeed（通常 20）
 *
 * - 退出瞄准时（IsAiming == false）：
 *   目标FOV = DefaultFOV（通常为 90° 的默认宽视角）
 *   插值速率 = UIComponent 自身的 ZoomInterpSpeed（通常 20）
 *
 * 【为什么用 FInterpTo？】它基于 DeltaTime 进行指数级趋近目标值，
 * 产生的动画曲线自然且无需额外缓动函数
 *
 * 【前置条件】：必须有装备的武器才执行（ CachedEquippedWeapon != nullptr ），
 * 因为 ZoomedFOV 是武器上的配置属性
 */
void UUIComponent::InterpFOV(float DeltaTime)
{
	// 实时从 CombatComponent 获取当前武器，不依赖 SetHUDCrosshairs 的缓存副作用
	// （修复：打包后 SetHUDCrosshairs 可能因 Controller/HUD 未就绪提前返回导致 CachedEquippedWeapon 永远为 nullptr）
	AWeaponBase* Weapon = CombatComp ? CombatComp->GetEquippedWeapon() : nullptr;
	if (Weapon == nullptr) return;

	if (CombatComp->IsAiming())
	{
		// 瞄准中：FOV 向武器的 ZoomedFOV 缩小值插值（如 90° → 30°）
		// 使用武器自身的 ZoomInterpSpeed 作为插值速率
		CurrentFOV = FMath::FInterpTo(CurrentFOV, Weapon->ZoomedFOV, DeltaTime, Weapon->ZoomInterpSpeed);
	}
	else
	{
		// 非瞄准：FOV 向默认值恢复（如 30° → 90°）
		// 使用 UIComponent 自身的 ZoomInterpSpeed
		CurrentFOV = FMath::FInterpTo(CurrentFOV, DefaultFOV, DeltaTime, ZoomInterpSpeed);
	}

	// 将计算出的 FOV 值实际应用到角色的 FollowCamera 上
	if (Owner && Owner->GetFollowCamera())
	{
		Owner->GetFollowCamera()->SetFieldOfView(CurrentFOV);
	}
}

