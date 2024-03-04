// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtrasCustomProperty/Public/CustomProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomProperty() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	EXTRASCUSTOMPROPERTY_API UClass* Z_Construct_UClass_UCustomProperty();
	EXTRASCUSTOMPROPERTY_API UClass* Z_Construct_UClass_UCustomProperty_NoRegister();
	EXTRASCUSTOMPROPERTY_API UScriptStruct* Z_Construct_UScriptStruct_FExtraCustomProperty();
	UPackage* Z_Construct_UPackage__Script_ExtrasCustomProperty();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExtraCustomProperty;
class UScriptStruct* FExtraCustomProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExtraCustomProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExtraCustomProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExtraCustomProperty, Z_Construct_UPackage__Script_ExtrasCustomProperty(), TEXT("ExtraCustomProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ExtraCustomProperty.OuterSingleton;
}
template<> EXTRASCUSTOMPROPERTY_API UScriptStruct* StaticStruct<FExtraCustomProperty>()
{
	return FExtraCustomProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExtraCustomProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CustomProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExtraCustomProperty>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExtrasCustomProperty,
		nullptr,
		&NewStructOps,
		"ExtraCustomProperty",
		sizeof(FExtraCustomProperty),
		alignof(FExtraCustomProperty),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExtraCustomProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_ExtraCustomProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExtraCustomProperty.InnerSingleton, Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExtraCustomProperty.InnerSingleton;
	}
	void UCustomProperty::StaticRegisterNativesUCustomProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomProperty);
	UClass* Z_Construct_UClass_UCustomProperty_NoRegister()
	{
		return UCustomProperty::StaticClass();
	}
	struct Z_Construct_UClass_UCustomProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonExtrasInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonExtrasInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_ExtrasCustomProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomProperty.h" },
		{ "ModuleRelativePath", "Public/CustomProperty.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomProperty_Statics::NewProp_EProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomProperty.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomProperty_Statics::NewProp_EProperty = { "EProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomProperty, EProperty), Z_Construct_UScriptStruct_FExtraCustomProperty, METADATA_PARAMS(Z_Construct_UClass_UCustomProperty_Statics::NewProp_EProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomProperty_Statics::NewProp_EProperty_MetaData)) }; // 1363349333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomProperty_Statics::NewProp_JsonExtrasInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomProperty.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomProperty_Statics::NewProp_JsonExtrasInfo = { "JsonExtrasInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomProperty, JsonExtrasInfo), METADATA_PARAMS(Z_Construct_UClass_UCustomProperty_Statics::NewProp_JsonExtrasInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomProperty_Statics::NewProp_JsonExtrasInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomProperty_Statics::NewProp_EProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomProperty_Statics::NewProp_JsonExtrasInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomProperty_Statics::ClassParams = {
		&UCustomProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomProperty_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomProperty()
	{
		if (!Z_Registration_Info_UClass_UCustomProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomProperty.OuterSingleton, Z_Construct_UClass_UCustomProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomProperty.OuterSingleton;
	}
	template<> EXTRASCUSTOMPROPERTY_API UClass* StaticClass<UCustomProperty>()
	{
		return UCustomProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomProperty);
	UCustomProperty::~UCustomProperty() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics::ScriptStructInfo[] = {
		{ FExtraCustomProperty::StaticStruct, Z_Construct_UScriptStruct_FExtraCustomProperty_Statics::NewStructOps, TEXT("ExtraCustomProperty"), &Z_Registration_Info_UScriptStruct_ExtraCustomProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExtraCustomProperty), 1363349333U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomProperty, UCustomProperty::StaticClass, TEXT("UCustomProperty"), &Z_Registration_Info_UClass_UCustomProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomProperty), 1810917122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_677558384(TEXT("/Script/ExtrasCustomProperty"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_ExtrasCustomProperty_Source_ExtrasCustomProperty_Public_CustomProperty_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
