#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyTestCPPLib.generated.h"

UCLASS()
class UMyTestCPPLib : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "BullsAndCows")
    static TArray<int32> GenerateRandomThreeDigit();

    UFUNCTION(BlueprintCallable, Category = "BullsAndCows")
    static void CalculateStrikeBallOut(const TArray<int32>& Answer, const TArray<int32>& Guess, int32& OutStrikes, int32& OutBalls, int32& OutOuts);
};