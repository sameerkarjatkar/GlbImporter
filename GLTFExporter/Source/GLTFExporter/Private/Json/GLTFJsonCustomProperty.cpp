// Copyright Epic Games, Inc. All Rights Reserved.

#include "Json/GLTFJsonCustomProperty.h"

#include "Serialization/JsonSerializer.h"
#include "Policies\CondensedJsonPrintPolicy.h"
#include "JsonUtilities\Public\JsonObjectConverter.h"


void FGLTFJsonCustomProperty::WriteObject(IGLTFJsonWriter& Writer) const
{
	if (PropertyExtraData)
	{
		TMap<FString, TSharedPtr<FJsonValue>> extraValues = PropertyExtraData->Values;
		FString convertedJsonStringEx;
		Writer.Write<EJson>(extraValues, convertedJsonStringEx);
		convertedJsonStringEx.ReplaceInline(TEXT("\\\\"), TEXT("\\"), ESearchCase::CaseSensitive);
		Writer.Write("extras", convertedJsonStringEx);

		//if (!extraValues.IsEmpty())
		//{
		//	for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : extraValues)
		//	{
		//		const FString& Key = Pair.Key;
		//		FString convertedJsonString;
		//		Writer.Write<EJson>(Key, Pair.Value, convertedJsonString);
		//		TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(convertedJsonString);
		//		Writer.WriteX(Key, convertedJsonString); // Sameer comment
		//		

		//	}
		//}

	}
}









