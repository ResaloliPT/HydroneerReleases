#ifndef UE4SS_SDK_BP_HydroVoxelWorld_HPP
#define UE4SS_SDK_BP_HydroVoxelWorld_HPP

class ABP_HydroVoxelWorld_C : public AVoxelWorld
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* TOPSOIL;
    bool IsHorizontal?;
    FVoxelCompressedWorldSave CompressedSave;
    bool BeenEdited?;
    int32 AmountSaved;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorPreSave();
    void ActorLoaded();
    void ActorSaved();
    void ExecuteUbergraph_BP_HydroVoxelWorld(int32 EntryPoint);
};

#endif
