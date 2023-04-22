#ifndef UE4SS_SDK_BP_LogicMagnet_HPP
#define UE4SS_SDK_BP_LogicMagnet_HPP

class ABP_LogicMagnet_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Mag1;
    class UBoxComponent* MagnetBox;
    class UAC_Magnet_C* AC_Magnet;
    class UBoxComponent* X-Box;

    void OverrideLogicIn(class USceneComponent* Component);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideLoaded();
    void OverridePickedup();
    void BndEvt__BP_LogicMagnet_MagnetBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicMagnet_MagnetBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_LogicMagnet(int32 EntryPoint);
};

#endif
