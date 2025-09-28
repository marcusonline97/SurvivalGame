// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalGameGameMode.h"

#ifdef SURVIVALGAME_SurvivalGameGameMode_generated_h
#error "SurvivalGameGameMode.generated.h already included, missing '#pragma once' in SurvivalGameGameMode.h"
#endif
#define SURVIVALGAME_SurvivalGameGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASurvivalGameGameMode ****************************************************
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameGameMode_NoRegister();

#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGameGameMode(); \
	friend struct Z_Construct_UClass_ASurvivalGameGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ASurvivalGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), Z_Construct_UClass_ASurvivalGameGameMode_NoRegister) \
	DECLARE_SERIALIZER(ASurvivalGameGameMode)


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASurvivalGameGameMode(ASurvivalGameGameMode&&) = delete; \
	ASurvivalGameGameMode(const ASurvivalGameGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGameGameMode) \
	NO_API virtual ~ASurvivalGameGameMode();


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h_12_PROLOG
#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASurvivalGameGameMode;

// ********** End Class ASurvivalGameGameMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalGame_Source_SurvivalGame_SurvivalGameGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
