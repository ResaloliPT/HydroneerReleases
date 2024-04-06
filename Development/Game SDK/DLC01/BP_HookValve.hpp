#ifndef UE4SS_SDK_BP_HookValve_HPP
#define UE4SS_SDK_BP_HookValve_HPP

class ABP_HookValve_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* TurnyPart;                                            // 0x04C0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04C8 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04D0 (size: 0x8)
    bool Open?;                                                                       // 0x04D8 (size: 0x1)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void UserConstructionScript();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ActorLoaded();
    void ExecuteUbergraph_BP_HookValve(int32 EntryPoint);
}; // Size: 0x4D9

#endif
