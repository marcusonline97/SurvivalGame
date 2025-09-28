// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalGameCharacter.h"

#ifdef SURVIVALGAME_SurvivalGameCharacter_generated_h
#error "SurvivalGameCharacter.generated.h already included, missing '#pragma once' in SurvivalGameCharacter.h"
#endif
#define SURVIVALGAME_SurvivalGameCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASurvivalGameCharacter ***************************************************
#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();

#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGameCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalGameCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASurvivalGameCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASurvivalGameCharacter)


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASurvivalGameCharacter(ASurvivalGameCharacter&&) = delete; \
	ASurvivalGameCharacter(const ASurvivalGameCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGameCharacter) \
	NO_API virtual ~ASurvivalGameCharacter();


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_21_PROLOG
#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASurvivalGameCharacter;

// ********** End Class ASurvivalGameCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalGame_Source_SurvivalGame_SurvivalGameCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
