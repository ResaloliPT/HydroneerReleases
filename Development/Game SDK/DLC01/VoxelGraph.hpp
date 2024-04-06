#ifndef UE4SS_SDK_VoxelGraph_HPP
#define UE4SS_SDK_VoxelGraph_HPP

#include "VoxelGraph_enums.hpp"

struct FBiomeMapElement
{
    FColor Color;                                                                     // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FVoxelGraphMacroPin
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    EVoxelPinCategory Category;                                                       // 0x0010 (size: 0x1)
    FString Tooltip;                                                                  // 0x0018 (size: 0x10)
    FString DefaultValue;                                                             // 0x0028 (size: 0x10)
    bool bCustomDefaultValue;                                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FVoxelGraphOutput
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    EVoxelDataPinCategory Category;                                                   // 0x0008 (size: 0x1)
    FGuid Guid;                                                                       // 0x000C (size: 0x10)
    uint32 Index;                                                                     // 0x001C (size: 0x4)

}; // Size: 0x20

struct FVoxelNamedDataPin
{
    EVoxelDataPinCategory Type;                                                       // 0x0000 (size: 0x1)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FVoxelPin
{
    FGuid PinId;                                                                      // 0x0000 (size: 0x10)
    FString DefaultValue;                                                             // 0x0010 (size: 0x10)
    EVoxelPinCategory PinCategory;                                                    // 0x0020 (size: 0x1)
    TArray<class UVoxelNode*> OtherNodes;                                             // 0x0028 (size: 0x10)
    TArray<FGuid> OtherPinIds;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FVoxelPortalNodeSelector
{
    TWeakObjectPtr<class UVoxelLocalVariableDeclaration> Input;                       // 0x0000 (size: 0x8)

}; // Size: 0x8

class UVDI_Capsule_Graph : public UVoxelGraphGeneratorHelper
{
    float Noise_Amplitude;                                                            // 0x0030 (size: 0x4)
    int32 Seed;                                                                       // 0x0034 (size: 0x4)

}; // Size: 0x38

class UVDI_Example_Crater_Graph : public UVoxelGraphGeneratorHelper
{
}; // Size: 0x30

class UVDI_Ravine_Graph : public UVoxelGraphGeneratorHelper
{
}; // Size: 0x30

class UVDI_Sphere_Graph : public UVoxelGraphGeneratorHelper
{
}; // Size: 0x30

class UVG_Example_Craters : public UVoxelGraphGeneratorHelper
{
    float Radius;                                                                     // 0x0030 (size: 0x4)

}; // Size: 0x38

class UVG_Example_Dunes : public UVoxelGraphGeneratorHelper
{
    float Direction_X;                                                                // 0x0030 (size: 0x4)
    float Direction_Y;                                                                // 0x0034 (size: 0x4)
    float Dune_Frequency;                                                             // 0x0038 (size: 0x4)
    float Height;                                                                     // 0x003C (size: 0x4)
    float Noise_Frequency;                                                            // 0x0040 (size: 0x4)

}; // Size: 0x48

class UVG_Example_Erosion : public UVoxelGraphGeneratorHelper
{
    float Erosion_Material_Offset;                                                    // 0x0030 (size: 0x4)
    float Erosion_Material_Strength;                                                  // 0x0034 (size: 0x4)
    float Erosion_Strength;                                                           // 0x0038 (size: 0x4)
    float Height;                                                                     // 0x003C (size: 0x4)
    TSoftObjectPtr<UMaterialInterface> Rocks;                                         // 0x0040 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Snow;                                          // 0x0068 (size: 0x28)
    float Valleys_Height;                                                             // 0x0090 (size: 0x4)

}; // Size: 0x98

class UVG_Example_FastCraters : public UVoxelGraphGeneratorHelper
{
}; // Size: 0x30

class UVG_Example_MultiIndex : public UVoxelGraphGeneratorHelper
{
    TSoftObjectPtr<UMaterialInterface> Layer_0;                                       // 0x0030 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Layer_1;                                       // 0x0058 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Layer_2;                                       // 0x0080 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Layer_3;                                       // 0x00A8 (size: 0x28)

}; // Size: 0xD0

class UVoxelAssetPickerNode : public UVoxelExposedNode
{
}; // Size: 0x150

class UVoxelCoordinateNode : public UVoxelNodeWithDependencies
{
}; // Size: 0x98

class UVoxelExample_Cave : public UVoxelGraphGeneratorHelper
{
    float Bottom_Noise_Frequency;                                                     // 0x0030 (size: 0x4)
    float Bottom_Noise_Scale;                                                         // 0x0034 (size: 0x4)
    int32 Bottom_Noise_Seed;                                                          // 0x0038 (size: 0x4)
    int32 Global_Height_Seed;                                                         // 0x003C (size: 0x4)
    int32 Top_Noise_Seed;                                                             // 0x0040 (size: 0x4)
    float Top_Noise_Frequency;                                                        // 0x0044 (size: 0x4)
    float Top_Noise_Scale;                                                            // 0x0048 (size: 0x4)
    float Bottom_Top_Merge_Smoothness;                                                // 0x004C (size: 0x4)
    float Global_Height_Merge_Smoothness;                                             // 0x0050 (size: 0x4)
    float Global_Height_Noise_Frequency;                                              // 0x0054 (size: 0x4)
    float Global_Height_Noise_Scale;                                                  // 0x0058 (size: 0x4)
    float Global_Height_Offset;                                                       // 0x005C (size: 0x4)
    float Cave_Height;                                                                // 0x0060 (size: 0x4)
    float Cave_Radius;                                                                // 0x0064 (size: 0x4)
    float Cave_Walls_Smoothness;                                                      // 0x0068 (size: 0x4)

}; // Size: 0x70

class UVoxelExample_Cliffs : public UVoxelGraphGeneratorHelper
{
    float Cliffs_Slope;                                                               // 0x0030 (size: 0x4)
    float Height;                                                                     // 0x0034 (size: 0x4)
    float Overhangs;                                                                  // 0x0038 (size: 0x4)
    float Base_Shape_Frequency;                                                       // 0x003C (size: 0x4)
    float Base_Shape_Offset;                                                          // 0x0040 (size: 0x4)
    int32 Base_Shape_Seed;                                                            // 0x0044 (size: 0x4)
    int32 Sides_Noise_Seed;                                                           // 0x0048 (size: 0x4)
    int32 Top_Noise_Seed;                                                             // 0x004C (size: 0x4)
    float Sides_Noise_Amplitude;                                                      // 0x0050 (size: 0x4)
    float Sides_Noise_Frequency;                                                      // 0x0054 (size: 0x4)
    float Top_Noise_Frequency;                                                        // 0x0058 (size: 0x4)
    float Top_Noise_Scale;                                                            // 0x005C (size: 0x4)

}; // Size: 0x60

class UVoxelExample_FloatingIslandOnion : public UVoxelGraphGeneratorHelper
{
    float Height;                                                                     // 0x0030 (size: 0x4)
    float Perturb_Amplitude;                                                          // 0x0034 (size: 0x4)
    float Perturb_Frequency;                                                          // 0x0038 (size: 0x4)
    int32 Seed;                                                                       // 0x003C (size: 0x4)
    float Top_Noise_Frequency;                                                        // 0x0040 (size: 0x4)
    float Top_Noise_Height;                                                           // 0x0044 (size: 0x4)

}; // Size: 0x48

class UVoxelExample_HeightmapComposition : public UVoxelGraphGeneratorHelper
{
    float Depth;                                                                      // 0x0030 (size: 0x4)
    bool Flip_X;                                                                      // 0x0034 (size: 0x1)
    bool Flip_Y;                                                                      // 0x0035 (size: 0x1)
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x0_y0;                       // 0x0038 (size: 0x28)
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x0_y1;                       // 0x0060 (size: 0x28)
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x1_y0;                       // 0x0088 (size: 0x28)
    TSoftObjectPtr<UVoxelHeightmapAssetUINT16> heightmap_x1_y1;                       // 0x00B0 (size: 0x28)
    float Size_X;                                                                     // 0x00D8 (size: 0x4)
    float Size_Y;                                                                     // 0x00DC (size: 0x4)

}; // Size: 0xE0

class UVoxelExample_HollowPlanet : public UVoxelGraphGeneratorHelper
{
    float Intersection_Smoothness;                                                    // 0x0030 (size: 0x4)
    float Noise_Bias;                                                                 // 0x0034 (size: 0x4)
    float Noise_Frequency;                                                            // 0x0038 (size: 0x4)
    float Noise_Scale;                                                                // 0x003C (size: 0x4)
    float Radius;                                                                     // 0x0040 (size: 0x4)
    int32 Seed;                                                                       // 0x0044 (size: 0x4)
    bool Use_IQ_Noise;                                                                // 0x0048 (size: 0x1)

}; // Size: 0x50

class UVoxelExample_IQNoise : public UVoxelGraphGeneratorHelper
{
    float Frequency;                                                                  // 0x0030 (size: 0x4)
    float Height;                                                                     // 0x0034 (size: 0x4)
    int32 Seed;                                                                       // 0x0038 (size: 0x4)

}; // Size: 0x40

class UVoxelExample_LayeredPlanet : public UVoxelGraphGeneratorHelper
{
    float Frequency;                                                                  // 0x0030 (size: 0x4)
    TSoftObjectPtr<UCurveFloat> None1;                                                // 0x0038 (size: 0x28)
    int32 Seed;                                                                       // 0x0060 (size: 0x4)
    bool Slice_Mode;                                                                  // 0x0064 (size: 0x1)

}; // Size: 0x68

class UVoxelExample_LayeredWorld : public UVoxelGraphGeneratorHelper
{
    float Frequency;                                                                  // 0x0030 (size: 0x4)
    TSoftObjectPtr<UCurveFloat> None1;                                                // 0x0038 (size: 0x28)
    int32 Seed;                                                                       // 0x0060 (size: 0x4)

}; // Size: 0x68

class UVoxelExample_Planet : public UVoxelGraphGeneratorHelper
{
    float Frequency;                                                                  // 0x0030 (size: 0x4)
    int32 Noise_Seed;                                                                 // 0x0034 (size: 0x4)
    float Noise_Strength;                                                             // 0x0038 (size: 0x4)
    TSoftObjectPtr<UCurveLinearColor> PlanetColorCurve;                               // 0x0040 (size: 0x28)
    TSoftObjectPtr<UCurveFloat> PlanetCurve;                                          // 0x0068 (size: 0x28)
    float Radius;                                                                     // 0x0090 (size: 0x4)

}; // Size: 0x98

class UVoxelExample_Ravines : public UVoxelGraphGeneratorHelper
{
    float _3D_Noise_Frequency;                                                        // 0x0030 (size: 0x4)
    int32 _3D_Noise_Seed;                                                             // 0x0034 (size: 0x4)
    float Bottom_Transition_Smoothness;                                               // 0x0038 (size: 0x4)
    float Height;                                                                     // 0x003C (size: 0x4)
    float Top_Transition_Smoothness;                                                  // 0x0040 (size: 0x4)

}; // Size: 0x48

class UVoxelExample_RingWorld : public UVoxelGraphGeneratorHelper
{
    float Radius;                                                                     // 0x0030 (size: 0x4)
    float RingEdgesHardness;                                                          // 0x0034 (size: 0x4)
    float Scale;                                                                      // 0x0038 (size: 0x4)
    float Thickness;                                                                  // 0x003C (size: 0x4)
    float Width_in_Degrees;                                                           // 0x0040 (size: 0x4)
    float RiverDepth;                                                                 // 0x0044 (size: 0x4)
    float RiverWidth;                                                                 // 0x0048 (size: 0x4)
    FLinearColor BeachColor;                                                          // 0x004C (size: 0x10)
    FLinearColor MountainsColorHigh;                                                  // 0x005C (size: 0x10)
    FLinearColor MountainsColorLowHigh;                                               // 0x006C (size: 0x10)
    FLinearColor MountainsColorLowLow;                                                // 0x007C (size: 0x10)
    TSoftObjectPtr<UCurveFloat> MoutainsMaskCurve;                                    // 0x0090 (size: 0x28)
    FLinearColor PlainsColorHigh;                                                     // 0x00B8 (size: 0x10)
    FLinearColor PlainsColorLow;                                                      // 0x00C8 (size: 0x10)
    float PlainsNoiseFrequency;                                                       // 0x00D8 (size: 0x4)
    float PlainsNoiseHeight;                                                          // 0x00DC (size: 0x4)
    TSoftObjectPtr<UCurveFloat> PlainsNoiseStrengthCurve;                             // 0x00E0 (size: 0x28)
    TSoftObjectPtr<UCurveFloat> RingMainShapeCurve;                                   // 0x0108 (size: 0x28)
    FLinearColor RingOuterColor;                                                      // 0x0130 (size: 0x10)
    FLinearColor RiverColor;                                                          // 0x0140 (size: 0x10)
    TSoftObjectPtr<UCurveFloat> RiverDepthCurve;                                      // 0x0150 (size: 0x28)
    float MountainsNoiseFrequency;                                                    // 0x0178 (size: 0x4)
    float MountainsNoiseHeight;                                                       // 0x017C (size: 0x4)
    float BaseNoiseFrquency;                                                          // 0x0180 (size: 0x4)
    float BaseNoiseHeight;                                                            // 0x0184 (size: 0x4)
    float BaseHeight;                                                                 // 0x0188 (size: 0x4)

}; // Size: 0x190

class UVoxelExample_Tool_NoisyColors : public UVoxelGraphGeneratorHelper
{
    FLinearColor Color;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UVoxelExposedNode : public UVoxelNodeHelper
{
    FString DisplayName;                                                              // 0x0098 (size: 0x10)
    FName UniqueName;                                                                 // 0x00A8 (size: 0x8)
    FString Category;                                                                 // 0x00B0 (size: 0x10)
    FString Tooltip;                                                                  // 0x00C0 (size: 0x10)
    int32 Priority;                                                                   // 0x00D0 (size: 0x4)
    FString UIMin;                                                                    // 0x00D8 (size: 0x10)
    FString UIMax;                                                                    // 0x00E8 (size: 0x10)
    TMap<class FName, class FString> CustomMetaData;                                  // 0x00F8 (size: 0x50)
    bool bCanBeRenamed;                                                               // 0x0148 (size: 0x1)

}; // Size: 0x150

class UVoxelGraphAssetNode : public UVoxelNodeWithContext
{
    FVoxelGeneratorPicker DefaultGenerator;                                           // 0x0098 (size: 0x68)

}; // Size: 0x100

class UVoxelGraphDataItemConfig : public UObject
{
    TArray<FName> Parameters;                                                         // 0x0028 (size: 0x10)

}; // Size: 0x38

class UVoxelGraphGenerator : public UVoxelTransformableGenerator
{
    class UVoxelGraphOutputsConfig* Outputs;                                          // 0x0028 (size: 0x8)
    TArray<FVoxelGraphOutput> CustomOutputs;                                          // 0x0030 (size: 0x10)
    bool bAutomaticPreview;                                                           // 0x0040 (size: 0x1)
    bool bShowFlowMergeAndFunctionsWarnings;                                          // 0x0041 (size: 0x1)
    bool bUseCppClassInsteadOfGraph;                                                  // 0x0042 (size: 0x1)
    TSoftClassPtr<UVoxelGenerator> GeneratedCppClass;                                 // 0x0048 (size: 0x28)
    bool bCompileToCppOnSave;                                                         // 0x0070 (size: 0x1)
    FFilePath SaveLocation;                                                           // 0x0078 (size: 0x10)
    bool bBuiltinPluginGenerator;                                                     // 0x0088 (size: 0x1)
    bool bEnableRangeAnalysis;                                                        // 0x0089 (size: 0x1)
    bool bEnableDebugGraph;                                                           // 0x008A (size: 0x1)
    bool bShowFunctions;                                                              // 0x008B (size: 0x1)
    bool bDetailedErrors;                                                             // 0x008C (size: 0x1)
    bool bShowPinsIds;                                                                // 0x008D (size: 0x1)
    bool bShowAxisDependencies;                                                       // 0x008E (size: 0x1)
    EVoxelGraphGeneratorDebugLevel DebugLevel;                                        // 0x008F (size: 0x1)
    FString TargetToDebug;                                                            // 0x0090 (size: 0x10)
    int32 FunctionToDebug;                                                            // 0x00A0 (size: 0x4)
    EVoxelFunctionAxisDependencies AxisDependenciesToDebug;                           // 0x00A4 (size: 0x1)
    float NodesDepthScaleFactor;                                                      // 0x00A8 (size: 0x4)
    bool bHideDataNodes;                                                              // 0x00AC (size: 0x1)
    TArray<class UVoxelNode*> AllNodes;                                               // 0x00B0 (size: 0x10)
    TArray<class UVoxelNode*> DebugNodes;                                             // 0x00C0 (size: 0x10)
    class UVoxelNode* FirstNode;                                                      // 0x00D0 (size: 0x8)
    FGuid FirstNodePinId;                                                             // 0x00D8 (size: 0x10)
    class UVoxelGraphPreviewSettings* PreviewSettings;                                // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class UVoxelGraphGeneratorHelper : public UVoxelTransformableGenerator
{
    bool bEnableRangeAnalysis;                                                        // 0x0028 (size: 0x1)

}; // Size: 0x30

class UVoxelGraphMacro : public UVoxelGraphGenerator
{
    FString Tooltip;                                                                  // 0x00F0 (size: 0x10)
    FString Keywords;                                                                 // 0x0100 (size: 0x10)
    FString CustomCategory;                                                           // 0x0110 (size: 0x10)
    FString CustomName;                                                               // 0x0120 (size: 0x10)
    bool bShowInContextMenu;                                                          // 0x0130 (size: 0x1)
    bool bVectorOnlyNode;                                                             // 0x0131 (size: 0x1)
    class UVoxelGraphMacroInputNode* InputNode;                                       // 0x0138 (size: 0x8)
    class UVoxelGraphMacroOutputNode* OutputNode;                                     // 0x0140 (size: 0x8)

}; // Size: 0x148

class UVoxelGraphMacroInputNode : public UVoxelGraphMacroInputOutputNode
{
}; // Size: 0x70

class UVoxelGraphMacroInputOutputNode : public UVoxelNode
{
    TArray<FVoxelGraphMacroPin> Pins;                                                 // 0x0058 (size: 0x10)
    class UVoxelGraphMacro* Macro;                                                    // 0x0068 (size: 0x8)

}; // Size: 0x70

class UVoxelGraphMacroNode : public UVoxelNode
{
    class UVoxelGraphMacro* Macro;                                                    // 0x0058 (size: 0x8)

}; // Size: 0x60

class UVoxelGraphMacroOutputNode : public UVoxelGraphMacroInputOutputNode
{
}; // Size: 0x70

class UVoxelGraphNodeInterface : public UEdGraphNode
{
    FString InfoMsg;                                                                  // 0x0098 (size: 0x10)
    FString WarningMsg;                                                               // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UVoxelGraphOutputsConfig : public UObject
{
    TArray<FVoxelGraphOutput> Outputs;                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

class UVoxelGraphPreviewSettings : public UObject
{
    bool bShowStats;                                                                  // 0x0028 (size: 0x1)
    bool bShowValues;                                                                 // 0x0029 (size: 0x1)
    FString MinValue;                                                                 // 0x0030 (size: 0x10)
    FString MaxValue;                                                                 // 0x0040 (size: 0x10)
    FVoxelIntBox PreviewedBounds;                                                     // 0x0050 (size: 0x18)
    EVoxelGraphPreviewAxes LeftToRight;                                               // 0x0068 (size: 0x1)
    EVoxelGraphPreviewAxes BottomToTop;                                               // 0x0069 (size: 0x1)
    int32 Resolution;                                                                 // 0x006C (size: 0x4)
    int32 ResolutionMultiplierLog;                                                    // 0x0070 (size: 0x4)
    FIntVector Center;                                                                // 0x0074 (size: 0xC)
    FIntVector PreviewedVoxel;                                                        // 0x0080 (size: 0xC)
    EVoxelGraphPreviewShowValue ShowValue;                                            // 0x008C (size: 0x1)
    EVoxelMaterialConfig MaterialConfig;                                              // 0x008D (size: 0x1)
    class UVoxelMaterialCollectionBase* MaterialCollection;                           // 0x0090 (size: 0x8)
    class UVoxelPlaceableItemManager* PlaceableItemManager;                           // 0x0098 (size: 0x8)
    float VoxelSize;                                                                  // 0x00A0 (size: 0x4)
    EVoxelRenderType RenderType;                                                      // 0x00A4 (size: 0x1)
    EVoxelGraphPreviewType PreviewType2D;                                             // 0x00A5 (size: 0x1)
    bool bDrawColoredDistanceField;                                                   // 0x00A6 (size: 0x1)
    EVoxelGraphMaterialPreviewType MaterialPreviewType;                               // 0x00A7 (size: 0x1)
    int32 MultiIndexToPreview;                                                        // 0x00A8 (size: 0x4)
    TArray<FColor> IndexColors;                                                       // 0x00B0 (size: 0x10)
    bool bHybridMaterialRendering;                                                    // 0x00C0 (size: 0x1)
    float CostPercentile;                                                             // 0x00C4 (size: 0x4)
    int32 NumRangeAnalysisChunksPerAxis;                                              // 0x00C8 (size: 0x4)
    bool bHeightmapMode;                                                              // 0x00CC (size: 0x1)
    bool bHeightBasedColor;                                                           // 0x00CD (size: 0x1)
    bool bEnableWater;                                                                // 0x00CE (size: 0x1)
    float Height;                                                                     // 0x00D0 (size: 0x4)
    FVector LightDirection;                                                           // 0x00D4 (size: 0xC)
    float StartBias;                                                                  // 0x00E0 (size: 0x4)
    int32 MaxSteps;                                                                   // 0x00E4 (size: 0x4)
    float Brightness;                                                                 // 0x00E8 (size: 0x4)
    float ShadowDensity;                                                              // 0x00EC (size: 0x4)
    class UStaticMesh* Mesh;                                                          // 0x00F0 (size: 0x8)
    class UMaterialInterface* HeightmapMaterial;                                      // 0x00F8 (size: 0x8)
    class UMaterialInterface* SliceMaterial;                                          // 0x0100 (size: 0x8)
    bool bAutoNormalize;                                                              // 0x0108 (size: 0x1)
    float NormalizeMinValue;                                                          // 0x010C (size: 0x4)
    float NormalizeMaxValue;                                                          // 0x0110 (size: 0x4)
    int32 LODToPreview;                                                               // 0x0114 (size: 0x4)

}; // Size: 0x118

class UVoxelLocalVariableBase : public UVoxelNode
{
}; // Size: 0x58

class UVoxelLocalVariableDeclaration : public UVoxelLocalVariableBase
{
    FName Name;                                                                       // 0x0058 (size: 0x8)
    EVoxelPortalNodePinCategory Category;                                             // 0x0060 (size: 0x1)
    FGuid VariableGuid;                                                               // 0x0064 (size: 0x10)

}; // Size: 0x78

class UVoxelLocalVariableUsage : public UVoxelLocalVariableBase
{
    FVoxelPortalNodeSelector Selector;                                                // 0x0058 (size: 0x8)
    class UVoxelLocalVariableDeclaration* Declaration;                                // 0x0060 (size: 0x8)
    FGuid DeclarationGuid;                                                            // 0x0068 (size: 0x10)

}; // Size: 0x78

class UVoxelMaterialNode : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode : public UObject
{
    TArray<FVoxelPin> InputPins;                                                      // 0x0028 (size: 0x10)
    TArray<FVoxelPin> OutputPins;                                                     // 0x0038 (size: 0x10)
    class UVoxelGraphGenerator* Graph;                                                // 0x0048 (size: 0x8)
    int32 InputPinCount;                                                              // 0x0050 (size: 0x4)

}; // Size: 0x58

class UVoxelNodeHelper : public UVoxelNode
{
}; // Size: 0x98

class UVoxelNodeWithContext : public UVoxelNodeWithDependencies
{
}; // Size: 0x98

class UVoxelNodeWithDependencies : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_1MinusX : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_2DCellularNoise : public UVoxelNode_CellularNoise
{
}; // Size: 0xE0

class UVoxelNode_2DCraterNoise : public UVoxelNode_CraterNoise
{
}; // Size: 0xE0

class UVoxelNode_2DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal
{
}; // Size: 0x140

class UVoxelNode_2DCubicNoise : public UVoxelNode_NoiseNode
{
}; // Size: 0xD8

class UVoxelNode_2DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
}; // Size: 0x138

class UVoxelNode_2DErosion : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
    float Jitter;                                                                     // 0x0140 (size: 0x4)

}; // Size: 0x148

class UVoxelNode_2DGavoronoiNoise : public UVoxelNode_NoiseNode
{
    float Jitter;                                                                     // 0x00D8 (size: 0x4)

}; // Size: 0xE0

class UVoxelNode_2DGavoronoiNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
    float Jitter;                                                                     // 0x0138 (size: 0x4)

}; // Size: 0x140

class UVoxelNode_2DGradientPerturb : public UVoxelNode_GradientPerturb
{
}; // Size: 0xD8

class UVoxelNode_2DGradientPerturbFractal : public UVoxelNode_GradientPerturbFractal
{
}; // Size: 0x138

class UVoxelNode_2DIQNoise : public UVoxelNode_2DIQNoiseBase
{
}; // Size: 0x148

class UVoxelNode_2DIQNoiseBase : public UVoxelNode_IQNoiseBase
{
    float Rotation;                                                                   // 0x0140 (size: 0x4)

}; // Size: 0x148

class UVoxelNode_2DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
{
}; // Size: 0xE0

class UVoxelNode_2DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
}; // Size: 0x140

class UVoxelNode_2DSimplexNoise : public UVoxelNode_NoiseNode
{
}; // Size: 0xD8

class UVoxelNode_2DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
}; // Size: 0x138

class UVoxelNode_2DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
{
}; // Size: 0xE0

class UVoxelNode_2DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
}; // Size: 0x140

