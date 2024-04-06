#ifndef UE4SS_SDK_BP_HookValve_HPP
#define UE4SS_SDK_BP_HookValve_HPP

class ABP_HookValve_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* TurnyPart;
    bool Open?;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ActorLoaded();
    void ExecuteUbergraph_BP_HookValve(int32 EntryPoint);
};

#endif
