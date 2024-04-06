#ifndef UE4SS_SDK_BP_GravityTool_HPP
#define UE4SS_SDK_BP_GravityTool_HPP

class ABP_GravityTool_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    float Timeline_1_NewTrack_0_E8AD02A9401E7C0B74B4E6AEDCDC8CB7;                     // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_E8AD02A9401E7C0B74B4E6AEDCDC8CB7; // 0x0464 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0468 (size: 0x8)
    class ABP_ParentItem_C* GravityItem;                                              // 0x0470 (size: 0x8)
    FTimerHandle GravityTimerHandle;                                                  // 0x0478 (size: 0x8)
    FRotator RandomRot;                                                               // 0x0480 (size: 0xC)
    class UMaterialInstanceDynamic* DynamicMat;                                       // 0x0490 (size: 0x8)
    class UAudioComponent* WandSound;                                                 // 0x0498 (size: 0x8)
    TArray<class AActor*> IgnoreArray;                                                // 0x04A0 (size: 0x10)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Animate();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void GravTimer();
    void StopLiftingObject(bool Add Velocity?);
    void StartLiftingObject(class AActor* Object);
    void TurnOnHeat(bool Heat?);
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void LMBDown(class AActor* HitActor);
    void OverridePickedup();
    void ExecuteUbergraph_BP_GravityTool(int32 EntryPoint);
}; // Size: 0x4B0

#endif
