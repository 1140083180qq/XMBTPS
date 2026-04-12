
// ============================================================
// @file WeaponTypes.cpp
// @brief 武器类型枚举的源文件（空实现）
//
// 【说明】：EWeaponType 是在 WeaponTypes.h 中定义的枚举类，
// 使用 UENUM(BlueprintType) 宏声明。此 .cpp 文件为空实现，
// 仅包含头文件以使编译单元完整。
//
// 【枚举值列表】：
// - EWT_AssaultRifle: 突击步枪（当前唯一武器类型）
// - EWT_MAX:          枚举最大值占位符
//
// 【设计用途】：
// 作为 TMap<EWeaponType, int32> (CarriedAmmoMap) 的键类型，
// 实现按武器类型分别管理备用弹药库存的架构。
// 新增武器种类只需在此枚举中添加新值并初始化对应弹药即可。
// ============================================================

#include "GameTypes/WeaponTypes.h"
