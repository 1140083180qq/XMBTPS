
// ============================================================
// @file XMBPlayerController.cpp
// @brief 玩家控制器实现 - 管理玩家输入、HUD显示、时间同步和比赛状态
//
// 【核心功能概述】：
// 本类继承 APlayerController，是玩家与游戏之间的桥梁：
// 1. HUD数据更新接口（SetHUDHealth/Score/Defeats/Ammo/MatchCountdown）
// 2. 服务器时间同步系统（RTT往返时间校准 → ClientServerDelta偏移量）
// 3. 比赛状态处理（热身→比赛中→冷却 三阶段切换的UI响应）
// 4. 中途加入同步（ServerCheckMatchState → ClientJoinMidgame）
// 5. MatchState 网络复制与 OnRep 回调
// ============================================================

#include "PlayerController/XMBPlayerController.h"

#include "OnlineSubsystemTypes.h"
#include "Character/XMBCharacterBase.h"
#include "Components/Image.h"
#include "GameFramework/GameMode.h"
#include "GameMode/BlasterGameMode.h"
#include "GameState/XMBBlasterGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "PlayerState/XMBPlayerState.h"


/**
 * @brief 控制器初始化 - 游戏开始时调用
 *
 * 【逻辑说明】：
 * 1. 获取并缓存当前关卡关联的 HUD 实例（强制转换为 AXMBHUD 类型）
 * 2. 调用 ServerCheckMatchState 向服务器查询当前比赛状态
 *    这是为了处理中途加入的玩家——他们进入时可能已经处于"比赛中"状态，
 *    需要从服务器获取完整的状态信息来正确设置UI
 */
void AXMBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 缓存 HUD 引用，后续所有 SetHUD 函数都会复用此引用
	XMBHUD = Cast<AXMBHUD>(GetHUD());
	// 向服务器请求当前的匹配状态（用于中途加入同步）
	ServerCheckMatchState();

}

/**
 * @brief 注册网络复制的属性变量
 *
 * 【注册的复制属性】：
 * - MatchState: 当前比赛状态（WaitingToStart / InProgress / Cooldown）
 *   变化时通过 OnRep_MatchState 回调通知客户端
 */
void AXMBPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AXMBPlayerController, MatchState);
}

/**
 * @brief 当控制器成功控制（Possess）一个 Pawn 时调用
 * @param InPawn - 被控制的 Pawn（通常是 AXMBCharacterBase）
 *
 * 【逻辑说明】：
 * 在 Possess 发生时立即将角色的生命值同步到 HUD，
 * 因为此时角色刚创建完成，需要尽快显示初始血量数据。
 * 后续的血量变化则由角色的 OnRep_Health 回调来驱动更新
 */
void AXMBPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// 将被控角色的当前生命值立即写入 HUD 显示
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(InPawn);
	if (XMBCharacter)
	{
		SetHUDHealth(XMBCharacter->GetHealth(), XMBCharacter->GetMaxHealth());
	}

}

/**
 * @brief 每帧更新 - 处理计时显示、时间同步轮询、HUD初始化轮询
 *
 * 【每帧执行的三大任务】：
 * 1. SetHUDTime(): 根据当前 MatchState 和经过的时间计算剩余倒计时并更新HUD
 * 2. CheckTimeSync(): 检查是否到了该进行服务器时间同步的时刻
 * 3. PollInit(): 如果 CharacterOverlayWidget 尚未就绪，持续尝试获取并初始化
 */
void AXMBPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetHUDTime();          // 更新倒计时显示
	CheckTimeSync(DeltaSeconds); // 检查时间同步
	PollInit();
	CheckPing(DeltaSeconds);
	
}



/**
 * @brief 检查是否需要进行服务器时间同步
 * @param DeltaSeconds - 本帧的时间增量
 *
 * 【时间同步机制】：
 * - 维护一个累加器 TimeSyncRunningTime，每帧增加 DeltaSeconds
 * - 当累计超过 TimeSyncFrequency（默认5秒）时触发一次时间同步
 * - 同步后重置累加器为0，开始新一轮计数
 * - 仅对本地玩家控制器执行（IsLocalPlayerController），
 *   因为只有本地客户端需要知道服务器时间来正确显示倒计时
 *
 * 【为什么定期同步？】因为客户端的系统时钟会漂移（drift），
 * 定期校准确保本地计算的倒计时与服务器保持一致
 */
