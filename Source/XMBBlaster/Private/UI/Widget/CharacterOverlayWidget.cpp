
// ============================================================
// @file CharacterOverlayWidget.cpp
// @brief 主角色覆盖层 Widget 实现文件（空实现）
//
// 【说明】：UCharacterOverlayWidget 继承 UUserWidget，
// 这是游戏主界面的核心 HUD 覆盖层，显示在屏幕上的主要游戏信息。
//
// 【绑定的控件（全部通过 meta=(BindWidget) 从蓝图绑定）】：
// - HealthBar (UProgressBar*):     血量进度条
// - HealthText (UTextBlock*):      血量数值文字（格式 "当前/最大"）
// - ScoreAmount (UTextBlock*):      分数文字
// - DefeatsAmount (UTextBlock*):    击败数文字
// - WeaponAmmoAmount (UTextBlock*): 武器弹夹内弹药数
// - CarriedAmmoAmount (UTextBlock*): 携带备用弹药数
// - MatchCountdownText (UTextBlock*): 比赛倒计时文字
//
// 此 .cpp 为空实现——所有控件的数据更新由 XMBPlayerController
// 通过 SetHUDHealth/SetHUDScore/SetHUDDefeats/SetHUDWeaponAmmo/
// SetHUDCarriedAmmo/SetHUDMatchCountdown 等方法驱动完成。
// ============================================================

#include "UI/Widget/CharacterOverlayWidget.h"
