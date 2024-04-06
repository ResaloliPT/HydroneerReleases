#ifndef UE4SS_SDK_BP_BuffRefiner_HPP
#define UE4SS_SDK_BP_BuffRefiner_HPP

class ABP_BuffRefiner_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UAudioComponent* SC_BuffRefinerFire_Loop;                                   // 0x0238 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0250 (size: 0x8)
    TArray<class ABP_ForgeMarkUnRefined_C*> Targets;                                  // 0x0258 (size: 0x10)
    FTimerHandle TimerHandle;                                                         // 0x0268 (size: 0x8)
    float RefineAmount;                                                               // 0x0270 (size: 0x4)

    void DevFlashCollisions();
    void BndEvt__BP_BuffRefiner_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TimerEvent();
    void BndEvt__BP_BuffRefiner_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ToggleRefining(bool Show?);
    void ExecuteUbergraph_BP_BuffRefiner(int32 EntryPoint);
}; // Size: 0x274

#endif
