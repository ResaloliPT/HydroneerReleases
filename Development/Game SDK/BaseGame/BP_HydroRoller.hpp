#ifndef UE4SS_SDK_BP_HydroRoller_HPP
#define UE4SS_SDK_BP_HydroRoller_HPP

class ABP_HydroRoller_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x0788 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x0790 (size: 0x8)
    class UStaticMeshComponent* SteeringWheel;                                        // 0x0798 (size: 0x8)
    class USceneComponent* SteeringWheel_Pivot;                                       // 0x07A0 (size: 0x8)
    class USceneComponent* RollHeightRef;                                             // 0x07A8 (size: 0x8)
    class USpotLightComponent* Headlights2;                                           // 0x07B0 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x07B8 (size: 0x8)
    class UStaticMeshComponent* Wheel1;                                               // 0x07C0 (size: 0x8)
    class UStaticMeshComponent* Wheel0;                                               // 0x07C8 (size: 0x8)
    class UStaticMeshComponent* RollingDrum;                                          // 0x07D0 (size: 0x8)
    class UAudioComponent* S_Roller_Rolling;                                          // 0x07D8 (size: 0x8)
    class USceneComponent* MiddleRoller;                                              // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* RollerDigRef3;                                        // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* RollerDigRef2;                                        // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* RollerDigRef1;                                        // 0x07F8 (size: 0x8)
    class USceneComponent* RightRollerSide;                                           // 0x0800 (size: 0x8)
    class USceneComponent* LeftRollerSide;                                            // 0x0808 (size: 0x8)
    class UStaticMeshComponent* ArmLift;                                              // 0x0810 (size: 0x8)
    class UStaticMeshComponent* RotationArm;                                          // 0x0818 (size: 0x8)
    float RollerTimeline_Movement_DEA663564CFEB181E1E86EBAC3D00EE3;                   // 0x0820 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RollerTimeline__Direction_DEA663564CFEB181E1E86EBAC3D00EE3; // 0x0824 (size: 0x1)
    class UTimelineComponent* RollerTimeline;                                         // 0x0828 (size: 0x8)
    class ABP_HydroVoxelWorld_C* Voxel World;                                         // 0x0830 (size: 0x8)
    int32 RollerState;                                                                // 0x0838 (size: 0x4)

    void SetHeadlights(bool NewValue);
    void SetSteeringWheelAngle();
    void PostPlayerAttached(bool Attached?);
    void TryVoxelDig(class UStaticMeshComponent* Scene);
    void TryFindVoxelWorldHit(TArray<FHitResult>& Hits, FHitResult& Hit, class ABP_HydroVoxelWorld_C*& VoxelWorld);
    void RollerTimeline__FinishedFunc();
    void RollerTimeline__UpdateFunc();
    void InpActEvt_VehicleMode_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void EnterVehicle(class APawn* Pawn);
    void ExitVehicle();
    void HandleRollerState();
    void ExecuteUbergraph_BP_HydroRoller(int32 EntryPoint);
}; // Size: 0x83C

#endif