void AXMBPlayerController::CheckTimeSync(float DeltaSeconds)
{
	TimeSyncRunningTime += DeltaSeconds;
	// 仅本地控制器需要时间同步，且达到同步间隔时触发
	if (IsLocalPlayerController() && TimeSyncRunningTime > TimeSyncFrequency)
	{
		// 将当前客户端时间作为请求时间戳发送给服务器
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f; // 重置计时器
	}
}

/**
 * @brief 获取经校准后的服务器等效时间
 * @return 校准后的服务器时间（以 GetWorld()->GetTimeSeconds() 为基准加上偏移量）
 *
 * 【原理】：
 * GetWorld()->GetTimeSeconds() 返回的是自关卡开始以来的本地流逝时间（不包含暂停时间）。
 * 加上 ClientServerDelta（客户端-服务器时间偏差的补偿值）后，
 * 得到的就是近似的服务器当前时间。
 *
 * 【应用场景】：SetHUDTime() 中用于准确计算各阶段倒计时
 */
float AXMBPlayerController::GetServerTime()
{
	// 本地世界时间 + 经过RTT校准的时间偏移 ≈ 服务器当前时间
	return GetWorld()->GetTimeSeconds() + ClientServerDelta;
}

/**
 * @brief 当 Player 被完全接收（Received）时自动调用引擎回调
 *
 * 【触发时机】：客户端连接到服务器且 PlayerController 被完全初始化后
 *
 * 【逻辑说明】：在此刻立即发起首次服务器时间同步请求。
 * 这是最早可以安全发起RPC的时刻——在此之前网络通道可能尚未完全建立。
 * 这次初始同步对于后续所有依赖服务器时间的功能至关重要（如倒计时）
 */
void AXMBPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
	// 连接建立后立即进行第一次时间同步
	if (IsLocalPlayerController())
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
	}
}

/**
 * @brief 设置比赛状态 - 由 GameMode 在状态切换时调用
 * @param State - 新的比赛状态名称
 *
 * 【逻辑说明】：保存新的 MatchState 并根据状态分发处理函数：
 * - InProgress → HandleMatchHasStarted()：隐藏公告栏、显示主HUD
 * - Cooldown → HandleCooldown()：移除主HUD、显示结算信息
 */
void AXMBPlayerController::OnMatchStateSet(FName State)
{
	MatchState = State;

	// 根据新状态分发到对应的处理函数
	if (MatchState == MatchState::InProgress) HandleMatchHasStarted();
	else if (MatchState == MatchState::Cooldown) HandleCooldown();
}

/**
 * @brief MatchState 变化的网络回调 - 客户端收到服务器端 MatchState 变化时自动调用
 *
 * 【与 OnMatchStateSet 的关系】：
 * - OnMatchStateSet: GameMode 主动调用的入口（可能直接调用也可能通过复制触发）
 * - OnRep_MatchState: 纯粹的网络复制回调（MatchState 属性标注了 ReplicatedUsing）
 * 两者的处理逻辑相同，都是根据状态分发到对应的Handle函数
 */
void AXMBPlayerController::OnRep_MatchState()
{
	if (MatchState == MatchState::InProgress) HandleMatchHasStarted();
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldown();
	}
}



/**
 * @brief 处理比赛开始的UI切换
 *
 * 【UI操作流程】：
 * 1. 确保 CharacterOverlayWidget 已创建（若未创建则调用 AddCharacterOverlayWidget 创建）
 * 2. 隐藏 AnnouncementWidget（公告面板不再需要显示）
 *
 * 【效果】：玩家从热身界面切换到游戏主界面（血量/弹药/分数等覆盖层）
 */
