#include "NumberBaseballGameMode.h"
#include "BaseballGameState.h"
#include "UNumberBaseballLib.h"

ANumberBaseballGameMode::ANumberBaseballGameMode()
{
    bGameActive = false;
}

void ANumberBaseballGameMode::BeginPlay()
{
    Super::BeginPlay();
    RestartGame();
}

void ANumberBaseballGameMode::RestartGame()
{
    ServerAnswer = UUNumberBaseballLib::GenerateRandomNumber();
    PlayerAttempts.Empty();
    PlayerAttempts.Add("Host", 0);
    PlayerAttempts.Add("Guest", 0);
    bGameActive = true;

    FString FirstTurn = "Host";

    if (ABaseballGameState* GS = GetGameState<ABaseballGameState>())
    {
        GS->SetCurrentTurn(FirstTurn);
        GS->SetGameMessage(TEXT("새로운 숫자 야구 게임이 시작됐습니다!"));
    }
}

bool ANumberBaseballGameMode::IsValidGuess(const FString& Guess) const
{
    if (Guess.Len() != 3) return false;
    TSet<TCHAR> CharSet;
    for (auto Char : Guess)
    {
        if (!FChar::IsDigit(Char) || Char == '0') return false;
        CharSet.Add(Char);
    }
    return CharSet.Num() == 3;
}

TArray<int32> ANumberBaseballGameMode::ParseGuess(const FString& Guess) const
{
    TArray<int32> Result;
    for (auto Char : Guess)
        Result.Add(FCString::Atoi(&Char));
    return Result;
}

void ANumberBaseballGameMode::HandleChatCommand(const FString& PlayerName, const FString& Command)
{
    if (!bGameActive || !Command.StartsWith("/")) return;

    FString GuessStr = Command.RightChop(1);

    ABaseballGameState* GS = GetGameState<ABaseballGameState>();
    if (!GS) return;

    if (PlayerName != GS->CurrentTurn)
    {
        GS->SetGameMessage(FString::Printf(TEXT("지금은 %s의 차례입니다."), *GS->CurrentTurn));
        return;
    }

    if (!IsValidGuess(GuessStr))
    {
        PlayerAttempts[PlayerName] = 3;
        GS->SetGameMessage(FString::Printf(TEXT("%s는 잘못된 입력으로 아웃 처리되었습니다."), *PlayerName));
        OnGameStateChanged.Broadcast();
        CheckEndCondition();
        return;
    }

    TArray<int32> Guess = ParseGuess(GuessStr);
    FGuessResult Result = UUNumberBaseballLib::CheckGuess(ServerAnswer, Guess);

    PlayerAttempts[PlayerName]++;

    if (Result.bWin)
    {
        GS->SetGameMessage(FString::Printf(TEXT("%s Won!! 다시 게임이 시작됐다."), *PlayerName));
        RestartGame();
        return;
    }

    if (Result.bOut)
        GS->SetGameMessage(FString::Printf(TEXT("%s의 결과는 OUT입니다."), *PlayerName));
    else
        GS->SetGameMessage(FString::Printf(TEXT("%s의 결과는 %dS%dB입니다."), *PlayerName, Result.Strikes, Result.Balls));

    FString NextTurn = (PlayerName == "Host") ? "Guest" : "Host";
    GS->SetCurrentTurn(NextTurn);

    OnGameStateChanged.Broadcast();
    CheckEndCondition();
}

void ANumberBaseballGameMode::CheckEndCondition()
{
    ABaseballGameState* GS = GetGameState<ABaseballGameState>();
    if (!GS) return;

    bool bHostOut = PlayerAttempts["Host"] >= 3;
    bool bGuestOut = PlayerAttempts["Guest"] >= 3;

    if (bHostOut && !bGuestOut)
        GS->SetGameMessage(TEXT("Guest Won!! 다시 게임이 시작됐다."));
    else if (!bHostOut && bGuestOut)
        GS->SetGameMessage(TEXT("Host Won!! 다시 게임이 시작됐다."));
    else if (bHostOut && bGuestOut)
        GS->SetGameMessage(TEXT("무승부군. 다시 게임을 시작하지"));
    else
        return;

    RestartGame();
}
