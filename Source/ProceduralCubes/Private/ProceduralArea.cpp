// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralArea.h"

// Check if this location is a corner location
bool AProceduralArea::bound(int w, int h, int d) {
	if (((w > 0) && (w < width - 1)) && ((d > 0) && (d < depth - 1)) || ((w > 0) && (w < width - 1)) && ((h > 0) && (h < height - 1)) || ((h > 0) && (h < height - 1)) && ((d > 0) && (d < depth - 1)))
		return false;
	return true;
}

// Sets default values
AProceduralArea::AProceduralArea() 
{
	seed = FMath::Clamp(seed, 0, 10000);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	scene = CreateDefaultSubobject<UBillboardComponent>(TEXT("BullboardScene"));
	instMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedCubes"));
	cornersInstMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("CornersInstancedCubes"));
	RootComponent = scene;

	randStreamNumber.Initialize(seed);
}

// Generate depending on current render type
void AProceduralArea::GenerateArea() {

	switch (Render) {
		case ERenderType::cube: GenerateCubes(); break;
		case ERenderType::texture: GenerateTexture(); break;
	}

}

// Called when the game starts or when spawned
void AProceduralArea::BeginPlay()
{
	Super::BeginPlay();
}

void AProceduralArea::GenerateCubes() {

	// If we dont need to regenerate cubes every time - uncomment next section
	// Otherwise we will render cubes every manipulation with the blueprint 

	/*
	if (regenerate == false) return;
	regenerate = false;
	*/

	// Initialize instance static meshes 
	if (IsValid(mesh)) {
		instMesh->SetStaticMesh(mesh);
		if (IsValid(baseMaterial)) {
			instMesh->SetMaterial(0, baseMaterial);
		}
		else {
			instMesh->SetMaterial(0, mesh->GetMaterial(0));
		}
	}

	if (IsValid(cornersMesh)) {
		cornersInstMesh->SetStaticMesh(cornersMesh);
		if (IsValid(cornersMaterial)) {
			cornersInstMesh->SetMaterial(0, cornersMaterial);
		}
		else {
			cornersInstMesh->SetMaterial(0, cornersMesh->GetMaterial(0));
		}
	}

	ClearInstances();

	// Get bounds of the mesh to make steps between instances by size of the mesh
	auto meshBounds = 0;
	if (IsValid(mesh)) {
		mesh->CalculateExtendedBounds();
		meshBounds = mesh->GetBounds().BoxExtent.X * 2;
	}

	for (int w = 0; w < width; w++) {
		for (int h = 0; h < height; h++) {
			for (int d = 0; d < depth; d++) {

				// Add instance only if this is a side of the cube and if this part not contains in the removed parts variable
				if ((removedParts.Contains(ECubeParts::backward) ? false : w == 0) ||
					(removedParts.Contains(ECubeParts::bottom) ? false : h == 0) ||
					(removedParts.Contains(ECubeParts::left) ? false : d == 0) ||
					(removedParts.Contains(ECubeParts::top) ? false : h + 1 == height) ||
					(removedParts.Contains(ECubeParts::forward) ? false : w + 1 == width) ||
					(removedParts.Contains(ECubeParts::right) ? false : d + 1 == depth)) {

					// Check if this index is a bound  
					auto isBound = bound(w, h, d);

					if (isBound) {

						FVector newLocation = FVector(GetActorLocation().X + w * meshBounds,
							GetActorLocation().Y + d * meshBounds,
							GetActorLocation().Z + h * meshBounds);

						cornersInstMesh->AddInstance(FTransform(newLocation));
					}
					else {

						// Calculate new location of the instance and place it in the world
						auto curOffcet = GetRandomStreamVector();
						auto currentPart = GetPart(w, h, d);

						int curIndex = 0;

						// If our current part is in the list of doors we need to check the cube : do we need to place him or this cube is in the door area
						if (ContainsDoor(currentPart, curIndex) ?
							!((h <= doorParts[curIndex].doorSize.Y) && ((currentPart == ECubeParts::backward || currentPart == ECubeParts::forward) ?
							((d >= (depth / 2 - doorParts[curIndex].doorSize.X / 2)) && (d < (depth / 2 + doorParts[curIndex].doorSize.X / 2))) :
								((w >= (width / 2 - doorParts[curIndex].doorSize.X / 2)) && (w < (width / 2 + doorParts[curIndex].doorSize.X / 2)))))
							: true) {
							FVector newLocation = FVector(((((roundParts.Contains(ECubeParts::backward) ? false : w == 0) || (roundParts.Contains(ECubeParts::forward) ? false : w + 1 == width))) ? curOffcet.X : 0) + GetActorLocation().X + w * meshBounds,
								(!roundParts.Contains(currentPart) && (currentPart == ECubeParts::left || currentPart == ECubeParts::right) ? curOffcet.Y : 0) + GetActorLocation().Y + d * meshBounds,
								((((roundParts.Contains(ECubeParts::bottom) ? false : h == 0) || (roundParts.Contains(ECubeParts::top) ? false : h + 1 == height))) ? curOffcet.Z : 0) + GetActorLocation().Z + h * meshBounds);

							instMesh->AddInstance(FTransform(newLocation));
						}
					}
				}
			}
		}
	}
}

