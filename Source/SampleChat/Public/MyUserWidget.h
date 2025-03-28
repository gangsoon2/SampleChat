// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/EditableTextBox.h"
#include "MyUserWidget.generated.h"

UCLASS()
class SAMPLECHAT_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    virtual void NativeConstruct() override;

    // À§Á¬ ¹ÙÀÎµù (BP¿¡¼­ ¿¬°áµÊ)
    UPROPERTY(meta = (BindWidget))
    UEditableTextBox* EditableTextBox_71;

    UFUNCTION()
    void OnTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);
	
};