void AXMBPlayerController::HandleMatchHasStarted()
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	if (XMBHUD)
	{
		// 如果主覆盖层Widget尚未创建，立即创建
		if (XMBHUD->CharacterOverlayWidget == nullptr) XMBHUD->AddCharacterOverlayWidget();
		// 隐藏热身公告面板
		if (XMBHUD->AnnouncementWidget)
		{
			XMBHUD->AnnouncementWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

/**
 * @brief 处理冷却/结算阶段的UI切换
 *
 * 【完整逻辑流程】：
 *
 * 1. 移除 CharacterOverlayWidget（主游戏HUD不再需要）
 *
 * 2. 显示 AnnouncementWidget 并设置为可见
 *
 * 3. 设置公告标题为 "New Match Starts In:" （提示即将开始新一局）
 *
 * 4. 从 GameState 获取 TopScoringPlayers 列表并生成本局结果信息：
 *    - 列表为空 → 显示"没有最高分"（无人得分的情况）
 *    - 只有1人且是自己 → 显示"你是胜利者!"
 *    - 只有1人且不是自己 → 显示"Winner: XXX"（其他玩家的名字）
 *    - 多人并列第一 → 显示所有获胜者的名字列表
 *
 * 5. 尝试禁用角色输入（bDisableGameplay = true），
 *    但目前代码中被注释掉了（TODO待确认是否启用）
 */
void AXMBPlayerController::HandleCooldown()
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	if(XMBHUD)
	{
		// 移除主游戏HUD覆盖层
		XMBHUD->CharacterOverlayWidget->RemoveFromParent();

		// 验证公告面板的所有必要控件是否有效
		bool bHUDValid = XMBHUD->AnnouncementWidget
			&& XMBHUD->AnnouncementWidget->AnnouncementText
			&& XMBHUD->AnnouncementWidget->InfoText;
		
		if (bHUDValid)
		{
			// 显示公告面板
			XMBHUD->AnnouncementWidget->SetVisibility(ESlateVisibility::Visible);
			// 设置公告标题
			FString AnnouncementText("New Match Starts In:");
			XMBHUD->AnnouncementWidget->AnnouncementText->SetText(FText::FromString(AnnouncementText));

			// 获取 GameState 以访问排行榜数据
			AXMBBlasterGameState* BlasterGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
			// 获取自己的 PlayerState 用于对比
			AXMBPlayerState* BlasterPlayerState = GetPlayerState<AXMBPlayerState>();
			if (BlasterGameState)
			{
				TArray<AXMBPlayerState*> TopPlayers = BlasterGameState->TopScoringPlayers;
				FString InfoTextString;

				// 根据排行榜情况生成不同的结果文字
				if (TopPlayers.Num() == 0)
				{
					InfoTextString = FString("没有最高分");
				}
				else if (TopPlayers.Num() == 1 && TopPlayers[0] == BlasterPlayerState)
				{
					InfoTextString = FString("你是胜利者!"); // 我是唯一的第一名
				}
				else if (TopPlayers.Num() == 1)
				{
					InfoTextString = FString::Printf(TEXT("Winner: \n%s"), *TopPlayers[0]->GetPlayerName()); // 别人是第一名
				}
				else if (TopPlayers.Num() > 1)
				{
					InfoTextString = FString("Players tied for the win:\n"); // 多人同分
					for (auto TiedPlayer : TopPlayers)
					{
						InfoTextString.Append(FString::Printf(TEXT("\n%s"), *TiedPlayer->GetPlayerName()));
					}
				}
				XMBHUD->AnnouncementWidget->InfoText->SetText(FText::FromString(InfoTextString));
			}
		}
	}

	// 可选：禁用角色输入（冷却期间不允许操作），目前代码中已注释掉
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(GetPawn());
	if (XMBCharacter && XMBCharacter->GetCombatComponent())
	{
		// 注释掉的禁用输入代码（待确认是否需要恢复）
		// XMBCharacter->bDisableGameplay = true;
		// XMBCharacter->GetCombatComponent()->FireButtonPressed(false);
	}
}

/**
 * @brief 延迟初始化 CharacterOverlayWidget 并恢复之前暂存的HUD数据
 *
 * 【问题背景】：在 BeginPlay 时 CharacterOverlayWidget 可能尚未创建完毕
 * （UMG Widget 的创建依赖于蓝图的加载顺序），导致 SetHUDHealth 等函数
 * 无法找到目标控件。此时数据被暂存到 HUdHealth/HUDScore 等成员变量中。
 *
 * 【解决方法】：在 Tick 中每帧调用 PollInit 检查 Widget 是否已创建，
 * 一旦创建完成，立即使用之前暂存的数据调用各 SetHUD 函数完成真正的UI更新，
 * 然后将 CharacterOverlayWidget 缓存起来避免重复检查。
 */
void AXMBPlayerController::PollInit()
{
	if (CharacterOverlayWidget == nullptr)
	{
		// 检查 HUD 和其下的 CharacterOverlayWidget 是否已有效
		if (XMBHUD && XMBHUD->CharacterOverlayWidget)
		{
			// 缓存 Widget 引用
			CharacterOverlayWidget = XMBHUD->CharacterOverlayWidget;
			if (CharacterOverlayWidget)
			{
				// 使用之前暂存的值恢复所有 HUD 数据
				if (bInitializeHealth) SetHUDHealth(HUdHealth, HUDMaxHealth); // 恢复血量显示
				if (bInitializeShield) SetHUDShield(HUdShield,HUDMaxShield);//盾量
				if (bInitializeScore) SetHUDScore(HUDScore);                   // 恢复分数显示
				if (bInitializeDefeats) SetHUDDefeats(HUDDefeats);               // 恢复击败数显示

				if (bInitializeWeaponAmmo) SetHUDWeaponAmmo(HUDWeaponAmmo);
				if (bInitializeCarriedAmmo) SetHUDCarriedAmmo(HUDCarriedAmmo);
				// SetHUDHealth(HUdHealth, HUDMaxHealth);
				// SetHUDShield(HUdShield,HUDMaxShield);

				
				AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(GetPawn());
				if (BlasterCharacter && BlasterCharacter->GetCombatComponent())
				{
					SetHUDGrenades(BlasterCharacter->GetCombatComponent()->GetGrenades());
					// if (bInitializeGrenades) SetHUDGrenades(BlasterCharacter->GetCombatComponent()->GetGrenades());
				}
			}
		}
	}
}



/**
 * @brief 更新HUD上的生命值显示
 * @param Health - 当前生命值
 * @param MaxHealth - 最大生命值
 *
 * 【双路径设计】：
 * - 路径A（Widget已就绪）：直接更新血条进度条(HealthBar) + 文字数值(HealthText)
 *   血条使用百分比：HealthPercent = Health / MaxHealth
 *   文字格式："当前/最大"，如 "85/100"（使用 CeilToInt 向上取整）
 *
 * - 路径B（Widget未就绪）：将数值暂存到成员变量中，并标记 bInitializeCharcterOverlay=true
 *   PollInit 会在后续帧中检测到此标记并重新调用本函数完成实际更新
 *   这种延迟重试机制解决了 Widget 创建时序不确定的问题
 */
void AXMBPlayerController::SetHUDHealth(float Health, float MaxHealth)
{
	// 惰性获取或复用缓存的 HUD 引用
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;

	// 验证 HUD 及其子 Widget 是否全部有效（链式空指针检查）
	bool bHUDValid = XMBHUD &&XMBHUD->CharacterOverlayWidget &&
			XMBHUD->CharacterOverlayWidget->HealthBar && XMBHUD->CharacterOverlayWidget->HealthText;
	if (bHUDValid)
	{
		// 计算血量百分比并设置到 ProgressBar 组件
		const float HealthPercent = Health / MaxHealth;
		XMBHUD->CharacterOverlayWidget->HealthBar->SetPercent(HealthPercent);
		// 格式化文字为 "当前/最大" 形式（向上取整避免显示0血时的误导）
		FString HealthText = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		XMBHUD->CharacterOverlayWidget->HealthText->SetText(FText::FromString(HealthText));
	}
	else
	{
		// Widget 尚未创建完成，暂存数值等待 PollInit 延迟重试
		// bInitializeCharcterOverlay = true;
		bInitializeHealth = true;
		HUdHealth = Health;
		HUDMaxHealth = MaxHealth;
	}
}

void AXMBPlayerController::SetHUDShield(float Shield, float MaxShield)
{
	// 惰性获取或复用缓存的 HUD 引用
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;

	// 验证 HUD 及其子 Widget 是否全部有效（链式空指针检查）
	bool bHUDValid = XMBHUD &&XMBHUD->CharacterOverlayWidget &&
			XMBHUD->CharacterOverlayWidget->ShieldBar && XMBHUD->CharacterOverlayWidget->ShieldText;
	if (bHUDValid)
	{
		// 计算血量百分比并设置到 ProgressBar 组件
		const float ShieldPercent = Shield / MaxShield;
		XMBHUD->CharacterOverlayWidget->ShieldBar->SetPercent(ShieldPercent);
		// 格式化文字为 "当前/最大" 形式（向上取整避免显示0血时的误导）
		FString ShieldText = FString::Printf(TEXT("%d/%d"), FMath::RoundToInt(Shield), FMath::RoundToInt(MaxShield));
		XMBHUD->CharacterOverlayWidget->ShieldText->SetText(FText::FromString(ShieldText));
	}
	else
	{
		// Widget 尚未创建完成，暂存数值等待 PollInit 延迟重试
		bInitializeShield = true;
		HUdShield = Shield;
		HUDMaxShield = MaxShield;
	}
}

/**
 * @brief 更新HUD上的得分显示
 * @param Score - 当前分数
 *
 * 【逻辑说明】：将分数取整后（FloorToInt向下取整）显示在 ScoreAmount 文本控件中。
 * 使用相同的延迟重试模式处理 Widget 未就绪的情况。
 */
void AXMBPlayerController::SetHUDScore(float Score)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->ScoreAmount;
	if(bHUDValid)
	{
		// 分数向下取整后转为字符串显示
		FString ScoreText = FString::Printf(TEXT("%d"),FMath::FloorToInt(Score));
		XMBHUD->CharacterOverlayWidget->ScoreAmount->SetText(FText::FromString(ScoreText));
	}
	else
	{
		bInitializeScore = true;
		HUDScore = Score; // 暂存分数值
	}
	
}

