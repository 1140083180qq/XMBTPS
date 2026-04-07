// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UI/HUD/XMBHUD.h"
#include "XMBPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AXMBPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;
	
	void SetHUDHealth(float Health, float MaxHealth);
	void SetHUDScore(float Score);
	virtual void OnPossess(APawn* InPawn) override;
	void SetHUDDefeats(int32 Defeats);
	void SetHUDWeaponAmmo(int32 Ammo);
	void SetHUDCarriedAmmo(int32 Ammo);
	void SetHUDMatchCountdown(float CountdownTime);

	virtual float GetServerTime();//Synced with server world clock
	virtual void ReceivedPlayer() override;//Sync with server clock as soon as possible
	
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
	
private:
	UPROPERTY()
	AXMBHUD* XMBHUD;

	float MatchTime = 120.f;
	uint32 CountdownInt = 0;

	
	
};
