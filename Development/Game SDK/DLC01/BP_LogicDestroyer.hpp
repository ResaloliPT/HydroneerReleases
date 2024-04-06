#ifndef UE4SS_SDK_BP_LogicDestroyer_HPP
#define UE4SS_SDK_BP_LogicDestroyer_HPP

class ABP_LogicDestroyer_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* SM_ItemDestroyer_Drum3;                               // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* SM_ItemDestroyer_Drum2;                               // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* SM_ItemDestroyer_Drum1;                               // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* SM_ItemDestroyer_Drum;                                // 0x04D8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04E0 (size: 0x8)
    class UBoxComponent* DestroyBox;                                                  // 0x04E8 (size: 0x8)
    FTimerHandle SpinnyTimer;                                                         // 0x04F0 (size: 0x8)
    class UAudioComponent* IdleSound;                                                 // 0x04F8 (size: 0x8)

    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideLoaded();
    void OverridePickedup();
    void OverrideLogicIn(class USceneComponent* Component);
    void Spinner();
    void BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StopSpinning();
    void StartSpinning();
    void ExecuteUbergraph_BP_LogicDestroyer(int32 EntryPoint);
}; // Size: 0x500

#endif
