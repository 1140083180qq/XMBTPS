
// ============================================================
// @file BlasterGameMode.cpp
// @brief 主游戏模式实现 - 控制游戏流程和规则的核心管理器
//
// 【核心功能概述】：
// 本类继承 AGameMode（UE5 的游戏模式基类），是整个对局的大脑：
//
// 1. 三阶段循环系统：
//    WarmupTime(热身) → MatchTime(比赛) → CooldownTime(冷却/结算)
//    每个阶段有独立的倒计时和状态切换逻辑
//
// 2. 自定义 MatchState 扩展：
//    在引擎内置状态（WaitingToStart/InProgress/WaitingPostMatch/InProgress/LeavingMap）
//    基础上新增了 Cooldown 状态，用于比赛结束后的结算阶段
//
// 3. 玩家淘汰处理（PlayerEliminated）：
//    分数统计、击败数更新、最高分排名追踪、触发角色Elim流程
//
// 4. 重生系统（RequestRespawn）：
//    销毁旧角色 → 随机选择复活点 → 重新生成角色
//
// 【执行权限】：所有核心逻辑仅运行在服务器端
// ============================================================

#include "GameMode/BlasterGameMode.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "GameState/XMBBlasterGameState.h"
#include "PlayerState/XMBPlayerState.h"

/**
 * @brief 定义自定义 MatchState 的 Cooldown 状态常量
 *
 * 【为什么需要自定义状态？】
 * UE5 内置的 MatchState 包含：
 * - WaitingToStart: 进入关卡后等待开始
 * - InProgress: 比赛进行中
 * - WaitingPostMatch: 比赛结束等待后处理
 * - LeavingMap: 正在离开地图
 *
 * 但这些状态缺少一个"比赛结束→显示结算信息→准备下一局"的中间状态。
 * 本项目在命名空间中扩展定义了 Cooldown 状态来填补这一空白。
 */
namespace MatchState{
	// 冷却/结算阶段：比赛已结束，显示获胜者信息，等待下一局开始
	const FName Cooldown = FName("Cooldown");
}

/**
 * @brief 构造函数 - 初始化 GameMode 参数
 *
 * bDelayedStart = true:
 * 延迟开始匹配。设置为 true 后，GameMode 不会在第一个玩家加入后立即开始，
 * 而是等待显式调用 StartMatch()。这允许我们实现热身倒计时机制——
 * 先进入 WaitingToStart 状态进行热身，倒计时结束后再手动 StartMatch()
 */
ABlasterGameMode::ABlasterGameMode()
{
	bDelayedStart = true; // 不自动开始，由 Tick 中的倒计时控制何时开始
}



/**
 * @brief 游戏开始初始化 - 记录关卡起始时刻的服务器时间戳
 *
 * LevelStartingTime 是整个时间计算系统的基准点。
 * 所有后续的倒计时都基于"当前服务器时间 - 关卡开始时间"的差值来计算。
 * 此变量会被 XMBPlayerController.ClientJoinMidgame() 读取以同步中途加入的玩家
 */
void ABlasterGameMode::BeginPlay()
{
	Super::BeginPlay();

	// 记录关卡加载完成时刻的服务器绝对时间（秒）
	LevelStartingTime = GetWorld()->GetTimeSeconds();
}

/**
 * @brief 每帧更新 - 驱动三阶段计时器和状态切换
 * @param DeltaSeconds - 帧间隔时间
 *
 * ══════════════════════════════════════════════════════
 * 【三阶段状态机详解】
 * ══════════════════════════════════════════════════════
 *
 * === 阶段1: WaitingToStart（热身等待）===
 * 条件: MatchState == WaitingToStart
 * 行为:
 *   a) 计算热身剩余时间 = WarmupTime - (当前时间 - 开始时间)
 *   b) 更新 CountdownTime 供 HUD 显示
 *   c) 当 CountdownTime ≤ 0 时调用 StartMatch()
 *      StartMatch 会将 MatchState 切换为 InProgress，
 *      并触发 OnMatchStateSet 广播给所有 PlayerController
 *
 * === 阶段2: InProgress（比赛进行中）===
 * 条件: MatchState == InProgress
 * 行为:
 *   a) 计算冷却倒计时（即"距离比赛结束还有多久"）
 *      = WarmupTime + MatchTime - (当前时间 - 开始时间)
 *   b) 注意此处用的是 CooldownTime 变量名但实际含义是
 *      "比赛的剩余时间"，用于判断是否该切换到冷却阶段
 *   c) 当剩余时间 ≤ 0 时调用 SetMatchState(MatchState::Cooldown)
 *      切换到结算阶段
 *
 * === 阶段3: Cooldown（冷却/结算）===
 * 条件: MatchState == Cooldown（自定义扩展状态）
 * 行为:
 *   a) 计算"总倒计时"= 三阶段总时长 - 已过时间
 *      用于判断冷却期是否结束
 *   b) 当总倒计时 ≤ 0 时调用 RestartGame()
 *      RestartGame 使用无缝旅行(S SeamlessTravel)重新加载地图，
 *      回到 LobbyGameMode 开始新一局循环
 *
 * 【注意】此函数仅运行在服务器端（GameMode 天生只在服务器存在）
 */
void ABlasterGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// ════════════════════════════════
	// 阶段1: 热身等待 — 倒计时结束后开始比赛
	// ════════════════════════════════
	if (MatchState == MatchState::WaitingToStart)
	{
		CountdownTime = WarmupTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if (CountdownTime <= 0.f)
		{
			StartMatch(); // 切换到 InProgress 状态
		}
	}

	// ════════════════════════════════
	// 阶段2: 比赛进行中 — 时间耗尽后进入冷却结算
	// ════════════════════════════════
	else if (MatchState == MatchState::InProgress)
	{
		// 计算"距离应该进入冷却阶段的剩余时间"
		CooldownTime = WarmupTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if (CooldownTime <= 0.f)
		{
			SetMatchState(MatchState::Cooldown); // 切换到冷却/结算状态
		}
	}

	// ════════════════════════════════
	// 阶段3: 冷却结算 — 结束后重启游戏（回到大厅）
	// ════════════════════════════════
	else if (MatchState == MatchState::Cooldown)
	{
		// 计算整个三阶段周期是否全部结束
		CooldownTime = CooldownTime + WarmupTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if (CountdownTime <= 0.f)
		{
			RestartGame(); // 重新加载地图，开始新的一轮
		}
	}
}


float ABlasterGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage)
{
	return BaseDamage;
}



/**
 * @brief 处理玩家被淘汰事件 - 游戏规则的核心判决函数
 * @param ElimmedCharacter - 被淘汰的角色指针
 * @param VictimController - 被淘汰者的控制器
 * @param AttackerController - 攻击者的控制器（击杀者）
 *
 * 【完整处理流程】：
 *
 * 步骤1: 安全检查
 *   验证攻击者和受害者的 Controller 及 PlayerState 必须有效
 *
 * 步骤2: 类型转换获取 PlayerState
 *   从 Controller.PlayerState 获取 AXMBPlayerState（含分数/击败数数据）
 *
 * 步骤3: 攻击者得分处理
 *   条件：攻击者有效 AND 不是自杀（攻击者≠受害者）AND GameState 有效
 *   操作：
 *   a) AddToScore(1.f): 攻击者分数+1
 *   b) UpdateTopScore(): 更新全局排行榜（可能产生新的第一名）
 *
 * 步骤4: 受害者击败数处理
 *   AddToDefeats(1.f): 受害者击败数+1（记录被击杀次数）
 *
 * 步骤5: 角色淘汰视觉/逻辑处理
 *   ElimmedCharacter->Elim(): 触发角色的淘汰流程
 *   （播放ElimMontage动画 → 溶解效果 → ElimBot粒子 → 延迟重生定时器）
 *
 * 【调用时机】：由角色的 ReceiveDamage 或其他伤害系统中检测到血量归零时调用
 */
void ABlasterGameMode::PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController,
                                        AXMBPlayerController* AttackerController)
{
	// 安全校验：确保攻击者和受害者信息完整
	if (AttackerController == nullptr || AttackerController->PlayerState == nullptr) return;
	if (VictimController == nullptr || VictimController->PlayerState == nullptr) return;
	
	// 获取双方的 PlayerState 数据对象
	AXMBPlayerState* AttackerPlayerState = AttackerController ? Cast<AXMBPlayerState>(AttackerController->PlayerState) : nullptr;
	AXMBPlayerState* VictimPlayerState = VictimController ? Cast<AXMBPlayerState>(VictimController->PlayerState) : nullptr;

	// 获取 GameState 以访问排行榜
	AXMBBlasterGameState* BlasterGameState = GetGameState<AXMBBlasterGameState>();
	
	// 攻击者得分（排除自杀情况：自己杀自己不给分）
	if (AttackerPlayerState && AttackerPlayerState != VictimPlayerState && BlasterGameState)
	{
		TArray<AXMBPlayerState*> PlayersCurrentlyInTheLead;
		for (auto LeadPlayer : BlasterGameState->TopScoringPlayers)
		{
			PlayersCurrentlyInTheLead.Add(LeadPlayer);
		}
		
		AttackerPlayerState->AddToScore(1.f); // 每次击杀+1分
		BlasterGameState->UpdateTopScore(AttackerPlayerState); // 更新全服排行榜

		if (BlasterGameState->TopScoringPlayers.Contains(AttackerPlayerState))
		{
			AXMBCharacterBase* Leader = Cast<AXMBCharacterBase>(AttackerPlayerState->GetPawn());
			if (Leader)
			{
				Leader->MulticastGainedTheLead();
			}
		}

		for (int32 i = 0; i < PlayersCurrentlyInTheLead.Num(); i++)
		{
			if (!BlasterGameState->TopScoringPlayers.Contains(PlayersCurrentlyInTheLead[i]))
			{
				AXMBCharacterBase* Loser = Cast<AXMBCharacterBase>(PlayersCurrentlyInTheLead[i]->GetPawn());
				if (Loser)
				{
					Loser->MulticastLostTheLead();
				}
			}
		}
	}

	// 受害者击败数+1（记录死亡次数）
	if (VictimPlayerState)
	{
		VictimPlayerState->AddToDefeats(1.f);
	}
	
	// 触发被淘汰角色的淘汰流程（动画→溶解→粒子→重生定时器）
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Elim(false);
	}

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AXMBPlayerController* BlasterPlayer = Cast<AXMBPlayerController>(*It);
		if (BlasterPlayer && AttackerPlayerState && VictimPlayerState)
		{
			BlasterPlayer->BroadcastElim(AttackerPlayerState, VictimPlayerState);
		}
	}
}





