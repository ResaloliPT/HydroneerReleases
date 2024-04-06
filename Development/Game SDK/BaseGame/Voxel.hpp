#ifndef UE4SS_SDK_Voxel_HPP
#define UE4SS_SDK_Voxel_HPP

#include "Voxel_enums.hpp"

struct FModifiedVoxelMaterial
{
    FIntVector Position;                                                              // 0x0000 (size: 0xC)
    FVoxelMaterial OldMaterial;                                                       // 0x000C (size: 0x8)
    FVoxelMaterial NewMaterial;                                                       // 0x0014 (size: 0x8)

}; // Size: 0x1C

struct FModifiedVoxelValue
{
    FIntVector Position;                                                              // 0x0000 (size: 0xC)
    float OldValue;                                                                   // 0x000C (size: 0x4)
    float NewValue;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FVoxelAssetItemReference
{
}; // Size: 0x28

struct FVoxelBasicMaterialCollectionLayer
{
    uint8 LayerIndex;                                                                 // 0x0000 (size: 0x1)
    class UMaterialInterface* LayerMaterial;                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVoxelBoolVector
{
    bool bX;                                                                          // 0x0000 (size: 0x1)
    bool bY;                                                                          // 0x0001 (size: 0x1)
    bool bZ;                                                                          // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FVoxelColorTexture : public FVoxelTextureStructBase
{
}; // Size: 0x18

struct FVoxelCompressedWorldSave
{
    TArray<FVoxelObjectArchiveEntry> Objects;                                         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FVoxelCookedData
{
}; // Size: 0x10

struct FVoxelCookingSettings
{
    int32 RenderOctreeDepth;                                                          // 0x0000 (size: 0x4)
    float VoxelSize;                                                                  // 0x0004 (size: 0x4)
    EVoxelRenderType RenderType;                                                      // 0x0008 (size: 0x1)
    FVoxelGeneratorPicker Generator;                                                  // 0x0010 (size: 0x68)
    bool bLogProgress;                                                                // 0x0078 (size: 0x1)
    bool bFastCollisionCook;                                                          // 0x0079 (size: 0x1)
    bool bCleanCollisionMesh;                                                         // 0x007A (size: 0x1)

}; // Size: 0x80

struct FVoxelDataAssetImportSettings_MagicaVox
{
    bool bUsePalette;                                                                 // 0x0000 (size: 0x1)
    int32 ModelIndex;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelDataItemConstructionInfo
{
    class UVoxelGeneratorInstanceWrapper* Generator;                                  // 0x0000 (size: 0x8)
    FVoxelIntBox Bounds;                                                              // 0x0008 (size: 0x18)
    TArray<float> Parameters;                                                         // 0x0020 (size: 0x10)
    int32 Mask;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FVoxelDataMemoryUsageInMB
{
    float DirtyValues;                                                                // 0x0000 (size: 0x4)
    float CachedValues;                                                               // 0x0004 (size: 0x4)
    float DirtyMaterials;                                                             // 0x0008 (size: 0x4)
    float CachedMaterials;                                                            // 0x000C (size: 0x4)

}; // Size: 0x10

struct FVoxelDisableEditsBoxItemReference
{
}; // Size: 0x28

struct FVoxelDistance
{
    EVoxelDistanceType Type;                                                          // 0x0000 (size: 0x1)
    float Distance;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelFindClosestNonEmptyVoxelResult
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)
    FIntVector Position;                                                              // 0x0004 (size: 0xC)
    float Value;                                                                      // 0x0010 (size: 0x4)
    FVoxelMaterial Material;                                                          // 0x0014 (size: 0x8)

}; // Size: 0x1C

struct FVoxelFlatGeneratorDataItemConfig
{
    float Smoothness;                                                                 // 0x0000 (size: 0x4)
    int32 Mask;                                                                       // 0x0004 (size: 0x4)
    bool bSubtractItems;                                                              // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FVoxelFloatInterval
{
    float Min;                                                                        // 0x0000 (size: 0x4)
    float Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelFloatTexture : public FVoxelTextureStructBase
{
}; // Size: 0x18

struct FVoxelGeneratorInit
{
    float VoxelSize;                                                                  // 0x0000 (size: 0x4)
    int32 WorldSize;                                                                  // 0x0004 (size: 0x4)
    EVoxelRenderType RenderType;                                                      // 0x0008 (size: 0x1)
    EVoxelMaterialConfig MaterialConfig;                                              // 0x0009 (size: 0x1)
    class UVoxelMaterialCollectionBase* MaterialCollection;                           // 0x0010 (size: 0x8)
    TWeakObjectPtr<class AVoxelWorld> World;                                          // 0x0018 (size: 0x8)

}; // Size: 0x90

struct FVoxelGeneratorOutputPicker
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVoxelGeneratorParameter
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    FVoxelGeneratorParameterType Type;                                                // 0x0008 (size: 0x1C)
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FString Category;                                                                 // 0x0038 (size: 0x10)
    FString Tooltip;                                                                  // 0x0048 (size: 0x10)
    int32 Priority;                                                                   // 0x0058 (size: 0x4)
    TMap<class FName, class FString> MetaData;                                        // 0x0060 (size: 0x50)
    FString DefaultValue;                                                             // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FVoxelGeneratorParameterTerminalType
{
    EVoxelGeneratorParameterPropertyType PropertyType;                                // 0x0000 (size: 0x1)
    FName PropertyClass;                                                              // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FVoxelGeneratorParameterType : public FVoxelGeneratorParameterTerminalType
{
    EVoxelGeneratorParameterContainerType ContainerType;                              // 0x000C (size: 0x1)
    FVoxelGeneratorParameterTerminalType ValueType;                                   // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FVoxelGeneratorPicker
{
    EVoxelGeneratorPickerType Type;                                                   // 0x0000 (size: 0x1)
    TSubclassOf<class UVoxelGenerator> Class;                                         // 0x0008 (size: 0x8)
    class UVoxelGenerator* Object;                                                    // 0x0010 (size: 0x8)
    TMap<class FName, class FString> Parameters;                                      // 0x0018 (size: 0x50)

}; // Size: 0x68

struct FVoxelHaltonStream
{
    int32 InitialSeed;                                                                // 0x0000 (size: 0x4)
    uint32 Seed;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelHeightmapImporterWeightmapInfos
{
    FFilePath File;                                                                   // 0x0000 (size: 0x10)
    EVoxelRGBA Layer;                                                                 // 0x0010 (size: 0x1)
    uint8 Index;                                                                      // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FVoxelInstancedMaterialCollectionLayer
{
    uint8 LayerIndex;                                                                 // 0x0000 (size: 0x1)
    class UMaterialInstance* LayerMaterialInstance;                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVoxelInt32Interval
{
    int32 Min;                                                                        // 0x0000 (size: 0x4)
    int32 Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelIntBox
{
    FIntVector Min;                                                                   // 0x0000 (size: 0xC)
    FIntVector Max;                                                                   // 0x000C (size: 0xC)

}; // Size: 0x18

struct FVoxelIntBoxWithValidity
{
    FVoxelIntBox Box;                                                                 // 0x0000 (size: 0x18)
    bool bValid;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FVoxelInvokerSettings
{
    bool bUseForLOD;                                                                  // 0x0000 (size: 0x1)
    int32 LODToSet;                                                                   // 0x0004 (size: 0x4)
    FVoxelIntBox LODBounds;                                                           // 0x0008 (size: 0x18)
    bool bUseForCollisions;                                                           // 0x0020 (size: 0x1)
    FVoxelIntBox CollisionsBounds;                                                    // 0x0024 (size: 0x18)
    bool bUseForNavmesh;                                                              // 0x003C (size: 0x1)
    FVoxelIntBox NavmeshBounds;                                                       // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FVoxelLODMaterialCollections : public FVoxelLODMaterialsBase
{
    class UVoxelMaterialCollectionBase* MaterialCollection;                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVoxelLODMaterials : public FVoxelLODMaterialsBase
{
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVoxelLODMaterialsBase
{
    int32 StartLOD;                                                                   // 0x0000 (size: 0x4)
    int32 EndLOD;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelLandscapeImporterLayerInfo
{
    class ULandscapeLayerInfoObject* LayerInfo;                                       // 0x0000 (size: 0x8)
    EVoxelRGBA Layer;                                                                 // 0x0008 (size: 0x1)
    uint8 Index;                                                                      // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FVoxelLandscapeMaterialCollectionLayer
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    uint8 Index;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FVoxelLandscapeMaterialCollectionPermutation
{
    FName Names;                                                                      // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FVoxelLineTraceParameters
{
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0000 (size: 0x1)
    TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore;                 // 0x0008 (size: 0x10)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x0018 (size: 0x10)
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;                                 // 0x0028 (size: 0x1)
    FLinearColor TraceColor;                                                          // 0x002C (size: 0x10)
    FLinearColor TraceHitColor;                                                       // 0x003C (size: 0x10)
    float DrawTime;                                                                   // 0x004C (size: 0x4)

}; // Size: 0x50

struct FVoxelMagicaVoxSceneEntry
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    class UVoxelDataAsset* Asset;                                                     // 0x0010 (size: 0x8)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FString Layer;                                                                    // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FVoxelMaterial
{
}; // Size: 0x8

struct FVoxelMaterialCollectionMaterialInfo
{
    uint8 Index;                                                                      // 0x0000 (size: 0x1)
    TWeakObjectPtr<class UMaterialInterface> Material;                                // 0x0004 (size: 0x8)
    FName NameOverride;                                                               // 0x000C (size: 0x8)

}; // Size: 0x14

struct FVoxelMaterialIndices
{
}; // Size: 0x8

struct FVoxelMeshConfig
{
    bool bReceivesDecals;                                                             // 0x0000 (size: 0x1)
    bool bRenderCustomDepth;                                                          // 0x0001 (size: 0x1)
    ERendererStencilMask CustomDepthStencilWriteMask;                                 // 0x0002 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVoxelMeshImporterRenderTargetCache
{
    class UTextureRenderTarget2D* ColorsRenderTarget;                                 // 0x0000 (size: 0x8)
    class UTextureRenderTarget2D* UVsRenderTarget;                                    // 0x0008 (size: 0x8)
    class UMaterialInterface* LastRenderedColorsMaterial;                             // 0x0010 (size: 0x8)
    class UMaterialInterface* LastRenderedUVsMaterial;                                // 0x0018 (size: 0x8)
    int32 LastRenderedRenderTargetSize;                                               // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FVoxelMeshImporterSettings : public FVoxelMeshImporterSettingsBase
{
    bool bImportColors;                                                               // 0x0010 (size: 0x1)
    class UMaterialInterface* ColorsMaterial;                                         // 0x0018 (size: 0x8)
    bool bImportUVs;                                                                  // 0x0020 (size: 0x1)
    class UMaterialInterface* UVsMaterial;                                            // 0x0028 (size: 0x8)
    int32 RenderTargetSize;                                                           // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FVoxelMeshImporterSettingsBase
{
    float VoxelSize;                                                                  // 0x0000 (size: 0x4)
    EVoxelAxis SweepDirection;                                                        // 0x0004 (size: 0x1)
    bool bReverseSweep;                                                               // 0x0005 (size: 0x1)
    bool bWatertight;                                                                 // 0x0006 (size: 0x1)
    bool bHideLeaks;                                                                  // 0x0007 (size: 0x1)
    int32 ExactBand;                                                                  // 0x0008 (size: 0x4)
    float DistanceDivisor;                                                            // 0x000C (size: 0x4)

}; // Size: 0x10

struct FVoxelObjectArchiveEntry
{
    TSoftObjectPtr<UObject> Object;                                                   // 0x0000 (size: 0x28)
    int32 Index;                                                                      // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FVoxelPaintMaterial
{
    EVoxelPaintMaterialType Type;                                                     // 0x0000 (size: 0x1)
    FVoxelPaintMaterialColor Color;                                                   // 0x0004 (size: 0x1C)
    FVoxelPaintMaterialSingleIndex SingleIndex;                                       // 0x0020 (size: 0x1)
    FVoxelPaintMaterialMultiIndex MultiIndex;                                         // 0x0028 (size: 0x18)
    FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness;                           // 0x0040 (size: 0x4)
    FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw;                                   // 0x0044 (size: 0x20)
    FVoxelPaintMaterialUV UV;                                                         // 0x0064 (size: 0x10)
    FVoxelPaintMaterialFiveWayBlend FiveWayBlend;                                     // 0x0078 (size: 0x20)

}; // Size: 0x98

struct FVoxelPaintMaterialColor
{
    bool bUseLinearColor;                                                             // 0x0000 (size: 0x1)
    FLinearColor LinearColor;                                                         // 0x0004 (size: 0x10)
    FColor Color;                                                                     // 0x0014 (size: 0x4)
    bool bPaintR;                                                                     // 0x0018 (size: 0x1)
    bool bPaintG;                                                                     // 0x0019 (size: 0x1)
    bool bPaintB;                                                                     // 0x001A (size: 0x1)
    bool bPaintA;                                                                     // 0x001B (size: 0x1)

}; // Size: 0x1C

struct FVoxelPaintMaterialFiveWayBlend
{
    int32 Channel;                                                                    // 0x0000 (size: 0x4)
    float TargetValue;                                                                // 0x0004 (size: 0x4)
    TArray<uint8> LockedChannels;                                                     // 0x0008 (size: 0x10)
    bool bFourWayBlend;                                                               // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FVoxelPaintMaterialMultiIndex
{
    FVoxelPaintMaterial_MaterialCollectionChannel Channel;                            // 0x0000 (size: 0x1)
    float TargetValue;                                                                // 0x0004 (size: 0x4)
    TArray<FVoxelPaintMaterial_MaterialCollectionChannel> LockedChannels;             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FVoxelPaintMaterialMultiIndexRaw
{
    FVoxelPaintMaterial_MaterialCollectionChannel Channel0;                           // 0x0000 (size: 0x1)
    float Strength0;                                                                  // 0x0004 (size: 0x4)
    FVoxelPaintMaterial_MaterialCollectionChannel Channel1;                           // 0x0008 (size: 0x1)
    float Strength1;                                                                  // 0x000C (size: 0x4)
    FVoxelPaintMaterial_MaterialCollectionChannel Channel2;                           // 0x0010 (size: 0x1)
    float Strength2;                                                                  // 0x0014 (size: 0x4)
    FVoxelPaintMaterial_MaterialCollectionChannel Channel3;                           // 0x0018 (size: 0x1)
    float Strength3;                                                                  // 0x001C (size: 0x4)

}; // Size: 0x20

struct FVoxelPaintMaterialMultiIndexWetness
{
    float TargetValue;                                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FVoxelPaintMaterialSingleIndex
{
    FVoxelPaintMaterial_MaterialCollectionChannel Channel;                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FVoxelPaintMaterialUV
{
    int32 Channel;                                                                    // 0x0000 (size: 0x4)
    FVector2D UV;                                                                     // 0x0004 (size: 0x8)
    bool bPaintU;                                                                     // 0x000C (size: 0x1)
    bool bPaintV;                                                                     // 0x000D (size: 0x1)

}; // Size: 0x10

struct FVoxelPaintMaterial_MaterialCollectionChannel
{
    uint8 Channel;                                                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FVoxelPerlinWormsSettings
{
    int32 Seed;                                                                       // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    FVector Start;                                                                    // 0x0008 (size: 0xC)
    FVector Direction;                                                                // 0x0014 (size: 0xC)
    FVector RotationAmplitude;                                                        // 0x0020 (size: 0xC)
    int32 NumSegments;                                                                // 0x002C (size: 0x4)
    float SegmentLength;                                                              // 0x0030 (size: 0x4)
    float SplitProbability;                                                           // 0x0034 (size: 0x4)
    float SplitProbabilityGain;                                                       // 0x0038 (size: 0x4)
    int32 BranchMeanSize;                                                             // 0x003C (size: 0x4)
    float BranchSizeVariation;                                                        // 0x0040 (size: 0x4)
    FVector NoiseDirection;                                                           // 0x0044 (size: 0xC)
    float NoiseSegmentLength;                                                         // 0x0050 (size: 0x4)
    int32 MaxWorms;                                                                   // 0x0054 (size: 0x4)

}; // Size: 0x58

struct FVoxelPositionValueMaterial
{
    FIntVector Position;                                                              // 0x0000 (size: 0xC)
    float Value;                                                                      // 0x000C (size: 0x4)
    FVoxelMaterial Material;                                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVoxelProjectionHit
{
    FIntVector VoxelPosition;                                                         // 0x0000 (size: 0xC)
    FVector2D PlanePosition;                                                          // 0x000C (size: 0x8)
    FHitResult Hit;                                                                   // 0x0014 (size: 0x8C)

}; // Size: 0xA0

struct FVoxelRange
{
    double Min;                                                                       // 0x0000 (size: 0x8)
    double Max;                                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVoxelSurfaceEditsProcessedVoxels
{
}; // Size: 0x30

struct FVoxelSurfaceEditsStack
{
}; // Size: 0x10

struct FVoxelSurfaceEditsStackElement
{
}; // Size: 0x60

struct FVoxelSurfaceEditsVoxel : public FVoxelSurfaceEditsVoxelBase
{
    float Strength;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FVoxelSurfaceEditsVoxelBase
{
    FIntVector Position;                                                              // 0x0000 (size: 0xC)
    FVector Normal;                                                                   // 0x000C (size: 0xC)
    float Value;                                                                      // 0x0018 (size: 0x4)
    FVector SurfacePosition;                                                          // 0x001C (size: 0xC)

}; // Size: 0x28

struct FVoxelSurfaceEditsVoxels
{
}; // Size: 0x18

struct FVoxelSurfaceToolMask
{
    EVoxelSurfaceToolMaskType Type;                                                   // 0x0000 (size: 0x1)
    class UTexture2D* Texture;                                                        // 0x0008 (size: 0x8)
    EVoxelRGBA Channel;                                                               // 0x0010 (size: 0x1)
    FVoxelGeneratorPicker Generator;                                                  // 0x0018 (size: 0x68)
    TArray<FName> SeedsToRandomize;                                                   // 0x0080 (size: 0x10)
    bool bScaleWithBrushSize;                                                         // 0x0090 (size: 0x1)
    class UTexture2D* GeneratorDebugTexture;                                          // 0x0098 (size: 0x8)
    float Scale;                                                                      // 0x00A0 (size: 0x4)
    float Ratio;                                                                      // 0x00A4 (size: 0x4)

}; // Size: 0xA8

struct FVoxelTestValues
{
}; // Size: 0x10

struct FVoxelTextureStructBase
{
    uint64 ID;                                                                        // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVoxelToolBaseConfig
{
    class UMaterialInterface* OverlayMaterial;                                        // 0x0000 (size: 0x8)
    class UMaterialInterface* MeshMaterial;                                           // 0x0008 (size: 0x8)
    float Stride;                                                                     // 0x0010 (size: 0x4)
    bool bUseFixedDirection;                                                          // 0x0014 (size: 0x1)
    FRotator FixedDirection;                                                          // 0x0018 (size: 0xC)
    bool bUseFixedNormal;                                                             // 0x0024 (size: 0x1)
    FVector FixedNormal;                                                              // 0x0028 (size: 0xC)
    bool bHasAlignment;                                                               // 0x0034 (size: 0x1)
    EVoxelToolAlignment Alignment;                                                    // 0x0035 (size: 0x1)
    bool bAirMode;                                                                    // 0x0036 (size: 0x1)
    float DistanceToCamera;                                                           // 0x0038 (size: 0x4)
    bool bShowPlanePreview;                                                           // 0x003C (size: 0x1)

}; // Size: 0x40

struct FVoxelToolRenderingRef
{
}; // Size: 0x4

struct FVoxelToolTickData
{
    FVector2D MousePosition;                                                          // 0x0000 (size: 0x8)
    FVector CameraViewDirection;                                                      // 0x0008 (size: 0xC)
    bool bEdit;                                                                       // 0x0014 (size: 0x1)
    TMap<class FName, class bool> Keys;                                               // 0x0018 (size: 0x50)
    TMap<FName, float> Axes;                                                          // 0x0068 (size: 0x50)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x00B8 (size: 0x1)

}; // Size: 0x120

struct FVoxelTransformableGeneratorPicker
{
    EVoxelGeneratorPickerType Type;                                                   // 0x0000 (size: 0x1)
    TSubclassOf<class UVoxelTransformableGenerator> Class;                            // 0x0008 (size: 0x8)
    class UVoxelTransformableGenerator* Object;                                       // 0x0010 (size: 0x8)
    TMap<class FName, class FString> Parameters;                                      // 0x0018 (size: 0x50)

}; // Size: 0x68

struct FVoxelUncompressedWorldSave
{
    TArray<FVoxelObjectArchiveEntry> Objects;                                         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FVoxelValueMaterial
{
    FIntVector Position;                                                              // 0x0000 (size: 0xC)
    float Value;                                                                      // 0x000C (size: 0x4)
    FVoxelMaterial Material;                                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVoxelWorldCreateInfo
{
    bool bOverrideSave;                                                               // 0x0000 (size: 0x1)
    FVoxelUncompressedWorldSave SaveOverride;                                         // 0x0008 (size: 0x20)
    bool bOverrideData;                                                               // 0x0028 (size: 0x1)
    class AVoxelWorld* DataOverride;                                                  // 0x0030 (size: 0x8)

}; // Size: 0x48

class AVoxelAssetActor : public AVoxelPlaceableItemActor
{
    FVoxelTransformableGeneratorPicker Generator;                                     // 0x0230 (size: 0x68)
    int32 Priority;                                                                   // 0x0298 (size: 0x4)
    bool bOverrideAssetBounds;                                                        // 0x029C (size: 0x1)
    FVoxelIntBox AssetBounds;                                                         // 0x02A0 (size: 0x18)
    bool bImportAsReference;                                                          // 0x02B8 (size: 0x1)
    bool bSubtractiveAsset;                                                           // 0x02B9 (size: 0x1)
    EVoxelAssetMergeMode MergeMode;                                                   // 0x02BA (size: 0x1)
    bool bSpawnNewVoxelWorld;                                                         // 0x02BB (size: 0x1)
    bool bSimulatePhysics;                                                            // 0x02BC (size: 0x1)
    int32 PreviewLOD;                                                                 // 0x02C0 (size: 0x4)
    EVoxelAssetActorPreviewUpdateType UpdateType;                                     // 0x02C4 (size: 0x4)
    bool bRoundAssetPosition;                                                         // 0x02C8 (size: 0x1)
    bool bRoundAssetRotation;                                                         // 0x02C9 (size: 0x1)
    uint32 MaxPreviewChunks;                                                          // 0x02CC (size: 0x4)
    class USceneComponent* Root;                                                      // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class AVoxelCharacter : public ACharacter
{
}; // Size: 0x4C0

class AVoxelDataItemActor : public AActor
{
    bool bAutomaticUpdates;                                                           // 0x0220 (size: 0x1)
    float RefreshDelay;                                                               // 0x0224 (size: 0x4)

    void ScheduleRefresh();
    void K2_AddItemToWorld(class AVoxelWorld* World);
}; // Size: 0x248

class AVoxelDisableEditsBox : public AVoxelPlaceableItemActor
{
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)

}; // Size: 0x238

class AVoxelLODVolume : public AVolume
{
    class UVoxelVolumeInvokerComponent* InvokerComponent;                             // 0x0258 (size: 0x8)

}; // Size: 0x260

class AVoxelLandscapeImporter : public AActor
{
    class ALandscape* Landscape;                                                      // 0x0220 (size: 0x8)
    EVoxelHeightmapImporterMaterialConfig MaterialConfig;                             // 0x0228 (size: 0x1)
    TArray<FVoxelLandscapeImporterLayerInfo> LayerInfos;                              // 0x0230 (size: 0x10)

}; // Size: 0x240

class AVoxelMagicaVoxSceneActor : public AActor
{
    float VoxelSize;                                                                  // 0x0220 (size: 0x4)
    TMap<class AVoxelAssetActor*, class FTransform> ActorTransforms;                  // 0x0228 (size: 0x50)
    class AVoxelWorld* VoxelWorld;                                                    // 0x0278 (size: 0x8)

    void SetScene(class UVoxelMagicaVoxScene* Scene);
    void ApplyVoxelSize();
}; // Size: 0x280

class AVoxelMeshImporter : public AActor
{
    class UStaticMesh* StaticMesh;                                                    // 0x0220 (size: 0x8)
    FVoxelMeshImporterSettings Settings;                                              // 0x0228 (size: 0x38)
    uint32 SizeX;                                                                     // 0x0260 (size: 0x4)
    uint32 SizeY;                                                                     // 0x0264 (size: 0x4)
    uint32 SizeZ;                                                                     // 0x0268 (size: 0x4)
    uint64 NumberOfVoxels;                                                            // 0x0270 (size: 0x8)
    float SizeInMB;                                                                   // 0x0278 (size: 0x4)
    class UStaticMeshComponent* MeshComponent;                                        // 0x0280 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0288 (size: 0x8)
    FBox CachedBox;                                                                   // 0x0290 (size: 0x1C)
    class UStaticMesh* CachedStaticMesh;                                              // 0x02B0 (size: 0x8)
    TArray<FVector> CachedVertices;                                                   // 0x02B8 (size: 0x10)
    FTransform CachedTransform;                                                       // 0x02D0 (size: 0x30)

}; // Size: 0x300

class AVoxelPlaceableItemActor : public AActor
{
    class AVoxelWorld* PreviewWorld;                                                  // 0x0220 (size: 0x8)
    bool bOnlyImportIntoPreviewWorld;                                                 // 0x0228 (size: 0x1)

    int32 K2_GetPriority();
    void K2_AddItemToWorld(class AVoxelWorld* World);
}; // Size: 0x230

class AVoxelRuntimeActor : public AActor
{
    float VoxelSize;                                                                  // 0x0220 (size: 0x4)
    FVoxelGeneratorPicker Generator;                                                  // 0x0228 (size: 0x68)
    class UVoxelPlaceableItemManager* PlaceableItemManager;                           // 0x0290 (size: 0x8)
    bool bCreateWorldAutomatically;                                                   // 0x0298 (size: 0x1)
    bool bUseCameraIfNoInvokersFound;                                                 // 0x0299 (size: 0x1)
    bool bEnableUndoRedo;                                                             // 0x029A (size: 0x1)
    bool bUseAbsoluteTransforms;                                                      // 0x029B (size: 0x1)
    bool bMergeAssetActors;                                                           // 0x029C (size: 0x1)
    bool bMergeDisableEditsBoxes;                                                     // 0x029D (size: 0x1)
    bool bDisableOnScreenMessages;                                                    // 0x029E (size: 0x1)
    bool bDisableDebugManager;                                                        // 0x029F (size: 0x1)
    int32 RenderOctreeDepth;                                                          // 0x02A0 (size: 0x4)
    int32 RenderOctreeChunkSize;                                                      // 0x02A4 (size: 0x4)
    int32 WorldSizeInVoxel;                                                           // 0x02A8 (size: 0x4)
    bool bUseCustomWorldBounds;                                                       // 0x02AC (size: 0x1)
    FVoxelIntBox CustomWorldBounds;                                                   // 0x02B0 (size: 0x18)
    int32 MaxLOD;                                                                     // 0x02C8 (size: 0x4)
    int32 MinLOD;                                                                     // 0x02CC (size: 0x4)
    float InvokerDistanceThreshold;                                                   // 0x02D0 (size: 0x4)
    float MinDelayBetweenLODUpdates;                                                  // 0x02D4 (size: 0x4)
    bool bConstantLOD;                                                                // 0x02D8 (size: 0x1)
    EVoxelMaterialConfig MaterialConfig;                                              // 0x02D9 (size: 0x1)
    bool bUseMaterialCollection;                                                      // 0x02DA (size: 0x1)
    class UMaterialInterface* VoxelMaterial;                                          // 0x02E0 (size: 0x8)
    class UVoxelMaterialCollectionBase* MaterialCollection;                           // 0x02E8 (size: 0x8)
    TArray<FVoxelLODMaterials> LODMaterials;                                          // 0x02F0 (size: 0x10)
    TArray<FVoxelLODMaterialCollections> LODMaterialCollections;                      // 0x0300 (size: 0x10)
    EVoxelUVConfig UVConfig;                                                          // 0x0310 (size: 0x1)
    float UVScale;                                                                    // 0x0314 (size: 0x4)
    EVoxelNormalConfig NormalConfig;                                                  // 0x0318 (size: 0x1)
    EVoxelRGBHardness RGBHardness;                                                    // 0x0319 (size: 0x1)
    TMap<FString, float> MaterialsHardness;                                           // 0x0320 (size: 0x50)
    bool bHardColorTransitions;                                                       // 0x0370 (size: 0x1)
    bool bSplitSingleIndexTriangles;                                                  // 0x0371 (size: 0x1)
    TArray<uint8> HolesMaterials;                                                     // 0x0378 (size: 0x10)
    TMap<uint8, FVoxelMeshConfig> MaterialsMeshConfigs;                               // 0x0388 (size: 0x50)
    bool bHalfPrecisionCoordinates;                                                   // 0x03D8 (size: 0x1)
    bool bInterpolateColors;                                                          // 0x03D9 (size: 0x1)
    bool bInterpolateUVs;                                                             // 0x03DA (size: 0x1)
    bool bSRGBColors;                                                                 // 0x03DB (size: 0x1)
    EVoxelRenderType RenderType;                                                      // 0x03DC (size: 0x1)
    int32 RenderSharpness;                                                            // 0x03E0 (size: 0x4)
    bool bCreateMaterialInstances;                                                    // 0x03E4 (size: 0x1)
    bool bDitherChunks;                                                               // 0x03E5 (size: 0x1)
    float ChunksDitheringDuration;                                                    // 0x03E8 (size: 0x4)
    bool bCastFarShadow;                                                              // 0x03EC (size: 0x1)
    TSubclassOf<class UVoxelProceduralMeshComponent> ProcMeshClass;                   // 0x03F0 (size: 0x8)
    int32 ChunksCullingLOD;                                                           // 0x03F8 (size: 0x4)
    bool bRenderWorld;                                                                // 0x03FC (size: 0x1)
    bool bContributesToStaticLighting;                                                // 0x03FD (size: 0x1)
    bool bUseStaticPath;                                                              // 0x03FE (size: 0x1)
    bool bStaticWorld;                                                                // 0x03FF (size: 0x1)
    bool bGreedyCubicMesher;                                                          // 0x0400 (size: 0x1)
    bool bSingleIndexGreedy;                                                          // 0x0401 (size: 0x1)
    int32 TexturePoolTextureSize;                                                     // 0x0404 (size: 0x4)
    bool bOptimizeIndices;                                                            // 0x0408 (size: 0x1)
    bool bGenerateDistanceFields;                                                     // 0x0409 (size: 0x1)
    int32 MaxDistanceFieldLOD;                                                        // 0x040C (size: 0x4)
    int32 DistanceFieldBoundsExtension;                                               // 0x0410 (size: 0x4)
    int32 DistanceFieldResolutionDivisor;                                             // 0x0414 (size: 0x4)
    float DistanceFieldSelfShadowBias;                                                // 0x0418 (size: 0x4)
    bool bEnableTransitions;                                                          // 0x041C (size: 0x1)
    bool bMergeChunks;                                                                // 0x041D (size: 0x1)
    int32 MergedChunksClusterSize;                                                    // 0x0420 (size: 0x4)
    bool bDoNotMergeCollisionsAndNavmesh;                                             // 0x0424 (size: 0x1)
    float BoundsExtension;                                                            // 0x0428 (size: 0x4)
    TArray<class UVoxelFoliageCollectionBase*> FoliageCollections;                    // 0x0430 (size: 0x10)
    EVoxelFoliageWorldType FoliageWorldType;                                          // 0x0440 (size: 0x1)
    bool bIsFourWayBlend;                                                             // 0x0441 (size: 0x1)
    int32 HISMChunkSize;                                                              // 0x0444 (size: 0x4)
    int32 FoliageCollisionDistanceInVoxel;                                            // 0x0448 (size: 0x4)
    int64 MaxNumberOfFoliageInstances;                                                // 0x0450 (size: 0x8)
    bool bEnableCollisions;                                                           // 0x0458 (size: 0x1)
    FBodyInstance CollisionPresets;                                                   // 0x0460 (size: 0x158)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;                              // 0x05B8 (size: 0x1)
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;                            // 0x05B9 (size: 0x1)
    bool bNotifyRigidBodyCollision;                                                   // 0x05BA (size: 0x1)
    bool bGenerateOverlapEvents;                                                      // 0x05BB (size: 0x1)
    bool bComputeVisibleChunksCollisions;                                             // 0x05BC (size: 0x1)
    int32 VisibleChunksCollisionsMaxLOD;                                              // 0x05C0 (size: 0x4)
    class UPhysicalMaterial* PhysMaterialOverride;                                    // 0x05C8 (size: 0x8)
    bool bUseCCD;                                                                     // 0x05D0 (size: 0x1)
    bool bSimpleCubicCollision;                                                       // 0x05D1 (size: 0x1)
    int32 SimpleCubicCollisionLODBias;                                                // 0x05D4 (size: 0x4)
    int32 NumConvexHullsPerAxis;                                                      // 0x05D8 (size: 0x4)
    bool bCleanCollisionMeshes;                                                       // 0x05DC (size: 0x1)
    bool bEnableNavmesh;                                                              // 0x05DD (size: 0x1)
    bool bComputeVisibleChunksNavmesh;                                                // 0x05DE (size: 0x1)
    int32 VisibleChunksNavmeshMaxLOD;                                                 // 0x05E0 (size: 0x4)
    TMap<EVoxelTaskType, int32> PriorityCategories;                                   // 0x05E8 (size: 0x50)
    TMap<EVoxelTaskType, int32> PriorityOffsets;                                      // 0x0638 (size: 0x50)
    float MeshUpdatesBudget;                                                          // 0x0688 (size: 0x4)
    float EventsTickRate;                                                             // 0x068C (size: 0x4)
    int32 DataOctreeInitialSubdivisionDepth;                                          // 0x0690 (size: 0x4)
    bool bEnableMultiplayer;                                                          // 0x0694 (size: 0x1)
    TSubclassOf<class UVoxelMultiplayerInterface> MultiplayerInterface;               // 0x0698 (size: 0x8)
    float MultiplayerSyncRate;                                                        // 0x06A0 (size: 0x4)
    TSubclassOf<class UVoxelRendererSubsystemProxy> RendererSubsystem;                // 0x06A8 (size: 0x8)
    TSubclassOf<class UVoxelLODSubsystemProxy> LODSubsystem;                          // 0x06B0 (size: 0x8)
    TArray<TWeakObjectPtr<UTexture>> DebugTextures;                                   // 0x06B8 (size: 0x10)

}; // Size: 0x6C8

class AVoxelStaticWorld : public AActor
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x0220 (size: 0x8)
    TArray<class UStaticMeshComponent*> Meshes;                                       // 0x0228 (size: 0x10)

}; // Size: 0x238

class AVoxelWorld : public AVoxelRuntimeActor
{
    FVoxelWorldOnGenerateWorld OnGenerateWorld;                                       // 0x06D0 (size: 0x10)
    void OnGenerateWorld();
    FVoxelWorldOnWorldLoaded OnWorldLoaded;                                           // 0x06E0 (size: 0x10)
    void OnWorldLoaded();
    FVoxelWorldOnWorldDestroyed OnWorldDestroyed;                                     // 0x06F0 (size: 0x10)
    void OnWorldDestroyed();
    FVoxelWorldOnMaxFoliageInstancesReached OnMaxFoliageInstancesReached;             // 0x0700 (size: 0x10)
    void OnMaxFoliageInstancesReached();
    class UVoxelWorldRootComponent* WorldRoot;                                        // 0x0710 (size: 0x8)
    class UVoxelLineBatchComponent* LineBatchComponent;                               // 0x0718 (size: 0x8)
    class UVoxelWorldSaveObject* SaveObject;                                          // 0x0720 (size: 0x8)
    FString SaveFilePath;                                                             // 0x0728 (size: 0x10)
    bool bAutomaticallySaveToFile;                                                    // 0x0738 (size: 0x1)
    bool bAppendDateToSavePath;                                                       // 0x0739 (size: 0x1)
    bool bRecomputeNormalsBeforeBaking;                                               // 0x073A (size: 0x1)
    class UStaticMesh* BakedMeshTemplate;                                             // 0x0740 (size: 0x8)
    TSubclassOf<class UStaticMeshComponent> BakedMeshComponentTemplate;               // 0x0748 (size: 0x8)
    FFilePath BakedDataPath;                                                          // 0x0750 (size: 0x10)
    bool bEnableFoliageInEditor;                                                      // 0x0760 (size: 0x1)
    bool bAutomaticallyRefreshMaterials;                                              // 0x0761 (size: 0x1)
    bool bAutomaticallyRefreshFoliage;                                                // 0x0762 (size: 0x1)
    FVector EditorOnly_NewScale;                                                      // 0x0764 (size: 0xC)
    int32 NumberOfThreads;                                                            // 0x0770 (size: 0x4)
    class UObject* SpawnerConfig;                                                     // 0x0778 (size: 0x8)
    TMap<FName, int32> Seeds;                                                         // 0x0780 (size: 0x50)
    class UVoxelMultiplayerInterface* MultiplayerInterfaceInstance;                   // 0x07D0 (size: 0x8)
    class UVoxelGeneratorCache* GeneratorCache;                                       // 0x07D8 (size: 0x8)
    class UVoxelPlaceableItemActorHelper* PlaceableItemActorHelper;                   // 0x07E0 (size: 0x8)
    bool bIsToggled;                                                                  // 0x07E8 (size: 0x1)

    void SetWorldSize(int32 NewWorldSizeInVoxel);
    void SetRenderOctreeDepth(int32 NewDepth);
    void SetRenderOctreeChunkSize(int32 NewChunkSize);
    void SetGeneratorObject(class UVoxelGenerator* NewGenerator);
    void SetGeneratorClass(TSubclassOf<class UVoxelGenerator> NewGeneratorClass);
    void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    void OnWorldLoaded__DelegateSignature();
    void OnWorldDestroyed__DelegateSignature();
    void OnMaxFoliageInstancesReached__DelegateSignature();
    void OnGenerateWorld__DelegateSignature();
    void LogCompressedSaveSize(class AVoxelWorld* VoxelWorld, FVoxelCompressedWorldSave Save);
    FVector K2_LocalToGlobalFloat(const FVector& Position);
    FBox K2_LocalToGlobalBounds(const FVoxelIntBox& Bounds);
    FVector K2_LocalToGlobal(const FIntVector& Position);
    FVector K2_GlobalToLocalFloat(const FVector& Position);
    FVoxelIntBox K2_GlobalToLocalBounds(const FBox& Bounds);
    FIntVector K2_GlobalToLocal(FVector Position, EVoxelWorldCoordinatesRounding Rounding);
    bool IsLoaded();
    bool IsCreated();
    TArray<FIntVector> GetNeighboringPositions(const FVector& GlobalPosition);
    class UVoxelMultiplayerInterface* GetMultiplayerInterfaceInstance();
    FVoxelGeneratorInit GetGeneratorInit();
    class UVoxelGeneratorCache* GetGeneratorCache();
    void DestroyWorld();
    void CreateWorld(FVoxelWorldCreateInfo Info);
    class UVoxelMultiplayerInterface* CreateMultiplayerInterfaceInstance();
}; // Size: 0x870

class IVoxelPhysicsPartSpawner : public IInterface
{
}; // Size: 0x28

class IVoxelPhysicsPartSpawnerResult : public IInterface
{
}; // Size: 0x28

class UAssetActorPrimitiveComponent : public UPrimitiveComponent
{
}; // Size: 0x440

class UMaterialExpressionVoxelLandscapeLayerBlend : public UMaterialExpressionLandscapeLayerBlend
{
}; // Size: 0x60

class UMaterialExpressionVoxelLandscapeLayerSample : public UMaterialExpressionLandscapeLayerSample
{
}; // Size: 0x60

class UMaterialExpressionVoxelLandscapeLayerSwitch : public UMaterialExpressionLandscapeLayerSwitch
{
}; // Size: 0x88

class UMaterialExpressionVoxelLandscapeLayerWeight : public UMaterialExpressionLandscapeLayerWeight
{
}; // Size: 0x90

class UMaterialExpressionVoxelLandscapeVisibilityMask : public UMaterialExpressionLandscapeVisibilityMask
{
}; // Size: 0x50

class UVoxelAssetTools : public UBlueprintFunctionLibrary
{

    void SetDataAssetMaterial(class UVoxelDataAsset* Asset, class UVoxelDataAsset*& NewAsset, FVoxelMaterial Material);
    void InvertDataAsset(class UVoxelDataAsset* Asset, class UVoxelDataAsset*& InvertedAsset);
    void ImportModifierAssetAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void ImportModifierAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace);
    void ImportDataAssetFastAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, class UVoxelDataAsset* Asset, FVector Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void ImportDataAssetFast(class AVoxelWorld* World, class UVoxelDataAsset* Asset, FVector Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
    void ImportAssetAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void ImportAssetAsReferenceAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelAssetItemReference& Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void ImportAssetAsReference(FVoxelAssetItemReference& Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender);
    void ImportAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
    class UVoxelDataAsset* CreateDataAssetFromWorldSection(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bCopyMaterials);
    void AddDisableEditsBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelDisableEditsBoxItemReference& Reference, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void AddDisableEditsBox(FVoxelDisableEditsBoxItemReference& Reference, class AVoxelWorld* World, FVoxelIntBox Bounds);
}; // Size: 0x28

class UVoxelBasicMaterialCollection : public UVoxelMaterialCollectionBase
{
    TArray<FVoxelBasicMaterialCollectionLayer> Layers;                                // 0x0028 (size: 0x10)

}; // Size: 0x38

class UVoxelBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UpdatePosition(class AVoxelWorld* World, FIntVector Position);
    void UpdateBounds(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void UpdateAll(class AVoxelWorld* World);
    bool Undo(class AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds);
    FBox TransformVoxelBoxToGlobalBox(class AVoxelWorld* World, FVoxelIntBox Box);
    FVoxelIntBox TransformGlobalBoxToVoxelBox(class AVoxelWorld* World, FBox Box);
    FIntVector Substract_IntVectorIntVector(FIntVector Left, FIntVector Right);
    void SetToolRenderingMaterial(class AVoxelWorld* World, FVoxelToolRenderingRef Ref, class UMaterialInterface* Material);
    void SetToolRenderingEnabled(class AVoxelWorld* World, FVoxelToolRenderingRef Ref, bool bEnabled);
    void SetToolRenderingBounds(class AVoxelWorld* World, FVoxelToolRenderingRef Ref, FBox Bounds);
    void SetNumberOfVoxelThreads(int32 Number);
    void ScaleData(class AVoxelWorld* World, const FVector& Scale);
    void SaveFrame(class AVoxelWorld* World);
    void RegenerateSpawners(class AVoxelWorld* World, FVoxelIntBox Bounds);
    bool Redo(class AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds);
    void RecreateSpawners(class AVoxelWorld* World);
    void RecreateRender(class AVoxelWorld* World);
    void Recreate(class AVoxelWorld* World, bool bSaveData);
    void RecomputeComponentPositions(class AVoxelWorld* World);
    void RaiseWarning(FString Message, class UObject* Object);
    void RaiseInfo(FString Message, class UObject* Object);
    void RaiseError(FString Message, class UObject* Object);
    int32 NumberOfCores();
    FIntVector Multiply_IntVectorIntVector(FIntVector Left, FIntVector Right);
    FIntVector Multiply_IntVectorInt(FIntVector Left, int32 Right);
    FIntVector Multiply_IntIntVector(int32 Left, FIntVector Right);
    void MarkSpawnersDirty(class AVoxelWorld* World, FVoxelIntBox Bounds);
    FVoxelMaterial MakeSingleIndexMaterial(uint8 Index);
    FVoxelMaterial MakeRawMaterial(uint8 R, uint8 G, uint8 B, uint8 A, uint8 U0, uint8 V0, uint8 U1, uint8 v1, uint8 U2, uint8 v2, uint8 U3, uint8 V3);
    int32 MakeMaterialMask(bool R, bool G, bool B, bool A, bool U0, bool V0, bool U1, bool v1, bool U2, bool v2, bool U3, bool V3);
    FVoxelIntBox MakeIntBoxFromGlobalPositionAndRadius(class AVoxelWorld* World, FVector GlobalPosition, float Radius);
    FVoxelMaterial MakeColorMaterial(FLinearColor Color);
    void LogMemoryStats();
    bool IsVoxelWorldMeshLoading(class AVoxelWorld* World);
    bool IsVoxelWorldFoliageLoading(class AVoxelWorld* World);
    bool IsVoxelPluginPro();
    bool IsVoxelFloatTextureValid(FVoxelFloatTexture Texture);
    bool IsVoxelColorTextureValid(FVoxelFloatTexture Texture);
    bool IsValidRef(class AVoxelWorld* World, FVoxelToolRenderingRef Ref);
    bool IntervalContains_Int32(FVoxelInt32Interval Interval, int32 Value);
    bool IntervalContains_Float(FVoxelFloatInterval Interval, float Value);
    bool HasValueData(class AVoxelWorld* World);
    bool HasMaterialData(class AVoxelWorld* World);
    class AVoxelWorld* GetVoxelWorldOverlappingBox(class UObject* WorldContextObject, FBox Box);
    class AVoxelWorld* GetVoxelWorldOverlappingActor(class AActor* Actor);
    class AVoxelWorld* GetVoxelWorldContainingPosition(class UObject* WorldContextObject, FVector Position);
    FIntPoint GetVoxelFloatTextureSize(FVoxelFloatTexture Texture);
    FIntPoint GetVoxelColorTextureSize(FVoxelColorTexture Texture);
    FVector2D GetUV(FVoxelMaterial Material, int32 Channel);
    int32 GetTaskCount(class AVoxelWorld* World);
    uint8 GetSingleIndex(FVoxelMaterial Material);
    FVoxelIntBox GetRenderBoundsOverlappingDataBounds(class AVoxelWorld* World, FVoxelIntBox DataBounds, int32 LOD);
    void GetRawMaterial(FVoxelMaterial Material, uint8& R, uint8& G, uint8& B, uint8& A, uint8& U0, uint8& V0, uint8& U1, uint8& v1, uint8& U2, uint8& v2, uint8& U3, uint8& V3);
    float GetPeakMemoryUsageInMB(EVoxelMemoryUsageType Type);
    int32 GetNumberOfVoxelThreads();
    FVector GetNormal(class AVoxelWorld* World, FIntVector Position);
    void GetMultiIndex(FVoxelMaterial Material, bool bSortByStrength, float& Strength0, uint8& Index0, float& Strength1, uint8& Index1, float& Strength2, uint8& Index2, float& Strength3, uint8& Index3, float& Wetness);
    int32 GetMin_Intvector(FIntVector Vector);
    float GetMemoryUsageInMB(EVoxelMemoryUsageType Type);
    int32 GetMax_Intvector(FIntVector Vector);
    int32 GetIntOutput(class AVoxelWorld* World, FName Name, float X, float Y, float Z, int32 DefaultValue);
    int32 GetHistoryPosition(class AVoxelWorld* World);
    float GetFloatOutput(class AVoxelWorld* World, FName Name, float X, float Y, float Z, float DefaultValue);
    float GetEstimatedCollisionsMemoryUsageInMB(class AVoxelWorld* World);
    FLinearColor GetColor(FVoxelMaterial Material);
    FVoxelIntBox GetBounds(class AVoxelWorld* World);
    TArray<class AVoxelWorld*> GetAllVoxelWorldsOverlappingBox(class UObject* WorldContextObject, FBox Box);
    TArray<class AVoxelWorld*> GetAllVoxelWorldsOverlappingActor(class AActor* Actor);
    TArray<class AVoxelWorld*> GetAllVoxelWorldsContainingPosition(class UObject* WorldContextObject, FVector Position);
    FIntVector Divide_IntVectorInt(FIntVector Left, int32 Right);
    void DestroyToolRendering(class AVoxelWorld* World, FVoxelToolRenderingRef Ref);
    FVoxelFloatTexture CreateVoxelFloatTextureFromTextureChannel(class UTexture2D* Texture, EVoxelRGBA Channel);
    FVoxelColorTexture CreateVoxelColorTextureFromVoxelFloatTexture(FVoxelFloatTexture Texture, EVoxelRGBA Channel, bool bNormalize);
    FVoxelPaintMaterial CreateUVPaintMaterial(FVoxelPaintMaterialUV UV);
    FVoxelToolRenderingRef CreateToolRendering(class AVoxelWorld* World);
    class UTexture2D* CreateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture);
    class UTexture2D* CreateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture);
    FVoxelPaintMaterial CreateSingleIndexPaintMaterial(FVoxelPaintMaterialSingleIndex SingleIndex);
    class UTexture2D* CreateOrUpdateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture, class UTexture2D*& Texture);
    class UTexture2D* CreateOrUpdateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture, class UTexture2D*& Texture);
    FVoxelPaintMaterial CreateMultiIndexWetnessPaintMaterial(FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness);
    FVoxelPaintMaterial CreateMultiIndexRawPaintMaterial(FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw);
    FVoxelPaintMaterial CreateMultiIndexPaintMaterial(FVoxelPaintMaterialMultiIndex MultiIndex);
    FVoxelPaintMaterial CreateFiveWayBlendPaintMaterial(FVoxelPaintMaterialFiveWayBlend FiveWayBlend);
    FVoxelPaintMaterial CreateColorPaintMaterial(FVoxelPaintMaterialColor Color);
    void CompactVoxelTexturePool(class AVoxelWorld* World);
    void ClearValueData(class AVoxelWorld* World, bool bUpdateRender);
    void ClearMaterialData(class AVoxelWorld* World, bool bUpdateRender);
    void ClearFrames(class AVoxelWorld* World);
    void ClearDirtyData(class AVoxelWorld* World, bool bUpdateRender);
    void ClearAllData(class AVoxelWorld* World, bool bUpdateRender);
    void BindVoxelGenerationEvent(class AVoxelWorld* World, FBindVoxelGenerationEventOnGenerate OnGenerate, bool bFireExistingOnes, int32 ChunkSize, int32 GenerationDistanceInChunks);
    void BindVoxelChunkEvents(class AVoxelWorld* World, FBindVoxelChunkEventsOnActivate OnActivate, FBindVoxelChunkEventsOnDeactivate OnDeactivate, bool bFireExistingOnes, int32 ChunkSize, int32 ActivationDistanceInChunks);
    bool AreCollisionsEnabled(class AVoxelWorld* World, FVector Position, int32& LOD, bool bConvertToVoxelSpace);
    FVoxelMaterial ApplyPaintMaterial(FVoxelMaterial Material, FVoxelPaintMaterial PaintMaterial, float Strength);
    void ApplyNewMaterials(class AVoxelWorld* World);
    void ApplyLODSettings(class AVoxelWorld* World);
    void AddNeighborsToSet(const TSet<FIntVector>& InSet, TSet<FIntVector>& OutSet);
    FIntVector Add_IntVectorIntVector(FIntVector Left, FIntVector Right);
}; // Size: 0x28

class UVoxelBlueprintMaterialCollection : public UVoxelCachedMaterialCollection
{
    class UVoxelBlueprintMaterialCollectionInterface* Instance;                       // 0x0078 (size: 0x8)

}; // Size: 0x80

class UVoxelBlueprintMaterialCollectionInterface : public UObject
{
    int32 MaxMaterialsToBlendAtOnce;                                                  // 0x0028 (size: 0x4)
    bool bEnableCubicFaces;                                                           // 0x002C (size: 0x1)

    void InitializeCollection();
    TArray<FVoxelMaterialCollectionMaterialInfo> GetMaterials();
    class UMaterialInterface* GetMaterialForIndices(const TArray<uint8>& Indices);
    class UMaterialInterface* GetMaterialForIndex(int32 Index, EVoxelCubicFace Face);
}; // Size: 0x30

class UVoxelBoxTools : public UVoxelToolsBase
{

    void SetValueBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void SetValueBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    void SetMaterialBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, const FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    void SetMaterialBox(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, const FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    void RemoveBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void RemoveBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    void AddBoxAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void AddBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
}; // Size: 0x28

class UVoxelCachedMaterialCollection : public UVoxelMaterialCollectionBase
{
    TMap<class FVoxelMaterialIndices, class UMaterialInterface*> CachedMaterials;     // 0x0028 (size: 0x50)

}; // Size: 0x78

class UVoxelChunkGenerator : public UVoxelGenerator
{
}; // Size: 0x28

class UVoxelChunksSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelCookingLibrary : public UBlueprintFunctionLibrary
{

    FVoxelCookingSettings MakeVoxelCookingSettingsFromVoxelWorld(class AVoxelWorld* World);
    void LoadCookedVoxelData(FVoxelCookedData CookedData, class AVoxelWorld* World);
    FVoxelCookedData CookVoxelDataWithSave(FVoxelCookingSettings Settings, FVoxelUncompressedWorldSave Save);
    FVoxelCookedData CookVoxelData(FVoxelCookingSettings Settings);
}; // Size: 0x28

class UVoxelCubicLibrary : public UBlueprintFunctionLibrary
{

    void SetCubicVoxelValue(class AVoxelWorld* World, FIntVector Position, bool bValue);
    bool GetCubicVoxelValue(class AVoxelWorld* World, FIntVector Position);
    FIntVector GetCubicVoxelPositionFromHit(class AVoxelWorld* World, FVector HitPosition, FVector HitNormal, bool bSelectVoxelOutside);
}; // Size: 0x28

class UVoxelDataAsset : public UVoxelTransformableGeneratorWithBounds
{
    bool bSubtractiveAsset;                                                           // 0x0028 (size: 0x1)
    FIntVector PositionOffset;                                                        // 0x002C (size: 0xC)
    float Tolerance;                                                                  // 0x0038 (size: 0x4)
    FIntVector Size;                                                                  // 0x003C (size: 0xC)
    float UncompressedSizeInMB;                                                       // 0x0048 (size: 0x4)
    float CompressedSizeInMB;                                                         // 0x004C (size: 0x4)
    EVoxelDataAssetImportSource Source;                                               // 0x0050 (size: 0x4)
    TArray<FString> Paths;                                                            // 0x0058 (size: 0x10)
    FVoxelDataAssetImportSettings_MagicaVox ImportSettings_MagicaVox;                 // 0x0068 (size: 0x8)
    int32 VoxelCustomVersion;                                                         // 0x0080 (size: 0x4)
    uint32 ValueConfigFlag;                                                           // 0x0084 (size: 0x4)
    uint32 MaterialConfigFlag;                                                        // 0x0088 (size: 0x4)

    FIntVector GetSize();
    FVoxelIntBox GetBounds();
}; // Size: 0xA0

class UVoxelDataSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelDataTools : public UBlueprintFunctionLibrary
{

    void SetValueAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FIntVector Position, float Value, bool bHideLatentWarnings);
    void SetValue(class AVoxelWorld* World, FIntVector Position, float Value);
    void SetMaterialAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FIntVector Position, FVoxelMaterial Material, bool bHideLatentWarnings);
    void SetMaterial(class AVoxelWorld* World, FIntVector Position, FVoxelMaterial Material, int32 Mask);
    void SetBoxAsDirtyAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials, bool bHideLatentWarnings);
    void SetBoxAsDirty(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials);
    void RoundVoxelsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void RoundVoxels(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void RoundToGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals, bool bHideLatentWarnings);
    void RoundToGenerator(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals);
    bool LoadFromSave(const class AVoxelWorld* World, const FVoxelUncompressedWorldSave& Save);
    bool LoadFromCompressedSave(const class AVoxelWorld* World, const FVoxelCompressedWorldSave& Save);
    void GetVoxelsValueAndMaterialAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelValueMaterial>& Voxels, class AVoxelWorld* World, const TArray<FIntVector>& Positions, bool bHideLatentWarnings);
    void GetVoxelsValueAndMaterial(TArray<FVoxelValueMaterial>& Voxels, class AVoxelWorld* World, const TArray<FIntVector>& Positions);
    void GetValueAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Value, class AVoxelWorld* World, FIntVector Position, bool bHideLatentWarnings);
    void GetValue(float& Value, class AVoxelWorld* World, FIntVector Position);
    void GetSaveAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave, bool bHideLatentWarnings);
    void GetSave(class AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave);
    void GetMaterialAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelMaterial& Material, class AVoxelWorld* World, FIntVector Position, bool bHideLatentWarnings);
    void GetMaterial(FVoxelMaterial& Material, class AVoxelWorld* World, FIntVector Position);
    void GetInterpolatedValue(float& Value, class AVoxelWorld* World, FVector Position);
    FVoxelDataMemoryUsageInMB GetDataMemoryUsageInMB(class AVoxelWorld* World);
    void GetCompressedSaveAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave, bool bHideLatentWarnings);
    void GetCompressedSave(class AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave);
    void FindClosestNonEmptyVoxelAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFindClosestNonEmptyVoxelResult& Result, class AVoxelWorld* World, FVector Position, bool bReadMaterial, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    void FindClosestNonEmptyVoxel(FVoxelFindClosestNonEmptyVoxelResult& Result, class AVoxelWorld* World, FVector Position, bool bReadMaterial, bool bConvertToVoxelSpace);
    void CompressIntoHeightmap(class AVoxelWorld* World, class UVoxelHeightmapAsset* HeightmapAsset, bool bHeightmapAssetMatchesWorld);
    void ClearUnusedMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void ClearUnusedMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void ClearCachedValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void ClearCachedValues(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void ClearCachedMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void ClearCachedMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CheckIfSameAsGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CheckIfSameAsGenerator(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CheckForSingleValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CheckForSingleValues(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CheckForSingleMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CheckForSingleMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds);
    void CacheValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CacheValues(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded);
    void CacheMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    void CacheMaterials(class AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded);
}; // Size: 0x28

class UVoxelDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelDebugUtilities : public UBlueprintFunctionLibrary
{

    void DrawDebugIntBox(class AVoxelWorld* World, FVoxelIntBox Bounds, FTransform Transform, float LifeTime, float Thickness, FLinearColor Color);
    void DrawDataOctree(class AVoxelWorld* World, EVoxelDataType DataType, float LifeTime, bool bShowSingle, bool bShowCached, FColor SingleColor, FColor SingleDirtyColor, FColor CachedColor, FColor DirtyColor);
    void DebugVoxelsInsideBounds(class AVoxelWorld* World, FVoxelIntBox Bounds, FLinearColor Color, float LifeTime, float Thickness, bool bDebugDensities, FLinearColor TextColor);
}; // Size: 0x28

class UVoxelDefaultLODSubsystemProxy : public UVoxelLODSubsystemProxy
{
}; // Size: 0x28

class UVoxelDefaultRendererSubsystemProxy : public UVoxelRendererSubsystemProxy
{
}; // Size: 0x28

class UVoxelDynamicSubsystemProxy : public UVoxelSubsystemProxy
{
}; // Size: 0x28

class UVoxelEmptyGenerator : public UVoxelTransformableGenerator
{
}; // Size: 0x28

class UVoxelErosion : public UObject
{
    int32 Size;                                                                       // 0x0028 (size: 0x4)
    float DeltaTime;                                                                  // 0x002C (size: 0x4)
    float Scale;                                                                      // 0x0030 (size: 0x4)
    float Gravity;                                                                    // 0x0034 (size: 0x4)
    float SedimentCapacity;                                                           // 0x0038 (size: 0x4)
    float SedimentDissolving;                                                         // 0x003C (size: 0x4)
    float SedimentDeposition;                                                         // 0x0040 (size: 0x4)
    float RainStrength;                                                               // 0x0044 (size: 0x4)
    float Evaporation;                                                                // 0x0048 (size: 0x4)
    FVoxelFloatTexture RainMapInit;                                                   // 0x0050 (size: 0x18)
    FVoxelFloatTexture HeightmapInit;                                                 // 0x0068 (size: 0x18)

    void Step(int32 Count);
    bool IsInitialized();
    void Initialize();
    FVoxelFloatTexture GetWaterHeightTexture();
    FVoxelFloatTexture GetTerrainHeightTexture();
    FVoxelFloatTexture GetSedimentTexture();
}; // Size: 0x128

class UVoxelEventSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelFixedResolutionLODSubsystemProxy : public UVoxelLODSubsystemProxy
{
}; // Size: 0x28

class UVoxelFlatGenerator : public UVoxelGenerator
{
    FLinearColor Color;                                                               // 0x0028 (size: 0x10)
    TArray<FVoxelFlatGeneratorDataItemConfig> DataItemConfigs;                        // 0x0038 (size: 0x10)

}; // Size: 0x48

class UVoxelFlattenTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0548 (size: 0x8)
    float Strength;                                                                   // 0x0550 (size: 0x4)
    bool bFreezeOnClick;                                                              // 0x0554 (size: 0x1)
    bool bUseAverage;                                                                 // 0x0555 (size: 0x1)
    bool bUseFixedRotation;                                                           // 0x0556 (size: 0x1)
    FRotator FixedRotation;                                                           // 0x0558 (size: 0xC)
    bool bPropagateMaterials;                                                         // 0x0564 (size: 0x1)
    bool bEnableFalloff;                                                              // 0x0565 (size: 0x1)
    EVoxelFalloff FalloffType;                                                        // 0x0566 (size: 0x1)
    float Falloff;                                                                    // 0x0568 (size: 0x4)

}; // Size: 0x590

class UVoxelFoliageBiomeBase : public UObject
{
}; // Size: 0x28

class UVoxelFoliageCollectionBase : public UObject
{
}; // Size: 0x28

class UVoxelFoliageInterfaceSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelGenerator : public UObject
{
}; // Size: 0x28

class UVoxelGeneratorCache : public UObject
{

    class UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker Picker);
    class UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker Picker);
}; // Size: 0x38

class UVoxelGeneratorCacheSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelGeneratorInstanceWrapper : public UObject
{

    bool IsValid();
}; // Size: 0x38

class UVoxelGeneratorTools : public UBlueprintFunctionLibrary
{

    bool SetTransformableGeneratorParameter(const FVoxelTransformableGeneratorPicker& Picker, FName UniqueName, int32 Value);
    bool SetGeneratorParameter(const FVoxelGeneratorPicker& Picker, FName UniqueName, int32 Value);
    FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromObject(class UVoxelTransformableGenerator* Generator);
    FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromClass(TSubclassOf<class UVoxelTransformableGenerator> GeneratorClass);
    class UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit);
    FVoxelGeneratorPicker MakeGeneratorPickerFromObject(class UVoxelGenerator* Generator);
    FVoxelGeneratorPicker MakeGeneratorPickerFromClass(TSubclassOf<class UVoxelGenerator> GeneratorClass);
    class UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker GeneratorPicker, FVoxelGeneratorInit GeneratorInit);
    bool IsValid_TransformableGeneratorPicker(FVoxelTransformableGeneratorPicker GeneratorPicker);
    bool IsValid_GeneratorPicker(FVoxelGeneratorPicker GeneratorPicker);
    void CreateFloatTextureFromGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFloatTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings);
    void CreateFloatTextureFromGenerator(FVoxelFloatTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY);
    void CreateColorTextureFromGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelColorTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY, bool bHideLatentWarnings);
    void CreateColorTextureFromGenerator(FVoxelColorTexture& OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, FName OutputName, int32 SizeX, int32 SizeY, float Scale, int32 StartX, int32 StartY);
}; // Size: 0x28

class UVoxelHeightmapAsset : public UVoxelTransformableGeneratorWithBounds
{
    float Scale;                                                                      // 0x0028 (size: 0x4)
    float HeightScale;                                                                // 0x002C (size: 0x4)
    float HeightOffset;                                                               // 0x0030 (size: 0x4)
    bool bInfiniteExtent;                                                             // 0x0034 (size: 0x1)
    float AdditionalThickness;                                                        // 0x0038 (size: 0x4)
    float Precision;                                                                  // 0x003C (size: 0x4)
    int32 Width;                                                                      // 0x0040 (size: 0x4)
    int32 Height;                                                                     // 0x0044 (size: 0x4)
    int32 VoxelCustomVersion;                                                         // 0x0048 (size: 0x4)
    uint32 MaterialConfigFlag;                                                        // 0x004C (size: 0x4)

    int32 GetWidth();
    int32 GetHeight();
}; // Size: 0x60

class UVoxelHeightmapAssetFloat : public UVoxelHeightmapAsset
{
}; // Size: 0x70

class UVoxelHeightmapAssetUINT16 : public UVoxelHeightmapAsset
{
    FString Heightmap;                                                                // 0x0060 (size: 0x10)
    EVoxelHeightmapImporterMaterialConfig MaterialConfig;                             // 0x0070 (size: 0x1)
    TArray<FString> WeightMaps;                                                       // 0x0078 (size: 0x10)
    TArray<FVoxelHeightmapImporterWeightmapInfos> WeightmapsInfos;                    // 0x0088 (size: 0x10)

}; // Size: 0xA8

class UVoxelInstancedMaterialCollection : public UVoxelCachedMaterialCollection
{
    int32 MaxMaterialsToBlendAtOnce;                                                  // 0x0078 (size: 0x4)
    TArray<FString> Redirects;                                                        // 0x0080 (size: 0x10)
    FString ParametersPrefix;                                                         // 0x0090 (size: 0x10)
    class UVoxelInstancedMaterialCollectionTemplates* Templates;                      // 0x00A0 (size: 0x8)
    TArray<FVoxelInstancedMaterialCollectionLayer> Layers;                            // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UVoxelInstancedMaterialCollectionInstance : public UVoxelInstancedMaterialCollection
{
    class UVoxelInstancedMaterialCollection* LayersSource;                            // 0x00B8 (size: 0x8)

}; // Size: 0xC0

class UVoxelInstancedMaterialCollectionTemplates : public UObject
{
    class UMaterialInterface* Template;                                               // 0x0028 (size: 0x8)
    class UMaterialInterface* Template1x;                                             // 0x0030 (size: 0x8)
    class UMaterialInterface* Template2x;                                             // 0x0038 (size: 0x8)
    class UMaterialInterface* Template3x;                                             // 0x0040 (size: 0x8)
    class UMaterialInterface* Template4x;                                             // 0x0048 (size: 0x8)
    class UMaterialInterface* Template5x;                                             // 0x0050 (size: 0x8)
    class UMaterialInterface* Template6x;                                             // 0x0058 (size: 0x8)

}; // Size: 0x60

class UVoxelIntBoxLibrary : public UBlueprintFunctionLibrary
{

    FVoxelIntBox TranslateBox(FVoxelIntBox Box, FIntVector Position);
    FVoxelIntBox Scale(FVoxelIntBox Box, int32 Scale);
    FVoxelIntBox RemoveTranslation(FVoxelIntBox Box);
    FVoxelIntBox Overlap(FVoxelIntBox A, FVoxelIntBox B);
    bool NotEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B);
    FVoxelIntBoxWithValidity MakeIntBoxWithValidity(FVoxelIntBox Box, bool bIsValid);
    FVoxelIntBox MakeIntBoxFromPoints(TArray<FVector> Points);
    FVoxelIntBox MakeIntBox(FIntVector Min, FIntVector Max);
    FVoxelIntBox MakeBoxFromPositionAndRadius(FVector Position, float Radius);
    FVoxelIntBox MakeBoxFromLocalPositionAndRadius(FIntVector Position, int32 Radius);
    bool IsVectorInsideBox(FVoxelIntBox Box, FVector Position);
    bool IsValid(FVoxelIntBox Box);
    bool IsIntVectorInsideBox(FVoxelIntBox Box, FIntVector Position);
    bool Intersect(FVoxelIntBox Box, FVoxelIntBox Other);
    FVoxelIntBox InfiniteBox();
    FIntVector GetSize(FVoxelIntBox Box);
    TArray<FIntVector> GetCorners(FVoxelIntBox Box);
    FVector GetCenter(FVoxelIntBox Box);
    FVoxelIntBox Extend_IntVector(FVoxelIntBox Box, FIntVector Extent);
    FVoxelIntBox Extend(FVoxelIntBox Box, int32 Extent);
    bool EqualEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B);
    FVoxelIntBox Conv_IntVectorToVoxelIntBox(FIntVector Vector);
    FString Conv_IntBoxToString(FVoxelIntBox IntBox);
    bool Contains(FVoxelIntBox Box, FVoxelIntBox Other);
    FVoxelIntBox Center(FVoxelIntBox Box);
    void BreakIntBoxWithValidity(FVoxelIntBoxWithValidity BoxWithValidity, FVoxelIntBox& Box, bool& bIsValid);
    void BreakIntBox(FVoxelIntBox Box, FIntVector& Min, FIntVector& Max);
    FVoxelIntBox ApplyTransform(FVoxelIntBox Box, FTransform Transform);
    FVoxelIntBox AddPoint(FVoxelIntBox Box, FIntVector Point);
    FVoxelIntBox AddBox(FVoxelIntBox Box, FVoxelIntBox BoxToAdd);
}; // Size: 0x28

class UVoxelInvokerAutoCameraComponent : public UVoxelSimpleInvokerComponent
{
}; // Size: 0x220

class UVoxelInvokerComponentBase : public USceneComponent
{
    bool bIsInvokerEnabled;                                                           // 0x01F8 (size: 0x1)
    bool bEditorOnlyInvoker;                                                          // 0x01F9 (size: 0x1)
    bool bUseForEvents;                                                               // 0x01FA (size: 0x1)
    bool bUseForPriorities;                                                           // 0x01FB (size: 0x1)

    bool ShouldUseInvoker(class AVoxelWorld* VoxelWorld);
    void RefreshAllVoxelInvokers();
    bool IsLocalInvoker();
    FIntVector GetInvokerVoxelPosition(class AVoxelWorld* VoxelWorld);
    FVoxelInvokerSettings GetInvokerSettings(class AVoxelWorld* VoxelWorld);
}; // Size: 0x200

class UVoxelInvokerWithPredictionComponent : public UVoxelSimpleInvokerComponent
{
    bool bEnablePrediction;                                                           // 0x0220 (size: 0x1)
    float PredictionTime;                                                             // 0x0224 (size: 0x4)

}; // Size: 0x230

class UVoxelLODSubsystemProxy : public UVoxelDynamicSubsystemProxy
{
}; // Size: 0x28

class UVoxelLandscapeMaterialCollection : public UVoxelMaterialCollectionBase
{
    int32 MaxMaterialsToBlendAtOnce;                                                  // 0x0028 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0030 (size: 0x8)
    TMap<class FName, class bool> LayersToIgnore;                                     // 0x0038 (size: 0x50)
    TArray<FVoxelLandscapeMaterialCollectionLayer> Layers;                            // 0x0088 (size: 0x10)
    TMap<class FVoxelLandscapeMaterialCollectionPermutation, class UMaterialInstanceConstant*> MaterialCache; // 0x0098 (size: 0x50)
    TMap<int32, FVoxelLandscapeMaterialCollectionLayer> IndicesToLayers;              // 0x00E8 (size: 0x50)

}; // Size: 0x138

class UVoxelLevelTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0548 (size: 0x8)
    class UStaticMesh* CylinderMesh;                                                  // 0x0550 (size: 0x8)
    float Falloff;                                                                    // 0x0558 (size: 0x4)
    float Height;                                                                     // 0x055C (size: 0x4)
    float Offset;                                                                     // 0x0560 (size: 0x4)
    float Stride;                                                                     // 0x0564 (size: 0x4)

}; // Size: 0x570

class UVoxelLevelTools : public UVoxelToolsBase
{

    void LevelAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void Level(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
}; // Size: 0x28

class UVoxelLineBatchComponent : public UPrimitiveComponent
{
    float DefaultLifeTime;                                                            // 0x0470 (size: 0x4)
    bool bCalculateAccurateBounds;                                                    // 0x0474 (size: 0x1)

}; // Size: 0x480

class UVoxelMagicaVoxScene : public UObject
{
    TArray<FVoxelMagicaVoxSceneEntry> Entries;                                        // 0x0028 (size: 0x10)
    FString ImportPath;                                                               // 0x0038 (size: 0x10)

}; // Size: 0x48

class UVoxelMaterialCollectionBase : public UObject
{

    TArray<FVoxelMaterialCollectionMaterialInfo> GetMaterials();
    int32 GetMaterialIndex(FName Name);
    class UMaterialInterface* GetIndexMaterial(uint8 Index);
}; // Size: 0x28

class UVoxelMathLibrary : public UBlueprintFunctionLibrary
{

    void ResetHaltonStream(const FVoxelHaltonStream& Stream);
    FVoxelHaltonStream MakeHaltonStream(int32 InitialSeed);
    FVector GetUnitVectorFromRandom(FVector2D Random);
    FVector GetHalton3D(const FVoxelHaltonStream& Stream);
    FVector2D GetHalton2D(const FVoxelHaltonStream& Stream);
    float GetHalton1D(const FVoxelHaltonStream& Stream);
}; // Size: 0x28

class UVoxelMeshImporterInputData : public UObject
{
}; // Size: 0x58

class UVoxelMeshImporterLibrary : public UBlueprintFunctionLibrary
{

    class UTextureRenderTarget2D* CreateTextureFromMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, int32 Width, int32 Height);
    class UVoxelMeshImporterInputData* CreateMeshDataFromStaticMesh(class UStaticMesh* StaticMesh);
    void ConvertMeshToVoxels_NoMaterials(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettingsBase Settings, class UVoxelDataAsset*& Asset, int32& NumLeaks);
    void ConvertMeshToVoxels(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettings Settings, FVoxelMeshImporterRenderTargetCache& RenderTargetCache, class UVoxelDataAsset*& Asset, int32& NumLeaks);
}; // Size: 0x28

class UVoxelMeshTool : public UVoxelToolWithAlignment
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0558 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0560 (size: 0x8)
    float Stride;                                                                     // 0x0568 (size: 0x4)
    bool bSmoothImport;                                                               // 0x056C (size: 0x1)
    float Smoothness;                                                                 // 0x0570 (size: 0x4)
    bool bProgressiveStamp;                                                           // 0x0574 (size: 0x1)
    float Speed;                                                                      // 0x0578 (size: 0x4)
    FVoxelMeshImporterSettingsBase MeshImporterSettings;                              // 0x057C (size: 0x10)
    bool bSculpt;                                                                     // 0x058C (size: 0x1)
    bool bPaint;                                                                      // 0x058D (size: 0x1)
    int32 PaintMask;                                                                  // 0x0590 (size: 0x4)
    bool bPaintColors;                                                                // 0x0594 (size: 0x1)
    bool bImportColorsFromMesh;                                                       // 0x0595 (size: 0x1)
    class UMaterialInterface* ColorsMaterial;                                         // 0x0598 (size: 0x8)
    FColor ColorToPaint;                                                              // 0x05A0 (size: 0x4)
    bool bPaintUVs;                                                                   // 0x05A4 (size: 0x1)
    bool bImportUVsFromMesh;                                                          // 0x05A5 (size: 0x1)
    class UMaterialInterface* UVsMaterial;                                            // 0x05A8 (size: 0x8)
    FVector2D UV0ToPaint;                                                             // 0x05B0 (size: 0x8)
    FVector2D UV1ToPaint;                                                             // 0x05B8 (size: 0x8)
    bool bPaintIndex;                                                                 // 0x05C0 (size: 0x1)
    uint8 IndexToPaint;                                                               // 0x05C1 (size: 0x1)
    class UTextureRenderTarget2D* UVsRenderTarget;                                    // 0x05C8 (size: 0x8)
    class UTextureRenderTarget2D* ColorsRenderTarget;                                 // 0x05D0 (size: 0x8)
    int32 RenderTargetSize;                                                           // 0x05D8 (size: 0x4)
    FVector PositionOffset;                                                           // 0x05DC (size: 0xC)
    bool bAbsoluteScale;                                                              // 0x05E8 (size: 0x1)
    FVector Scale;                                                                    // 0x05EC (size: 0xC)
    bool bAlignToNormal;                                                              // 0x05F8 (size: 0x1)
    bool bAlignToMovement;                                                            // 0x05F9 (size: 0x1)
    FRotator RotationOffset;                                                          // 0x05FC (size: 0xC)
    FVoxelMeshImporterRenderTargetCache RenderTargetCache;                            // 0x0620 (size: 0x28)
    FVoxelMeshImporterSettings AssetData_ImporterSettings;                            // 0x0648 (size: 0x38)

}; // Size: 0x680

class UVoxelMultiplayerInterface : public UObject
{
}; // Size: 0x28

class UVoxelMultiplayerSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelMultiplayerTcpInterface : public UVoxelMultiplayerInterface
{

    bool StartServer(FString& OutError, FString IP, int32 Port);
    bool ConnectToServer(FString& OutError, FString IP, int32 Port);
}; // Size: 0x48

class UVoxelNoClippingComponent : public USceneComponent
{
    float TickRate;                                                                   // 0x01F8 (size: 0x4)
    int32 SearchRange;                                                                // 0x01FC (size: 0x4)
    bool bEnableDefaultBehavior;                                                      // 0x0200 (size: 0x1)
    float Speed;                                                                      // 0x0204 (size: 0x4)
    bool bIsPlanet;                                                                   // 0x0208 (size: 0x1)
    FVector PlanetCenter;                                                             // 0x020C (size: 0xC)
    FVoxelNoClippingComponentMoveTowardsSurface MoveTowardsSurface;                   // 0x0218 (size: 0x10)
    void OnMoveTowardsSurface();
    FVoxelNoClippingComponentStopMovingTowardsSurface StopMovingTowardsSurface;       // 0x0228 (size: 0x10)
    void OnStopMovingTowardsSurface();
    FVoxelNoClippingComponentOnTeleported OnTeleported;                               // 0x0238 (size: 0x10)
    void OnTeleported();
    bool bIsInsideSurface;                                                            // 0x0248 (size: 0x1)

    bool ShouldUseVoxelWorld(class AVoxelWorld* VoxelWorld);
    void OnTeleported__DelegateSignature();
    void OnStopMovingTowardsSurface__DelegateSignature();
    void OnMoveTowardsSurface__DelegateSignature();
}; // Size: 0x280

class UVoxelPhysicsPartSpawnerResult_Cubes : public UObject
{
    TArray<class AStaticMeshActor*> Cubes;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

class UVoxelPhysicsPartSpawnerResult_GetVoxels : public UObject
{
    TArray<FVoxelPositionValueMaterial> Voxels;                                       // 0x0030 (size: 0x10)

}; // Size: 0x40

class UVoxelPhysicsPartSpawnerResult_VoxelWorlds : public UObject
{
    class AVoxelWorld* VoxelWorld;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

class UVoxelPhysicsPartSpawner_Cubes : public UObject
{
    class UMaterialInterface* Material;                                               // 0x0030 (size: 0x8)
    class UStaticMesh* CubeMesh;                                                      // 0x0038 (size: 0x8)
    float SpawnProbability;                                                           // 0x0040 (size: 0x4)

}; // Size: 0x48

class UVoxelPhysicsPartSpawner_GetVoxels : public UObject
{
}; // Size: 0x30

class UVoxelPhysicsPartSpawner_VoxelWorlds : public UObject
{
    FVoxelPhysicsPartSpawner_VoxelWorldsConfigureVoxelWorld ConfigureVoxelWorld;      // 0x0030 (size: 0x10)
    void ConfigureVoxelWorld(class AVoxelWorld* VoxelWorld);
    TSubclassOf<class AVoxelWorld> VoxelWorldClass;                                   // 0x0040 (size: 0x8)

}; // Size: 0x48

class UVoxelPhysicsRelevancyComponent : public UActorComponent
{
    uint8 MaxVoxelChunksLODForPhysics;                                                // 0x00B0 (size: 0x1)
    float TimeToWaitBeforeActivating;                                                 // 0x00B4 (size: 0x4)
    float TickInterval;                                                               // 0x00B8 (size: 0x4)

}; // Size: 0xE8

class UVoxelPhysicsTools : public UBlueprintFunctionLibrary
{

    void ApplyVoxelPhysics(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>>& Results, class AVoxelWorld* World, FVoxelIntBox Bounds, TScriptInterface<class IVoxelPhysicsPartSpawner> PartSpawner, int32 MinParts, bool bDebug, bool bHideLatentWarnings);
}; // Size: 0x28

class UVoxelPlaceableItemActorHelper : public UObject
{
}; // Size: 0x78

class UVoxelPlaceableItemManager : public UObject
{
    bool bEnableDebug;                                                                // 0x0028 (size: 0x1)
    bool bDebugBounds;                                                                // 0x0029 (size: 0x1)
    TArray<FVoxelDataItemConstructionInfo> DataItemInfos;                             // 0x0030 (size: 0x10)
    class UVoxelGeneratorCache* GeneratorCache;                                       // 0x0040 (size: 0x8)

    void OnGenerate();
    void OnClear();
    class UVoxelGeneratorCache* GetGeneratorCache();
    void DrawDebugPoint(FVector Position, FLinearColor Color);
    void DrawDebugLine(FVector Start, FVector End, FLinearColor Color);
    void AddDataItem(FVoxelDataItemConstructionInfo Info);
}; // Size: 0x68

class UVoxelPlaceableItemsUtilities : public UBlueprintFunctionLibrary
{

    void AddWorms(FAddWormsAddWorm AddWorm, FVoxelPerlinWormsSettings Settings);
    void AddWorm__DelegateSignature(FVector Start, FVector End, float Radius);
}; // Size: 0x28

class UVoxelPoolSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelProceduralMeshComponent : public UModelComponent
{
    class UBodySetup* BodySetup;                                                      // 0x0538 (size: 0x8)
    class UBodySetup* BodySetupBeingCooked;                                           // 0x0540 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0548 (size: 0x8)

    void SetVoxelCollisionsFrozen(const class AVoxelWorld* VoxelWorld, bool bFrozen);
    void InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds);
    bool AreVoxelCollisionsFrozen(const class AVoxelWorld* VoxelWorld);
}; // Size: 0x620

class UVoxelProjectionTools : public UBlueprintFunctionLibrary
{

    FVoxelLineTraceParameters MakeVoxelLineTraceParameters(TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    TArray<FIntVector> GetHitsPositions(const TArray<FVoxelProjectionHit>& Hits);
    FVector GetHitsAveragePosition(const TArray<FVoxelProjectionHit>& Hits);
    FVector GetHitsAverageNormal(const TArray<FVoxelProjectionHit>& Hits);
    int32 FindProjectionVoxelsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelProjectionHit>& Hits, class AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector Position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance, bool bHideLatentWarnings);
    int32 FindProjectionVoxels(TArray<FVoxelProjectionHit>& Hits, class AVoxelWorld* World, FVoxelLineTraceParameters Parameters, FVector Position, FVector Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance);
    FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHitsWithExactValues(class AVoxelWorld* World, const TArray<FVoxelProjectionHit>& Hits);
    FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHits(const TArray<FVoxelProjectionHit>& Hits);
}; // Size: 0x28

class UVoxelRendererSubsystemProxy : public UVoxelDynamicSubsystemProxy
{
}; // Size: 0x28

class UVoxelRevertTool : public UVoxelSphereToolBase
{
    bool bRevertValues;                                                               // 0x0568 (size: 0x1)
    bool bRevertMaterials;                                                            // 0x0569 (size: 0x1)
    int32 HistoryPosition;                                                            // 0x056C (size: 0x4)
    int32 CurrentHistoryPosition;                                                     // 0x0570 (size: 0x4)

}; // Size: 0x580

class UVoxelSaveUtilities : public UBlueprintFunctionLibrary
{

    bool DecompressVoxelSave(const FVoxelCompressedWorldSave& CompressedSave, FVoxelUncompressedWorldSave& OutUncompressedSave);
    void CompressVoxelSave(const FVoxelUncompressedWorldSave& UncompressedSave, FVoxelCompressedWorldSave& OutCompressedSave);
}; // Size: 0x28

class UVoxelSettings : public UDeveloperSettings
{
    int32 NumberOfThreads;                                                            // 0x0038 (size: 0x4)
    float PriorityDuration;                                                           // 0x003C (size: 0x4)
    EVoxelThreadPriority ThreadPriority;                                              // 0x0040 (size: 0x1)
    bool bShowNotifications;                                                          // 0x0041 (size: 0x1)
    bool bDisableAutoPreview;                                                         // 0x0042 (size: 0x1)
    bool bRoundBeforeSaving;                                                          // 0x0043 (size: 0x1)
    int32 DefaultCompressionLevel;                                                    // 0x0044 (size: 0x4)

}; // Size: 0x48

class UVoxelSimpleInvokerComponent : public UVoxelInvokerComponentBase
{
    bool bUseForLOD;                                                                  // 0x0200 (size: 0x1)
    int32 LODToSet;                                                                   // 0x0204 (size: 0x4)
    float LODRange;                                                                   // 0x0208 (size: 0x4)
    bool bUseForCollisions;                                                           // 0x020C (size: 0x1)
    float CollisionsRange;                                                            // 0x0210 (size: 0x4)
    bool bUseForNavmesh;                                                              // 0x0214 (size: 0x1)
    float NavmeshRange;                                                               // 0x0218 (size: 0x4)

    FVector GetInvokerGlobalPosition();
}; // Size: 0x220

class UVoxelSmoothTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0548 (size: 0x8)
    bool bSculpt;                                                                     // 0x0550 (size: 0x1)
    bool bPaint;                                                                      // 0x0551 (size: 0x1)
    int32 PaintMask;                                                                  // 0x0554 (size: 0x4)
    float Strength;                                                                   // 0x0558 (size: 0x4)
    int32 NumIterations;                                                              // 0x055C (size: 0x4)
    EVoxelFalloff FalloffType;                                                        // 0x0560 (size: 0x1)
    float Falloff;                                                                    // 0x0564 (size: 0x4)

}; // Size: 0x570

class UVoxelSphereTool : public UVoxelSphereToolBase
{
    class UMaterialInterface* OverlayMaterial;                                        // 0x0568 (size: 0x8)
    bool bSculpt;                                                                     // 0x0570 (size: 0x1)
    bool bEnableIndexInterval;                                                        // 0x0571 (size: 0x1)
    FVoxelInt32Interval IndexInterval;                                                // 0x0574 (size: 0x8)
    bool bPaint;                                                                      // 0x057C (size: 0x1)
    float PaintStrength;                                                              // 0x0580 (size: 0x4)
    EVoxelFalloff FalloffType;                                                        // 0x0584 (size: 0x1)
    float Falloff;                                                                    // 0x0588 (size: 0x4)

}; // Size: 0x590

class UVoxelSphereToolBase : public UVoxelToolWithAlignment
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0558 (size: 0x8)
    class UStaticMesh* SphereMesh;                                                    // 0x0560 (size: 0x8)

}; // Size: 0x570

class UVoxelSphereTools : public UVoxelToolsBase
{

    void TrimSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void TrimSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SmoothSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SmoothSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SmoothMaterialSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SmoothMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SetValueSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SetValueSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void SetMaterialSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void SetMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RevertSphereToGeneratorAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RevertSphereToGenerator(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RevertSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RevertSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RemoveSphereWithDurabilityAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, FVoxelInt32Interval Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RemoveSphereWithDurability(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, FVoxelInt32Interval Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void RemoveSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void RemoveSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void ApplyMaterialKernelSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void ApplyMaterialKernelSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    void ApplyKernelSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void ApplyKernelSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    void AddSphereAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    void AddSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
}; // Size: 0x28

class UVoxelStaticSubsystemProxy : public UVoxelSubsystemProxy
{
}; // Size: 0x28

class UVoxelSubsystemProxy : public UObject
{
}; // Size: 0x28

class UVoxelSurfaceEditTools : public UVoxelToolsBase
{

    void PropagateVoxelMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    void PropagateVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    void EditVoxelValuesAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    void EditVoxelValues(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    void EditVoxelMaterialsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    void EditVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, class AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
}; // Size: 0x28

class UVoxelSurfaceTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0548 (size: 0x8)
    bool bSculpt;                                                                     // 0x0550 (size: 0x1)
    float SculptStrength;                                                             // 0x0554 (size: 0x4)
    bool bPropagateMaterials;                                                         // 0x0558 (size: 0x1)
    bool bPaint;                                                                      // 0x0559 (size: 0x1)
    float PaintStrength;                                                              // 0x055C (size: 0x4)
    bool b2DBrush;                                                                    // 0x0560 (size: 0x1)
    bool bMovementAffectsStrength;                                                    // 0x0561 (size: 0x1)
    float Stride;                                                                     // 0x0564 (size: 0x4)
    bool bAlignToMovement;                                                            // 0x0568 (size: 0x1)
    FRotator FixedDirection;                                                          // 0x056C (size: 0xC)
    bool bModulateStrengthByDeltaTime;                                                // 0x0578 (size: 0x1)
    bool bEnableFalloff;                                                              // 0x0579 (size: 0x1)
    EVoxelFalloff FalloffType;                                                        // 0x057A (size: 0x1)
    float Falloff;                                                                    // 0x057C (size: 0x4)
    bool bUseMask;                                                                    // 0x0580 (size: 0x1)
    FVoxelSurfaceToolMask Mask;                                                       // 0x0588 (size: 0xA8)
    class UTexture2D* MaskGeneratorCache_RenderTexture;                               // 0x0740 (size: 0x8)

}; // Size: 0x750

class UVoxelSurfaceTools : public UBlueprintFunctionLibrary
{

    void GetStrengthMaskScale(float& ScaleX, float& ScaleY, class AVoxelWorld* World, FVoxelFloatTexture Mask, float SizeX, float SizeY, bool bConvertToVoxelSpace);
    FVoxelIntBox GetBounds(FVoxelSurfaceEditsProcessedVoxels Voxels);
    void FindSurfaceVoxelsFromDistanceField(FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded, EVoxelComputeDevice ComputeDevice);
    void FindSurfaceVoxelsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings);
    void FindSurfaceVoxels2DAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings);
    void FindSurfaceVoxels2D(FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals);
    void FindSurfaceVoxels(FVoxelSurfaceEditsVoxels& Voxels, class AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals);
    void DebugSurfaceVoxels(class AVoxelWorld* World, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float LifeTime);
    FVoxelSurfaceEditsStackElement ApplyTerrace(int32 TerraceHeightInVoxels, float Angle, int32 ImmutableVoxels);
    FVoxelSurfaceEditsStackElement ApplyStrengthMask(class AVoxelWorld* World, FVoxelFloatTexture Mask, FVector EditPosition, float ScaleX, float ScaleY, FVector PlaneNormal, FVector PlaneTangent, EVoxelSamplerMode SamplerMode, bool bConvertToVoxelSpace);
    FVoxelSurfaceEditsStackElement ApplyStrengthCurve(class AVoxelWorld* World, FVector Center, float Radius, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace);
    void ApplyStackAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack, bool bHideLatentWarnings);
    FVoxelSurfaceEditsProcessedVoxels ApplyStack(FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack);
    FVoxelSurfaceEditsStackElement ApplyFlatten(class AVoxelWorld* World, FVector PlanePoint, FVector PlaneNormal, EVoxelSDFMergeMode MergeMode, bool bConvertToVoxelSpace);
    FVoxelSurfaceEditsStackElement ApplyFalloff(class AVoxelWorld* World, EVoxelFalloff FalloffType, FVector Center, float Radius, float Falloff, bool bConvertToVoxelSpace);
    FVoxelSurfaceEditsStackElement ApplyConstantStrength(float Strength);
    FVoxelSurfaceEditsStack AddToStack(FVoxelSurfaceEditsStack Stack, FVoxelSurfaceEditsStackElement Element);
}; // Size: 0x28

class UVoxelTestLibrary : public UBlueprintFunctionLibrary
{

    void TestValues(FVoxelTestValues ValuesA, FVoxelTestValues ValuesB);
    FVoxelTestValues ReadValues(class AVoxelWorld* World, FVoxelIntBox Bounds);
}; // Size: 0x28

class UVoxelTexturePoolSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelTextureTools : public UBlueprintFunctionLibrary
{

    FVoxelFloatTexture Minimum(FVoxelFloatTexture Texture, float Radius);
    FVoxelFloatTexture Maximum(FVoxelFloatTexture Texture, float Radius);
}; // Size: 0x28

class UVoxelTool : public UObject
{
    FName ToolName;                                                                   // 0x0028 (size: 0x8)
    FText Tooltip;                                                                    // 0x0030 (size: 0x18)
    bool bShowInDropdown;                                                             // 0x0048 (size: 0x1)
    bool bShowPaintMaterial;                                                          // 0x0049 (size: 0x1)
    class UVoxelToolSharedConfig* SharedConfig;                                       // 0x0050 (size: 0x8)
    bool bEnabled;                                                                    // 0x0058 (size: 0x1)
    FVoxelToolTickData FrozenTickData;                                                // 0x0060 (size: 0x120)

    FVoxelToolTickData MakeVoxelToolTickData(class APlayerController* PlayerController, bool bEdit, const TMap<class FName, class bool>& Keys, const TMap<FName, float>& Axes, FVector2D MousePosition, FVector CameraDirection, TEnumAsByte<ECollisionChannel> CollisionChannel);
    class UVoxelTool* MakeVoxelTool(TSubclassOf<class UVoxelTool> ToolClass);
    TMap<class FName, class bool> MakeToolKeys(bool bAlternativeMode);
    TMap<FName, float> MakeToolAxes(float BrushSizeDelta, float FalloffDelta, float StrengthDelta);
    void K2_SimpleTick(class APlayerController* PlayerController, bool bEdit, const TMap<class FName, class bool>& Keys, const TMap<FName, float>& Axes, const FK2_SimpleTickDoEditOverride& DoEditOverride, TEnumAsByte<ECollisionChannel> CollisionChannel);
    void K2_AdvancedTick(class UObject* WorldContextObject, const FVoxelToolTickData& TickData, const FK2_AdvancedTickDoEditOverride& DoEditOverride);
    bool IsKeyDown(FVoxelToolTickData TickData, FName Key);
    bool IsAlternativeMode(FVoxelToolTickData TickData);
    class AVoxelWorld* GetVoxelWorld();
    FName GetToolName();
    FVector GetRayOrigin(FVoxelToolTickData TickData);
    FVector GetRayDirection(FVoxelToolTickData TickData);
    float GetAxis(FVoxelToolTickData TickData, FName Axis);
    void EnableTool();
    void DoEditDynamicOverride__DelegateSignature(FVector Position, FVector Normal);
    void DisableTool();
    bool Deproject(FVoxelToolTickData TickData, FVector2D ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    void Apply(class AVoxelWorld* World, FVector Position, FVector Normal, const TMap<class FName, class bool>& Keys, const TMap<FName, float>& Axes);
}; // Size: 0x180

class UVoxelToolBase : public UVoxelTool
{
    class AVoxelWorld* VoxelWorld;                                                    // 0x0180 (size: 0x8)
    class UMaterialInstanceDynamic* ToolOverlayMaterialInstance;                      // 0x0530 (size: 0x8)
    class UMaterialInstanceDynamic* ToolMeshMaterialInstance;                         // 0x0538 (size: 0x8)
    class UMaterialInstanceDynamic* PlaneMeshMaterialInstance;                        // 0x0540 (size: 0x8)

    void UpdateToolMesh(class UStaticMesh* Mesh, class UMaterialInterface* Material, const FTransform& Transform, FName ID);
    void SetToolOverlayBounds(const FBox& Bounds);
    bool LastFrameCanEdit();
    void K2_UpdateRender(class UMaterialInstanceDynamic* OverlayMaterialInstance, class UMaterialInstanceDynamic* MeshMaterialInstance);
    void K2_Tick();
    void K2_GetToolConfig(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig);
    FVoxelIntBoxWithValidity K2_DoEdit();
    float GetValueAfterAxisInput(FName AxisName, float CurrentValue, float Min, float Max);
    FVector GetToolPreviewPosition();
    FVector GetToolPosition();
    FVector GetToolNormal();
    FVector GetToolDirection();
    FVoxelToolTickData GetTickData();
    float GetMouseMovementSize();
    FVoxelToolTickData GetLastFrameTickData();
    float GetDeltaTime();
    FVoxelIntBox GetBoundsToCache(const FVoxelIntBox& Bounds);
    bool CanEdit();
}; // Size: 0x550

class UVoxelToolLibrary : public UBlueprintFunctionLibrary
{

    void UpdateSphereOverlayMaterial(class UVoxelToolBase* Tool, class UMaterialInstanceDynamic* OverlayMaterialInstance, EVoxelFalloff FalloffType, float Falloff);
}; // Size: 0x28

class UVoxelToolManager : public UObject
{
    class UVoxelToolSharedConfig* SharedConfig;                                       // 0x0028 (size: 0x8)
    class UVoxelTool* ActiveTool;                                                     // 0x0030 (size: 0x8)
    TArray<class UVoxelTool*> Tools;                                                  // 0x0038 (size: 0x10)

    void SetActiveToolByName(FName NewActiveTool);
    void SetActiveToolByClass(TSubclassOf<class UVoxelTool> NewActiveTool);
    void SetActiveTool(class UVoxelTool* NewActiveTool);
    class UVoxelToolSharedConfig* K2_GetSharedConfig();
    TArray<class UVoxelTool*> GetTools();
    class UVoxelTool* GetActiveTool();
    void CreateDefaultTools(bool bLoadBlueprints);
}; // Size: 0x48

class UVoxelToolRenderingSubsystemProxy : public UVoxelStaticSubsystemProxy
{
}; // Size: 0x28

class UVoxelToolSharedConfig : public UObject
{
    float BrushSize;                                                                  // 0x0028 (size: 0x4)
    FVoxelPaintMaterial PaintMaterial;                                                // 0x0030 (size: 0x98)
    float ToolOpacity;                                                                // 0x00C8 (size: 0x4)
    float AlignToMovementSmoothness;                                                  // 0x00CC (size: 0x4)
    float ControlSpeed;                                                               // 0x00D0 (size: 0x4)
    TArray<class AVoxelWorld*> WorldsToEdit;                                          // 0x00D8 (size: 0x10)
    bool bCacheData;                                                                  // 0x00E8 (size: 0x1)
    bool bMultiThreaded;                                                              // 0x00E9 (size: 0x1)
    EVoxelComputeDevice ComputeDevice;                                                // 0x00EA (size: 0x1)
    bool bRegenerateFoliage;                                                          // 0x00EB (size: 0x1)
    bool bCheckForSingleValues;                                                       // 0x00EC (size: 0x1)
    bool bWaitForUpdates;                                                             // 0x00ED (size: 0x1)
    bool bDebug;                                                                      // 0x00EE (size: 0x1)
    float FixedDeltaTime;                                                             // 0x00F0 (size: 0x4)
    class UStaticMesh* PlaneMesh;                                                     // 0x00F8 (size: 0x8)
    class UMaterialInterface* PlaneMaterial;                                          // 0x0100 (size: 0x8)
    FVoxelToolSharedConfigOnBoundsUpdated OnBoundsUpdated;                            // 0x0108 (size: 0x10)
    void VoxelTool_OnBoundsUpdated(class AVoxelWorld* World, FVoxelIntBox Bounds);

}; // Size: 0x130

class UVoxelToolWithAlignment : public UVoxelToolBase
{
    EVoxelToolAlignment Alignment;                                                    // 0x0548 (size: 0x1)
    bool bAirMode;                                                                    // 0x0549 (size: 0x1)
    float DistanceToCamera;                                                           // 0x054C (size: 0x4)
    bool bShowPlanePreview;                                                           // 0x0550 (size: 0x1)

}; // Size: 0x560

class UVoxelToolsBase : public UBlueprintFunctionLibrary
{

    FVoxelIntBox GetModifiedVoxelValuesBounds(const TArray<FModifiedVoxelValue>& ModifiedVoxels);
    FVoxelIntBox GetModifiedVoxelMaterialsBounds(const TArray<FModifiedVoxelMaterial>& ModifiedVoxels);
}; // Size: 0x28

class UVoxelTransformableGenerator : public UVoxelGenerator
{
}; // Size: 0x28

class UVoxelTransformableGeneratorInstanceWrapper : public UObject
{

    bool IsValid();
}; // Size: 0x38

class UVoxelTransformableGeneratorWithBounds : public UVoxelTransformableGenerator
{
}; // Size: 0x28

class UVoxelTrimTool : public UVoxelToolBase
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0548 (size: 0x8)
    float Falloff;                                                                    // 0x0550 (size: 0x4)
    float Roughness;                                                                  // 0x0554 (size: 0x4)

}; // Size: 0x570

class UVoxelVolumeInvokerComponent : public UVoxelInvokerComponentBase
{
    bool bUseForLOD;                                                                  // 0x0200 (size: 0x1)
    int32 LODToSet;                                                                   // 0x0204 (size: 0x4)
    bool bUseForCollisions;                                                           // 0x0208 (size: 0x1)
    bool bUseForNavmesh;                                                              // 0x0209 (size: 0x1)

}; // Size: 0x210

class UVoxelWorldRootComponent : public UPrimitiveComponent
{
    class UBodySetup* BodySetup;                                                      // 0x0448 (size: 0x8)

}; // Size: 0x4B0

class UVoxelWorldSaveObject : public UObject
{
    FVoxelCompressedWorldSave Save;                                                   // 0x0028 (size: 0x20)
    int32 Depth;                                                                      // 0x0048 (size: 0x4)

}; // Size: 0x50

#endif
