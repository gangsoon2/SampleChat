#include "BaseballPlayerController.h"
#include "NumberBaseballGameMode.h"
#include "Kismet/GameplayStatics.h"

ABaseballPlayerController::ABaseballPlayerController()
{
    bReplicates = true;
}

void ABaseballPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (IsLocalController())
    {
        if (BaseballGameWidgetClass)
        {
            BaseballGameWidget = CreateWidget(this, BaseballGameWidgetClass);
            if (BaseballGameWidget)
            {
                BaseballGameWidget->AddToViewport();

                bShowMouseCursor = true;
                SetInputMode(FInputModeGameAndUI());
            }
        }
    }
}

void ABaseballPlayerController::OnChatMessageReceived(const FString& Message)
{
    if (HasAuthority())
    {
        ANumberBaseballGameMode* GM = Cast<ANumberBaseballGameMode>(UGameplayStatics::GetGameMode(this));
        if (GM)
        {
            FString ChatRole = IsLocalController() ? "Host" : "Guest";
            GM->HandleChatCommand(ChatRole, Message);
        }
    }
    else
    {
        Server_SendChatMessage(Message);
    }
}

void ABaseballPlayerController::Server_SendChatMessage_Implementation(const FString& Message)
{
    ANumberBaseballGameMode* GM = Cast<ANumberBaseballGameMode>(UGameplayStatics::GetGameMode(this));
    if (GM)
    {
        FString ChatRole = "Guest";
        GM->HandleChatCommand(ChatRole, Message);
    }
}