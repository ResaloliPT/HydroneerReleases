#ifndef UE4SS_SDK_BP_LogicSpannerHurler_HPP
#define UE4SS_SDK_BP_LogicSpannerHurler_HPP

class ABP_LogicSpannerHurler_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04C0 (size: 0x8)
    class UAC_Animator_C* AC_Animator1;                                               // 0x04C8 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* End;                                                  // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* Mid;                                                  // 0x04E0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04E8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x04F0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04F8 (size: 0x8)
    int32 SpannersLoaded;                                                             // 0x0500 (size: 0x4)

    void Animate();
    void UpdateSpannersLoadedText();
    void OverrideLogicIn(class USceneComponent* Component);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorLoaded();
    void ExecuteUbergraph_BP_LogicSpannerHurler(int32 EntryPoint);
}; // Size: 0x504

#endif
