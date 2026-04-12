
// ============================================================
// @file LobbyGameMode.cpp
// @brief 大厅游戏模式实现 - 管理游戏等待房间（Lobby）的进入/离开逻辑
//
// 【核心功能概述】：
// 本类继承 AGameModeBase（不含传统 GameMode 的重生/Pawn生成功能），
// 因为大厅阶段不需要这些游戏机制，只需要管理玩家连接：
//
// 1. PostLogin: 玩家加入大厅时的处理
//    - 当第2个玩家加入时自动旅行到主游戏地图（BlasterMap）
//    - 使用 SeamlessTravel 实现无缝切换（无加载黑屏）
//
// 2. Logout: 玩家离开大厅时的处理
//    - 调用父类默认清理逻辑
//
// 【设计说明】：
// 大厅使用独立地图(LobbyMap)和独立GameMode(LobbyGameMode)，
// 当玩家数量满足条件后通过 ServerTravel 切换到正式游戏地图。
// 这种"大厅→游戏"的架构是多人游戏的常见模式。
// 当前实现为2人即开始游戏（可扩展为更多玩家）
// ============================================================

#include "GameMode/LobbyGameMode.h"

#include "GameFramework/PlayerState.h"
#include "GameFramework/GameStateBase.h"

/**
 * @brief 玩家登录回调 - 当有玩家成功连接并进入大厅时调用
 * @param NewPlayer - 新加入的玩家的控制器
 *
 * 【完整流程】：
 *
 * 步骤1: 调用父类 PostLogin 执行基础登录处理
 *   （引擎内部的 PlayerState 创建、初始化等标准操作）
 *
 * 步骤2: 检查当前玩家总数
 *   从 GameState.PlayerArray 获取当前已连接的玩家数量
 *
 * 步骤3: 满足条件时开始游戏
 *   当 NumberOfPlayers == 2 时（第2人加入）：
 *   a) 设置 bUseSeamlessTravel = true: 使用无缝旅行模式
 *      无缝旅行不会显示传统的"加载中"黑色屏幕，
 *      而是在后台预加载新地图然后平滑过渡
 *   b) ServerTravel("/Game/Maps/BlasterMap?listen"):
 *      使服务器端旅行到 BlasterMap 地图
 *      "?listen" 参数表示保持服务器监听状态，
 *      所有已连接的客户端也会被自动带往新地图
 *
 * 【关于注释掉的调试代码】：
 * 原代码中有大量被注释的 GEngine->AddOnScreenDebugMessage 调试输出，
 * 用于在屏幕上显示玩家加入信息和房间人数。这些在生产环境可移除或替换为正式UI提示
 */
void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	// 统计当前房间内的玩家总数
	int32 NumberOfPlayers = GetGameState<AGameStateBase>()->PlayerArray.Num();

	// 当第2名玩家加入时，自动开始游戏（可修改此阈值支持更多人）
	if (NumberOfPlayers == 2)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			// 启用无缝旅行模式（避免加载黑屏）
			bUseSeamlessTravel = true;
			// 服务器旅行到主游戏地图，?listen 保持服务器运行状态
			World->ServerTravel(FString("/Game/Maps/BlasterMap?listen"));
		}
	}

	/*
	 * 【调试代码块 - 已注释】
	 * 原用于在屏幕上打印玩家加入信息：
	 * - 房间总人数
	 * - 哪位玩家加入了（玩家名称）
	 * 可通过取消注释来恢复调试输出
	 */
}

/**
 * @brief 玩家登出回调 - 当有玩家断开连接或主动离开大厅时调用
 * @param Exiting - 正在离开的控制器
 *
 * 【逻辑说明】：目前仅调用父类的标准清理操作。
 * 父类会处理：从 PlayerArray 移除该玩家、销毁相关 Actor 等。
 *
 * 【可能的扩展点】：
 * - 如果需要在大厅 UI 中实时显示剩余人数，可在此处添加通知
 * - 如果所有玩家都离开了，可能需要执行特殊清理或关闭服务器
 *
 * 同样有被注释掉的调试代码用于显示退出信息
 */
void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting); // 执行引擎标准的登出清理

	/*
	 * 【调试代码块 - 已注释】
	 * 原用于在屏幕上打印玩家退出信息：
	 * - 退出的玩家名称
	 * - 退出后的剩余人数
	 */
}