/**
 * @brief 更新HUD上的击败数显示
 * @param Defeats - 当前击败数
 */
void AXMBPlayerController::SetHUDDefeats(int32 Defeats)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->DefeatsAmount;
	if(bHUDValid)
	{
		FString DefeatsText = FString::Printf(TEXT("%d"),Defeats);
		XMBHUD->CharacterOverlayWidget->DefeatsAmount->SetText(FText::FromString(DefeatsText));
	}
	else
	{
		bInitializeDefeats = true;
		HUDDefeats = Defeats;
	}
}

/**
 * @brief 更新HUD上显示的武器弹夹内弹药数量
 * @param Ammo - 弹夹内剩余弹药数
 *
 * 【调用来源】：WeaponBase.OnRep_Ammo() 和 WeaponBase.SetHUDAmmo()
 */
void AXMBPlayerController::SetHUDWeaponAmmo(int32 Ammo)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->WeaponAmmoAmount;
	if(bHUDValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"),Ammo);
		XMBHUD->CharacterOverlayWidget->WeaponAmmoAmount->SetText(FText::FromString(AmmoText));
	}
	else
	{
		bInitializeWeaponAmmo = true;
		HUDWeaponAmmo = Ammo;
	}
}

/**
 * @brief 更新HUD上显示的携带备用弹药数量
 * @param Ammo - 当前携带的备用弹药总数
 *
 * 【调用来源】：CombatComponent.OnRep_CarriedAmmo() 和 CombatComponent.EquipWeapon()
 */
