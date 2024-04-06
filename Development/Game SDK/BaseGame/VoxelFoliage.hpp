#ifndef UE4SS_SDK_VoxelFoliage_HPP
#define UE4SS_SDK_VoxelFoliage_HPP

#include "VoxelFoliage_enums.hpp"

struct FVoxelFoliageBiomeEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UVoxelFoliage* Foliage;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVoxelFoliageBiomeTypeEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 Seed;                                                                       // 0x0008 (size: 0x4)
    FVoxelFoliageSpawnSettings SpawnSettings;                                         // 0x000C (size: 0x28)

}; // Size: 0x34

struct FVoxelFoliageCustomData
{
    EVoxelFoliageCustomDataType Type;                                                 // 0x0000 (size: 0x1)
    bool bUseMainGenerator;                                                           // 0x0001 (size: 0x1)
    FVoxelGeneratorPicker CustomGenerator;                                            // 0x0008 (size: 0x68)
    FVoxelGeneratorOutputPicker ColorGeneratorOutputName;                             // 0x0070 (size: 0x8)
    FVoxelGeneratorOutputPicker FloatGeneratorOutputName;                             // 0x0078 (size: 0x8)
    int32 UVChannel;                                                                  // 0x0080 (size: 0x4)
    EVoxelUVAxis UVAxis;                                                              // 0x0084 (size: 0x1)

}; // Size: 0x98

struct FVoxelFoliageDensity
{
    EVoxelFoliageDensityType Type;                                                    // 0x0000 (size: 0x1)
    float Constant;                                                                   // 0x0004 (size: 0x4)
    bool bUseMainGenerator;                                                           // 0x0008 (size: 0x1)
    FVoxelGeneratorPicker CustomGenerator;                                            // 0x0010 (size: 0x68)
    FVoxelGeneratorOutputPicker GeneratorOutputName;                                  // 0x0078 (size: 0x8)
    EVoxelRGBA RGBAChannel;                                                           // 0x0080 (size: 0x1)
    int32 UVChannel;                                                                  // 0x0084 (size: 0x4)
    EVoxelUVAxis UVAxis;                                                              // 0x0088 (size: 0x1)
    int32 FiveWayBlendChannel;                                                        // 0x008C (size: 0x4)
    TArray<int32> SingleIndexChannels;                                                // 0x0090 (size: 0x10)
    TArray<int32> MultiIndexChannels;                                                 // 0x00A0 (size: 0x10)
    bool bInvertDensity;                                                              // 0x00B0 (size: 0x1)

}; // Size: 0xC8

struct FVoxelFoliageMesh
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0008 (size: 0x10)
    float Strength;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FVoxelFoliageSave
{
}; // Size: 0x10

struct FVoxelFoliageScale
{
    EVoxelFoliageScaling Scaling;                                                     // 0x0000 (size: 0x1)
    FVoxelFloatInterval ScaleX;                                                       // 0x0004 (size: 0x8)
    FVoxelFloatInterval ScaleY;                                                       // 0x000C (size: 0x8)
    FVoxelFloatInterval ScaleZ;                                                       // 0x0014 (size: 0x8)

}; // Size: 0x1C

