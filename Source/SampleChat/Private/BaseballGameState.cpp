#include "BaseballGameState.h"

ABaseballGameState::ABaseballGameState()
{
    CurrentGameMessage = "";
    CurrentTurn = "";
}

void ABaseballGameState::SetGameMessage(const FString& NewMessage)
{
    CurrentGameMessage = NewMessage;
    OnGameMessageChanged.Broadcast();
}

void ABaseballGameState::OnRep_GameMessage()
{
    OnGameMessageChanged.Broadcast();
}

void ABaseballGameState::SetCurrentTurn(const FString& NewTurn)
{
    CurrentTurn = NewTurn;
    OnTurnChanged.Broadcast();
}

void ABaseballGameState::OnRep_CurrentTurn()
{
    OnTurnChanged.Broadcast();
}

void ABaseballGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ABaseballGameState, CurrentGameMessage);
    DOREPLIFETIME(ABaseballGameState, CurrentTurn);
}
