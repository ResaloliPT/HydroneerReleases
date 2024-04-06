#ifndef UE4SS_SDK_BP_LogicButton_HPP
#define UE4SS_SDK_BP_LogicButton_HPP

class ABP_LogicButton_C : public ABP_ParentLogicSymbol_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Button;
    class UBoxComponent* X+Box;
    bool CanUse?;

    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_LogicButton(int32 EntryPoint);
};

#endif
