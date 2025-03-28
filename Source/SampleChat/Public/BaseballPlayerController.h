// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "BaseballPlayerController.generated.h"

UCLASS()
class SAMPLECHAT_API ABaseballPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> BaseballGameWidgetClass;

    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UUserWidget> ChatInputWidgetClass;

    UUserWidget* ChatInputWidget;

    UFUNCTION(BlueprintCallable)
    void OnChatMessageReceived(const FString& Message);

private:
    UPROPERTY()
    UUserWidget* BaseballGameWidget;
	
};
