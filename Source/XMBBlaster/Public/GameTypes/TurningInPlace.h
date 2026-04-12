#pragma once

/**
 * @enum ETurningInPlace
 * @brief 原地转身状态枚举
 * 
 * 定义角色原地站立时的转身方向：
 * - ETIP_Left: 向左转
 * - ETIP_Right: 向右转
 * - ETIP_NotTurning: 没有在转身
 * 
 * 用于动画蓝图选择对应的转身动画
 */
UENUM(BlueprintType)
enum class ETurningInPlace : uint8
{
	/** 向左转身 */
	ETIP_Left UMETA(DisplayName = "Turning Left"),
	
	/** 向右转身 */
	ETIP_Right UMETA(DisplayName = "Turning Right"),
	
	/** 未在转身（静止或移动中） */
	ETIP_NotTurning UMETA(DisplayName = "Not Turning"),

	/** 枚举最大值占位符 */
	ETIP_MAX UMETA(DisplayName = "DefaultMAX")
};
