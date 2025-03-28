// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Framework/Application/SlateApplication.h"
#include "BaseballGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UBaseballGameWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* GameMessageText;

	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* ChatInputBox;

	UFUNCTION()
	void OnTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

	UFUNCTION()
	void UpdateGameMessage();

	UFUNCTION(BlueprintCallable)
	void FocusChatInputBox();
};
