// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFGLTFImporter/Public/GLTFImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFImportFactory() {}
// Cross Module References
	TFGLTFIMPORTER_API UClass* Z_Construct_UClass_UGLTFImportFactory();
	TFGLTFIMPORTER_API UClass* Z_Construct_UClass_UGLTFImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_TFGLTFImporter();
// End Cross Module References
	void UGLTFImportFactory::StaticRegisterNativesUGLTFImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFImportFactory);
	UClass* Z_Construct_UClass_UGLTFImportFactory_NoRegister()
	{
		return UGLTFImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TFGLTFImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFImportFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GLTFImportFactory.h" },
		{ "ModuleRelativePath", "Public/GLTFImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFImportFactory_Statics::ClassParams = {
		&UGLTFImportFactory::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFImportFactory()
	{
		if (!Z_Registration_Info_UClass_UGLTFImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFImportFactory.OuterSingleton, Z_Construct_UClass_UGLTFImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFImportFactory.OuterSingleton;
	}
	template<> TFGLTFIMPORTER_API UClass* StaticClass<UGLTFImportFactory>()
	{
		return UGLTFImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFImportFactory);
	UGLTFImportFactory::~UGLTFImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Public_GLTFImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Public_GLTFImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFImportFactory, UGLTFImportFactory::StaticClass, TEXT("UGLTFImportFactory"), &Z_Registration_Info_UClass_UGLTFImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFImportFactory), 2629390657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Public_GLTFImportFactory_h_1945752471(TEXT("/Script/TFGLTFImporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Public_GLTFImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Public_GLTFImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
