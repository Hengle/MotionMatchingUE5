// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMotionEditor/Public/NeuralMotionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMotionFactory() {}
// Cross Module References
	NEURALMOTIONEDITOR_API UClass* Z_Construct_UClass_UNeuralMotionFactory_NoRegister();
	NEURALMOTIONEDITOR_API UClass* Z_Construct_UClass_UNeuralMotionFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NeuralMotionEditor();
// End Cross Module References
	void UNeuralMotionFactory::StaticRegisterNativesUNeuralMotionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMotionFactory);
	UClass* Z_Construct_UClass_UNeuralMotionFactory_NoRegister()
	{
		return UNeuralMotionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMotionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMotionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMotionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMotionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NeuralMotionFactory.h" },
		{ "ModuleRelativePath", "Public/NeuralMotionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMotionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMotionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMotionFactory_Statics::ClassParams = {
		&UNeuralMotionFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMotionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMotionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMotionFactory()
	{
		if (!Z_Registration_Info_UClass_UNeuralMotionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMotionFactory.OuterSingleton, Z_Construct_UClass_UNeuralMotionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMotionFactory.OuterSingleton;
	}
	template<> NEURALMOTIONEDITOR_API UClass* StaticClass<UNeuralMotionFactory>()
	{
		return UNeuralMotionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMotionFactory);
	struct Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotionEditor_Public_NeuralMotionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotionEditor_Public_NeuralMotionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMotionFactory, UNeuralMotionFactory::StaticClass, TEXT("UNeuralMotionFactory"), &Z_Registration_Info_UClass_UNeuralMotionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMotionFactory), 107955330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotionEditor_Public_NeuralMotionFactory_h_1368853026(TEXT("/Script/NeuralMotionEditor"),
		Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotionEditor_Public_NeuralMotionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotionEditor_Public_NeuralMotionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
