// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AssetTypeActions_Base.h"
#include "Templates/SharedPointer.h"


/**
 * Implements an action for UTextAsset assets.
 */
class FTextAssetActions
	: public FAssetTypeActions_Base
{
public:

	/**
	 * Creates and initializes a new instance.
	 *
	 * @param InStyle The style set to use for asset editor toolkits.
	 */
	FTextAssetActions();

public:

	//~ FAssetTypeActions_Base overrides

	
	virtual uint32 GetCategories() override;
	virtual FText GetName() const override;
	virtual UClass* GetSupportedClass() const override;
	
private:

};
