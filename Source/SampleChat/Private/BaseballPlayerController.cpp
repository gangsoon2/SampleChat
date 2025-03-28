#include "BaseballPlayerController.h"
#include "NumberBaseballGameMode.h"
#include "Kismet/GameplayStatics.h"

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
    ANumberBaseballGameMode* GM = Cast<ANumberBaseballGameMode>(UGameplayStatics::GetGameMode(this));
    if (GM)
    {
        GM->HandleChatCommand("Host", Message);
    }
}


