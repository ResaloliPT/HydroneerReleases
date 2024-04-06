#ifndef UE4SS_SDK_VoxelFoliage_HPP
#define UE4SS_SDK_VoxelFoliage_HPP

#include "VoxelFoliage_enums.hpp"

struct FVoxelFoliageMesh
{
    class UStaticMesh* Mesh;
    TArray<class UMaterialInterface*> Materials;
    float Strength;

};

struct FVoxelInstancedMeshSettings
{
    FVoxelInt32Interval CullDistance;
    bool bCastShadow;
    bool bAffectDynamicIndirectLighting;
    bool bAffectDistanceFieldLighting;
    bool bCastShadowAsTwoSided;
    bool bReceivesDecals;
    bool bUseAsOccluder;
    FBodyInstance BodyInstance;
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;
    FLightingChannels LightingChannels;
    bool bRenderCustomDepth;
    int32 CustomDepthStencilValue;
    float BuildDelay;
    TSubclassOf<class UVoxelHierarchicalInstancedStaticMeshComponent> HISMTemplate;

};

struct FVoxelFoliageDensity
{
    EVoxelFoliageDensityType Type;
    float Constant;
    bool bUseMainGenerator;
    FVoxelGeneratorPicker CustomGenerator;
    FVoxelGeneratorOutputPicker GeneratorOutputName;
    EVoxelRGBA RGBAChannel;
    int32 UVChannel;
    EVoxelUVAxis UVAxis;
    int32 FiveWayBlendChannel;
    TArray<int32> SingleIndexChannels;
    TArray<int32> MultiIndexChannels;
    bool bInvertDensity;

};

struct FVoxelFoliageSpawnSettings
{
    EVoxelFoliageSpawnType SpawnType;
    FVoxelDistance DistanceBetweenInstances;
    int32 ChunkSize;
    FVoxelDistance GenerationDistance;
    EVoxelFoliageRandomGenerator RandomGenerator;
    bool bInfiniteGenerationDistance;
    FVoxelGeneratorOutputPicker HeightGraphOutputName_HeightOnly;
    bool bCheckIfFloating_HeightOnly;
    bool bCheckIfCovered_HeightOnly;

};

struct FVoxelFoliageCustomData
{
    EVoxelFoliageCustomDataType Type;
    bool bUseMainGenerator;
    FVoxelGeneratorPicker CustomGenerator;
    FVoxelGeneratorOutputPicker ColorGeneratorOutputName;
    FVoxelGeneratorOutputPicker FloatGeneratorOutputName;
    int32 UVChannel;
    EVoxelUVAxis UVAxis;

};

struct FVoxelFoliageScale
{
    EVoxelFoliageScaling Scaling;
    FVoxelFloatInterval ScaleX;
    FVoxelFloatInterval ScaleY;
    FVoxelFloatInterval ScaleZ;

};

class UVoxelFoliage : public UObject
{
    TArray<FVoxelFoliageMesh> Meshes;
    TSubclassOf<class AVoxelFoliageActor> ActorClass;
    FVoxelInstancedMeshSettings InstanceSettings;
    FVoxelGeneratorPicker OutputPickerGenerator;
    TArray<FVoxelFoliageDensity> Densities;
    FVoxelFoliageSpawnSettings SpawnSettings;
    TArray<FVoxelFoliageCustomData> CustomDatas;
    bool bEnableSlopeRestriction;
    FVoxelFloatInterval GroundSlopeAngle;
    bool bEnableHeightRestriction;
    FVoxelFloatInterval HeightRestriction;
    float HeightRestrictionFalloff;
    FVoxelFoliageScale Scaling;
    EVoxelFoliageRotation RotationAlignment;
    bool bRandomYaw;
    float RandomPitchAngle;
    FVector LocalPositionOffset;
    FRotator LocalRotationOffset;
    FVector GlobalPositionOffset;
    FVector FloatingDetectionOffset;
    bool bSave;
    bool bDoNotDespawn;
    FGuid Guid;

};

class AVoxelFoliageActor : public AActor
{
    bool bAutomaticallySetMesh;
    class UStaticMeshComponent* StaticMeshComponent;
    class UVoxelPhysicsRelevancyComponent* PhysicsRelevancyComponent;

};

struct FVoxelFoliageBiomeTypeEntry
{
    FName Name;
    int32 Seed;
    FVoxelFoliageSpawnSettings SpawnSettings;

};

class UVoxelFoliageBiomeType : public UObject
{
    FVoxelGeneratorPicker OutputPickerGenerator;
    FVoxelGeneratorOutputPicker BiomeOutput;
    TArray<FVoxelFoliageBiomeTypeEntry> Entries;

};

struct FVoxelFoliageBiomeEntry
{
    FName Name;
    class UVoxelFoliage* Foliage;

};

class UVoxelFoliageBiome : public UVoxelFoliageBiomeBase
{
    class UVoxelFoliageBiomeType* Type;
    TArray<FVoxelFoliageBiomeEntry> Entries;

};

struct FVoxelFoliageSave
{
};

struct FVoxelInstancedMeshKey
{
    class UStaticMesh* Mesh;
    TArray<class UMaterialInterface*> Materials;
    TSubclassOf<class AVoxelFoliageActor> ActorClass;
    FVoxelInstancedMeshSettings InstanceSettings;
    int32 NumCustomDataChannels;

};

class UVoxelFoliageBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SpawnVoxelSpawnerActorsInArea(TArray<class AVoxelFoliageActor*>& OutActors, class AVoxelWorld* World, FVoxelIntBox Bounds, EVoxelSpawnerActorSpawnType SpawnType);
    class AVoxelFoliageActor* SpawnVoxelSpawnerActorByInstanceIndex(class AVoxelWorld* World, class UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32 InstanceIndex);
    void LoadFromSpawnersSave(class AVoxelWorld* World, const FVoxelFoliageSave& Save);
    FVoxelFoliageSave GetSpawnersSave(class AVoxelWorld* World);
    void AddInstances(class AVoxelWorld* World, const TArray<FTransform>& Transforms, const TArray<float>& CustomData, FVoxelInstancedMeshKey MeshKey, FVector FloatingDetectionOffset);
};

class UVoxelFoliageCollection : public UVoxelFoliageCollectionBase
{
    TArray<class UVoxelFoliage*> Foliages;

};

class UVoxelFoliageDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

class UVoxelFoliageSubsystemProxy : public UVoxelFoliageInterfaceSubsystemProxy
{
};

class UVoxelHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    float Voxel_BuildDelay;
    class UMaterialInterface* Voxel_DebugMaterial;
    FVoxelInstancedMeshKey Voxel_MeshKey;

};

class UVoxelInstancedMeshSubsystemProxy : public UVoxelStaticSubsystemProxy
{
};

#endif
