#ifndef UE4SS_SDK_BP_Scales_HPP
#define UE4SS_SDK_BP_Scales_HPP

class ABP_Scales_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UAC_StoreFunctions_C* AC_StoreFunctions;                                    // 0x0490 (size: 0x8)
    class UTextRenderComponent* WeightText;                                           // 0x0498 (size: 0x8)
    class UTextRenderComponent* CashText;                                             // 0x04A0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x04A8 (size: 0x8)
    TArray<class ABP_ParentResource_C*> Resources;                                    // 0x04B0 (size: 0x10)

    void OnCompleted_E9BAF2A0467AD0C7E9847791200360B9();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateScales();
    void ActorLoaded();
    void ExecuteUbergraph_BP_Scales(int32 EntryPoint);
}; // Size: 0x4C0

#endif
