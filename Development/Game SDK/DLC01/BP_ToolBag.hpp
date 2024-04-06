#ifndef UE4SS_SDK_BP_ToolBag_HPP
#define UE4SS_SDK_BP_ToolBag_HPP

class ABP_ToolBag_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    class UAC_Finite_C* AC_Finite;                                                    // 0x0460 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0468 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0470 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0478 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0480 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0488 (size: 0x8)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void RefreshTools();
    void DoneRepair();
    void OverrideAnimFinished();
    void ActorLoaded();
    void ExecuteUbergraph_BP_ToolBag(int32 EntryPoint);
}; // Size: 0x490

#endif