struct FVoxelFoliageSpawnSettings
{
    EVoxelFoliageSpawnType SpawnType;                                                 // 0x0000 (size: 0x4)
    FVoxelDistance DistanceBetweenInstances;                                          // 0x0004 (size: 0x8)
    int32 ChunkSize;                                                                  // 0x000C (size: 0x4)
    FVoxelDistance GenerationDistance;                                                // 0x0010 (size: 0x8)
    EVoxelFoliageRandomGenerator RandomGenerator;                                     // 0x0018 (size: 0x1)
    bool bInfiniteGenerationDistance;                                                 // 0x0019 (size: 0x1)
    FVoxelGeneratorOutputPicker HeightGraphOutputName_HeightOnly;                     // 0x001C (size: 0x8)
    bool bCheckIfFloating_HeightOnly;                                                 // 0x0024 (size: 0x1)
    bool bCheckIfCovered_HeightOnly;                                                  // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FVoxelInstancedMeshKey
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0008 (size: 0x10)
    TSubclassOf<class AVoxelFoliageActor> ActorClass;                                 // 0x0018 (size: 0x8)
    FVoxelInstancedMeshSettings InstanceSettings;                                     // 0x0020 (size: 0x180)
    int32 NumCustomDataChannels;                                                      // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FVoxelInstancedMeshSettings
{
    FVoxelInt32Interval CullDistance;                                                 // 0x0000 (size: 0x8)
    bool bCastShadow;                                                                 // 0x0008 (size: 0x1)
    bool bAffectDynamicIndirectLighting;                                              // 0x0009 (size: 0x1)
    bool bAffectDistanceFieldLighting;                                                // 0x000A (size: 0x1)
    bool bCastShadowAsTwoSided;                                                       // 0x000B (size: 0x1)
    bool bReceivesDecals;                                                             // 0x000C (size: 0x1)
    bool bUseAsOccluder;                                                              // 0x000D (size: 0x1)
    FBodyInstance BodyInstance;                                                       // 0x0010 (size: 0x158)
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;           // 0x0168 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x0169 (size: 0x1)
    bool bRenderCustomDepth;                                                          // 0x016A (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x016C (size: 0x4)
    float BuildDelay;                                                                 // 0x0170 (size: 0x4)
    TSubclassOf<class UVoxelHierarchicalInstancedStaticMeshComponent> HISMTemplate;   // 0x0178 (size: 0x8)

}; // Size: 0x180

class AVoxelFoliageActor : public AActor
{
    bool bAutomaticallySetMesh;                                                       // 0x0220 (size: 0x1)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0228 (size: 0x8)
    class UVoxelPhysicsRelevancyComponent* PhysicsRelevancyComponent;                 // 0x0230 (size: 0x8)

}; // Size: 0x238

class UVoxelFoliage : public UObject
{
    TArray<FVoxelFoliageMesh> Meshes;                                                 // 0x0028 (size: 0x10)
    TSubclassOf<class AVoxelFoliageActor> ActorClass;                                 // 0x0038 (size: 0x8)
    FVoxelInstancedMeshSettings InstanceSettings;                                     // 0x0040 (size: 0x180)
    FVoxelGeneratorPicker OutputPickerGenerator;                                      // 0x01C0 (size: 0x68)
    TArray<FVoxelFoliageDensity> Densities;                                           // 0x0228 (size: 0x10)
    FVoxelFoliageSpawnSettings SpawnSettings;                                         // 0x0238 (size: 0x28)
    TArray<FVoxelFoliageCustomData> CustomDatas;                                      // 0x0260 (size: 0x10)
    bool bEnableSlopeRestriction;                                                     // 0x0270 (size: 0x1)
    FVoxelFloatInterval GroundSlopeAngle;                                             // 0x0274 (size: 0x8)
    bool bEnableHeightRestriction;                                                    // 0x027C (size: 0x1)
    FVoxelFloatInterval HeightRestriction;                                            // 0x0280 (size: 0x8)
    float HeightRestrictionFalloff;                                                   // 0x0288 (size: 0x4)
    FVoxelFoliageScale Scaling;                                                       // 0x028C (size: 0x1C)
    EVoxelFoliageRotation RotationAlignment;                                          // 0x02A8 (size: 0x1)
    bool bRandomYaw;                                                                  // 0x02A9 (size: 0x1)
    float RandomPitchAngle;                                                           // 0x02AC (size: 0x4)
    FVector LocalPositionOffset;                                                      // 0x02B0 (size: 0xC)
    FRotator LocalRotationOffset;                                                     // 0x02BC (size: 0xC)
    FVector GlobalPositionOffset;                                                     // 0x02C8 (size: 0xC)
    FVector FloatingDetectionOffset;                                                  // 0x02D4 (size: 0xC)
    bool bSave;                                                                       // 0x02E0 (size: 0x1)
    bool bDoNotDespawn;                                                               // 0x02E1 (size: 0x1)
    FGuid Guid;                                                                       // 0x02E4 (size: 0x10)

}; // Size: 0x2F8

class UVoxelFoliageBiome : public UVoxelFoliageBiomeBase
{
    class UVoxelFoliageBiomeType* Type;                                               // 0x0028 (size: 0x8)
    TArray<FVoxelFoliageBiomeEntry> Entries;                                          // 0x0030 (size: 0x10)

}; // Size: 0x40

class UVoxelFoliageBiomeType : public UObject
{
    FVoxelGeneratorPicker OutputPickerGenerator;                                      // 0x0028 (size: 0x68)
    FVoxelGeneratorOutputPicker BiomeOutput;                                          // 0x0090 (size: 0x8)
    TArray<FVoxelFoliageBiomeTypeEntry> Entries;                                      // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UVoxelFoliageBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SpawnVoxelSpawnerActorsInArea(TArray<class AVoxelFoliageActor*>& OutActors, class AVoxelWorld* World, FVoxelIntBox Bounds, EVoxelSpawnerActorSpawnType SpawnType);
    class AVoxelFoliageActor* SpawnVoxelSpawnerActorByInstanceIndex(class AVoxelWorld* World, class UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32 InstanceIndex);
    void LoadFromSpawnersSave(class AVoxelWorld* World, const FVoxelFoliageSave& Save);
    FVoxelFoliageSave GetSpawnersSave(class AVoxelWorld* World);
    void AddInstances(class AVoxelWorld* World, const TArray<FTransform>& Transforms, const TArray<float>& CustomData, FVoxelInstancedMeshKey MeshKey, FVector FloatingDetectionOffset);
}; // Size: 0x28

class UVoxelFoliageCollection : public UVoxelFoliageCollectionBase
{
    TArray<class UVoxelFoliage*> Foliages;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UVoxelFoliageDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelFoliageSubsystemProxy : public UVoxelFoliageInterfaceSubsystemProxy
{
}; // Size: 0x28

class UVoxelHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    float Voxel_BuildDelay;                                                           // 0x0668 (size: 0x4)
    class UMaterialInterface* Voxel_DebugMaterial;                                    // 0x0670 (size: 0x8)
    FVoxelInstancedMeshKey Voxel_MeshKey;                                             // 0x06A8 (size: 0x1A8)

}; // Size: 0x9B0

class UVoxelInstancedMeshSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

#endif
