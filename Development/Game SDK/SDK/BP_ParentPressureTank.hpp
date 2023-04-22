#ifndef UE4SS_SDK_BP_ParentPressureTank_HPP
#define UE4SS_SDK_BP_ParentPressureTank_HPP

class ABP_ParentPressureTank_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cylinder;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Door;
    class UBoxComponent* X-Box;
    class UBoxComponent* X+Box;
    bool Open?;
    TArray<class ABP_ParentResource_C*> Shards;
    float ShardDecrement;
    float MaxPressureCanBoostTo;

    void DecrementShard();
    void OpenDoor();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_ParentPressureTank(int32 EntryPoint);
};

#endif