void AXMBPlayerController::SetHUDCarriedAmmo(int32 Ammo)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->CarriedAmmoAmount;
	if(bHUDValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"),Ammo);
		XMBHUD->CharacterOverlayWidget->CarriedAmmoAmount->SetText(FText::FromString(AmmoText));
	}
	else
	{
		bInitializeCarriedAmmo = true;
		HUDCarriedAmmo = Ammo;
	}
}

/**
 * @brief 更新HUD上的比赛倒计时显示
 * @param CountdownTime - 倒计时的剩余秒数
 *
 * 【格式化规则】：
 * - 若 CountdownTime < 0：清空文本（不显示负数时间）
 * - 否则格式化为 "MM:SS" 格式，如 "02:15"、"00:05"
 *
 * 【计算方式】：
 * Minutes = Floor(CountdownTime / 60)  — 整数分钟部分
 * Seconds = CountdownTime - Minutes * 60  — 剩余秒数（保留小数但格式化时截断）
 */
void AXMBPlayerController::SetHUDMatchCountdown(float CountdownTime)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->MatchCountdownText;
	if(bHUDValid)
	{
		// 时间耗尽时不显示负数
		if (CountdownTime < 0.f)
		{
			XMBHUD->CharacterOverlayWidget->MatchCountdownText->SetText(FText());
			return;
		}
		
		// 分离出分钟和秒数
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;
		
		// 格式化为两位数的 MM:SS 字符串（如 "03:05"）
		FString MatchCountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		XMBHUD->CharacterOverlayWidget->MatchCountdownText->SetText(FText::FromString(MatchCountdownText));
	}
}

