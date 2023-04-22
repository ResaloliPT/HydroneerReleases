#ifndef UE4SS_SDK_BP_ParentBed_HPP
#define UE4SS_SDK_BP_ParentBed_HPP

class ABP_ParentBed_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    FTransform OriginalPlayerTransform;
    float EyeFade;

    void FadeEyesOut();
    void Deactivated(class ABP_GameController_C* Controller);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_ParentBed(int32 EntryPoint);
};

#endif
