#ifndef UE4SS_SDK_BP_MagnetOnAStick_HPP
#define UE4SS_SDK_BP_MagnetOnAStick_HPP

class ABP_MagnetOnAStick_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Magnet_C* AC_Magnet;
    class USceneComponent* Mag1;
    class USphereComponent* MagSphere;
    TArray<class ABP_ParentResource_C*> Resources;
    bool CanUseMagnet?';
    class UAudioComponent* IdleSound;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LMBUpWhileCarrying();
    void BndEvt__MagSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_MagnetOnAStick(int32 EntryPoint);
};

#endif
