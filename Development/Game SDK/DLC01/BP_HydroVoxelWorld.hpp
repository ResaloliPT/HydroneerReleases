#ifndef UE4SS_SDK_BP_HydroVoxelWorld_HPP
#define UE4SS_SDK_BP_HydroVoxelWorld_HPP

class ABP_HydroVoxelWorld_C : public AVoxelWorld
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class USceneComponent* TOPSOIL;                                                   // 0x0878 (size: 0x8)
    bool IsHorizontal?;                                                               // 0x0880 (size: 0x1)
    FVoxelCompressedWorldSave CompressedSave;                                         // 0x0888 (size: 0x20)
    bool BeenEdited?;                                                                 // 0x08A8 (size: 0x1)
    int32 AmountSaved;                                                                // 0x08AC (size: 0x4)
    FVoxelFloatTexture VoxelMask;                                                     // 0x08B0 (size: 0x18)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    FVoxelSurfaceEditsStackElement GetStrengthMaskAtDepth(int32 Depth, float Offset);
    void GetPlaneAtDepth(int32 Depth, FVector& Location, FVector& Normal, FVector& Tangent);
    void GetDepthAtLocation(FVector Location, int32& Depth);
    void ActorSaved();
    void ActorLoaded();
    void ActorPreSave();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HydroVoxelWorld(int32 EntryPoint);
}; // Size: 0x8C8

#endif
