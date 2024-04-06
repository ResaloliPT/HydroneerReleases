#ifndef UE4SS_SDK_BP_ParentTool_HPP
#define UE4SS_SDK_BP_ParentTool_HPP

class ABP_ParentTool_C : public ABP_ParentItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    bool CanUse?;                                                                     // 0x0448 (size: 0x1)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void LMBUpWhileCarrying();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBUpWhileCarrying();
    void OverrideAnimFinished();
    void ExecuteUbergraph_BP_ParentTool(int32 EntryPoint);
}; // Size: 0x449

#endif
