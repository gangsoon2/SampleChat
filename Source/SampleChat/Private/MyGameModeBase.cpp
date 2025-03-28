#include "MyGameModeBase.h"
#include "MyTestCPPLib.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

void AMyGameModeBase::SubmitAnswer(APlayerController* Player, const TArray<int32>& Answer)
{
    PlayerAnswers.Add(Player, Answer);
    UE_LOG(LogTemp, Warning, TEXT("%s 정답 등록됨: %d %d %d"),
        *Player->GetName(), Answer[0], Answer[1], Answer[2]);
}

FString AMyGameModeBase::GuessOpponent(APlayerController* Player, const TArray<int32>& Guess)
{
    // 상대 찾기
    for (auto& Elem : PlayerAnswers)
    {
        if (Elem.Key != Player)
        {
            const TArray<int32>& OpponentAnswer = Elem.Value;

            int32 S = 0, B = 0, O = 0;
            UMyTestCPPLib::CalculateStrikeBallOut(OpponentAnswer, Guess, S, B, O);

            return FString::Printf(TEXT("결과: % dS % dB % dO"), S, B, O);
        }
    }

    return TEXT("상대방이 아직 정답을 제출하지 않았습니다.");
}