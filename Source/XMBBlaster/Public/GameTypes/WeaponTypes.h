#pragma once


#define TRACE_LENGTH 80000.f

#define CUSTOM_DEPTH_PURPLE 250
#define CUSTOM_DEPTH_BLUE 251
#define CUSTOM_DEPTH_TAN 252
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
	EWT_AssaultRifle UMETA(DisplayName = "Assault Rifle"),
	EWT_RocketLauncher UMETA(DisplayName = "Rocket Launcher"),
	EWT_Pistol UMETA(DisplayName = "Pistol"),
	EWT_SubmachineGun UMETA(DisplayName = "Submachine Gun"),
	EWT_ShotGun UMETA(DisplayName = "Shot Gun"),
	EWT_SniperRifle UMETA(DisplayName = "Sniper Rifle"),
	EWT_GrenadeLauncher UMETA(DisplayName = "Grenade Launcher"),
	EWT_Flag UMETA(DisplayName = "Flag"),
	
	/** 枚举最大值占位符 */
	EWT_MAX UMETA(DisplayName = "DefaultMAX")

};
