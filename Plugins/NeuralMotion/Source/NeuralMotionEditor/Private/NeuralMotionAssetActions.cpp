// Fill out your copyright notice in the Description page of Project Settings.


#include "NeuralMotionAssetActions.h"
#include "NeuralMotionDatabase.h"
// Add default functionality here for any INeuralMotionAssetActions functions that are not pure virtual.


FTextAssetActions::FTextAssetActions()
{
}

uint32 FTextAssetActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}

FText FTextAssetActions::GetName() const
{
	
	return FText::FromString(TEXT("NMDatabase"));
}

UClass* FTextAssetActions::GetSupportedClass() const
{
	return UNeuralMotionDatabase::StaticClass();
}
