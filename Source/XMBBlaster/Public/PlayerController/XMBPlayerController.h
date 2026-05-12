// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "UI/HUD/XMBHUD.h"
#include "XMBPlayerController.generated.h"

class ABlasterGameMode;

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AXMBPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void SetHUDHealth(float Health, float MaxHealth);//设置生命
	void SetHUDScore(float Score);//设置得分
	void SetHUDDefeats(int32 Defeats);//设置击败数
	void SetHUDWeaponAmmo(int32 Ammo);//设置武器子弹
	void SetHUDCarriedAmmo(int32 Ammo);//设置鞋带的子弹
	void SetHUDMatchCountdown(float CountdownTime);//设置比赛计时
	void SetHUDAnnouncementCountdown(float CountdownTime);//设置热身时的计时
	void SetHUDGrenades(int32 Grenades);

	virtual float GetServerTime();//本地与服务器的延迟(因为请求发送返回都需要时间)
	virtual void ReceivedPlayer() override;//从本地客户端中获取到时间
	
	void OnMatchStateSet(FName State);//更改MatchState时的设置

	
protected:
	virtual void BeginPlay() override;
	
	void SetHUDTime();

	/*
	 * 服务器与客户端的时间同步
	 */

	//Request the current server time, passing in the client`s time when the request was sent
	UFUNCTION(Server,Reliable)
	void ServerRequestServerTime(float TimeOfClientRequest);

	//Reports the current server time to the client in response to ServerRequestServertime
	UFUNCTION(client, Reliable)
	void ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest);

	float ClientServerDelta = 0.f;//Difference between client and server time

	UPROPERTY(EditAnywhere, Category = Time)
	float TimeSyncFrequency = 5.f;

	float TimeSyncRunningTime = 0.f;
	void CheckTimeSync(float DeltaSeconds);

	
	void PollInit();

	void HandleMatchHasStarted();
	void HandleCooldown();
	
	UFUNCTION(Server,Reliable)
	void ServerCheckMatchState();

	UFUNCTION(Client,Reliable)
	void ClientJoinMidgame(FName StateOfMatch,float WarmUp,float Match,float StartingTime,float InCooldownTime);
	
private:
	UPROPERTY()
	AXMBHUD* XMBHUD;

	uint32 CountdownInt = 0;
	float MatchTime = 0.f;
	float WarmupTime = 0.f;
	float CooldownTime = 0.f;
	float LevelStartingTime = 0.f;

	UPROPERTY(ReplicatedUsing = OnRep_MatchState)
	FName MatchState;
	
	UFUNCTION(BlueprintCallable)
	void OnRep_MatchState();

	UPROPERTY()
	UCharacterOverlayWidget* CharacterOverlayWidget;

	bool bInitializeCharcterOverlay = false;

	float HUdHealth;
	float HUDMaxHealth;
	float HUDScore;
	int32 HUDDefeats;
	int32 HUDGrenades;

	UPROPERTY()
	ABlasterGameMode* BlasterGameMode;
	
};


