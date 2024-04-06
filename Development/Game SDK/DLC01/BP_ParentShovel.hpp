#ifndef UE4SS_SDK_BP_ParentShovel_HPP
#define UE4SS_SDK_BP_ParentShovel_HPP

class ABP_ParentShovel_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x0458 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Dirt;                                                 // 0x0468 (size: 0x8)
    int32 DirtQuality;                                                                // 0x0470 (size: 0x4)
    int32 MaxDepth;                                                                   // 0x0474 (size: 0x4)
    TEnumAsByte<E_MetalType::Type> Vein;                                              // 0x0478 (size: 0x1)
    bool IceShovel?;                                                                  // 0x0479 (size: 0x1)
    TEnumAsByte<E_Buffs::Type> SpeedBuff;                                             // 0x047A (size: 0x1)
    TEnumAsByte<E_Buffs::Type> SizeBuff;                                              // 0x047B (size: 0x1)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void DirtFX(bool ShowDirt?);
    void HitActorItem(class ABP_GameController_C* Controller, class AActor* HitActor, bool& Success?);
    void HitActorSpecialDig(class ABP_GameController_C* Controller, class AActor* HitActor);
    void CantMine(FVector HitLocation);
    void SetDirt(bool Making Hole?, int32 Quality, TEnumAsByte<E_MetalType::Type> Vein);
    void ExecuteUbergraph_BP_ParentShovel(int32 EntryPoint);
}; // Size: 0x47C

#endif
