
// ============================================================
// @file XMBBlasterGameState.cpp
// @brief 游戏全局状态实现 - 管理排行榜和最高分追踪
//
// 【核心功能概述】：
// 本类继承 AGameState（UE5 的游戏状态基类），负责：
// 1. 维护当前最高分记录（TopScore）
// 2. 追踪所有达到最高分的玩家列表（TopScoringPlayers）
// 3. TopScoringPlayers 数组通过 Replicated 自动同步到所有客户端
//
// 【设计用途】：用于比赛结束时的结算显示——
// HandleCooldown() 从此处的 TopScoringPlayers 获取获胜者信息
// ============================================================

#include "GameState/XMBBlasterGameState.h"
#include "PlayerState/XMBPlayerState.h"
#include "Net/UnrealNetwork.h"

/**
 * @brief 注册网络复制的属性变量
 *
 * 【注册的复制属性】：
 * - TopScoringPlayers: 当前最高分玩家数组（TArray<AXMBPlayerState*>）
 *   所有客户端都可以读取此数组来知道谁在领先/获胜
 */
void AXMBBlasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 注册最高分玩家列表为网络复制属性
	DOREPLIFETIME(AXMBBlasterGameState, TopScoringPlayers);
}

/**
 * @brief 更新最高分排名 - 当有玩家获得分数时调用
 * @param ScoringPlayer - 刚刚获得分数的玩家状态指针
 *
 * 【算法逻辑（三种情况处理）】：
 *
 * === 情况1: 排行榜为空（首次得分）===
 *   直接将玩家加入 TopScoringPlayers，更新 TopScore 为该玩家的分数
 *
 * === 情况2: 玩家分数等于当前最高分（并列第一）===
 *   使用 AddUnique 将玩家追加到列表中（避免重复添加同一玩家）
 *   TopScore 保持不变
 *
 * === 情况3: 玩家分数超过当前最高分（新纪录）===
 *   清空整个 TopScoringPlayers 列表（旧的第一名被超越）
 *   将新冠军加入列表
 *   更新 TopScore 为新的最高分
 *
 * 【调用时机】：通常由 GameMode 在 AddToScore 后或淘汰处理时触发
 *
 * 【数据流示例】：
 * 时间线:
 * t=0: PlayerA得10分 → Top=[A], TopScore=10
 * t=1: PlayerB得5分  → 不变（5 < 10）
 * t=2: PlayerA再得5分 → Top=[A], TopScore=15
 * t=3: PlayerB得10分 → 不变（15 > 15? 否，B总分也是15）→ 实际上 B 总分=15 == TopScore
 *      → 情况2触发: Top=[A, B], TopScore=15 （并列第一）
 * t=4: PlayerC得20分 → 情况3: Top=[C], TopScore=20（C独占第一，AB被移除）
 */
void AXMBBlasterGameState::UpdateTopScore(AXMBPlayerState* ScoringPlayer)
{
	if (TopScoringPlayers.Num() == 0)
	{
		// 情况1: 首次有人得分，直接成为第一名
		TopScoringPlayers.Add(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
	else if (ScoringPlayer->GetScore() == TopScore)
	{
		// 情况2: 与当前最高分持平，加入并列名单（AddUnique防重复）
		TopScoringPlayers.AddUnique(ScoringPlayer);
	}
	else if (ScoringPlayer->GetScore() > TopScore)
	{
		// 情况3: 超越了当前最高分，清空旧名单建立新纪录
		TopScoringPlayers.Empty();
		TopScoringPlayers.AddUnique(ScoringPlayer); // 新冠军
		TopScore = ScoringPlayer->GetScore(); // 更新最高分记录
	}
}
