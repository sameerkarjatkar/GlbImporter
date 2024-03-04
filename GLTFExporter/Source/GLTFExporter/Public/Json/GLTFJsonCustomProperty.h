// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Json/GLTFJsonCore.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonTypes.h"

struct GLTFEXPORTER_API FGLTFJsonCustomProperty : IGLTFJsonObject
{
	TSharedPtr<FJsonObject> PropertyExtraData;
	FGLTFJsonCustomProperty() 
	{
	}
	virtual void WriteObject(IGLTFJsonWriter& Writer) const override;

private:
	FString GetFormattedString(const FString& iFormatStr)
	{
		FString resultStr;
		AppendEscapeJsonString(resultStr,iFormatStr );
		return resultStr;

	}

};







