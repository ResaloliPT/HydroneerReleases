#ifndef UE4SS_SDK_BP_HydroProspector_HPP
#define UE4SS_SDK_BP_HydroProspector_HPP

class ABP_HydroProspector_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* Headlights1;
    class UNiagaraComponent* NS_Sparkles_Fountain;
    class UStaticMeshComponent* DrillPiece;
    class UStaticMeshComponent* DrillRoot;
    class USceneComponent* ActualDrillRoot;
    class UStaticMeshComponent* DrillMesh;
    class USceneComponent* DrillPoint;
    class UStaticMeshComponent* RadarMesh;
    class USceneComponent* HandleL;
    class USceneComponent* HandleR;
    class UStaticMeshComponent* SteeringWheel;
    class USceneComponent* SteeringWheel_Pivot;
    float Timeline_Drill_Loc_DC18A94542F99BA3991FC593E91AC74F;
    float Timeline_Drill_Rot_DC18A94542F99BA3991FC593E91AC74F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_Drill__Direction_DC18A94542F99BA3991FC593E91AC74F;
    class UTimelineComponent* Timeline_Drill;
    int32 DrillState;
    class ABP_OreVein_C* NearestOreVein;
    TArray<class ABP_OreVein_C*> OreVeinsOverlapping;
    float DrillExtentAmount;
    FTimerHandle LowerDrillTimerHandle;
    FTimerHandle RaiseDrillTimerHandle;
    FBP_HydroProspector_COnDrillHeadUp OnDrillHeadUp;
    void OnDrillHeadUp();

    void CheckNodeInRange(class ABP_OreVein_C* InputPin, bool& InRange);
    void ToggleVehicleMovement(bool CanMove?);
    void ToggleParticleFountain(TEnumAsByte<E_MetalType::Type> OreType);
    void ToggleDrillHead(bool On?);
    void ModifyDrillExtent(float Target, float InterpSpeed);
    void SetHeadlights(bool NewValue);
    void CheckTraceForOreVein(bool Hit?, TArray<FHitResult>& HitArray, class ABP_OreVein_C*& Vein);
    void FindNearestVein(TArray<class ABP_OreVein_C*>& OreVeins, class ABP_OreVein_C*& Nearest);
    void SetSteeringWheelAngle();
    void PostPlayerAttached(bool Attached?);
    void Timeline_Drill__FinishedFunc();
    void Timeline_Drill__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void EnterVehicle(class APawn* Pawn);
    void ExitVehicle();
    void RMBDownWhileDriving();
    void RadarFindTimer();
    void DrillTick();
    void DrillHeadUp();
    void TraceForOreVein();
    void DeployDrill();
    void ReverseDrill();
    void ExecuteUbergraph_BP_HydroProspector(int32 EntryPoint);
    void OnDrillHeadUp__DelegateSignature();
};

#endif
