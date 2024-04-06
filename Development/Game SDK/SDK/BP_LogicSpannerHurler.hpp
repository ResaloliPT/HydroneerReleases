#ifndef UE4SS_SDK_BP_LogicSpannerHurler_HPP
#define UE4SS_SDK_BP_LogicSpannerHurler_HPP

class ABP_LogicSpannerHurler_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* X-Box;
    class UAC_Animator_C* AC_Animator1;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* End;
    class UStaticMeshComponent* Mid;
    class UBoxComponent* Box;
    class UTextRenderComponent* TextRender;
    class USceneComponent* Scene;
    int32 SpannersLoaded;

    void Animate();
    void UpdateSpannersLoadedText();
    void OverrideLogicIn(class USceneComponent* Component);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorLoaded();
    void ExecuteUbergraph_BP_LogicSpannerHurler(int32 EntryPoint);
};

#endif
