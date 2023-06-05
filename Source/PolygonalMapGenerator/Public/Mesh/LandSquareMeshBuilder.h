

#pragma once

#include "CoreMinimal.h"
#include "LandMeshBuilder.h"
#include "LandSquareMeshBuilder.generated.h"


UCLASS()
class POLYGONALMAPGENERATOR_API ULandSquareMeshBuilder : public ULandMeshBuilder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1"))
	int32 NumberOfPoints;

public:
	ULandSquareMeshBuilder();

protected:
	virtual void AddPoints_Implementation(UDualMeshBuilder* Builder, FRandomStream& Rng) const override;
};
