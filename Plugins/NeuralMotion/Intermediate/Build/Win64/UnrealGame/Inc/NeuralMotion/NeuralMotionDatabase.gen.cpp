// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMotion/Public/NeuralMotionDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMotionDatabase() {}
// Cross Module References
	NEURALMOTION_API UClass* Z_Construct_UClass_UNeuralMotionDatabase_NoRegister();
	NEURALMOTION_API UClass* Z_Construct_UClass_UNeuralMotionDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NeuralMotion();
// End Cross Module References
	void UNeuralMotionDatabase::StaticRegisterNativesUNeuralMotionDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMotionDatabase);
	UClass* Z_Construct_UClass_UNeuralMotionDatabase_NoRegister()
	{
		return UNeuralMotionDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMotionDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMotionDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMotion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMotionDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NeuralMotionDatabase.h" },
		{ "ModuleRelativePath", "Public/NeuralMotionDatabase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMotionDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMotionDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMotionDatabase_Statics::ClassParams = {
		&UNeuralMotionDatabase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMotionDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMotionDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMotionDatabase()
	{
		if (!Z_Registration_Info_UClass_UNeuralMotionDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMotionDatabase.OuterSingleton, Z_Construct_UClass_UNeuralMotionDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMotionDatabase.OuterSingleton;
	}
	template<> NEURALMOTION_API UClass* StaticClass<UNeuralMotionDatabase>()
	{
		return UNeuralMotionDatabase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMotionDatabase);
	struct Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotion_Public_NeuralMotionDatabase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotion_Public_NeuralMotionDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMotionDatabase, UNeuralMotionDatabase::StaticClass, TEXT("UNeuralMotionDatabase"), &Z_Registration_Info_UClass_UNeuralMotionDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMotionDatabase), 4231634673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotion_Public_NeuralMotionDatabase_h_2039639913(TEXT("/Script/NeuralMotion"),
		Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotion_Public_NeuralMotionDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MMImplementation_Plugins_NeuralMotion_Source_NeuralMotion_Public_NeuralMotionDatabase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
