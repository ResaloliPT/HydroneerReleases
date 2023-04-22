#ifndef UE4SS_SDK_BP_LogicLever_HPP
#define UE4SS_SDK_BP_LogicLever_HPP

class ABP_LogicLever_C : public ABP_ParentLogicSymbol_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Lever;
    class USceneComponent* Scene;
    class UBoxComponent* X-Box;
    bool CanUse?;

    void OverrideLoaded();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideAnimFinished();
    void ExecuteUbergraph_BP_LogicLever(int32 EntryPoint);
};

#endif
