#ifndef UE4SS_SDK_BP_HydroProspector_HPP
#define UE4SS_SDK_BP_HydroProspector_HPP

class ABP_HydroProspector_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class USpotLightComponent* Headlights1;                                           // 0x0788 (size: 0x8)
    class UNiagaraComponent* NS_Sparkles_Fountain;                                    // 0x0790 (size: 0x8)
    class UStaticMeshComponent* DrillPiece;                                           // 0x0798 (size: 0x8)
    class UStaticMeshComponent* DrillRoot;                                            // 0x07A0 (size: 0x8)
    class USceneComponent* ActualDrillRoot;                                           // 0x07A8 (size: 0x8)
    class UStaticMeshComponent* DrillMesh;                                            // 0x07B0 (size: 0x8)
    class USceneComponent* DrillPoint;                                                // 0x07B8 (size: 0x8)
    class UStaticMeshComponent* RadarMesh;                                            // 0x07C0 (size: 0x8)
    class USceneComponent* HandleL;                                                   // 0x07C8 (size: 0x8)
    class USceneComponent* HandleR;                                                   // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* SteeringWheel;                                        // 0x07D8 (size: 0x8)
    class USceneComponent* SteeringWheel_Pivot;                                       // 0x07E0 (size: 0x8)
    float Timeline_Drill_Loc_DC18A94542F99BA3991FC593E91AC74F;                        // 0x07E8 (size: 0x4)
    float Timeline_Drill_Rot_DC18A94542F99BA3991FC593E91AC74F;                        // 0x07EC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Drill__Direction_DC18A94542F99BA3991FC593E91AC74F; // 0x07F0 (size: 0x1)
    class UTimelineComponent* Timeline_Drill;                                         // 0x07F8 (size: 0x8)
    int32 DrillState;                                                                 // 0x0800 (size: 0x4)
    class ABP_OreVein_C* NearestOreVein;                                              // 0x0808 (size: 0x8)
    TArray<class ABP_OreVein_C*> OreVeinsOverlapping;                                 // 0x0810 (size: 0x10)
    float DrillExtentAmount;                                                          // 0x0820 (size: 0x4)
    FTimerHandle LowerDrillTimerHandle;                                               // 0x0828 (size: 0x8)
    FTimerHandle RaiseDrillTimerHandle;                                               // 0x0830 (size: 0x8)
    FBP_HydroProspector_COnDrillHeadUp OnDrillHeadUp;                                 // 0x0838 (size: 0x10)
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
    void InpActEvt_VehicleMode_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void EnterVehicle(class APawn* Pawn);
    void ExitVehicle();
    void RadarFindTimer();
    void DrillTick();
    void DrillHeadUp();
    void TraceForOreVein();
    void DeployDrill();
    void ReverseDrill();
    void ExecuteUbergraph_BP_HydroProspector(int32 EntryPoint);
    void OnDrillHeadUp__DelegateSignature();
}; // Size: 0x848

#endif
