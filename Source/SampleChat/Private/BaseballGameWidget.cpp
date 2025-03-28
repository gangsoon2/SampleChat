#include "BaseballGameWidget.h"
#include "NumberBaseballGameMode.h"
#include "BaseballGameState.h"
#include "BaseballPlayerController.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UBaseballGameWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (ABaseballGameState* GS = GetWorld()->GetGameState<ABaseballGameState>())
    {
        GS->OnGameMessageChanged.AddDynamic(this, &UBaseballGameWidget::UpdateGameMessage);
        GS->OnTurnChanged.AddDynamic(this, &UBaseballGameWidget::UpdateTurnIndicator);

        UpdateGameMessage();
        UpdateTurnIndicator();
    }

    if (ChatInputBox)
    {
        ChatInputBox->OnTextCommitted.AddDynamic(this, &UBaseballGameWidget::OnTextCommitted);
    }
}

void UBaseballGameWidget::UpdateGameMessage()
{
    if (ABaseballGameState* GS = GetWorld()->GetGameState<ABaseballGameState>())
    {
        if (GameMessageText)
        {
            GameMessageText->SetText(FText::FromString(GS->CurrentGameMessage));
        }
    }
}

void UBaseballGameWidget::OnTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    if (CommitMethod == ETextCommit::OnEnter)
    {
        if (ABaseballPlayerController* PC = Cast<ABaseballPlayerController>(UGameplayStatics::GetPlayerController(this, 0)))
        {
            PC->OnChatMessageReceived(Text.ToString());
        }

        ChatInputBox->SetText(FText::GetEmpty());
        FocusChatInputBox();
    }
}

void UBaseballGameWidget::FocusChatInputBox()
{
    if (ChatInputBox)
    {
        FSlateApplication::Get().SetKeyboardFocus(ChatInputBox->TakeWidget(), EFocusCause::SetDirectly);
    }
}

void UBaseballGameWidget::UpdateTurnIndicator()
{
    if (TurnIndicatorText)
    {
        if (ABaseballGameState* GS = GetWorld()->GetGameState<ABaseballGameState>())
        {
            TurnIndicatorText->SetText(FText::FromString(FString::Printf(TEXT("현재 차례: %s"), *GS->CurrentTurn)));
        }
    }
}