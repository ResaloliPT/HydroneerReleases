#ifndef UE4SS_SDK_BP_ParentLogicSymbol_HPP
#define UE4SS_SDK_BP_ParentLogicSymbol_HPP

class ABP_ParentLogicSymbol_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Symbol;
    TEnumAsByte<E_LogicButtonSymbols::Type> CurrentSymbol;

    void ChangeSymbol();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentLogicSymbol(int32 EntryPoint);
};

#endif
