// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    TMap<APlayerController*, TArray<int32>> PlayerAnswers;

    void SubmitAnswer(APlayerController* Player, const TArray<int32>& Answer);

    FString GuessOpponent(APlayerController* Player, const TArray<int32>& Guess);
};
