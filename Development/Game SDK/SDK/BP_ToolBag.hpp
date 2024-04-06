#ifndef UE4SS_SDK_BP_ToolBag_HPP
#define UE4SS_SDK_BP_ToolBag_HPP

class ABP_ToolBag_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UAC_Finite_C* AC_Finite;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;

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
};

#endif
