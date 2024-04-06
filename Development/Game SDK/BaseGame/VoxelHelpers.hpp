#ifndef UE4SS_SDK_VoxelHelpers_HPP
#define UE4SS_SDK_VoxelHelpers_HPP

struct FMaterialPackInput
{
    FName InputName;                                                                  // 0x0000 (size: 0x8)
    FExpressionInput Input;                                                           // 0x0008 (size: 0xC)

}; // Size: 0x1C

class UMaterialExpressionBlendMaterialAttributesBarycentric : public UMaterialExpression
{
    FMaterialAttributesInput A;                                                       // 0x0040 (size: 0x10)
    FMaterialAttributesInput B;                                                       // 0x0058 (size: 0x10)
    FMaterialAttributesInput C;                                                       // 0x0070 (size: 0x10)
    FExpressionInput AlphaA;                                                          // 0x0088 (size: 0xC)
    FExpressionInput AlphaB;                                                          // 0x009C (size: 0xC)

}; // Size: 0xB0

class UMaterialExpressionPack : public UMaterialExpression
{
    TArray<FMaterialPackInput> Inputs;                                                // 0x0040 (size: 0x10)

}; // Size: 0x68

class UMaterialExpressionUnpack : public UMaterialExpression
{
    FExpressionInput Input;                                                           // 0x0040 (size: 0xC)
    bool bRefresh;                                                                    // 0x0054 (size: 0x1)

}; // Size: 0x58

class UVoxelColorWheel : public UWidget
{
    FLinearColor Color;                                                               // 0x0108 (size: 0x10)
    FVoxelColorWheelOnColorChanged OnColorChanged;                                    // 0x0118 (size: 0x10)
    void OnVoxelColorWheelColorChangedEvent(const FLinearColor& NewColor);

}; // Size: 0x138

class UVoxelHelpersLibrary : public UBlueprintFunctionLibrary
{

    void CreateProcMeshPlane(class UProceduralMeshComponent* Mesh, int32 SizeX, int32 SizeY, float Step);
}; // Size: 0x28

#endif
