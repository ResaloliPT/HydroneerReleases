#ifndef UE4SS_SDK_BP_ParentPickaxe_HPP
#define UE4SS_SDK_BP_ParentPickaxe_HPP

class ABP_ParentPickaxe_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UAC_Splitter_C* AC_Splitter;
    class UAC_Animator_C* AC_Animator;
    int32 MaxDepth;
    float DigRadius;

    void DigVoxels(class ABP_GameController_C* Controller, FVector AtLocation, class ABP_HydroVoxelWorld_C* VoxelWorld);
    void DigTimer();
    void TryDig(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Animate();
    void LMBUpWhileCarrying();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ParentPickaxe(int32 EntryPoint);
};

#endif
