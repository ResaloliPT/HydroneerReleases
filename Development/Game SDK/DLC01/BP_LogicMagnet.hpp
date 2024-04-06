#ifndef UE4SS_SDK_BP_LogicMagnet_HPP
#define UE4SS_SDK_BP_LogicMagnet_HPP

class ABP_LogicMagnet_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class USceneComponent* Mag1;                                                      // 0x04C0 (size: 0x8)
    class UBoxComponent* MagnetBox;                                                   // 0x04C8 (size: 0x8)
    class UAC_Magnet_C* AC_Magnet;                                                    // 0x04D0 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04D8 (size: 0x8)

    void TryStopMagItem(class ABP_ParentItem_C* Item);
    void TryMagItem(class ABP_ParentItem_C* InputPin);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideLoaded();
    void OverridePickedup();
    void BndEvt__BP_LogicMagnet_MagnetBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicMagnet_MagnetBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicMagnet(int32 EntryPoint);
}; // Size: 0x4E0

#endif
