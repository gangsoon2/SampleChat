// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "BaseballGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameMessageChanged);

UCLASS()
class SAMPLECHAT_API ABaseballGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
    ABaseballGameState();

    UPROPERTY(ReplicatedUsing = OnRep_GameMessage, BlueprintReadOnly)
    FString CurrentGameMessage;

    UFUNCTION()
    void OnRep_GameMessage();

    UPROPERTY(BlueprintAssignable)
    FOnGameMessageChanged OnGameMessageChanged;

    void SetGameMessage(const FString& NewMessage);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};
