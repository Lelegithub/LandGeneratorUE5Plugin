

#pragma once

#include "CoreMinimal.h"
#include "LandWater.h"
#include "QuadWater.generated.h"


UCLASS()
class POLYGONALMAPGENERATOR_API UQuadWater : public ULandWater
{
	GENERATED_BODY()
	
protected:
	virtual bool IsPointLand_Implementation(FPointIndex Point, UTriangleDualMesh* Mesh, const FVector2D& HalfMeshSize, const FVector2D& Offset, const FIslandShape& Shape) const override;
};
