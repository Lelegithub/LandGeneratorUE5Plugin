

#include "LandPoissonMeshBuilder.h"
#include "DualMeshBuilder.h"

ULandPoissonMeshBuilder::ULandPoissonMeshBuilder()
{
	PoissonSize = FVector2D(100000.0, 100000.0);
	PoissonSpacing = 1075.0f;
	PoissonSamples = 30;
}

void ULandPoissonMeshBuilder::AddPoints_Implementation(UDualMeshBuilder* Builder, FRandomStream& Rng) const
{
	Builder->AddPoisson(Rng, MapSize - PoissonSize, PoissonSpacing, PoissonSamples);
}
