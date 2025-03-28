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
    ABaseballPlayerController();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> BaseballGameWidgetClass;

    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UUserWidget> ChatInputWidgetClass;

    UUserWidget* ChatInputWidget;

    UFUNCTION(Server, Reliable)
    void Server_SendChatMessage(const FString& Message);

    UFUNCTION(BlueprintCallable)
    void OnChatMessageReceived(const FString& Message);

    bool bReplicates;

private:
    UPROPERTY()
    UUserWidget* BaseballGameWidget;
	
};
