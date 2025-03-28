#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "BaseballGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameMessageChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnChanged);

UCLASS()
class SAMPLECHAT_API ABaseballGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    ABaseballGameState();

    UPROPERTY(ReplicatedUsing = OnRep_GameMessage, BlueprintReadOnly)
    FString CurrentGameMessage;

    UFUNCTION()
    void OnRep_GameMessage();

    UPROPERTY(BlueprintAssignable)
    FOnGameMessageChanged OnGameMessageChanged;

    void SetGameMessage(const FString& NewMessage);

    UPROPERTY(ReplicatedUsing = OnRep_CurrentTurn, BlueprintReadOnly)
    FString CurrentTurn;

    UFUNCTION()
    void OnRep_CurrentTurn();

    UPROPERTY(BlueprintAssignable)
    FOnTurnChanged OnTurnChanged;

    void SetCurrentTurn(const FString& NewTurn);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
