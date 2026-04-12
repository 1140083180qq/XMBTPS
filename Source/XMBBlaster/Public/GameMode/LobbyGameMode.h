// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyGameMode.generated.h"

/**
 * @class ALobbyGameMode
 * @brief 大厅游戏模式
 * 
 * 用于游戏大厅（等待房间）的游戏模式：
 * - 处理玩家进入大厅的逻辑
 * - 处理玩家离开大厅的逻辑
 * 继承自AGameModeBase，不包含传统游戏模式的重生等功能
 */
UCLASS()
class XMBBLASTER_API ALobbyGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	/**
	 * @brief 玩家登录回调（进入大厅时触发）
	 * @param NewPlayer - 新加入的玩家控制器
	 */
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	/**
	 * @brief 玩家登出回调（离开大厅时触发）
	 * @param Exiting - 离开的控制器
	 */
	virtual void Logout(AController* Exiting) override;
};