void AProceduralArea::GenerateTexture() {

	if (regenerate == false) return;
	regenerate = false;

	if (!IsValid(texture)) return;

	const FColor* FormatedImageData = static_cast<const FColor*>(texture->PlatformData->Mips[0].BulkData.LockReadOnly());

	ClearInstances();

	auto meshBounds = 0;
	if (IsValid(mesh)) {
		mesh->CalculateExtendedBounds();
		meshBounds = mesh->GetBounds().BoxExtent.X * 2;
	}

	for (int32 X = 0; X < texture->GetSizeX(); X++)
	{
		for (int32 Y = 0; Y < texture->GetSizeY(); Y++)
		{
			for (int32 Z = 0; Z < height; Z++) {
				FColor PixelColor = FormatedImageData[Y * texture->GetSizeX() + X];
				if (PixelColor.R < 127) {
					auto notBound = !bound(X, Y, Z);
					auto curOffcet = GetRandomStreamVector();
					FVector newLocation = FVector(curOffcet.X + GetActorLocation().X + X * meshBounds,
						curOffcet.Y + GetActorLocation().Y + Y * meshBounds,
						curOffcet.Z + GetActorLocation().Z + Z * meshBounds);
					instMesh->AddInstance(FTransform(newLocation));
				}
			}
		}
	}

	texture->PlatformData->Mips[0].BulkData.Unlock();
}

void AProceduralArea::ClearInstances()
{
	instMesh->ClearInstances();
	cornersInstMesh->ClearInstances();
}

FVector AProceduralArea::GetRandomStreamVector() {
	auto res = FVector(randStreamNumber.FRandRange(offcet.minOffcet, offcet.maxOffcet));
	return res;
}

void AProceduralArea::SetMeshMaterial(UMaterial* material) {
	if (IsValid(material)) {
		instMesh->SetMaterial(0, material);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Instanced static mesh material is not valid"));
	}
}

ECubeParts AProceduralArea::GetPart(int w, int h, int d) {
	if (d == 0) return ECubeParts::left;
	if (d == depth - 1) return ECubeParts::right;
	if (w == 0) return ECubeParts::backward;
	if (w == width - 1) return ECubeParts::forward;
	if (h == 0) return ECubeParts::bottom;
	if (h == height - 1) return ECubeParts::top;
	return ECubeParts::left;
}

bool AProceduralArea::ContainsDoor(ECubeParts part, int& index)
{
	index = 0;

	for (int i = 0; i < doorParts.Num(); i++) {
		if (doorParts[i].part == part) {
			index = i;
			return true;
		}
	}
	return false;
}


