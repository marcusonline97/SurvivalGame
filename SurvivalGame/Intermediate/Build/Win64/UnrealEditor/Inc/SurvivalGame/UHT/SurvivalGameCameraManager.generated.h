// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalGameCameraManager.h"

#ifdef SURVIVALGAME_SurvivalGameCameraManager_generated_h
#error "SurvivalGameCameraManager.generated.h already included, missing '#pragma once' in SurvivalGameCameraManager.h"
#endif
#define SURVIVALGAME_SurvivalGameCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASurvivalGameCameraManager ***********************************************
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameCameraManager_NoRegister();

#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGameCameraManager(); \
	friend struct Z_Construct_UClass_ASurvivalGameCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ASurvivalGameCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), Z_Construct_UClass_ASurvivalGameCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ASurvivalGameCameraManager)


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASurvivalGameCameraManager(ASurvivalGameCameraManager&&) = delete; \
	ASurvivalGameCameraManager(const ASurvivalGameCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGameCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGameCameraManager) \
	NO_API virtual ~ASurvivalGameCameraManager();


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h_13_PROLOG
#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASurvivalGameCameraManager;

// ********** End Class ASurvivalGameCameraManager *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
