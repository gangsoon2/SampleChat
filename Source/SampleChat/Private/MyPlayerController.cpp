// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyUserWidget.h"


void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (IsLocalController())
    {
        if (ChatWidgetClass)
        {
            UMyUserWidget* Widget = CreateWidget<UMyUserWidget>(this, ChatWidgetClass);
            if (Widget)
            {
                Widget->AddToViewport();

                FInputModeUIOnly InputMode;
                InputMode.SetWidgetToFocus(Widget->TakeWidget());
                InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
                SetInputMode(InputMode);

                bShowMouseCursor = true;

                UE_LOG(LogTemp, Warning, TEXT("위젯 생성 및 입력 모드 설정 완료"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Widget 생성 실패"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ChatWidgetClass가 nullptr입니다"));
        }
    }
}




