// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UNumberBaseballLib.generated.h"

USTRUCT(BlueprintType)
struct FGuessResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 Strikes;

    UPROPERTY(BlueprintReadOnly)
    int32 Balls;

    UPROPERTY(BlueprintReadOnly)
    bool bOut;

    UPROPERTY(BlueprintReadOnly)
    bool bWin;
};

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UUNumberBaseballLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GenerateRandomNumber();

    UFUNCTION(BlueprintCallable)
    static FGuessResult CheckGuess(const TArray<int32>& Answer, const TArray<int32>& Guess);
	
};
