#ifndef UE4SS_SDK_BP_LogicLever_HPP
#define UE4SS_SDK_BP_LogicLever_HPP

class ABP_LogicLever_C : public ABP_ParentLogicSymbol_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* Lever;                                                // 0x04E8 (size: 0x8)
    class USceneComponent* Scene_0;                                                   // 0x04F0 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04F8 (size: 0x8)
    bool CanUse?;                                                                     // 0x0500 (size: 0x1)

    void OverrideLoaded();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideAnimFinished();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_LogicLever(int32 EntryPoint);
}; // Size: 0x501

#endif
