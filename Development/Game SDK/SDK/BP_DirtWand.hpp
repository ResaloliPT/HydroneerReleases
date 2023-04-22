#ifndef UE4SS_SDK_BP_DirtWand_HPP
#define UE4SS_SDK_BP_DirtWand_HPP

class ABP_DirtWand_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;

    void PlaceDirtTimer();
    void MakeVoxels(class ABP_GameController_C* Controller, FVector AtLocation, class AVoxelWorld* VoxelWorld);
    void TryPlaceDirt(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Animate();
    void LMBUpWhileCarrying();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_DirtWand(int32 EntryPoint);
};

#endif
