// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NumberBaseballGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStateChanged);

UCLASS()
class SAMPLECHAT_API ANumberBaseballGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
private:
    TArray<int32> ServerAnswer;
    TMap<FString, int32> PlayerAttempts;
    bool bGameActive;

protected:
    virtual void BeginPlay() override;

public:
    ANumberBaseballGameMode();

    UFUNCTION(BlueprintCallable)
    void HandleChatCommand(const FString& PlayerName, const FString& Command);

    void RestartGame();
    bool IsValidGuess(const FString& Guess) const;
    TArray<int32> ParseGuess(const FString& Guess) const;
    void CheckEndCondition();

    UPROPERTY(BlueprintAssignable)
    FOnGameStateChanged OnGameStateChanged;

    UPROPERTY(BlueprintReadOnly)
    FString CurrentGameMessage;
};
