#include "MyTestCPPLib.h"

TArray<int32> UMyTestCPPLib::GenerateRandomThreeDigit()
{
    TArray<int32> Digits;
    for (int32 i = 1; i <= 9; ++i)
    {
        Digits.Add(i);
    }

    // 섞기
    for (int32 i = 0; i < Digits.Num(); ++i)
    {
        int32 SwapIndex = FMath::RandRange(0, Digits.Num() - 1);
        Digits.Swap(i, SwapIndex);
    }

    // 앞의 3개 숫자만 가져오기
    TArray<int32> Result;
    for (int32 i = 0; i < 3; ++i)
    {
        Result.Add(Digits[i]);
    }

    return Result;
}

void UMyTestCPPLib::CalculateStrikeBallOut(const TArray<int32>& Answer, const TArray<int32>& Guess,
    int32& OutStrikes, int32& OutBalls, int32& OutOuts)
{
    OutStrikes = 0;
    OutBalls = 0;

    for (int32 i = 0; i < 3; ++i)
    {
        if (Guess[i] == Answer[i])
        {
            ++OutStrikes;
        }
        else if (Answer.Contains(Guess[i]))
        {
            ++OutBalls;
        }
    }

    // 아웃: 전체에서 S+B 뺀 나머지
    OutOuts = 3 - OutStrikes - OutBalls;
}