/**
 * @brief 计算并更新当前阶段的倒计时显示
 *
 * 【核心算法 - 各阶段的时间计算公式】：
 *
 * GetServerTime() 返回的是经过 ClientServerDelta 校准后的服务器等效时间。
 * LevelStartingTime 是关卡开始时刻的服务器时间戳。
 *
 * === WaitingToStart（热身阶段）===
 * TimeLeft = WarmupTime - GetServerTime() + LevelStartingTime
 * 解释：(热身总时长) - (从开始到现在经过的时间)
 *
 * === InProgress（比赛阶段）===
 * TimeLeft = WarmupTime + MatchTime - GetServerTime() + LevelStartingTime
 * 解释：(热身+比赛的总时长) - (从开始到现在经过的时间)
 *       即：从热身开始算起的总时长减去已过时间
 *
 * === Cooldown（冷却/结算阶段）===
 * TimeLeft = WarmupTime + MatchTime + CooldownTime - GetServerTime() + LevelStartingTime
 * 解释：(三阶段的总时长) - (从开始到现在经过的时间)
 *
 * 【服务器端特殊处理】：如果本机是服务器（HasAuthority），
 * 直接读取 BlasterGameMode 的 CountdownTime 作为权威值，
 * 因为服务器的倒计时是最准确的
 *
 * 【优化】：仅在倒计时整秒变化时才更新UI（CountdownInt 对比 SecondsLeft），
 * 避免每帧都触发 TextBlock 的字符串更新操作
 */
void AXMBPlayerController::SetHUDTime()
{
	float TimeLeft = 0.f;

	// 根据 MatchState 选择对应的时间计算公式
	if (MatchState == MatchState::WaitingToStart)
		TimeLeft = WarmupTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::InProgress)
		TimeLeft = WarmupTime + MatchTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::Cooldown)
		TimeLeft = CooldownTime + WarmupTime + MatchTime - GetServerTime() + LevelStartingTime;

	// 取天花板值（如 5.01s 显示为 6s），确保倒计时不会"跳秒"
	int32 SecondsLeft = FMath::CeilToInt(TimeLeft);

	// 服务器端直接读取 GameMode 的权威倒计时值（最精确）
	if (HasAuthority())
	{
		BlasterGameMode = BlasterGameMode == nullptr ? Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this)) : BlasterGameMode;
		if (BlasterGameMode)
		{
			SecondsLeft = FMath::CeilToInt(BlasterGameMode->GetCountdownTime() + LevelStartingTime);
		}
	}
	
	// 仅当倒计时整秒发生变化时才刷新UI（减少不必要的渲染开销）
	if (CountdownInt != SecondsLeft)
	{
		// 热身和冷却阶段使用公告面板显示倒计时
		if (MatchState == MatchState::WaitingToStart || MatchState == MatchState::Cooldown)
		{
			SetHUDAnnouncementCountdown(TimeLeft);
		}
		// 比赛进行中使用主覆盖层显示倒计时
		if (MatchState == MatchState::InProgress)
		{
			SetHUDMatchCountdown(TimeLeft);
		}
	}
	
	// 记录本次的整秒值供下一帧对比
	CountdownInt = SecondsLeft;
}

/**
 * @brief 更新公告面板（AnnouncementWidget）中的倒计时文字
 * @param CountdownTime - 剩余时间（秒）
 *
 * 【使用场景】：热身等待期间和冷却结算期间显示的倒计时
 * 格式同为 "MM:SS"，负值时清除文字
 */
void AXMBPlayerController::SetHUDAnnouncementCountdown(float CountdownTime)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->AnnouncementWidget
		&& XMBHUD->AnnouncementWidget->WarmupTime;
	if(bHUDValid)
	{
		if (CountdownTime < 0.f)
		{
			XMBHUD->AnnouncementWidget->WarmupTime->SetText(FText()); // 清除倒计时
			return;
		}
		
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;
		
		FString CountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		XMBHUD->AnnouncementWidget->WarmupTime->SetText(FText::FromString(CountdownText));
	}
}

void AXMBPlayerController::SetHUDGrenades(int32 Grenades)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->GrenadeText;
	if(bHUDValid)
	{
		FString GrenadesText = FString::Printf(TEXT("%d"),Grenades);
		XMBHUD->CharacterOverlayWidget->GrenadeText->SetText(FText::FromString(GrenadesText));
	}
	else
	{
		bInitializeGrenades = true;
		HUDGrenades = Grenades;
	}
}



