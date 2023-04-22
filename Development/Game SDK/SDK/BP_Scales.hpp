#ifndef UE4SS_SDK_BP_Scales_HPP
#define UE4SS_SDK_BP_Scales_HPP

class ABP_Scales_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_StoreFunctions_C* AC_StoreFunctions;
    class UTextRenderComponent* WeightText;
    class UTextRenderComponent* CashText;
    class USphereComponent* Sphere1;
    TArray<class ABP_ParentResource_C*> Resources;

    void OnCompleted_E9BAF2A0467AD0C7E9847791200360B9();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateScales();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorLoaded();
    void ExecuteUbergraph_BP_Scales(int32 EntryPoint);
};

#endif
