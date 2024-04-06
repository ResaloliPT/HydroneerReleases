#ifndef UE4SS_SDK_BP_HydroRoller_HPP
#define UE4SS_SDK_BP_HydroRoller_HPP

class ABP_HydroRoller_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* HandleL;
    class USceneComponent* HandleR;
    class UStaticMeshComponent* SteeringWheel;
    class USceneComponent* SteeringWheel_Pivot;
    class USceneComponent* RollHeightRef;
    class USpotLightComponent* Headlights2;
    class USpotLightComponent* Headlights1;
    class UStaticMeshComponent* Wheel1;
    class UStaticMeshComponent* Wheel0;
    class UStaticMeshComponent* RollingDrum;
    class UAudioComponent* S_Roller_Rolling;
    class USceneComponent* MiddleRoller;
    class UStaticMeshComponent* RollerDigRef3;
    class UStaticMeshComponent* RollerDigRef2;
    class UStaticMeshComponent* RollerDigRef1;
    class USceneComponent* RightRollerSide;
    class USceneComponent* LeftRollerSide;
    class UStaticMeshComponent* ArmLift;
    class UStaticMeshComponent* RotationArm;
    float RollerTimeline_Movement_DEA663564CFEB181E1E86EBAC3D00EE3;
    TEnumAsByte<ETimelineDirection::Type> RollerTimeline__Direction_DEA663564CFEB181E1E86EBAC3D00EE3;
    class UTimelineComponent* RollerTimeline;
    class ABP_HydroVoxelWorld_C* Voxel World;
    int32 RollerState;

    void SetHeadlights(bool NewValue);
    float CalcTireSlip(float Slip, bool bIsFrontTires);
    void SetSteeringWheelAngle();
    void PostPlayerAttached(bool Attached?);
    void TryVoxelDig(class UStaticMeshComponent* Scene);
    void TryFindVoxelWorldHit(TArray<FHitResult>& Hits, FHitResult& Hit, class ABP_HydroVoxelWorld_C*& VoxelWorld);
    void RollerTimeline__FinishedFunc();
    void RollerTimeline__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void RMBDownWhileDriving();
    void EnterVehicle(class APawn* Pawn);
    void ExitVehicle();
    void HandleRollerState();
    void ExecuteUbergraph_BP_HydroRoller(int32 EntryPoint);
};

#endif
