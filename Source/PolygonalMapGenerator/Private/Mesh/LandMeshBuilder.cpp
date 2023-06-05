
#include "LandMeshBuilder.h"
#include "DualMeshBuilder.h"

ULandMeshBuilder::ULandMeshBuilder(){

	MapSize = FVector2D(107500.0, 107500.0);
	BoundarySpacing = 1000;
}

void ULandMeshBuilder::AddPoints_Implementation(UDualMeshBuilder* Builder, FRandomStream& Rng) const
{
	// Do nothing
}

UTriangleDualMesh* ULandMeshBuilder::GenerateDualMesh_Implementation(FRandomStream& Rng) const
{
			UDualMeshBuilder* builder = NewObject<UDualMeshBuilder>();
	builder->Initialize(MapSize, BoundarySpacing);
	AddPoints(builder, Rng);
	return builder->Create();

}
