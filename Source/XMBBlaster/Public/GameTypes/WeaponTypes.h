#pragma once

/**
 * @enum EWeaponType
 * @brief 武器类型枚举
 * 
 * 定义游戏中支持的武器类型。
 * 每种武器类型对应独立的弹药库存，
 * 用于区分和管理不同武器的弹药携带量。
 */
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	/** 突击步枪（默认武器类型） */
	EWT_AssaultRifle UMETA(DisplayName = "DefaultRigle"),

	/** 枚举最大值占位符 */
	EWT_MAX UMETA(DisplayName = "DefaultMAX")

};
