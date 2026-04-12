
// ============================================================
// @file XMBPlayerState.cpp
// @brief 玩家状态实现 - 管理玩家的持久化游戏数据（分数、击败数）
//
// 【核心功能概述】：
// 本类继承 APlayerState（UE5 的玩家状态基类），负责：
// 1. 分数管理：AddToScore() 增加分数 + OnRep_Score() 网络回调同步HUD
// 2. 击败数管理：AddToDefeats() 增加击败数 + OnRep_Defeats() 网络回调同步HUD
// 3. 数据链路：PlayerState → PlayerController → HUD Widget 的数据传递
//
// 【设计特点】：
// - Score 使用父类 APlayerState 内置的 Score 变量（已有 ReplicatedUsing=OnRep_Score）
// - Defeats 为自定义的 ReplicatedUsing 变量
// - Character 和 Controller 引用采用惰性缓存模式避免重复 Cast
// ============================================================

#include "PlayerState/XMBPlayerState.h"

#include "Net/UnrealNetwork.h"

/**
 * @brief 注册网络复制的属性变量
 *
 * 【注册的复制属性】：
 * - Defeats: 玩家击败数（变化时通过 OnRep_Defeats 回调更新 HUD）
 *
 * 注意：Score 不需要在此注册，因为父类 APlayerState 已经注册了 Score 的复制，
 * 我们只需重写 OnRep_Score() 回调来处理分数变化时的 HUD 更新即可
 */
void AXMBPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 注册自定义的 Defeats 变量进行网络同步
	DOREPLIFETIME(AXMBPlayerState, Defeats);

}

/**
 * @brief 为玩家增加分数
 * @param ScoreAmount - 要增加的分数值（通常为正数）
 *
 * 【完整流程】：
 * 1. 计算新分数 = 当前分数(GetScore()) + 增加量
 * 2. 调用 SetScore() 设置新分数（触发引擎内部的网络复制机制）
 * 3. 获取或惰性初始化 Character 和 Controller 缓存引用
 * 4. 通过 Controller → SetHUDScore() 更新 HUD 显示
 *
 * 【调用场景】：当玩家击杀对手时，GameMode 调用此函数增加击杀者的分数
 */
void AXMBPlayerState::AddToScore(float ScoreAmount)
{
	// 计算并设置新分数（SetScore 是 APlayerState 基类的方法，内部处理网络复制）
	float NewScore = GetScore() + ScoreAmount;
	SetScore(NewScore);
	
	// 惰性获取角色和控制器引用（避免每次都重新Cast）
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDScore(GetScore()); // 将最新分数传递给 HUD 显示
		}
	}
	
}

/**
 * @brief 为玩家增加击败数
 * @param DefeatsAmount - 要增加的击败数量（通常为1）
 *
 * 【完整流程】：与 AddToScore 结构相同：
 * 1. 直接累加 Defeats 变量
 * 2. 通过缓存链路更新 HUD 的击败数显示
 *
 * 注意：Defeats 是本类自定义的 ReplicatedUsing 变量，
 * 此处直接修改后引擎会自动将新值复制到所有客户端并触发 OnRep_Defeats 回调
 */
void AXMBPlayerState::AddToDefeats(int32 DefeatsAmount)
{
	// 直接累加击败数（此变量的变化会自动触发 OnRep_Defeats 网络回调）
	Defeats += DefeatsAmount;
	// 惰性获取引用并更新 HUD
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDDefeats(Defeats); // 将最新击败数传给 HUD
		}
	}
}

/**
 * @brief 分数变化的网络回调 - 当 Score 在服务器端被修改时，各客户端自动调用
 *
 * 【重写说明】：APlayerState 基类的 Score 属性已注册了 ReplicatedUsing=OnRep_Score，
 * 我们重写此虚函数来在分数变化时更新本地 HUD。
 * 必须先调用 Super::OnRep_Score() 以保留基类的默认处理逻辑。
 *
 * 【与 AddToScore 的区别】：
 * - AddToScore: 主动修改分数的地方调用（如 GameMode 发放奖励）
 * - OnRep_Score: 被动接收其他客户端/服务器修改后的通知（网络同步回调）
 */
void AXMBPlayerState::OnRep_Score()
{
	Super::OnRep_Score(); // 先执行父类的默认处理

	// 与 AddToScore 相同的 HUD 更新逻辑
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDScore(GetScore()); // 同步最新的分数到 HUD
		}
	}
}

/**
 * @brief 击败数变化的网络回调 - 当 Defeats 在服务器端被修改时，客户端自动调用
 *
 * 【逻辑说明】：与 OnRep_Score 结构完全对称。
 * 当其他玩家被淘汰导致本玩家的击败数增加时（由 GameMode.AddToDefeats 触发），
 * 所有客户端都会收到此回调并各自更新本地 HUD 的击败数显示
 */
void AXMBPlayerState::OnRep_Defeats()
{
	// 惰性获取引用链路
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDDefeats(Defeats); // 将最新击败数传给 HUD
		}
	}
}
