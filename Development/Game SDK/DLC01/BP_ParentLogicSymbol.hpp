#ifndef UE4SS_SDK_BP_ParentLogicSymbol_HPP
#define UE4SS_SDK_BP_ParentLogicSymbol_HPP

class ABP_ParentLogicSymbol_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* Symbol;                                               // 0x04C0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04C8 (size: 0x8)
    TEnumAsByte<E_LogicButtonSymbols::Type> CurrentSymbol;                            // 0x04D0 (size: 0x1)

    void ChangeSymbol();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentLogicSymbol(int32 EntryPoint);
}; // Size: 0x4D1

#endif
