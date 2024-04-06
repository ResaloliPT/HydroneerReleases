#ifndef UE4SS_SDK_BP_HydroMole_HPP
#define UE4SS_SDK_BP_HydroMole_HPP

class ABP_HydroMole_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USplineComponent* TrackL;
    class USplineComponent* TrackR;
    class UStaticMeshComponent* SM_HydroMole_Treads_X1;
    class UStaticMeshComponent* SM_HydroMole_Treads_X;
    class USpotLightComponent* Headlights2;
    class USpotLightComponent* Headlights1;
    class UNiagaraComponent* Niagara;
    class USceneComponent* HandleR;
    class USceneComponent* HandleL;
    class UStaticMeshComponent* SteeringWheel;
    class USceneComponent* SteeringWheel_Pivot;
    class UNiagaraComponent* Exhaust1;
    class USceneComponent* DrillDigPivot;
    class UStaticMeshComponent* DrillArms;
    class UStaticMeshComponent* Drum2;
    class UStaticMeshComponent* Drum1;
    class UStaticMeshComponent* DrillHead;
    float DrillAngle;
    bool UsingDrill;
    float DrillSpeed;
    float DrillAngleInterp;
    FVector LowerBarOrigin;
    float MaxDrillSpeed;
    FTimerHandle DigTimer;
    bool RightFlatten;
    int32 TrackPieces;
    float OffsetR;
    TArray<class USplineMeshComponent*> TreadsR;
    float OffsetL;
    TArray<class USplineMeshComponent*> TreadsL;
    float MoveForwardAxis;
    class UAudioComponent* DrumSpinSound;

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
    void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_0(float AxisValue);
    void RMBUpWhileDriving();
    void RMBDownWhileDriving();
    void ReceiveTick(float DeltaSeconds);
    void TryDig();
    void LMBDownWhileDriving();
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
    void Rotate1WhileDriving();
    void Rotate2WhileDriving();
    void Rotate3WhileDriving();
    void ExecuteUbergraph_BP_HydroMole(int32 EntryPoint);
};

#endif
