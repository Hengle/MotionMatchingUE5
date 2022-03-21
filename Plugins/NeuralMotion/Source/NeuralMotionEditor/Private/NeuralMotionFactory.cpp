// Fill out your copyright notice in the Description page of Project Settings.


#include "NeuralMotionFactory.h"
#include "NeuralMotionDatabase.h"


UNeuralMotionFactory::UNeuralMotionFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	//Configure the class that this factory creates
	SupportedClass = UNeuralMotionDatabase::StaticClass();
}


UObject* UNeuralMotionFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UNeuralMotionDatabase* NeuralMotionDatabase = NewObject<UNeuralMotionDatabase>(InParent, InClass, InName, Flags);
	return NeuralMotionDatabase;
}
