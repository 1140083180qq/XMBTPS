
// ============================================================
// @file OverheadWidget.cpp
// @brief 头顶名称标签 Widget 实现 - 显示在角色头顶的文本信息
//
// 【核心功能概述】：
// 本类继承 UUserWidget（UE5 UMG Widget 基类），用于显示：
// 1. 玩家名称：默认显示在角色头顶上方
// 2. 网络角色调试信息（ShowPlayerNetRole）：
/*    显示该角色的网络 RemoteRole（Authority/AutonomousProxy/SimulatedProxy）
 *    用于开发和调试多人网络同步问题
*
* 【组件挂载方式】：
* 通过 AXMBCharacterBase 中的 UWidgetComponent (OverheadWidget)
 将此 Widget 附加到角色的骨骼上，随角色一起移动 */
// ============================================================

#include "UI/Widget/OverheadWidget.h"


/**
 * @brief Widget 析构回调 - 当 Widget 被销毁时调用
 *
 * 当前为空实现（仅调用父类），预留扩展位置。
 * 如果需要在 Widget 销毁时执行清理操作可在此添加
 */
void UOverheadWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

/**
 * @brief 设置显示的文本内容
 * @param TextToDisplay - 要显示的字符串
 *
 * 【逻辑说明】：将传入的字符串设置到 DisplayText 文本控件中。
 * DisplayText 是在蓝图中通过 meta=(BindWidget) 绑定的 TextBlock 控件
 *
 * 【典型使用场景】：
 * - 显示玩家名称："PlayerName_01"、"TestUser" 等
 * - 调试时显示网络角色信息："Remote Role: Authority" 等
 */
void UOverheadWidget::SetDisplayText(FString TextToDisplay)
{
	if (DisplayText) // 安全检查：确保控件有效
	{
		DisplayText->SetText(FText::FromString(TextToDisplay)); // 设置文本内容
	}
}

/**
 * @brief 显示 Pawn 的网络角色信息（调试用）
 * @param InPawn - 要查询网络角色的 Pawn 指针
 *
 * 【RemoteRole 含义详解】：
 * 在 UE5 多人网络架构中，每个 Pawn 都有 LocalRole 和 RemoteRole 两个属性：
 * - LocalRole: 本机对这个 Pawn 的权限角色
 * - RemoteRole: 远程客户端眼中这个 Pawn 的角色
 *
 * 本函数获取的是 **RemoteRole**，即"其他玩家眼中我的角色是什么"：
 *
 * | RemoteRole 值 | 含义 | 出现场景 |
 * |---|---|---|
 * | ROLE_Authority | 权威者（服务器） | 服务器上的所有 Pawn |
 * | ROLE_AutonomousProxy | 自主代理（本地玩家） | 你控制的角色 |
 * | ROLE_SimulatedProxy | 模拟代理（远程复制） | 其他玩家的角色 |
 * | ROLE_None | 无角色 | 未初始化或特殊状态 |
 *
 * 【使用方式】：在角色创建后或需要调试时调用，
 * 将结果显示在头顶名称标签的位置上
 */
void UOverheadWidget::ShowPlayerNetRole(APawn* InPawn)
{
	// 获取该 Pawn 的 RemoteRole（远程网络角色类型）
	ENetRole RemoteRole = InPawn->GetLocalRole();
	FString Role;

	// 将枚举值转换为可读的字符串
	switch (RemoteRole)
	{
	case ROLE_Authority:
		Role = FString("Authority");           // 服务器权威角色
		break;
	case ROLE_AutonomousProxy:
		Role = FString("ROLE_Autonomous Proxy"); // 本地控制的自主代理角色
		break;
	case ROLE_SimulatedProxy:
		Role = FString("Simulated Proxy");       // 远程模拟的角色代理
		break;
	case ROLE_None:
		Role = FString("None");                   // 无角色
		break;
	}

	// 格式化为 "Remote Role: XXX" 并显示在头顶标签上
	FString RemoteRoleString = FString::Printf(TEXT("Remote Role: %s"), *Role);
	SetDisplayText(RemoteRoleString);

}

/**
 * @brief 当 Widget 所在的层级被从世界中移除时调用
 * @param InLevel - 被移除的层级指针
 * @param InWorld - 所在世界指针
 *
 * 【触发场景】：当角色被销毁或 Widget 被手动移除时自动调用
 *
 * 【逻辑说明】：调用 RemoveFromParent() 将此 Widget 从 UI 层级树中断开。
 * 这是标准的 UMG 清理操作——断开与父 Widget/Viewport 的连接，
 * 使垃圾回收器可以正确回收此 Widget 对象
 */
void UOverheadWidget::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	RemoveFromParent(); // 从UI层级树中移除此Widget
}
