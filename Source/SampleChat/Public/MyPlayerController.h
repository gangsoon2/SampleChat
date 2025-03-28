// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyUserWidget.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UMyUserWidget> ChatWidgetClass;
};
