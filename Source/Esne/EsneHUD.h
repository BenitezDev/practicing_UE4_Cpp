// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UserWidget.h"
#include "EsneHUD.generated.h"

/**
 * 
 */
UCLASS()
class ESNE_API AEsneHUD : public AHUD
{
	GENERATED_BODY()

public:

	// Begin play
	virtual void BeginPlay() override;

	// Widget classes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UUserWidget>> Widgets;

private:

	// Widget instances
	UPROPERTY(Transient)
	TArray<UUserWidget*> m_pWidgets;
};
