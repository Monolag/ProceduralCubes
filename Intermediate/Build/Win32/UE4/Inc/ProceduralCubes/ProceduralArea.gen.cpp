// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralCubes/Public/ProceduralArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralArea() {}
// Cross Module References
	PROCEDURALCUBES_API UEnum* Z_Construct_UEnum_ProceduralCubes_ERenderType();
	UPackage* Z_Construct_UPackage__Script_ProceduralCubes();
	PROCEDURALCUBES_API UEnum* Z_Construct_UEnum_ProceduralCubes_ECubeParts();
	PROCEDURALCUBES_API UScriptStruct* Z_Construct_UScriptStruct_FCubesDoor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PROCEDURALCUBES_API UScriptStruct* Z_Construct_UScriptStruct_FCubesOffcet();
	PROCEDURALCUBES_API UClass* Z_Construct_UClass_AProceduralArea_NoRegister();
	PROCEDURALCUBES_API UClass* Z_Construct_UClass_AProceduralArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALCUBES_API UFunction* Z_Construct_UFunction_AProceduralArea_GenerateArea();
	PROCEDURALCUBES_API UFunction* Z_Construct_UFunction_AProceduralArea_GenerateCubes();
	PROCEDURALCUBES_API UFunction* Z_Construct_UFunction_AProceduralArea_GenerateTexture();
	PROCEDURALCUBES_API UFunction* Z_Construct_UFunction_AProceduralArea_SetMeshMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ERenderType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralCubes_ERenderType, Z_Construct_UPackage__Script_ProceduralCubes(), TEXT("ERenderType"));
		}
		return Singleton;
	}
	template<> PROCEDURALCUBES_API UEnum* StaticEnum<ERenderType>()
	{
		return ERenderType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERenderType(ERenderType_StaticEnum, TEXT("/Script/ProceduralCubes"), TEXT("ERenderType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralCubes_ERenderType_Hash() { return 1509237873U; }
	UEnum* Z_Construct_UEnum_ProceduralCubes_ERenderType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralCubes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERenderType"), 0, Get_Z_Construct_UEnum_ProceduralCubes_ERenderType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERenderType::cube", (int64)ERenderType::cube },
				{ "ERenderType::texture", (int64)ERenderType::texture },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "cube.Name", "ERenderType::cube" },
				{ "ModuleRelativePath", "Public/ProceduralArea.h" },
				{ "texture.Name", "ERenderType::texture" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralCubes,
				nullptr,
				"ERenderType",
				"ERenderType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECubeParts_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralCubes_ECubeParts, Z_Construct_UPackage__Script_ProceduralCubes(), TEXT("ECubeParts"));
		}
		return Singleton;
	}
	template<> PROCEDURALCUBES_API UEnum* StaticEnum<ECubeParts>()
	{
		return ECubeParts_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECubeParts(ECubeParts_StaticEnum, TEXT("/Script/ProceduralCubes"), TEXT("ECubeParts"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralCubes_ECubeParts_Hash() { return 1071301724U; }
	UEnum* Z_Construct_UEnum_ProceduralCubes_ECubeParts()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralCubes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECubeParts"), 0, Get_Z_Construct_UEnum_ProceduralCubes_ECubeParts_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECubeParts::top", (int64)ECubeParts::top },
				{ "ECubeParts::bottom", (int64)ECubeParts::bottom },
				{ "ECubeParts::left", (int64)ECubeParts::left },
				{ "ECubeParts::right", (int64)ECubeParts::right },
				{ "ECubeParts::forward", (int64)ECubeParts::forward },
				{ "ECubeParts::backward", (int64)ECubeParts::backward },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "backward.Name", "ECubeParts::backward" },
				{ "BlueprintType", "true" },
				{ "bottom.Name", "ECubeParts::bottom" },
				{ "forward.Name", "ECubeParts::forward" },
				{ "left.Name", "ECubeParts::left" },
				{ "ModuleRelativePath", "Public/ProceduralArea.h" },
				{ "right.Name", "ECubeParts::right" },
				{ "top.Name", "ECubeParts::top" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralCubes,
				nullptr,
				"ECubeParts",
				"ECubeParts",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCubesDoor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALCUBES_API uint32 Get_Z_Construct_UScriptStruct_FCubesDoor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCubesDoor, Z_Construct_UPackage__Script_ProceduralCubes(), TEXT("CubesDoor"), sizeof(FCubesDoor), Get_Z_Construct_UScriptStruct_FCubesDoor_Hash());
	}
	return Singleton;
}
template<> PROCEDURALCUBES_API UScriptStruct* StaticStruct<FCubesDoor>()
{
	return FCubesDoor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCubesDoor(FCubesDoor::StaticStruct, TEXT("/Script/ProceduralCubes"), TEXT("CubesDoor"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralCubes_StaticRegisterNativesFCubesDoor
{
	FScriptStruct_ProceduralCubes_StaticRegisterNativesFCubesDoor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CubesDoor")),new UScriptStruct::TCppStructOps<FCubesDoor>);
	}
} ScriptStruct_ProceduralCubes_StaticRegisterNativesFCubesDoor;
	struct Z_Construct_UScriptStruct_FCubesDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_doorSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_part_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_part;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_part_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubesDoor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCubesDoor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCubesDoor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_doorSize_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_doorSize = { "doorSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubesDoor, doorSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_doorSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_doorSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part = { "part", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubesDoor, part), Z_Construct_UEnum_ProceduralCubes_ECubeParts, METADATA_PARAMS(Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCubesDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_doorSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubesDoor_Statics::NewProp_part_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCubesDoor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralCubes,
		nullptr,
		&NewStructOps,
		"CubesDoor",
		sizeof(FCubesDoor),
		alignof(FCubesDoor),
		Z_Construct_UScriptStruct_FCubesDoor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesDoor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCubesDoor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesDoor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCubesDoor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCubesDoor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralCubes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CubesDoor"), sizeof(FCubesDoor), Get_Z_Construct_UScriptStruct_FCubesDoor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCubesDoor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCubesDoor_Hash() { return 2517702851U; }
class UScriptStruct* FCubesOffcet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALCUBES_API uint32 Get_Z_Construct_UScriptStruct_FCubesOffcet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCubesOffcet, Z_Construct_UPackage__Script_ProceduralCubes(), TEXT("CubesOffcet"), sizeof(FCubesOffcet), Get_Z_Construct_UScriptStruct_FCubesOffcet_Hash());
	}
	return Singleton;
}
template<> PROCEDURALCUBES_API UScriptStruct* StaticStruct<FCubesOffcet>()
{
	return FCubesOffcet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCubesOffcet(FCubesOffcet::StaticStruct, TEXT("/Script/ProceduralCubes"), TEXT("CubesOffcet"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralCubes_StaticRegisterNativesFCubesOffcet
{
	FScriptStruct_ProceduralCubes_StaticRegisterNativesFCubesOffcet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CubesOffcet")),new UScriptStruct::TCppStructOps<FCubesOffcet>);
	}
} ScriptStruct_ProceduralCubes_StaticRegisterNativesFCubesOffcet;
	struct Z_Construct_UScriptStruct_FCubesOffcet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxOffcet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxOffcet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minOffcet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minOffcet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubesOffcet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCubesOffcet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_maxOffcet_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_maxOffcet = { "maxOffcet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubesOffcet, maxOffcet), METADATA_PARAMS(Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_maxOffcet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_maxOffcet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_minOffcet_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_minOffcet = { "minOffcet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubesOffcet, minOffcet), METADATA_PARAMS(Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_minOffcet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_minOffcet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCubesOffcet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_maxOffcet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubesOffcet_Statics::NewProp_minOffcet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCubesOffcet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralCubes,
		nullptr,
		&NewStructOps,
		"CubesOffcet",
		sizeof(FCubesOffcet),
		alignof(FCubesOffcet),
		Z_Construct_UScriptStruct_FCubesOffcet_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesOffcet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCubesOffcet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCubesOffcet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCubesOffcet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCubesOffcet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralCubes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CubesOffcet"), sizeof(FCubesOffcet), Get_Z_Construct_UScriptStruct_FCubesOffcet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCubesOffcet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCubesOffcet_Hash() { return 3579082667U; }
	void AProceduralArea::StaticRegisterNativesAProceduralArea()
	{
		UClass* Class = AProceduralArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateArea", &AProceduralArea::execGenerateArea },
			{ "GenerateCubes", &AProceduralArea::execGenerateCubes },
			{ "GenerateTexture", &AProceduralArea::execGenerateTexture },
			{ "SetMeshMaterial", &AProceduralArea::execSetMeshMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProceduralArea_GenerateArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralArea_GenerateArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProceduralCubes" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralArea_GenerateArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralArea, nullptr, "GenerateArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralArea_GenerateArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProceduralArea_GenerateArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralArea_GenerateArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralArea_GenerateArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralArea_GenerateCubes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralArea_GenerateCubes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProceduralCubes" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////\n// CALLABLE FUNCTIONS\n" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
		{ "ToolTip", "CALLABLE FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralArea_GenerateCubes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralArea, nullptr, "GenerateCubes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralArea_GenerateCubes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProceduralArea_GenerateCubes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralArea_GenerateCubes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralArea_GenerateCubes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralArea_GenerateTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralArea_GenerateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProceduralCubes" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralArea_GenerateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralArea, nullptr, "GenerateTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralArea_GenerateTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProceduralArea_GenerateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralArea_GenerateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralArea_GenerateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics
	{
		struct ProceduralArea_eventSetMeshMaterial_Parms
		{
			UMaterial* material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralArea_eventSetMeshMaterial_Parms, material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProceduralCubes" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralArea, nullptr, "SetMeshMaterial", nullptr, nullptr, sizeof(ProceduralArea_eventSetMeshMaterial_Parms), Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralArea_SetMeshMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralArea_SetMeshMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProceduralArea_NoRegister()
	{
		return AProceduralArea::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cornersMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cornersMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cornersMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cornersMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offcet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offcet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_doorParts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_doorParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_removedParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_removedParts;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_removedParts_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_removedParts_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roundParts;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_roundParts_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_roundParts_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regenerate_MetaData[];
#endif
		static void NewProp_regenerate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_regenerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Render_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Render;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Render_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralCubes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProceduralArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralArea_GenerateArea, "GenerateArea" }, // 1258521970
		{ &Z_Construct_UFunction_AProceduralArea_GenerateCubes, "GenerateCubes" }, // 3070395851
		{ &Z_Construct_UFunction_AProceduralArea_GenerateTexture, "GenerateTexture" }, // 3762867787
		{ &Z_Construct_UFunction_AProceduralArea_SetMeshMaterial, "SetMeshMaterial" }, // 2043244964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralArea.h" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMaterial = { "cornersMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, cornersMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_baseMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_baseMaterial = { "baseMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, baseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_baseMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_baseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMesh_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMesh = { "cornersMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, cornersMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_offcet_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_offcet = { "offcet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, offcet), Z_Construct_UScriptStruct_FCubesOffcet, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_offcet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_offcet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts = { "doorParts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, doorParts), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts_Inner = { "doorParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCubesDoor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts = { "removedParts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, removedParts), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_Inner = { "removedParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ProceduralCubes_ECubeParts, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts = { "roundParts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, roundParts), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_Inner = { "roundParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ProceduralCubes_ECubeParts, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_seed_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, seed), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_seed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_depth_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_depth = { "depth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, depth), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_depth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_width_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, width), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_width_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, height), METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_height_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_texture_MetaData[] = {
		{ "Category", "TextureSetup" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	void Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate_SetBit(void* Obj)
	{
		((AProceduralArea*)Obj)->regenerate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate = { "regenerate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProceduralArea), &Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/ProceduralArea.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render = { "Render", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralArea, Render), Z_Construct_UEnum_ProceduralCubes_ERenderType, METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_baseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_cornersMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_offcet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_doorParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_removedParts_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_roundParts_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_regenerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralArea_Statics::NewProp_Render_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralArea_Statics::ClassParams = {
		&AProceduralArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProceduralArea_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralArea_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProceduralArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralArea, 1463173724);
	template<> PROCEDURALCUBES_API UClass* StaticClass<AProceduralArea>()
	{
		return AProceduralArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralArea(Z_Construct_UClass_AProceduralArea, &AProceduralArea::StaticClass, TEXT("/Script/ProceduralCubes"), TEXT("AProceduralArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
