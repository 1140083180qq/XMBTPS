#pragma once

/**
 * @enum ECombatState
 * @brief 战斗状态枚举
 * 
 * 定义角色的战斗状态，用于控制可执行的操作：
 * - ECS_Unoccupied: 空闲状态，可以开火、换弹、切换武器
 * - ECS_Reloading: 换弹中，禁止其他战斗操作
 */
UENUM(BlueprintType)
enum class ECombatState : uint8
{
	/** 空闲状态：可以执行任何战斗操作 */
	ECS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	
	/** 换弹中：正在播放换弹动画，禁止其他操作 */
	ECS_Reloading UMETA(DisplayName = "Reloading"),

	//投掷手雷
	ECS_ThrowingGrenade UMETA(DisplayName = "Throwing Grenade"),

	//交换武器
	ECS_SwappingWeapons UMETA(DisplayName = "Swapping Weapons"),

	/** 枚举最大值占位符 */
	ECS_MAX UMETA(DisplayName = "DefaultMAX")
};
