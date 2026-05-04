#pragma once


#define TRACE_LENGTH 80000.f

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
	EWT_AssaultRifle UMETA(DisplayName = "AssaultRifle"),
	EWT_RocketLauncher UMETA(DisplayName = "RocketLauncher"),
	EWT_Pistol UMETA(DisplayName = "Pistol"),
	EWT_SubmachineGun UMETA(DisplayName = "SubmachineGun"),
	EWT_ShotGun UMETA(DisplayName = "ShotGun"),
	
	/** 枚举最大值占位符 */
	EWT_MAX UMETA(DisplayName = "DefaultMAX")

};
