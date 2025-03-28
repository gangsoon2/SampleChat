#include "UNumberBaseballLib.h"


TArray<int32> UUNumberBaseballLib::GenerateRandomNumber()
{
    TArray<int32> Numbers = { 1,2,3,4,5,6,7,8,9 };
    Numbers.Sort([](int32 A, int32 B) { return FMath::RandBool(); });
    return { Numbers[0], Numbers[1], Numbers[2] };
}

FGuessResult UUNumberBaseballLib::CheckGuess(const TArray<int32>& Answer, const TArray<int32>& Guess)
{
    FGuessResult Result{ 0, 0, false, false };

    for (int32 i = 0; i < 3; ++i)
    {
        if (Guess[i] == Answer[i]) Result.Strikes++;
        else if (Answer.Contains(Guess[i])) Result.Balls++;
    }

    Result.bOut = (Result.Strikes == 0 && Result.Balls == 0);
    Result.bWin = (Result.Strikes == 3);

    return Result;
}