class UVoxelNode_2DVoronoiNoise : public UVoxelNode_VoronoiNoiseBase
{
}; // Size: 0xA0

class UVoxelNode_2DWhiteNoise : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_3DCellularNoise : public UVoxelNode_CellularNoise
{
}; // Size: 0xE0

class UVoxelNode_3DCraterNoise : public UVoxelNode_CraterNoise
{
}; // Size: 0xE0

class UVoxelNode_3DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal
{
}; // Size: 0x140

class UVoxelNode_3DCubicNoise : public UVoxelNode_NoiseNode
{
}; // Size: 0xD8

class UVoxelNode_3DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
}; // Size: 0x138

class UVoxelNode_3DGradientPerturb : public UVoxelNode_GradientPerturb
{
}; // Size: 0xD8

class UVoxelNode_3DGradientPerturbFractal : public UVoxelNode_GradientPerturbFractal
{
}; // Size: 0x138

class UVoxelNode_3DIQNoise : public UVoxelNode_3DIQNoiseBase
{
}; // Size: 0x150

class UVoxelNode_3DIQNoiseBase : public UVoxelNode_IQNoiseBase
{
    FRotator Rotation;                                                                // 0x0140 (size: 0xC)

}; // Size: 0x150

class UVoxelNode_3DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
{
}; // Size: 0xE0

