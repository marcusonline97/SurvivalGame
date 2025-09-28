// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGameCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSurvivalGameCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameCameraManager();
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASurvivalGameCameraManager ***********************************************
void ASurvivalGameCameraManager::StaticRegisterNativesASurvivalGameCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASurvivalGameCameraManager;
UClass* ASurvivalGameCameraManager::GetPrivateStaticClass()
{
	using TClass = ASurvivalGameCameraManager;
	if (!Z_Registration_Info_UClass_ASurvivalGameCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SurvivalGameCameraManager"),
			Z_Registration_Info_UClass_ASurvivalGameCameraManager.InnerSingleton,
			StaticRegisterNativesASurvivalGameCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASurvivalGameCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ASurvivalGameCameraManager_NoRegister()
{
	return ASurvivalGameCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASurvivalGameCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "SurvivalGameCameraManager.h" },
		{ "ModuleRelativePath", "SurvivalGameCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASurvivalGameCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameCameraManager_Statics::ClassParams = {
	&ASurvivalGameCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivalGameCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivalGameCameraManager()
{
	if (!Z_Registration_Info_UClass_ASurvivalGameCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalGameCameraManager.OuterSingleton, Z_Construct_UClass_ASurvivalGameCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivalGameCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameCameraManager);
ASurvivalGameCameraManager::~ASurvivalGameCameraManager() {}
// ********** End Class ASurvivalGameCameraManager *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h__Script_SurvivalGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalGameCameraManager, ASurvivalGameCameraManager::StaticClass, TEXT("ASurvivalGameCameraManager"), &Z_Registration_Info_UClass_ASurvivalGameCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalGameCameraManager), 445634315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h__Script_SurvivalGame_3574051656(TEXT("/Script/SurvivalGame"),
	Z_CompiledInDeferFile_FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h__Script_SurvivalGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h__Script_SurvivalGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
