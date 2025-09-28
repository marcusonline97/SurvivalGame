// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGame_init() {}
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_BulletCountUpdatedDelegate__DelegateSignature();
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_DamagedDelegate__DelegateSignature();
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_PawnDeathDelegate__DelegateSignature();
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_SprintStateChangedDelegate__DelegateSignature();
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SurvivalGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SurvivalGame()
	{
		if (!Z_Registration_Info_UPackage__Script_SurvivalGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalGame_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SurvivalGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2122F262,
				0xF9E6682C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SurvivalGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SurvivalGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SurvivalGame(Z_Construct_UPackage__Script_SurvivalGame, TEXT("/Script/SurvivalGame"), Z_Registration_Info_UPackage__Script_SurvivalGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2122F262, 0xF9E6682C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