/**
 * @brief 服务器RPC实现 - 处理客户端的时间同步请求
 * @param TimeOfClientRequest - 客户端发送请求时记录的本地时间戳
 *
 * 【逻辑说明】：这是 RTT（Round-Trip Time）校准算法的第一步。
 * 服务器收到请求后，立即记录当前服务器时间，
 * 然后通过 ClientReportServerTime RPC 将两个时间一起返回给客户端：
 * 1. TimeOfClientRequest: 客户端的原始发送时间（原样回传）
 * 2. ServerTimeOfReceipt: 服务器收到请求时的服务器时间
 *
 * 客户端收到这两个值后就能计算出完整的网络往返时间和服务器时间偏差
 */
void AXMBPlayerController::ServerRequestServerTime_Implementation(float TimeOfClientRequest)
{
	// 记录服务器收到请求的时刻
	float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();
	// 将客户端原始时间 + 服务器接收时间一并返回
	ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
}

/**
 * @brief 客户端RPC实现 - 接收服务器返回的时间数据并计算时间偏移
 * @param TimeOfClientRequest - 客户端最初发送请求时的本地时间（服务器原样回传）
 * @param TimeServerReceivedClientRequest - 服务器收到请求时的服务器时间
 *
 * 【RTT校准算法详解】：
 *
 * 设 T0 = TimeOfClientRequest（客户端发送时刻的本地时间）
 *     T1 = TimeServerReceivedClientRequest（服务器收到时的服务器时间）
 *     T2 = GetWorld()->GetTimeSeconds()（客户端收到回复时的本地时间）
 *
 * 步骤1: RoundTripTime = T2 - T0
 *         这是整个请求-响应周期的耗时（包含网络双向传输+服务器处理）
 *
 * 步骤2: CurrentServerTime = T1 + (0.5 × RoundTripTime)
 *         估算"此时此刻"的服务器时间：
 *         T1 是过去某个时刻的服务器时间，
 *         加上半程耗时（假设对称），得到近似当前的服务器时间
 *
 * 步骤3: ClientServerDelta = CurrentServerTime - T2
 *         计算本地时间相对于服务器时间的偏差量
 *         之后每次调用 GetServerTime() 只需：本地时间 + 此偏移量
 *
 * 【精度限制】：假设网络往返是对称的（实际上不一定），
 * 但对于游戏倒计时这类不需要毫秒级精度的场景足够了
 */
void AXMBPlayerController::ClientReportServerTime_Implementation(float TimeOfClientRequest,
	float TimeServerReceivedClientRequest)
{
	// 步骤1: 计算完整的往返时间（从发出请求到收到回复的总耗时）
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;

	SingleTripTime = 0.5f * RoundTripTime;

	// 步骤2: 估算当前服务器时间 = 服务器接收时间 + 半程耗时（假设网络对称）
	float CurrentServerTime = TimeServerReceivedClientRequest + (0.5f * RoundTripTime);

	// 步骤3: 计算并存储时间偏移量，供 GetServerTime() 使用
	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}

/**
 * @brief 服务器RPC实现 - 查询当前比赛的完整状态信息
 *
 * 【用途】：供中途加入的玩家获取他们缺失的游戏状态信息
 *
 * 【返回的数据包括】：
 * - WarmupTime: 热身阶段总时长
 * - MatchTime: 比赛阶段总时长
 * - LevelStartingTime: 关卡开始时刻的服务器时间戳
 * - CooldownTime: 冷却阶段总时长
 * - MatchState: 当前的比赛状态
 *
 * 【调用链路】：Client → ServerCheckMatchState → [服务器] → ClientJoinMidgame(携带全部数据)
 */
void AXMBPlayerController::ServerCheckMatchState_Implementation()
{
	ABlasterGameMode* GameMode = Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		// 收集 GameMode 中的所有时间配置参数
		WarmupTime = GameMode->WarmupTime;
		MatchTime = GameMode->MatchTime;
		LevelStartingTime = GameMode->LevelStartingTime;
		CooldownTime = GameMode->CooldownTime;
		MatchState = GameMode->GetMatchState(); // 获取当前比赛状态
		// 通过 Client RPC 将所有数据送回到客户端
		ClientJoinMidgame(MatchState,WarmupTime,MatchTime,LevelStartingTime,CooldownTime);
	}
	
}

