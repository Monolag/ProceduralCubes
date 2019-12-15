// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
#ifdef PROCEDURALCUBES_ProceduralArea_generated_h
#error "ProceduralArea.generated.h already included, missing '#pragma once' in ProceduralArea.h"
#endif
#define PROCEDURALCUBES_ProceduralArea_generated_h

#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCubesDoor_Statics; \
	PROCEDURALCUBES_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALCUBES_API UScriptStruct* StaticStruct<struct FCubesDoor>();

#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCubesOffcet_Statics; \
	PROCEDURALCUBES_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALCUBES_API UScriptStruct* StaticStruct<struct FCubesOffcet>();

#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshMaterial) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshMaterial(Z_Param_material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateCubes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateCubes(); \
		P_NATIVE_END; \
	}


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshMaterial) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshMaterial(Z_Param_material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateCubes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateCubes(); \
		P_NATIVE_END; \
	}


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralArea(); \
	friend struct Z_Construct_UClass_AProceduralArea_Statics; \
public: \
	DECLARE_CLASS(AProceduralArea, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralCubes"), NO_API) \
	DECLARE_SERIALIZER(AProceduralArea)


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_INCLASS \
private: \
	static void StaticRegisterNativesAProceduralArea(); \
	friend struct Z_Construct_UClass_AProceduralArea_Statics; \
public: \
	DECLARE_CLASS(AProceduralArea, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralCubes"), NO_API) \
	DECLARE_SERIALIZER(AProceduralArea)


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProceduralArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralArea(AProceduralArea&&); \
	NO_API AProceduralArea(const AProceduralArea&); \
public:


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceduralArea(AProceduralArea&&); \
	NO_API AProceduralArea(const AProceduralArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralArea)


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_PRIVATE_PROPERTY_OFFSET
#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_56_PROLOG
#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_PRIVATE_PROPERTY_OFFSET \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_RPC_WRAPPERS \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_INCLASS \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_PRIVATE_PROPERTY_OFFSET \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_INCLASS_NO_PURE_DECLS \
	AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALCUBES_API UClass* StaticClass<class AProceduralArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedWorldInteraction_ProceduralCubes_HostProject_Plugins_ProceduralCubes_Source_ProceduralCubes_Public_ProceduralArea_h


#define FOREACH_ENUM_ERENDERTYPE(op) \
	op(ERenderType::cube) \
	op(ERenderType::texture) 

enum class ERenderType : uint8;
template<> PROCEDURALCUBES_API UEnum* StaticEnum<ERenderType>();

#define FOREACH_ENUM_ECUBEPARTS(op) \
	op(ECubeParts::top) \
	op(ECubeParts::bottom) \
	op(ECubeParts::left) \
	op(ECubeParts::right) \
	op(ECubeParts::forward) \
	op(ECubeParts::backward) 

enum class ECubeParts : uint8;
template<> PROCEDURALCUBES_API UEnum* StaticEnum<ECubeParts>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