/**
 * @brief 请求重生被淘汰的角色
 * @param ElimmedCharacter - 要销毁的旧角色
 * @param ElimmedController - 需要重新获得角色的控制器
 *
 * 【重生完整流程】：
 *
 * 步骤1: 清理旧角色
 *   a) Reset(): 将 Actor 所有属性恢复到初始默认值
 *      清理临时状态、标记和网络复制设置
 *      这是 UE5 Actor 的标准重置操作
 *   b) Destroy(): 彻底从世界中销毁 Actor 并释放资源
 *
 * 步骤2: 选择随机复活点
 *   a) GetAllActorsOfClass(APlayerStart): 获取场景中所有的 PlayerStart Actor
 *      这些是在编辑器中放置的"出生点"标记
 *   b) RandRange(0, Num-1): 从所有出生点中随机选一个
 *      TODO: 可优化为避免多个玩家复用到同一点（如最近未使用的点优先）
 *
 * 步骤3: 在选定的出生点重新生成角色
 *   RestartPlayerAtPlayerStart(): 引擎内置方法，会：
 *   - 在指定 PlayerStart 位置生成默认 Pawn
 *   - 将 Controller Possess 到新 Pawn 上
 *   - 触发 OnPossess 回调（恢复HUD等UI状态）
 */
void ABlasterGameMode::RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController)
{
	if (ElimmedCharacter)
	{
		// Reset 恢复所有属性到初始默认值（清理临时状态、网络标记等）
		ElimmedCharacter->Reset();
		// 从世界中彻底销毁旧的 Actor
		ElimmedCharacter->Destroy();
	}

	if (ElimmedController)
	{
		// 收集场景中的所有 PlayerStart 出生点Actor
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		// 随机选择一个出生点索引
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		
		// 在选定出生点处重新生成角色并将控制器绑定上去
		RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
	}
}



void ABlasterGameMode::PlayerLeftGame(AXMBPlayerState* PlayerLeaving)
{
	if (PlayerLeaving == nullptr) return;
	AXMBBlasterGameState* BlasterGameState = GetGameState<AXMBBlasterGameState>();
	if (BlasterGameState && BlasterGameState->TopScoringPlayers.Contains(PlayerLeaving))
	{
		BlasterGameState->TopScoringPlayers.Remove(PlayerLeaving);
	}

	AXMBCharacterBase* CharacterLeaving = Cast<AXMBCharacterBase>(PlayerLeaving->GetPawn());
	if (CharacterLeaving)
	{
		CharacterLeaving->Elim(true);
	}
	
}

/**
 * @brief MatchState 变化时的广播通知 - 将状态变化推送给所有 PlayerController
 *
 * 【调用时机】：当 SetMatchState() 被调用导致状态发生变化时，引擎自动触发此回调
 *
 * 【逻辑说明】：
 * 遍历当前世界中的所有 PlayerController，对每个 AXMBPlayerController 实例
 * 调用其 OnMatchStateSet(MatchState)，使每个客户端都能：
 * - 切换对应的 UI（隐藏公告栏/显示主HUD/显示结算面板）
 * - 更新本地 MatchState 副本用于倒计时计算
 *
 * 【遍历方式】：使用 TIterator 遍历 PlayerController 列表
 * 这比 TArray 更高效且不需要额外内存分配
 */
void ABlasterGameMode::OnMatchStateSet()
{
	Super::OnMatchStateSet(); // 先执行父类的默认处理

	// 遍历所有在线玩家的控制器并通知状态变化
	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AXMBPlayerController* BlasterPlayerController = Cast<AXMBPlayerController>(*It);
		if (BlasterPlayerController)
		{
			BlasterPlayerController->OnMatchStateSet(MatchState, bTeamsMatch);
		}
	}
}
