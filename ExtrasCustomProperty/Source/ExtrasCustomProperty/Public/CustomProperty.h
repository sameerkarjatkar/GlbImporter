// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetUserData.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "CustomProperty.generated.h"



/**
 * 
 */

USTRUCT()
 struct FExtraCustomProperty
{
	GENERATED_BODY()
	TSharedPtr<FJsonObject> ExtrasInfo;
		
};

UCLASS()
class EXTRASCUSTOMPROPERTY_API UCustomProperty : public UAssetUserData
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
	FExtraCustomProperty EProperty;

	UPROPERTY()
	FString JsonExtrasInfo;
	
	static UCustomProperty* GetExtrasInfo(UObject* Object);
	static bool SetExtrasInfo(UObject* Object,  TSharedPtr<FJsonObject> ipJsonObject);
	virtual bool IsPostLoadThreadSafe() const override;
	virtual void PostLoad() override;

};
