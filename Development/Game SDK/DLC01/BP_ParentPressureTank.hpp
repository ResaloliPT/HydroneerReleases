#ifndef UE4SS_SDK_BP_ParentPressureTank_HPP
#define UE4SS_SDK_BP_ParentPressureTank_HPP

class ABP_ParentPressureTank_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x04C8 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x04D8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04E0 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04E8 (size: 0x8)
    bool Open?;                                                                       // 0x04F0 (size: 0x1)
    TArray<class ABP_ParentResource_C*> Shards;                                       // 0x04F8 (size: 0x10)
    float ShardDecrement;                                                             // 0x0508 (size: 0x4)
    float MaxPressureCanBoostTo;                                                      // 0x050C (size: 0x4)

    void DecrementShard();
    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void OpenDoor();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideLoaded();
    void OverridePickedup();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ParentPressureTank(int32 EntryPoint);
}; // Size: 0x510

#endif
