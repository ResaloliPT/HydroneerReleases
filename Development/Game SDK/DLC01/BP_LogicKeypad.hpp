#ifndef UE4SS_SDK_BP_LogicKeypad_HPP
#define UE4SS_SDK_BP_LogicKeypad_HPP

class ABP_LogicKeypad_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* 6;                                                    // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* Enter;                                                // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* Clear;                                                // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* 9;                                                    // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* 8;                                                    // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* 0;                                                    // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* 5;                                                    // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* 4;                                                    // 0x04F8 (size: 0x8)
    class UStaticMeshComponent* 3;                                                    // 0x0500 (size: 0x8)
    class UStaticMeshComponent* 2;                                                    // 0x0508 (size: 0x8)
    class UStaticMeshComponent* 7;                                                    // 0x0510 (size: 0x8)
    class UStaticMeshComponent* 1;                                                    // 0x0518 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0520 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x0528 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0530 (size: 0x8)
    bool Usable;                                                                      // 0x0538 (size: 0x1)
    class UPrimitiveComponent* ClickedComponent;                                      // 0x0540 (size: 0x8)

    void UpdateText();
    void OverrideLoaded();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverridePickedup();
    void ExecuteUbergraph_BP_LogicKeypad(int32 EntryPoint);
}; // Size: 0x548

#endif
