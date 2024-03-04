// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class UMaterialInstanceDynamic;
/**
 * 
 */
class TFGLTFUtils
{
public:
	TFGLTFUtils();
	static  void InitMaterialShaders(std::vector<UMaterialInstanceDynamic*> & oMaterialInstance);
	static void SetMaterialShaders(UStaticMesh* iMesh, std::vector<UMaterialInstanceDynamic*> oMaterialInstance);
	~TFGLTFUtils();
};
