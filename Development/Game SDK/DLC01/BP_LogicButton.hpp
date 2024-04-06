#ifndef UE4SS_SDK_BP_LogicButton_HPP
#define UE4SS_SDK_BP_LogicButton_HPP

class ABP_LogicButton_C : public ABP_ParentLogicSymbol_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x04E0 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04E8 (size: 0x8)
    bool CanUse?;                                                                     // 0x04F0 (size: 0x1)

    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_LogicButton(int32 EntryPoint);
}; // Size: 0x4F1

#endif
