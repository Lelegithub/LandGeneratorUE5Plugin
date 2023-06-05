

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TriangleDualMesh.h"
#include "MapUtils.h"
#include "LandWater.generated.h"


UCLASS(Abstract, Blueprintable)
class POLYGONALMAPGENERATOR_API ULandWater : public UDataAsset
{
	GENERATED_BODY()

public:
	// The value governing when a tile should be marked as water.
	// Higher values mean more tiles will become water.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterCutoff;
	// Inverts all non-border land and water.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvertLandAndWater;

public:
	ULandWater();

protected:
	virtual void AssignOcean_Implementation(TArray<bool>& r_ocean, UTriangleDualMesh* Mesh, const TArray<bool>& r_water) const;
	virtual void AssignWater_Implementation(TArray<bool>& r_water, FRandomStream& Rng, UTriangleDualMesh* Mesh, const FIslandShape& Shape) const;
	virtual bool IsPointLand_Implementation(FPointIndex Point, UTriangleDualMesh* Mesh, const FVector2D& HalfMeshSize, const FVector2D& Offset, const FIslandShape& Shape) const;
	virtual void InitializeWater_Implementation(TArray<bool>& r_water, UTriangleDualMesh* Mesh, FRandomStream& Rng) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Procedural Generation|Island Generation|Water")
	bool IsPointLand(FPointIndex Point, UTriangleDualMesh* Mesh, const FVector2D& HalfMeshSize, const FVector2D& Offset, const FIslandShape& Shape) const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Procedural Generation|Island Generation|Water")
	void InitializeWater(UPARAM(ref) TArray<bool>& r_water, UTriangleDualMesh* Mesh, UPARAM(ref) FRandomStream& Rng) const;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Procedural Generation|Island Generation|Water")
	void AssignOcean(UPARAM(ref) TArray<bool>& OceanRegions, UTriangleDualMesh* Mesh, const TArray<bool>& WaterRegions) const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Procedural Generation|Island Generation|Water")
	void AssignWater(UPARAM(ref) TArray<bool>& WaterRegions, UPARAM(ref) FRandomStream& Rng, UTriangleDualMesh* Mesh, const FIslandShape& IslandShape) const;

	// Alias for AssignWater, using the old-style function name (for people coming from the old API).
	void assign_r_water(TArray<bool>& r_water, FRandomStream& Rng, UTriangleDualMesh* Mesh, const FIslandShape& Shape) const;
	// Alias for AssignOcean, using the old-style function name (for people coming from the old API).
	void assign_r_ocean(TArray<bool>& r_ocean, UTriangleDualMesh* Mesh, const TArray<bool>& r_water) const;
};
