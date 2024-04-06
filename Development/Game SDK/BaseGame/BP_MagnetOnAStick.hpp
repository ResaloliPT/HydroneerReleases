#ifndef UE4SS_SDK_BP_MagnetOnAStick_HPP
#define UE4SS_SDK_BP_MagnetOnAStick_HPP

class ABP_MagnetOnAStick_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Magnet_C* AC_Magnet;                                                    // 0x0458 (size: 0x8)
    class USceneComponent* Mag1;                                                      // 0x0460 (size: 0x8)
    class USphereComponent* MagSphere;                                                // 0x0468 (size: 0x8)
    TArray<class ABP_ParentResource_C*> Resources;                                    // 0x0470 (size: 0x10)
    bool CanUseMagnet?';                                                              // 0x0480 (size: 0x1)
    class UAudioComponent* IdleSound;                                                 // 0x0488 (size: 0x8)

    void TryStopMagItem(class ABP_ParentItem_C* Item);
    void TryMagItem(class ABP_ParentItem_C* Item);
    void TryMagActor(class AActor* Actor);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LMBUpWhileCarrying();
    void BndEvt__MagSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_MagnetOnAStick(int32 EntryPoint);
}; // Size: 0x490

#endif
