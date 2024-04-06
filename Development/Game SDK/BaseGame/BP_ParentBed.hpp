#ifndef UE4SS_SDK_BP_ParentBed_HPP
#define UE4SS_SDK_BP_ParentBed_HPP

class ABP_ParentBed_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0490 (size: 0x8)
    FTransform OriginalPlayerTransform;                                               // 0x04A0 (size: 0x30)
    float EyeFade;                                                                    // 0x04D0 (size: 0x4)

    void FadeEyesOut();
    void Deactivated(class ABP_GameController_C* Controller);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_ParentBed(int32 EntryPoint);
}; // Size: 0x4D4

#endif
