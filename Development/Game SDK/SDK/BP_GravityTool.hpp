#ifndef UE4SS_SDK_BP_GravityTool_HPP
#define UE4SS_SDK_BP_GravityTool_HPP

class ABP_GravityTool_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    float Timeline_1_NewTrack_0_E8AD02A9401E7C0B74B4E6AEDCDC8CB7;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_E8AD02A9401E7C0B74B4E6AEDCDC8CB7;
    class UTimelineComponent* Timeline_1;
    class ABP_ParentItem_C* GravityItem;
    FTimerHandle GravityTimerHandle;
    FRotator RandomRot;
    class UMaterialInstanceDynamic* DynamicMat;
    class UAudioComponent* WandSound;

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
    void ExecuteUbergraph_BP_GravityTool(int32 EntryPoint);
};

#endif
