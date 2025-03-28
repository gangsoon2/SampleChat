#include "BaseballGameState.h"

ABaseballGameState::ABaseballGameState()
{
    CurrentGameMessage = "";
}

void ABaseballGameState::OnRep_GameMessage()
{
    OnGameMessageChanged.Broadcast();
}

void ABaseballGameState::SetGameMessage(const FString& NewMessage)
{
    CurrentGameMessage = NewMessage;
    OnGameMessageChanged.Broadcast();
}

void ABaseballGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ABaseballGameState, CurrentGameMessage);
}
