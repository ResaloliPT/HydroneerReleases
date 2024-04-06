#ifndef UE4SS_SDK_BP_Hourglass_HPP
#define UE4SS_SDK_BP_Hourglass_HPP

class ABP_Hourglass_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UStaticMeshComponent* Forward;                                              // 0x0490 (size: 0x8)
    class UStaticMeshComponent* Backward;                                             // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Pause;                                                // 0x04A0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04A8 (size: 0x8)
    class UNiagaraComponent* NS_HourglassSanddrop;                                    // 0x04B0 (size: 0x8)

    void ChangeSandDropSystem(bool bInPaused);
    void OnCompleted_2E3BF25A407D2F674AAB3EB81AC1C524();
    void ButtonPress(class UStaticMeshComponent* Component);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ActorLoaded();
    void ExecuteUbergraph_BP_Hourglass(int32 EntryPoint);
}; // Size: 0x4B8

#endif
