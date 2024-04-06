#ifndef UE4SS_SDK_BP_HydroMole_HPP
#define UE4SS_SDK_BP_HydroMole_HPP

class ABP_HydroMole_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class USplineComponent* TrackL;                                                   // 0x0788 (size: 0x8)
    class USplineComponent* TrackR;                                                   // 0x0790 (size: 0x8)
    class UStaticMeshComponent* SM_HydroMole_Treads_X1;                               // 0x0798 (size: 0x8)
    class UStaticMeshComponent* SM_HydroMole_Treads_X;                                // 0x07A0 (size: 0x8)
    class USpotLightComponent* Headlights2;                                           // 0x07A8 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x07B0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x07B8 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x07C0 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x07C8 (size: 0x8)
    class UStaticMeshComponent* SteeringWheel;                                        // 0x07D0 (size: 0x8)
    class USceneComponent* SteeringWheel_Pivot;                                       // 0x07D8 (size: 0x8)
    class UNiagaraComponent* Exhaust1;                                                // 0x07E0 (size: 0x8)
    class USceneComponent* DrillDigPivot;                                             // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* DrillArms;                                            // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* Drum2;                                                // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* Drum1;                                                // 0x0800 (size: 0x8)
    class UStaticMeshComponent* DrillHead;                                            // 0x0808 (size: 0x8)
    float DrillAngle;                                                                 // 0x0810 (size: 0x4)
    bool UsingDrill;                                                                  // 0x0814 (size: 0x1)
    float DrillSpeed;                                                                 // 0x0818 (size: 0x4)
    float DrillAngleInterp;                                                           // 0x081C (size: 0x4)
    FVector LowerBarOrigin;                                                           // 0x0820 (size: 0xC)
    float MaxDrillSpeed;                                                              // 0x082C (size: 0x4)
    FTimerHandle DigTimer;                                                            // 0x0830 (size: 0x8)
    bool RightFlatten;                                                                // 0x0838 (size: 0x1)
    int32 TrackPieces;                                                                // 0x083C (size: 0x4)
    float OffsetR;                                                                    // 0x0840 (size: 0x4)
    TArray<class USplineMeshComponent*> TreadsR;                                      // 0x0848 (size: 0x10)
    float OffsetL;                                                                    // 0x0858 (size: 0x4)
    TArray<class USplineMeshComponent*> TreadsL;                                      // 0x0860 (size: 0x10)
    float MoveForwardAxis;                                                            // 0x0870 (size: 0x4)
    class UAudioComponent* DrumSpinSound;                                             // 0x0878 (size: 0x8)

    void SetHeadlights(bool NewValue);
    void ApplyWheelRotation();
    void SetTreadPosition(class USplineMeshComponent* Tread, int32 Index, class USplineComponent* Spline, float Offset);
    void SetExhaustSpawn(float Param);
    void TurnOffDrill();
    void SetSteeringWheelAngle();
    void PostPlayerAttached(bool Attached?);
    void SetSteeringRotation();
    float CalculateTireXForce(int32 Index);
    void ApplyFlatten(class AVoxelWorld* VoxelWorld, FVector Position, FVector Normal, FVoxelSurfaceEditsVoxels SurfaceVoxels);
    void SpinDrill();
    void SetDrillArmAngle(float Angle);
    void Dig(bool& IsDigging);
    void TryFindVoxelWorldHit(TArray<FHitResult>& Hits, FHitResult& Hit, class ABP_HydroVoxelWorld_C*& VoxelWorld);
    void ModifyDrillAngle(float Delta);
    void UserConstructionScript();
    void InpActEvt_VehicleMode_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Rotate_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Rotate2_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Rotate3_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void TryDig();
    void InpAxisEvt_VehicleForward_K2Node_InputAxisEvent_2(float AxisValue);
    void ExecuteUbergraph_BP_HydroMole(int32 EntryPoint);
}; // Size: 0x880

#endif
