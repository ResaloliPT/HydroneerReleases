#ifndef UE4SS_SDK_BP_HydroThaw_HPP
#define UE4SS_SDK_BP_HydroThaw_HPP

class ABP_HydroThaw_C : public ABP_ParentVehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class UC_LiftPoint_C* C_LiftPoint;                                                // 0x0788 (size: 0x8)
    class UNiagaraComponent* NS_LavaThaw;                                             // 0x0790 (size: 0x8)
    class UNiagaraComponent* NS_LavaThaw2;                                            // 0x0798 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x07A0 (size: 0x8)
    class USphereComponent* BoostOverlap_R;                                           // 0x07A8 (size: 0x8)
    class USphereComponent* BoostOverlap_L;                                           // 0x07B0 (size: 0x8)
    class UStaticMeshComponent* BoostTank_R;                                          // 0x07B8 (size: 0x8)
    class UStaticMeshComponent* BoostTank_L;                                          // 0x07C0 (size: 0x8)
    class USplineComponent* Track_L;                                                  // 0x07C8 (size: 0x8)
    class USplineComponent* Track_R;                                                  // 0x07D0 (size: 0x8)
    class USphereComponent* FalloffSphere;                                            // 0x07D8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x07E0 (size: 0x8)
    class USceneComponent* DigLocation;                                               // 0x07E8 (size: 0x8)
    class USceneComponent* DigPivot;                                                  // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* Cannon_Yaw_L;                                         // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* Cannon_Yaw_R;                                         // 0x0800 (size: 0x8)
    class UStaticMeshComponent* Cannon_Pitch_R;                                       // 0x0808 (size: 0x8)
    class UStaticMeshComponent* Cannon_Pitch_L;                                       // 0x0810 (size: 0x8)
    class USceneComponent* Cannon_R;                                                  // 0x0818 (size: 0x8)
    class USceneComponent* Cannon_L;                                                  // 0x0820 (size: 0x8)
    float DigSpeed;                                                                   // 0x0828 (size: 0x4)
    FTimerHandle DigTimer;                                                            // 0x0830 (size: 0x8)
    bool IsDigging;                                                                   // 0x0838 (size: 0x1)
    float DigAngle;                                                                   // 0x083C (size: 0x4)
    float MoveForwardAxis;                                                            // 0x0840 (size: 0x4)
    float DigAngleInterp;                                                             // 0x0844 (size: 0x4)
    int32 TrackPieces;                                                                // 0x0848 (size: 0x4)
    TArray<class USplineMeshComponent*> TreadsR;                                      // 0x0850 (size: 0x10)
    TArray<class USplineMeshComponent*> TreadsL;                                      // 0x0860 (size: 0x10)
    float OffsetR;                                                                    // 0x0870 (size: 0x4)
    float OffsetL;                                                                    // 0x0874 (size: 0x4)
    bool LeftBoost;                                                                   // 0x0878 (size: 0x1)
    bool RightBoost;                                                                  // 0x0879 (size: 0x1)
    class ABP_LavaThawBoostTank_C* LeftBoostItem;                                     // 0x0880 (size: 0x8)
    class ABP_LavaThawBoostTank_C* RightBoostItem;                                    // 0x0888 (size: 0x8)
    int32 MaxDepth;                                                                   // 0x0890 (size: 0x4)

    void UpdateMaxDepth();
    void InitBoostState();
    void ApplyWheelRotation();
    float CalculateTireXForce(int32 Index);
    void SetTreadPosition(class USplineMeshComponent* Tread, int32 Index, class USplineComponent* Spline, float Offset);
    void SetDigAngle();
    void SetSteeringRotation();
    void StopDig();
    void Dig(bool& IsDigging);
    void TryFindVoxelWorldHit(TArray<FHitResult>& Hits, FHitResult& Hit, class ABP_HydroVoxelWorld_C*& VoxelWorld);
    void ApplyFlatten(class ABP_HydroVoxelWorld_C* VoxelWorld, FVector Position, FVector Normal, FVoxelSurfaceEditsVoxels SurfaceVoxels);
    void UserConstructionScript();
    void InpActEvt_VehicleMode_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Rotate_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Rotate2_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Rotate3_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void TryDig();
    void InpAxisEvt_VehicleForward_K2Node_InputAxisEvent_2(float AxisValue);
    void BndEvt__BP_HydroThaw_BoostOverlap_L_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HydroThaw_BoostOverlap_R_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void BndEvt__BP_HydroThaw_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void ExitVehicle();
    void ExecuteUbergraph_BP_HydroThaw(int32 EntryPoint);
}; // Size: 0x894

#endif
