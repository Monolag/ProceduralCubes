// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/Material.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Math/RandomStream.h"
#include "Engine/Scene.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
#include "ProceduralArea.generated.h"


UENUM(BlueprintType)
enum class ECubeParts : uint8 {
	top,
	bottom,
	left,
	right,
	forward,
	backward
};

UENUM(BlueprintType)
enum class ERenderType : uint8 {
	cube,
	texture
};

USTRUCT(BlueprintType)
struct FCubesOffcet {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Values")
		float minOffcet = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Values")
		float maxOffcet = 10.0f;
};

USTRUCT(BlueprintType)
struct FCubesDoor {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Values")
		ECubeParts part = ECubeParts::left;

	UPROPERTY(EditAnywhere, Category = "Values")
		FVector2D doorSize = { 2, 3 };
};


UCLASS()
class PROCEDURALCUBES_API AProceduralArea : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProceduralArea();

private:

	FRandomStream randStreamNumber = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UInstancedStaticMeshComponent* instMesh = nullptr;

	UInstancedStaticMeshComponent* cornersInstMesh = nullptr;

	UBillboardComponent* scene;

	virtual inline FVector GetRandomStreamVector();

	inline bool bound(int w, int h, int d);

	ECubeParts GetPart(int w, int h, int d);

	bool ContainsDoor(ECubeParts part, int& index);

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Render")
	ERenderType Render;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Render")
	bool regenerate = true;

	UPROPERTY(EditAnywhere, Category = "TextureSetup")
	UTexture2D* texture;

	UPROPERTY(EditAnywhere, Category = "Size")
	int32 height = 5;

	UPROPERTY(EditAnywhere, Category = "Size")
	int32 width = 5;

	UPROPERTY(EditAnywhere, Category = "Size")
	int32 depth = 5;

	UPROPERTY(EditAnywhere, Category = "Setup")
	int seed = 0;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TArray<ECubeParts> roundParts;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TArray<ECubeParts> removedParts;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TArray<FCubesDoor> doorParts;

	UPROPERTY(EditAnywhere, Category = "Setup")
	FCubesOffcet offcet = { 0, 20 };

	UPROPERTY(EditAnywhere, Category = "Setup")
	UStaticMesh* mesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Setup")
	UStaticMesh* cornersMesh = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Materials")
	UMaterial* baseMaterial = nullptr;

	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterial* cornersMaterial = nullptr;

	///////////////////////////////////////////////////////////////////////
	// CALLABLE FUNCTIONS
	UFUNCTION(BlueprintCallable, Category = "ProceduralCubes")
	void GenerateCubes();

	UFUNCTION(BlueprintCallable, Category = "ProceduralCubes")
	void GenerateTexture();

	void ClearInstances();

	UFUNCTION(BlueprintCallable, Category = "ProceduralCubes")
	void SetMeshMaterial(UMaterial* material);

	UFUNCTION(BlueprintCallable, Category = "ProceduralCubes")
	void GenerateArea();

};
