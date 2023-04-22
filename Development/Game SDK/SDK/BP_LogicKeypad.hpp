#ifndef UE4SS_SDK_BP_LogicKeypad_HPP
#define UE4SS_SDK_BP_LogicKeypad_HPP

class ABP_LogicKeypad_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* X-Box;
    class UStaticMeshComponent* 6;
    class UStaticMeshComponent* Enter;
    class UStaticMeshComponent* Clear;
    class UStaticMeshComponent* 9;
    class UStaticMeshComponent* 8;
    class UStaticMeshComponent* 1;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* 5;
    class UStaticMeshComponent* 4;
    class UStaticMeshComponent* 3;
    class UStaticMeshComponent* 2;
    class UStaticMeshComponent* 7;
    class UStaticMeshComponent* 0;
    bool Usable;
    class UPrimitiveComponent* ClickedComponent;

    void UpdateText();
    void OverrideLoaded();
    void CustomEvent();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_LogicKeypad(int32 EntryPoint);
};

#endif
