// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFMaterialAnalyzer/Public/GLTFMaterialAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialAnalyzer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	GLTFMATERIALANALYZER_API UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer();
	GLTFMATERIALANALYZER_API UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLTFMaterialAnalyzer();
// End Cross Module References
	void UGLTFMaterialAnalyzer::StaticRegisterNativesUGLTFMaterialAnalyzer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFMaterialAnalyzer);
	UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer_NoRegister()
	{
		return UGLTFMaterialAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFMaterialAnalyzer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "GLTFMaterialAnalyzer.h" },
		{ "ModuleRelativePath", "Public/GLTFMaterialAnalyzer.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::ClassParams = {
		&UGLTFMaterialAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UGLTFMaterialAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFMaterialAnalyzer.OuterSingleton, Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFMaterialAnalyzer.OuterSingleton;
	}
	template<> GLTFMATERIALANALYZER_API UClass* StaticClass<UGLTFMaterialAnalyzer>()
	{
		return UGLTFMaterialAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialAnalyzer);
	UGLTFMaterialAnalyzer::~UGLTFMaterialAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFMaterialAnalyzer_Public_GLTFMaterialAnalyzer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFMaterialAnalyzer_Public_GLTFMaterialAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFMaterialAnalyzer, UGLTFMaterialAnalyzer::StaticClass, TEXT("UGLTFMaterialAnalyzer"), &Z_Registration_Info_UClass_UGLTFMaterialAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFMaterialAnalyzer), 516254032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFMaterialAnalyzer_Public_GLTFMaterialAnalyzer_h_2342573786(TEXT("/Script/GLTFMaterialAnalyzer"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFMaterialAnalyzer_Public_GLTFMaterialAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFMaterialAnalyzer_Public_GLTFMaterialAnalyzer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