class UVoxelNode_3DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
}; // Size: 0x140

class UVoxelNode_3DSimplexNoise : public UVoxelNode_NoiseNode
{
}; // Size: 0xD8

class UVoxelNode_3DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
}; // Size: 0x138

class UVoxelNode_3DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
{
}; // Size: 0xE0

class UVoxelNode_3DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
}; // Size: 0x140

class UVoxelNode_3DWhiteNoise : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_Acos : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_AddMultiIndex : public UVoxelNode_MaterialSetter
{
}; // Size: 0x98

class UVoxelNode_AddSeeds : public UVoxelSeedNode
{
}; // Size: 0x98

class UVoxelNode_Asin : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_Atan : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_Atan2 : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_BAnd : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_BNot : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_BOr : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_BiomeMapSampler : public UVoxelExposedNode
{
    class UTexture2D* Texture;                                                        // 0x0150 (size: 0x8)
    int32 Threshold;                                                                  // 0x0158 (size: 0x4)
    TArray<FBiomeMapElement> Biomes;                                                  // 0x0160 (size: 0x10)

}; // Size: 0x170

class UVoxelNode_BiomeMerge : public UVoxelNode
{
    TArray<FString> Biomes;                                                           // 0x0058 (size: 0x10)
    float Tolerance;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class UVoxelNode_BoolParameter : public UVoxelExposedNode
{
    bool Value;                                                                       // 0x0150 (size: 0x1)

}; // Size: 0x158

class UVoxelNode_BoxSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_BreakColorFloat : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_BreakColorInt : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_CappedConeSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_CappedCylinderSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_CappedTorusSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_CapsuleSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_Ceil : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_CellularNoise : public UVoxelNode_NoiseNode
{
    EVoxelCellularDistanceFunction DistanceFunction;                                  // 0x00D8 (size: 0x1)
    EVoxelCellularReturnType ReturnType;                                              // 0x00D9 (size: 0x1)
    float Jitter;                                                                     // 0x00DC (size: 0x4)

}; // Size: 0xE0

class UVoxelNode_Clamp : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_ColorParameter : public UVoxelExposedNode
{
    FLinearColor Color;                                                               // 0x0150 (size: 0x10)

}; // Size: 0x160

class UVoxelNode_CompileTimeConstant : public UVoxelNodeHelper
{
    FName Name;                                                                       // 0x0098 (size: 0x8)
    EVoxelPinCategory Type;                                                           // 0x00A0 (size: 0x1)
    TMap<class FName, class FString> Constants;                                       // 0x00A8 (size: 0x50)

}; // Size: 0xF8

class UVoxelNode_ConeFastSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_ConeSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_Cos : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_CraterNoise : public UVoxelNode_NoiseNode
{
    float Jitter;                                                                     // 0x00D8 (size: 0x4)
    float FalloffExponent;                                                            // 0x00DC (size: 0x4)

}; // Size: 0xE0

class UVoxelNode_CraterNoiseFractal : public UVoxelNode_NoiseNodeFractal
{
    float Jitter;                                                                     // 0x0138 (size: 0x4)
    float FalloffExponent;                                                            // 0x013C (size: 0x4)

}; // Size: 0x140

class UVoxelNode_CreateDoubleIndexMaterial : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_Curve : public UVoxelExposedNode
{
    class UCurveFloat* Curve;                                                         // 0x0150 (size: 0x8)

}; // Size: 0x158

class UVoxelNode_CurveColor : public UVoxelExposedNode
{
    class UCurveLinearColor* Curve;                                                   // 0x0150 (size: 0x8)

}; // Size: 0x158

class UVoxelNode_CylinderSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_DataAssetSampler : public UVoxelExposedNode
{
    class UVoxelDataAsset* Asset;                                                     // 0x0150 (size: 0x8)
    bool bBilinearInterpolation;                                                      // 0x0158 (size: 0x1)

}; // Size: 0x160

class UVoxelNode_DataItemParameters : public UVoxelNodeWithContext
{
    class UVoxelGraphDataItemConfig* Config;                                          // 0x0098 (size: 0x8)
    TMap<FName, float> PreviewValues;                                                 // 0x00A0 (size: 0x50)

}; // Size: 0xF0

class UVoxelNode_DataItemSample : public UVoxelNodeWithContext
{
    int32 Mask;                                                                       // 0x0098 (size: 0x4)
    EVoxelDataItemCombineMode CombineMode;                                            // 0x009C (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_EditGetCustomOutput : public UVoxelGraphAssetNode
{
    FName OutputName;                                                                 // 0x0100 (size: 0x8)

}; // Size: 0x108

class UVoxelNode_EditGetHardness : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_EditGetMaterial : public UVoxelGraphAssetNode
{
}; // Size: 0x100

class UVoxelNode_EditGetValue : public UVoxelGraphAssetNode
{
}; // Size: 0x100

class UVoxelNode_EllipsoidSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_Exp : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FAbs : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FAdd : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FDivide : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FGreater : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FGreaterEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FLess : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FLessEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FMax : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FMin : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FMod : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FMultiply : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FNotEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FSign : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FSubstract : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FloatOfInt : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FloatParameter : public UVoxelExposedNode
{
    float Value;                                                                      // 0x0150 (size: 0x4)

}; // Size: 0x158

class UVoxelNode_Floor : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FlowMerge : public UVoxelNode
{
    TArray<FVoxelNamedDataPin> Types;                                                 // 0x0058 (size: 0x10)

}; // Size: 0x68

class UVoxelNode_Fraction : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_FunctionSeparator : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_GeneratorMerge : public UVoxelNode_GeneratorSamplerBase
{
    TArray<FName> Outputs;                                                            // 0x0150 (size: 0x10)
    EVoxelMaterialConfig MaterialConfig;                                              // 0x0160 (size: 0x1)
    TArray<FVoxelGeneratorPicker> Generators;                                         // 0x0168 (size: 0x10)
    float Tolerance;                                                                  // 0x0178 (size: 0x4)

}; // Size: 0x180

class UVoxelNode_GeneratorSamplerBase : public UVoxelExposedNode
{
}; // Size: 0x150

class UVoxelNode_GetBiomeIndex : public UVoxelExposedNode
{
    class UVoxelFoliageBiomeBase* Biome;                                              // 0x0150 (size: 0x8)

}; // Size: 0x158

class UVoxelNode_GetColor : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_GetDoubleIndex : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_GetGeneratorCustomOutput : public UVoxelNode_SingleGeneratorSamplerBase
{
    FName OutputName;                                                                 // 0x01B8 (size: 0x8)

}; // Size: 0x1C0

class UVoxelNode_GetGeneratorMaterial : public UVoxelNode_SingleGeneratorSamplerBase
{
}; // Size: 0x1B8

class UVoxelNode_GetGeneratorValue : public UVoxelNode_SingleGeneratorSamplerBase
{
}; // Size: 0x1B8

class UVoxelNode_GetIndex : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_GetLandscapeCollectionIndex : public UVoxelExposedNode
{
    FName LayerName;                                                                  // 0x0150 (size: 0x8)

}; // Size: 0x158

class UVoxelNode_GetMaterialCollectionIndex : public UVoxelAssetPickerNode
{
    class UMaterialInterface* Material;                                               // 0x0150 (size: 0x8)

}; // Size: 0x158

class UVoxelNode_GetRangeAnalysis : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_GetUVChannel : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_GlobalToLocal : public UVoxelNodeWithContext
{
}; // Size: 0x98

class UVoxelNode_GlobalX : public UVoxelCoordinateNode
{
}; // Size: 0x98

class UVoxelNode_GlobalY : public UVoxelCoordinateNode
{
}; // Size: 0x98

class UVoxelNode_GlobalZ : public UVoxelCoordinateNode
{
}; // Size: 0x98

class UVoxelNode_GradientPerturb : public UVoxelNode_NoiseNode
{
}; // Size: 0xD8

class UVoxelNode_GradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
{
}; // Size: 0x138

class UVoxelNode_HSVToRGB : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_HeightSplitter : public UVoxelNodeHelper
{
    int32 NumSplits;                                                                  // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_HeightmapSampler : public UVoxelExposedNode
{
    bool bFloatHeightmap;                                                             // 0x0150 (size: 0x1)
    class UVoxelHeightmapAssetFloat* HeightmapFloat;                                  // 0x0158 (size: 0x8)
    class UVoxelHeightmapAssetUINT16* HeightmapUINT16;                                // 0x0160 (size: 0x8)
    EVoxelSamplerMode SamplerType;                                                    // 0x0168 (size: 0x1)
    bool bCenter;                                                                     // 0x0169 (size: 0x1)

}; // Size: 0x170

class UVoxelNode_HexPrismSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_IAbs : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IAdd : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IDivide : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IGreater : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IGreaterEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_ILeftBitShift : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_ILess : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_ILessEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IMax : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IMin : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IMod : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IMultiply : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_INotEqual : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_IQNoiseBase : public UVoxelNode_NoiseNodeWithDerivativeFractal
{
}; // Size: 0x140

class UVoxelNode_IRightBitShift : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_ISign : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_ISubstract : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_If : public UVoxelNodeHelper
{
    EVoxelNodeIfBranchToUseForRangeAnalysis BranchToUseForRangeAnalysis;              // 0x0098 (size: 0x1)

}; // Size: 0xA0

class UVoxelNode_IfWithDefaultToFalse : public UVoxelNode_If
{
}; // Size: 0xA0

class UVoxelNode_IfWithDefaultToTrue : public UVoxelNode_If
{
}; // Size: 0xA0

class UVoxelNode_InfiniteConeSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_IntParameter : public UVoxelExposedNode
{
    int32 Value;                                                                      // 0x0150 (size: 0x4)

}; // Size: 0x158

class UVoxelNode_InvSqrt : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_InverseTransformPositionXZ : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_InverseTransformVector : public UVoxelNodeWithContext
{
}; // Size: 0x98

class UVoxelNode_IsSingleBool : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_LOD : public UVoxelNodeWithContext
{
}; // Size: 0x98

class UVoxelNode_Lerp : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_LinkSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_LocalToGlobal : public UVoxelNodeWithContext
{
}; // Size: 0x98

class UVoxelNode_Loge : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_MakeColorFloat : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_MakeColorInt : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_MakeMaterialFromColor : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_MakeMaterialFromDoubleIndex : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_MakeMaterialFromSingleIndex : public UVoxelMaterialNode
{
}; // Size: 0x98

class UVoxelNode_MakeSeeds : public UVoxelSeedNode
{
    int32 NumOutputs;                                                                 // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_MaterialSetter : public UVoxelSetterNode
{
}; // Size: 0x98

class UVoxelNode_MinusX : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_NoiseNode : public UVoxelNodeWithContext
{
    float Frequency;                                                                  // 0x0098 (size: 0x4)
    EVoxelNoiseInterpolation Interpolation;                                           // 0x009C (size: 0x1)
    uint32 NumberOfSamples;                                                           // 0x00A0 (size: 0x4)
    float Tolerance;                                                                  // 0x00A4 (size: 0x4)
    TArray<FVoxelRange> OutputRanges;                                                 // 0x00A8 (size: 0x10)

}; // Size: 0xD8

class UVoxelNode_NoiseNodeFractal : public UVoxelNode_NoiseNode
{
    int32 FractalOctaves;                                                             // 0x00D8 (size: 0x4)
    float FractalLacunarity;                                                          // 0x00DC (size: 0x4)
    float FractalGain;                                                                // 0x00E0 (size: 0x4)
    EVoxelNoiseFractalType FractalType;                                               // 0x00E4 (size: 0x1)
    TMap<FString, uint8> LODToOctavesMap;                                             // 0x00E8 (size: 0x50)

}; // Size: 0x138

class UVoxelNode_NoiseNodeWithDerivative : public UVoxelNode_NoiseNode
{
    bool bComputeDerivative;                                                          // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UVoxelNode_NoiseNodeWithDerivativeFractal : public UVoxelNode_NoiseNodeFractal
{
    bool bComputeDerivative;                                                          // 0x0138 (size: 0x1)

}; // Size: 0x140

class UVoxelNode_NormalizeSum : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_OctahedronFastSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_OctahedronSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_OneOverX : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_PerlinWormDistance : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_Pi : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_PlaneSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_Pow : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_PyramidSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_RGBToHSV : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_RandomFloat : public UVoxelNodeHelper
{
    float Min;                                                                        // 0x0098 (size: 0x4)
    float Max;                                                                        // 0x009C (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_RandomInt : public UVoxelNodeHelper
{
    int32 Min;                                                                        // 0x0098 (size: 0x4)
    int32 Max;                                                                        // 0x009C (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_RangeAnalysisDebuggerFloat : public UVoxelNodeHelper
{
    float Min;                                                                        // 0x0098 (size: 0x4)
    float Max;                                                                        // 0x009C (size: 0x4)
    float GraphMin;                                                                   // 0x00A0 (size: 0x4)
    float GraphMax;                                                                   // 0x00A4 (size: 0x4)
    float GraphStep;                                                                  // 0x00A8 (size: 0x4)
    FRuntimeFloatCurve Curve;                                                         // 0x00B0 (size: 0x88)

}; // Size: 0x140

class UVoxelNode_RangeUnion : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_Round : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_RoundBoxSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_RoundConeSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_RoundedCylinderSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_SafeLerp : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_SampleFoliageMaterialIndex : public UVoxelNodeWithContext
{
}; // Size: 0x98

class UVoxelNode_Seed : public UVoxelExposedNode
{
    int32 DefaultValue;                                                               // 0x0150 (size: 0x4)
    FName Name;                                                                       // 0x0154 (size: 0x8)

}; // Size: 0x160

class UVoxelNode_SetColor : public UVoxelNode_MaterialSetter
{
}; // Size: 0x98

class UVoxelNode_SetDoubleIndex : public UVoxelNode_MaterialSetter
{
}; // Size: 0x98

class UVoxelNode_SetMultiIndexWetness : public UVoxelNode_MaterialSetter
{
}; // Size: 0x98

class UVoxelNode_SetNode : public UVoxelSetterNode
{
    uint32 Index;                                                                     // 0x0098 (size: 0x4)
    FVoxelGraphOutput CachedOutput;                                                   // 0x009C (size: 0x20)

}; // Size: 0xC0

class UVoxelNode_SetSingleIndex : public UVoxelNode_MaterialSetter
{
}; // Size: 0x98

class UVoxelNode_SetUVs : public UVoxelNode_MaterialSetter
{
    bool bSetU;                                                                       // 0x0098 (size: 0x1)
    bool bSetV;                                                                       // 0x0099 (size: 0x1)

}; // Size: 0xA0

class UVoxelNode_SetValueNode : public UVoxelNode_SetNode
{
}; // Size: 0xC0

class UVoxelNode_Sin : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_SinCos : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_SingleGeneratorSamplerBase : public UVoxelNode_GeneratorSamplerBase
{
    FVoxelGeneratorPicker Generator;                                                  // 0x0150 (size: 0x68)

}; // Size: 0x1B8

class UVoxelNode_Sinh : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_Sleep : public UVoxelNodeHelper
{
    int32 NumberOfLoops;                                                              // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_SmartMax : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_SmartMin : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_SmoothIntersection : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_SmoothStep : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_SmoothSubtraction : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_SmoothUnion : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_SolidAngleSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_SphereSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_Sqrt : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_StaticClampFloat : public UVoxelNodeHelper
{
    float Min;                                                                        // 0x0098 (size: 0x4)
    float Max;                                                                        // 0x009C (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_SwitchColor : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_SwitchFloat : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_SwitchInt : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_Tan : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_TextureSampler : public UVoxelExposedNode
{
    class UTexture2D* Texture;                                                        // 0x0150 (size: 0x8)
    bool bBilinearInterpolation;                                                      // 0x0158 (size: 0x1)
    EVoxelSamplerMode Mode;                                                           // 0x0159 (size: 0x1)

}; // Size: 0x160

class UVoxelNode_TorusSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_TransformVector : public UVoxelNodeWithContext
{
}; // Size: 0x98

class UVoxelNode_TriPrismSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_VectorLength : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_VectorRotateAngleAxis : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelNode_VerticalCappedConeSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_VerticalCappedCylinderSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_VerticalCapsuleSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_VerticalRoundConeSDF : public UVoxelSDFNode
{
}; // Size: 0x98

class UVoxelNode_VoronoiNoiseBase : public UVoxelNodeHelper
{
    bool bComputeNeighbors;                                                           // 0x0098 (size: 0x1)
    int32 Dimension;                                                                  // 0x009C (size: 0x4)

}; // Size: 0xA0

class UVoxelNode_VoxelSize : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_VoxelTextureSampler : public UVoxelExposedNode
{
    bool bBilinearInterpolation;                                                      // 0x0150 (size: 0x1)
    EVoxelSamplerMode Mode;                                                           // 0x0151 (size: 0x1)
    FVoxelFloatTexture Texture;                                                       // 0x0158 (size: 0x18)

}; // Size: 0x170

class UVoxelNode_WorldGeneratorSampler : public UVoxelExposedNode
{
    FVoxelGeneratorPicker WorldGenerator;                                             // 0x0150 (size: 0x68)
    TArray<FName> Seeds;                                                              // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

class UVoxelNode_WorldSize : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_XF : public UVoxelCoordinateNode
{
}; // Size: 0x98

class UVoxelNode_XI : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_YF : public UVoxelCoordinateNode
{
}; // Size: 0x98

class UVoxelNode_YI : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelNode_ZF : public UVoxelCoordinateNode
{
}; // Size: 0x98

class UVoxelNode_ZI : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelPureNode : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelSDFNode : public UVoxelPureNode
{
}; // Size: 0x98

class UVoxelSeedNode : public UVoxelNodeHelper
{
}; // Size: 0x98

class UVoxelSetterNode : public UVoxelNodeHelper
{
}; // Size: 0x98

#endif
