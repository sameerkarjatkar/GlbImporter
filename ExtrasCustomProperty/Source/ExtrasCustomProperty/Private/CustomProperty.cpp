// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomProperty.h"
//#include "ComponentAssetBroker.h"
#include "AssetRegistry/AssetRegistryModule.h"

bool UCustomProperty::IsPostLoadThreadSafe() const
{
	return true;
}



void UCustomProperty::PostLoad()
{
	Super::PostLoad();

	// RF_Transactional flag can cause a crash on save for Blueprint instances, and old data was flagged.
	ClearFlags(RF_Transactional);

	// A serialization issue caused nullptr to be serialized instead of valid UDatasmithObjectTemplate pointers.
	// This cleanup ensure values from this map can always be dereferenced
	//for (auto It = ObjectTemplates.CreateIterator(); It; ++It)
	//{
	//	if (!It->Value)
	//	{
	//		It.RemoveCurrent();
	////		UE_LOG(LogDatasmithContent, Warning, TEXT("Serialization issue: null value found in templates"))
	//	}
	//}
}

UCustomProperty* UCustomProperty::GetExtrasInfo(UObject* Object)
{
	/*if (IInterface_AssetUserData* AssetUserData = Cast<IInterface_AssetUserData>(Object))
	{
		return Cast<UCustomProperty>(AssetUserData->GetAssetUserDataOfClass(UCustomProperty::StaticClass()));
	}*/

	if (IInterface_AssetUserData* AssetUserData = Cast<IInterface_AssetUserData>(Object))
	{
		UCustomProperty* pCustomProperty = Cast<UCustomProperty>(AssetUserData->GetAssetUserDataOfClass(UCustomProperty::StaticClass()));

		if (pCustomProperty)
		{
			FString ExtrasAsString;
			

			UStaticMesh* pMesh = Cast<UStaticMesh>(Object);
			if (pMesh)
			{
				const TArray<UAssetUserData*>* pAssetUserData = pMesh->GetAssetUserDataArray();
				for (UAssetUserData* pAssetData : *pAssetUserData)
				{
					UCustomProperty* ipCustomProperty = Cast<UCustomProperty>(pAssetData);
					if (ipCustomProperty)
					{
						TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ipCustomProperty->JsonExtrasInfo);
					//	;
						if (!FJsonSerializer::Deserialize(JsonReader, ipCustomProperty->EProperty.ExtrasInfo))
						{
							UE_LOG(LogTemp, Error, TEXT("Failed to Deserialize Custom Extras Property:Mesh"));
						}
					}
				}
			}

			UMaterial* pMaterial = Cast<UMaterial>(Object);
			if (pMaterial)
			{
				if (IInterface_AssetUserData* AnimAssetUserData = Cast< IInterface_AssetUserData >(pMaterial))
				{
					UCustomProperty* AnimLevelLink = AnimAssetUserData->GetAssetUserData< UCustomProperty >();
					if (AnimLevelLink)
					{
						UCustomProperty* pMaterialCustomProperty = AnimAssetUserData->GetAssetUserData< UCustomProperty >();
						TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(pMaterialCustomProperty->JsonExtrasInfo);
						//	;
						if (!FJsonSerializer::Deserialize(JsonReader, pMaterialCustomProperty->EProperty.ExtrasInfo))
						{
							UE_LOG(LogTemp, Error, TEXT("Failed to Deserialize Custom Extras Property:Material"));
						}
					}
				}
				
			}
			
		}
		return Cast<UCustomProperty>(AssetUserData->GetAssetUserDataOfClass(UCustomProperty::StaticClass()));
	}

	return nullptr;
}

//bool UCustomProperty::SetExtrasInfo(UObject* Object, FName Key, const FJsonObject& Value)
bool UCustomProperty::SetExtrasInfo(UObject* iObject,  TSharedPtr<FJsonObject> ipJsonObject)
{
	if (AActor* Actor = Cast<AActor>(iObject))
	{
		iObject = Actor->GetRootComponent();
	}

	if (IInterface_AssetUserData* AssetUserData = Cast<IInterface_AssetUserData>(iObject))
	{
		UCustomProperty* CustomUserData = AssetUserData->GetAssetUserData< UCustomProperty >();
		// Set the JSonObject for the Object 

		//
		if (!CustomUserData)
		{
			CustomUserData = NewObject<UCustomProperty>(iObject, NAME_None, RF_Public | RF_Transactional);
			CustomUserData->EProperty.ExtrasInfo = ipJsonObject;

			if (ipJsonObject)
			{
				FString ExtrasAsString = "";
				TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<TCHAR>::Create(&ExtrasAsString);
				if (FJsonSerializer::Serialize(ipJsonObject.ToSharedRef(), JsonWriter) == false)
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to Serialize Extras Custom Property"));
				}
				CustomUserData->JsonExtrasInfo = ExtrasAsString;
				JsonWriter->Close();
			}

			//CustomUserData->testProperty = "TEstMetaData";

			FAssetRegistryModule::AssetCreated(CustomUserData);

			AssetUserData->AddAssetUserData(CustomUserData);
		
	
			UMaterial* pMaterial = Cast<UMaterial>(iObject);
			if (pMaterial)
			{
				pMaterial->AddAssetUserData(CustomUserData);
				
			}
			
			UStaticMesh* pMesh = Cast<UStaticMesh>(iObject);
			if (pMesh)
			{
				pMesh->AddAssetUserData(CustomUserData);
			}

			
		}
	}

	return true;
}

