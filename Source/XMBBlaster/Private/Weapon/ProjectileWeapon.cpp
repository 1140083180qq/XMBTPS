
// ============================================================
// @file ProjectileWeapon.cpp
// @brief 投射物武器实现 - 继承武器基类，实现发射投射物的开火逻辑
//
// 【核心功能概述】：
// 本类继承 AWeaponBase，重写 Fire() 方法以支持"发射物理投射物"的武器类型：
// - 从枪口（MuzzleFlash插槽）位置生成 AProjectile 子类实例（如子弹）
// - 计算从枪口到目标命中点的方向向量，使投射物精确飞向瞄准点
// - 仅在服务器端生成投射物（HasAuthority 检查），
//   因为 bReplicates=true 会使投射物自动同步到所有客户端
//
// 【与 WeaponBase.Fire() 的关系】：
 /* 调用 Super::Fire(HitTarget) 先执行基类逻辑（播放动画 + 抛弹壳 + 扣弹药），
 然后追加投射物生成的专属逻辑 */
// ============================================================

#include "Weapon/ProjectileWeapon.h"

#include "Engine/SkeletalMeshSocket.h"

/**
 * @brief 重写基类的开火方法 - 在基类功能基础上追加投射物生成
 * @param HitTarget - 射线检测到的命中目标位置（来自 CombatComponent 的 TraceUnderCrosshairs）
 *
 * 【完整执行流程】：
 *
 * 步骤1: 调用基类 Fire()（Super::Fire）
 *   执行以下操作（在 WeaponBase.cpp 中实现）：
 *   a. 播放开火动画 (FireAnimation)
 *   b. 在抛壳口 (AmmoEject Socket) 生成弹壳 Actor (ACasing)
 *   c. 扣除一发弹药 (SpendRound)
 *
 * 步骤2: 权威性检查（仅服务器端执行）
 *   if (!HasAuthority()) return;
 *   因为投射物的生成是核心游戏逻辑，必须由服务器统一管理。
 *   客户端不需要自行生成——服务器的投射物通过 bReplicates 自动同步过来
 *
 * 步骤3: 获取枪口插槽 (MuzzleFlash Socket)
 *   在武器骨骼模型上查找名为 "MuzzleFlash" 的骨骼插槽，
 *   该插槽的位置和朝向决定了投射物的出生点
 *
 * 步骤4: 计算射击方向
 *   ToTarget = HitTarget - MuzzleLocation（枪口到目标的向量）
 *   TargetRotation = ToTarget.Rotation()（将方向向量转为旋转角度）
 *   这确保子弹沿"枪口 → 命中点"的直线飞行
 *
 * 步骤5: 生成投射物 Actor
 *   使用 SpawnActor 在枪口位置、朝向目标方向创建 AProjectile 实例：
 *   - ProjectileClass: 要生成的投射物子类蓝图（如 Bullet_Blueprint）
 *   - Position: 枪口插槽的世界坐标
 *   - Rotation: 指向目标的旋转角
 *   - SpawnParams:
 *     .Owner = GetOwner(): 设置拥有者为开火的玩家角色
 *     .Instigator = InstigatorPawn: 设置伤害来源Pawn（用于伤害结算的归属判定）
 */
void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	// 步骤1: 先执行基类的通用开火逻辑（动画/弹壳/扣弹药）
	Super::Fire(HitTarget);

	// 步骤2: 仅服务器端生成投射物（客户端通过复制同步接收）
	if (!HasAuthority()) return;
	
	// 步骤3: 获取武器上的枪口闪烁插槽
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	if (MuzzleFlashSocket)
	{
		// 获取枪口插槽的世界空间变换
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		// 步骤4: 计算从枪口指向目标命中点的方向向量
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		FRotator TargetRotation = ToTarget.Rotation(); // 方向向量转为旋转

		// 步骤5: 如果配置了投射物蓝图类，则在枪口位置生成投射物
		if (ProjectileClass)
		{
			// 配置生成参数
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = GetOwner(); // 拥有者=开火玩家（使用GetOwner而非缓存变量以确保最新）
			SpawnParams.Instigator = InstigatorPawn; // 伤害来源Pawn

			if (UWorld* World = GetWorld())
			{
				// 在枪口位置以朝向目标的旋转角度生成投射物
				AProjectile* Projectile = World->SpawnActor<AProjectile>(
					ProjectileClass,
					SocketTransform.GetLocation(), // 出生位置=枪口坐标
					TargetRotation,               // 朝向=对准目标
					SpawnParams                   // 拥有者和伤害来源信息
				);
			}
		}
		
	}
	
}
