// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "NeuralMotionFactory.generated.h"

/**
 * 
 */
UCLASS()
class NEURALMOTIONEDITOR_API UNeuralMotionFactory : public UFactory
{
	GENERATED_BODY()

public:
	UNeuralMotionFactory();


	/* Creates the asset inside the UE4 Editor */
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

};
