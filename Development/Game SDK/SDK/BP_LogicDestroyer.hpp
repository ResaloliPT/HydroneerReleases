#ifndef UE4SS_SDK_BP_LogicDestroyer_HPP
#define UE4SS_SDK_BP_LogicDestroyer_HPP

class ABP_LogicDestroyer_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_ItemDestroyer_Drum3;
    class UStaticMeshComponent* SM_ItemDestroyer_Drum2;
    class UStaticMeshComponent* SM_ItemDestroyer_Drum1;
    class UStaticMeshComponent* SM_ItemDestroyer_Drum;
    class UBoxComponent* X-Box;
    class UBoxComponent* DestroyBox;
    FTimerHandle SpinnyTimer;
    class UAudioComponent* IdleSound;

    void UserConstructionScript();
    void OverrideLoaded();
    void OverridePickedup();
    void OverrideLogicIn(class USceneComponent* Component);
    void Spinner();
    void BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StopSpinning();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void StartSpinning();
    void ExecuteUbergraph_BP_LogicDestroyer(int32 EntryPoint);
};

#endif