/**
 * @brief 客户端RPC实现 - 接收中途加入所需的全量游戏状态数据
 * @param StateOfMatch - 当前比赛状态
 * @param WarmUp - 热身总时长
 * @param Match - 比赛总时长
 * @param StartingTime - 关卡开始时间戳
 * @param InCooldownTime - 冷却总时长
 *
 * 【逻辑说明】：
 * 1. 保存所有传入的时间参数和状态到本地成员变量
 * 2. 调用 OnMatchStateSet 触发状态变化的UI处理
 * 3. 特殊处理：如果当前处于 WaitingToStart 且 HUD 存在，
 *    手动添加公告 Widget（因为正常流程中 BeginPlay 可能先于此处执行）
 *
 * 【中途加入场景示例】：玩家A在第3分钟加入一场已经开始的比赛，
 * 通过这个机制可以获知"比赛已经进行了多久""还剩多少时间"等信息
 */
void AXMBPlayerController::ClientJoinMidgame_Implementation(FName StateOfMatch,float WarmUp,float Match,float StartingTime,float InCooldownTime)
{
	// 保存服务器传来的全部时间参数
	WarmupTime = WarmUp;
	MatchTime = Match;
	LevelStartingTime = StartingTime;
	CooldownTime = InCooldownTime;
	MatchState = StateOfMatch;
	// 触发状态变更的处理（如显示正确的HUD/公告等）
	OnMatchStateSet(MatchState);

	// 如果处于等待开始阶段且 HUD 已就绪，手动创建公告 Widget
	if (XMBHUD && MatchState == MatchState::WaitingToStart)
	{
		XMBHUD->AddAnnouncement();
	}
}



void AXMBPlayerController::HighPingWarning()
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	
	bool bHUDValid = XMBHUD
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->HighPingImage
		&& XMBHUD->CharacterOverlayWidget->HighPingAnimation;
	if (bHUDValid)
	{
		XMBHUD->CharacterOverlayWidget->HighPingImage->SetOpacity(1.f);
		XMBHUD->CharacterOverlayWidget->PlayAnimation(XMBHUD->CharacterOverlayWidget->HighPingAnimation,0.f,5);
	}
}

void AXMBPlayerController::StopHighPingWarning()
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	
	bool bHUDValid = XMBHUD
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->HighPingImage
		&& XMBHUD->CharacterOverlayWidget->HighPingAnimation;
	if (bHUDValid)
	{
		XMBHUD->CharacterOverlayWidget->HighPingImage->SetOpacity(0.f);
		if (XMBHUD->CharacterOverlayWidget->IsAnimationPlaying(XMBHUD->CharacterOverlayWidget->HighPingAnimation))
		{
			XMBHUD->CharacterOverlayWidget->StopAnimation(XMBHUD->CharacterOverlayWidget->HighPingAnimation);
		}
	}
}

void AXMBPlayerController::CheckPing(float DeltaTime)
{
	if (HasAuthority()) return;
	HighPingRunningTime += DeltaTime;
	if (HighPingRunningTime > CheckPingFrequency)
	{
		PlayerState = PlayerState == nullptr ? GetPlayerState<AXMBPlayerState>() : PlayerState;
		if (PlayerState)
		{
			//此处不需要乘以4了，在ue5内置封装好的函数里，这个函数在返回时已经乘以4了
			// if (PlayerState->GetPingInMilliseconds() > HighPingThreshold)//OLD:此处获取的ping是被压缩过的，此处的ping经过除以4压缩，所以需要乘以4
			// UE_LOG(LogTemp, Warning,TEXT("PlayerState->GetPing * 4: %d"),PlayerState->GetCompressedPing() * 4);
			if (PlayerState->GetCompressedPing() * 4 > HighPingThreshold)//这一句才是原来的意思，应该是通过获取压缩后的ping
			{
				HighPingWarning();
				PingAnimationRunningTime = 0.f;
				ServerReportPingStatus(true);
			}
			else
			{
				
			}
		}
		HighPingRunningTime = 0.f;
	}
	bool bHighPingAnimationPlaying = XMBHUD
		&& XMBHUD->CharacterOverlayWidget
		&& XMBHUD->CharacterOverlayWidget->HighPingAnimation
		&& XMBHUD->CharacterOverlayWidget->IsAnimationPlaying(XMBHUD->CharacterOverlayWidget->HighPingAnimation);
	if (bHighPingAnimationPlaying)
	{
		PingAnimationRunningTime += DeltaTime;
		if (PingAnimationRunningTime > HighPingDuration)
		{
			StopHighPingWarning();
		}
	}
}

//Is the ping too high?
void AXMBPlayerController::ServerReportPingStatus_Implementation(bool bHighPing)
{
	HighPingDelegate.Broadcast(bHighPing);
}