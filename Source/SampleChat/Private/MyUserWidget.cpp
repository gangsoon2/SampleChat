// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameModeBase.h"

void UMyUserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UE_LOG(LogTemp, Warning, TEXT("NativeConstruct 호출됨"));

    if (EditableTextBox_71)
    {
        EditableTextBox_71->OnTextCommitted.AddDynamic(this, &UMyUserWidget::OnTextCommitted);
        UE_LOG(LogTemp, Warning, TEXT("바인딩 성공"));

        FTimerHandle TempHandle;
        GetWorld()->GetTimerManager().SetTimer(
            TempHandle,
            FTimerDelegate::CreateLambda([this]()
                {
                    EditableTextBox_71->SetKeyboardFocus();
                    UE_LOG(LogTemp, Warning, TEXT("SetKeyboardFocus() 지연 호출됨"));
                }),
            0.2f,
            false
        );
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("EditableTextBox_71 is nullptr"));
    }
}


void UMyUserWidget::OnTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    UE_LOG(LogTemp, Warning, TEXT("OnTextCommitted() 호출됨"));
    UE_LOG(LogTemp, Warning, TEXT("CommitMethod: %d"), (int32)CommitMethod);
    UE_LOG(LogTemp, Warning, TEXT("CommitMethod: %d"), (int32)ETextCommit::OnEnter);

    if (CommitMethod != ETextCommit::OnEnter)
    {
        UE_LOG(LogTemp, Warning, TEXT("Enter 키가 아님, 무시함"));
        return;
    }

    FString Msg = Text.ToString();
    UE_LOG(LogTemp, Warning, TEXT("입력값: %s"), *Msg);

    // 정답 제출 명령어: /123
    if (Msg.StartsWith("/") && Msg.Len() == 4)
    {
        FString Digits = Msg.RightChop(1);
        if (Digits.Len() == 3)
        {
            TArray<int32> Answer;
            for (int32 i = 0; i < 3; ++i)
            {
                Answer.Add(FCString::Atoi(&Digits[i]));
            }

            if (AGameModeBase* GM = UGameplayStatics::GetGameMode(GetWorld()))
            {
                if (AMyGameModeBase* MyGM = Cast<AMyGameModeBase>(GM))
                {
                    MyGM->SubmitAnswer(GetOwningPlayer(), Answer);
                    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("정답이 등록되었습니다."));
                }
            }
        }
    }
    else if (Msg.StartsWith("/guess "))
    {
        FString Digits = Msg.RightChop(7);
        if (Digits.Len() == 3)
        {
            TArray<int32> Guess;
            for (int32 i = 0; i < 3; ++i)
            {
                Guess.Add(FCString::Atoi(&Digits[i]));
            }

            if (AGameModeBase* GM = UGameplayStatics::GetGameMode(GetWorld()))
            {
                if (AMyGameModeBase* MyGM = Cast<AMyGameModeBase>(GM))
                {
                    FString Result = MyGM->GuessOpponent(GetOwningPlayer(), Guess);
                    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, Result);
                }
            }
        }
    }

    EditableTextBox_71->SetText(FText::GetEmpty());
}





