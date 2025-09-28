// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalGamePlayerController.h"

#ifdef SURVIVALGAME_SurvivalGamePlayerController_generated_h
#error "SurvivalGamePlayerController.generated.h already included, missing '#pragma once' in SurvivalGamePlayerController.h"
#endif
#define SURVIVALGAME_SurvivalGamePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASurvivalGamePlayerController ********************************************
SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGamePlayerController_NoRegister();

#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGamePlayerController(); \
	friend struct Z_Construct_UClass_ASurvivalGamePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SURVIVALGAME_API UClass* Z_Construct_UClass_ASurvivalGamePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASurvivalGamePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), Z_Construct_UClass_ASurvivalGamePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASurvivalGamePlayerController)


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASurvivalGamePlayerController(ASurvivalGamePlayerController&&) = delete; \
	ASurvivalGamePlayerController(const ASurvivalGamePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGamePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGamePlayerController) \
	NO_API virtual ~ASurvivalGamePlayerController();


#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h_17_PROLOG
#define FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASurvivalGamePlayerController;

// ********** End Class ASurvivalGamePlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalGame_Source_SurvivalGame_SurvivalGamePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
