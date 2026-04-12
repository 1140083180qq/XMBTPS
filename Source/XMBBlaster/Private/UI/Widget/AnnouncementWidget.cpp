
// ============================================================
// @file AnnouncementWidget.cpp
// @brief 公告 Widget 实现文件（空实现）
//
// 【说明】：UAnnouncementWidget 继承 UUserWidget（UMG 用户界面基类），
// 所有 UI 控件的绑定和布局都在蓝图中完成。
//
// 【绑定的控件（通过 BindWidget 元数据指定）】：
// - InfoText (UTextBlock*): 公告信息文本（如"New Match Starts In:"、"你是胜利者!"等）
// - WarmupTime (UTextBlock*): 热身倒计时显示文本（格式 "MM:SS"）
// - AnnouncementText (UTextBlock*): 公告标题文本
//
// 此 .cpp 文件为空实现——控件的数据填充由 XMBPlayerController
// 通过 SetHUDAnnouncementCountdown() 和 HandleCooldown() 等方法完成。
// Widget 本身不包含自定义逻辑代码。
// ============================================================

#include "UI/Widget/AnnouncementWidget.h"
