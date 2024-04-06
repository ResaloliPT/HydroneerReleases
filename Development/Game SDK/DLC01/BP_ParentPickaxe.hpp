#ifndef UE4SS_SDK_BP_ParentPickaxe_HPP
#define UE4SS_SDK_BP_ParentPickaxe_HPP

class ABP_ParentPickaxe_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x0458 (size: 0x8)
    class UAC_Splitter_C* AC_Splitter;                                                // 0x0460 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0468 (size: 0x8)
    int32 MaxDepth;                                                                   // 0x0470 (size: 0x4)
    TEnumAsByte<E_Buffs::Type> SpeedBuff;                                             // 0x0474 (size: 0x1)
    TEnumAsByte<E_Buffs::Type> SizeBuff;                                              // 0x0475 (size: 0x1)

    void DigVoxels(class ABP_GameController_C* Controller, FVector AtLocation, class ABP_HydroVoxelWorld_C* VoxelWorld);
    void DigTimer();
    void TryDig(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Animate();
    void LMBUpWhileCarrying();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ParentPickaxe(int32 EntryPoint);
}; // Size: 0x476

#endif
