
// ============================================================
// @file TurningInPlace.cpp
// @brief 原地转身状态枚举的源文件（空实现）
//
// 【说明】：ETurningInPlace 是在 TurningInPlace.h 中定义的枚举类，
// 使用 UENUM(BlueprintType) 宏声明，供蓝图和C++共同使用。
// 此 .cpp 文件仅包含头文件以满足编译器要求，无实际实现代码。
//
// 【枚举值列表】：
// - ETIP_Left:        正在向左转身（角色静止时相机左转触发）
// - ETIP_Right:       正在向右转身（角色静止时相机右转触发）
// - ETIP_NotTurning:  没有在转身（移动中或相机未转动）
// - ETIP_MAX:         枚举最大值占位符
//
// 【使用位置】：
// AXMBCharacterBase.TurningInPlace 变量使用此枚举类型，
// AnimInstanceBase 每帧读取此值驱动转身动画的选择
// ============================================================

#include "GameTypes/TurningInPlace.h"
