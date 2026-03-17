// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/OverheadWidget.h"


void UOverheadWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UOverheadWidget::SetDisplayText(FString TextToDisplay)
{
	if (DisplayText)
	{
		DisplayText->SetText(FText::FromString(TextToDisplay));
	}
}

void UOverheadWidget::ShowPlayerNetRole(APawn* InPawn)
{
	ENetRole RemoteRole = InPawn->GetLocalRole();
	FString Role;
	switch (RemoteRole)
	{
	case ROLE_Authority:
		Role = FString("Authority");
		break;
	case ROLE_AutonomousProxy:
		Role = FString("ROLE_Autonomous Proxy");
		break;
	case ROLE_SimulatedProxy:
		Role = FString("Simulated Proxy");
		break;
	case ROLE_None:
		Role = FString("None");
		break;
	}
	FString RemoteRoleString = FString::Printf(TEXT("Remote Role: %s"), *Role);
	SetDisplayText(RemoteRoleString);
	
}


void UOverheadWidget::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	RemoveFromParent();
}
