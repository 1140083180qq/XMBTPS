
// ============================================================
// @file XMBBlaster.cpp
// @brief 项目模块入口文件 - 定义自定义碰撞通道
//
// 【核心功能概述】：
// 这是 UE5 项目的标准模块入口文件，包含：
//
// IMPLEMENT_PRIMARY_GAME_MODULE 宏：
// 声明 XMBBlaster 为一个主游戏模块（Primary Game Module），
// 使用 FDefaultGameModuleImpl 作为默认模块实现类。
// 这使得引擎能够在加载时正确初始化本项目。
//
// ECC_SkeletalMesh 自定义碰撞通道定义：
// #define ECC_SkeletalMesh ECollisionChannel::ECC_GameTraceChannel1
 /* 将骨骼网格体（SkeletalMesh）映射到引擎的自定义追踪通道1（GameTraceChannel1）。
 *
  【为什么需要自定义通道？】
// UE5 内置的标准碰撞通道（Visibility、WorldStatic、WorldDynamic、PhysicsObject、Pawn 等）
// 无法精确表达"骨骼网格体"这一特定类型的碰撞需求。
 // 通过使用 GameTraceChannel1 作为专用骨骼网格通道，可以实现：
// - 投射物精确命中角色模型而非包围盒
// - 射线检测时区分角色与其他动态物体
// - 在编辑器项目设置中独立配置该通道的碰撞响应规则
 //
// 【使用位置】：
 // - Projectile.cpp: CollisionBox 配置为阻挡 ECC_SkeletalMesh
 // - WeaponBase.cpp: WeaponMesh 忽略 ECC_Pawn 但保留其他通道响应
 // - CombatComponent.cpp: TraceUnderCrosshairs 使用 ECC_Visibility 进行射线检测 */
 // ============================================================

#include "XMBBlaster.h"
#include "Modules/ModuleManager.h"

/**
 * @brief 主游戏模块注册宏
 *
 * 参数说明:
 *   FDefaultGameModuleImpl: 使用引擎提供的默认游戏模块实现类（无需自定义模块逻辑）
 *   XMBBlaster:          模块名称（必须与 .uproject 文件中的模块名一致）
 *   "XMBBlaster":        模块的显示名称（用于日志和调试输出）
 */
IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, XMBBlaster, "XMBBlaster" );
