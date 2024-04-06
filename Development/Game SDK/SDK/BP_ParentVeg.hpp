#ifndef UE4SS_SDK_BP_ParentVeg_HPP
#define UE4SS_SDK_BP_ParentVeg_HPP

class ABP_ParentVeg_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_ScaleIn_Scale_F1758C614A08EEE7F5F98B955150DCF5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_ScaleIn__Direction_F1758C614A08EEE7F5F98B955150DCF5;
    class UTimelineComponent* Timeline_ScaleIn;
    TSubclassOf<class ABP_ParentCutVeg_C> CutClass;
    TSubclassOf<class ABP_ParentSeedBag_C> SeedClass;
    class USoundBase* SpawnSound;
    class UNiagaraSystem* CutNiagaraSystem;

    void Timeline_ScaleIn__FinishedFunc();
    void Timeline_ScaleIn__UpdateFunc();
    void ScaleIn(int32 Index);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_ParentVeg(int32 EntryPoint);
};

#endif
