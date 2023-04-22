#ifndef UE4SS_SDK_BP_LogicHookValve_HPP
#define UE4SS_SDK_BP_LogicHookValve_HPP

class ABP_LogicHookValve_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TurnyPart;
    class USceneComponent* Scene;
    class UBoxComponent* X-Box;
    class UAC_Animator_C* AC_Animator;
    bool Open?;

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverrideLogicIn(FString Logic);
    void ActorLoaded();
    void ReceiveTick(float DeltaSeconds);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_LogicHookValve(int32 EntryPoint);
};

#endif
