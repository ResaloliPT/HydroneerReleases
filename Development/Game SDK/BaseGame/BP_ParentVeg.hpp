#ifndef UE4SS_SDK_BP_ParentVeg_HPP
#define UE4SS_SDK_BP_ParentVeg_HPP

class ABP_ParentVeg_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    float Timeline_ScaleIn_Scale_F1758C614A08EEE7F5F98B955150DCF5;                    // 0x0468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_ScaleIn__Direction_F1758C614A08EEE7F5F98B955150DCF5; // 0x046C (size: 0x1)
    class UTimelineComponent* Timeline_ScaleIn;                                       // 0x0470 (size: 0x8)
    TSubclassOf<class ABP_ParentCutVeg_C> CutClass;                                   // 0x0478 (size: 0x8)
    TSubclassOf<class ABP_ParentSeedBag_C> SeedClass;                                 // 0x0480 (size: 0x8)
    class USoundBase* SpawnSound;                                                     // 0x0488 (size: 0x8)
    class UNiagaraSystem* CutNiagaraSystem;                                           // 0x0490 (size: 0x8)

    void Timeline_ScaleIn__FinishedFunc();
    void Timeline_ScaleIn__UpdateFunc();
    void ScaleIn(int32 Index);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_ParentVeg(int32 EntryPoint);
}; // Size: 0x498

#endif
