#ifndef UE4SS_SDK_BP_ParentVehicle_HPP
#define UE4SS_SDK_BP_ParentVehicle_HPP

class ABP_ParentVehicle_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UBoxComponent* FuelBox;                                                     // 0x0288 (size: 0x8)
    class UAudioComponent* ExhaustAudio;                                              // 0x0290 (size: 0x8)
    class UStaticMeshComponent* RefuelStaticMesh;                                     // 0x0298 (size: 0x8)
    class UVoxelSimpleInvokerComponent* VoxelInvoker;                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* FuelLevel;                                            // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* TruckLights;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* PlayerCollision;                                      // 0x02B8 (size: 0x8)
    class USpotLightComponent* ReverseLightRight;                                     // 0x02C0 (size: 0x8)
    class USpotLightComponent* ReverseLightLeft;                                      // 0x02C8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x02D0 (size: 0x8)
    class USceneComponent* CameraAnchor;                                              // 0x02D8 (size: 0x8)
    class USceneComponent* VehicleExitPoint;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* WheelMeshBR;                                          // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* WheelMeshBL;                                          // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* WheelMeshFR;                                          // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* WheelMeshFL;                                          // 0x0300 (size: 0x8)
    class USceneComponent* WheelBR;                                                   // 0x0308 (size: 0x8)
    class USceneComponent* WheelBL;                                                   // 0x0310 (size: 0x8)
    class USceneComponent* WheelFR;                                                   // 0x0318 (size: 0x8)
    class USceneComponent* WheelFL;                                                   // 0x0320 (size: 0x8)
    class UAudioComponent* ReverseBeep;                                               // 0x0328 (size: 0x8)
    class UPointLightComponent* FuelEmptyLight;                                       // 0x0330 (size: 0x8)
    class UAudioComponent* FuelEmptyAudio;                                            // 0x0338 (size: 0x8)
    class UPointLightComponent* BrakeLightRight;                                      // 0x0340 (size: 0x8)
    class UPointLightComponent* BrakeLightLeft;                                       // 0x0348 (size: 0x8)
    class UNiagaraComponent* Exhaust;                                                 // 0x0350 (size: 0x8)
    class UAudioComponent* EngineAudio;                                               // 0x0358 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0368 (size: 0x8)
    class USceneComponent* TraceBR;                                                   // 0x0370 (size: 0x8)
    class USceneComponent* TraceBL;                                                   // 0x0378 (size: 0x8)
    class USceneComponent* TraceFR;                                                   // 0x0380 (size: 0x8)
    class USceneComponent* TraceFL;                                                   // 0x0388 (size: 0x8)
    class UFloatingPawnMovement* MovementComponent;                                   // 0x0390 (size: 0x8)
    float Fuel_Light_Bleep_Intensity_04ADEAC54F4882E7F34D7C91084AF6BB;                // 0x0398 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Fuel_Light_Bleep__Direction_04ADEAC54F4882E7F34D7C91084AF6BB; // 0x039C (size: 0x1)
    class UTimelineComponent* Fuel Light Bleep;                                       // 0x03A0 (size: 0x8)
    float CamTransition_Progress_B2F62E0F484C3C136FDFBBA19151F19B;                    // 0x03A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CamTransition__Direction_B2F62E0F484C3C136FDFBBA19151F19B; // 0x03AC (size: 0x1)
    class UTimelineComponent* CamTransition;                                          // 0x03B0 (size: 0x8)
    float BlendFuelSFX_Blend_18BDD7304D1E08455C822E9595B17EF8;                        // 0x03B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BlendFuelSFX__Direction_18BDD7304D1E08455C822E9595B17EF8; // 0x03BC (size: 0x1)
    class UTimelineComponent* BlendFuelSFX;                                           // 0x03C0 (size: 0x8)
    float TurnOnHeadlights_Attenuation_30864BD34CB7D4A5FAC9B0886E0EB265;              // 0x03C8 (size: 0x4)
    float TurnOnHeadlights_Intensity_30864BD34CB7D4A5FAC9B0886E0EB265;                // 0x03CC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TurnOnHeadlights__Direction_30864BD34CB7D4A5FAC9B0886E0EB265; // 0x03D0 (size: 0x1)
    class UTimelineComponent* TurnOnHeadlights;                                       // 0x03D8 (size: 0x8)
    TArray<FS_VehWheelData> WheelData;                                                // 0x03E0 (size: 0x10)
    TArray<FS_VehSuspensionData> SuspensionData;                                      // 0x03F0 (size: 0x10)
    TArray<class USceneComponent*> TraceOrigins;                                      // 0x0400 (size: 0x10)
    TArray<class USceneComponent*> WheelComponents;                                   // 0x0410 (size: 0x10)
    TArray<float> RayLength;                                                          // 0x0420 (size: 0x10)
    TArray<bool> RayBlockingHits;                                                     // 0x0430 (size: 0x10)
    TArray<FHitResult> RayHitResults;                                                 // 0x0440 (size: 0x10)
    TArray<float> ForceX;                                                             // 0x0450 (size: 0x10)
    TArray<float> ForceY;                                                             // 0x0460 (size: 0x10)
    TArray<float> ForceZ;                                                             // 0x0470 (size: 0x10)
    TArray<float> Length;                                                             // 0x0480 (size: 0x10)
    TArray<float> LastLength;                                                         // 0x0490 (size: 0x10)
    TArray<FVector> WheelLinearVelocityLocal;                                         // 0x04A0 (size: 0x10)
    bool DebugForces;                                                                 // 0x04B0 (size: 0x1)
    float SteeringAngle;                                                              // 0x04B4 (size: 0x4)
    float SteeringAngleMax;                                                           // 0x04B8 (size: 0x4)
    float SideFrictionMultiplier;                                                     // 0x04BC (size: 0x4)
    bool bGrounded;                                                                   // 0x04C0 (size: 0x1)
    bool bHeadlightsOn;                                                               // 0x04C1 (size: 0x1)
    TArray<FVector> WheelLinearVelocity;                                              // 0x04C8 (size: 0x10)
    float AirControlScalar;                                                           // 0x04D8 (size: 0x4)
    float AirControlGainSpeed;                                                        // 0x04DC (size: 0x4)
    bool bPlayFuelSFX;                                                                // 0x04E0 (size: 0x1)
    float FuelAlertBlendVolume;                                                       // 0x04E4 (size: 0x4)
    float HornCooldown;                                                               // 0x04E8 (size: 0x4)
    bool bHornOnCooldown;                                                             // 0x04EC (size: 0x1)
    float Fuel;                                                                       // 0x04F0 (size: 0x4)
    bool bIgnition;                                                                   // 0x04F4 (size: 0x1)
    bool bBraking;                                                                    // 0x04F5 (size: 0x1)
    bool bReversing;                                                                  // 0x04F6 (size: 0x1)
    float FuelConsumptionRate;                                                        // 0x04F8 (size: 0x4)
    bool bTiltAllowed;                                                                // 0x04FC (size: 0x1)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> PawnCollisionComponents; // 0x0500 (size: 0x50)
    TMap<int32, APawn*> StoredPawns;                                                  // 0x0550 (size: 0x50)
    FTransform CachedCamTransform;                                                    // 0x05A0 (size: 0x30)
    float CamZoomMin;                                                                 // 0x05D0 (size: 0x4)
    float CamZoomMax;                                                                 // 0x05D4 (size: 0x4)
    float ZoomSpeed;                                                                  // 0x05D8 (size: 0x4)
    float ZoomSnapIncrements;                                                         // 0x05DC (size: 0x4)
    float CameraZoom;                                                                 // 0x05E0 (size: 0x4)
    TMap<TEnumAsByte<E_CargoType::Type>, int32> DefaultCargoPoints;                   // 0x05E8 (size: 0x50)
    bool bHandbraking;                                                                // 0x0638 (size: 0x1)
    float Friction;                                                                   // 0x063C (size: 0x4)
    float HandbrakeFriction;                                                          // 0x0640 (size: 0x4)
    float UphillTorque;                                                               // 0x0644 (size: 0x4)
    float BaseTorque;                                                                 // 0x0648 (size: 0x4)
    float MinSpeedForTurn;                                                            // 0x064C (size: 0x4)
    bool bDebugPrints;                                                                // 0x0650 (size: 0x1)
    bool bFreezePhysics;                                                              // 0x0651 (size: 0x1)
    bool bLocked;                                                                     // 0x0652 (size: 0x1)
    bool CheckingUnwedge;                                                             // 0x0653 (size: 0x1)
    bool Unwedging;                                                                   // 0x0654 (size: 0x1)
    float EngineSoundPeakRPM;                                                         // 0x0658 (size: 0x4)
    class ACharacter* PlayerCharacter;                                                // 0x0660 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x0668 (size: 0x8)
    bool bCanHighlight;                                                               // 0x0670 (size: 0x1)
    TArray<int32> HighlightArray;                                                     // 0x0678 (size: 0x10)
    FTimerHandle YeetTimer;                                                           // 0x0688 (size: 0x8)
    bool bCanYeet;                                                                    // 0x0690 (size: 0x1)
    float MaxSpeed;                                                                   // 0x0694 (size: 0x4)
    class UAudioComponent* BurnoutSound;                                              // 0x0698 (size: 0x8)
    float ForwardInput;                                                               // 0x06A0 (size: 0x4)
    bool InvertMouseY;                                                                // 0x06A4 (size: 0x1)
    float EngineAcceleration;                                                         // 0x06A8 (size: 0x4)
    float SpeedMultiplyer;                                                            // 0x06AC (size: 0x4)
    float FuelMeshBottomLevel;                                                        // 0x06B0 (size: 0x4)
    float FuelMeshTopLevel;                                                           // 0x06B4 (size: 0x4)
    float TurnAssist;                                                                 // 0x06B8 (size: 0x4)
    float SteeringSpeed;                                                              // 0x06BC (size: 0x4)
    class UMaterialInterface* LightsOffMaterial;                                      // 0x06C0 (size: 0x8)
    class UMaterialInterface* LightsOnMaterial;                                       // 0x06C8 (size: 0x8)
    int32 HeadlightsMatIndex;                                                         // 0x06D0 (size: 0x4)
    class USoundBase* EngineIgnitionSound;                                            // 0x06D8 (size: 0x8)
    bool HasDoors?;                                                                   // 0x06E0 (size: 0x1)
    class USoundBase* HornSound;                                                      // 0x06E8 (size: 0x8)
    class USoundBase* EngineStopSound;                                                // 0x06F0 (size: 0x8)
    float LocalWheelRotationAdd;                                                      // 0x06F8 (size: 0x4)
    TArray<class USpotLightComponent*> HeadlightArray;                                // 0x0700 (size: 0x10)
    FText Name;                                                                       // 0x0710 (size: 0x18)
    FText Description;                                                                // 0x0728 (size: 0x18)
    float CharacterSteering;                                                          // 0x0740 (size: 0x4)
    float EngineSpeed;                                                                // 0x0744 (size: 0x4)
    bool UseCameraYaw;                                                                // 0x0748 (size: 0x1)
    TArray<FS_VehicleActions> VehicleActionsTooltip;                                  // 0x0750 (size: 0x10)
    TArray<class USceneComponent*> SteeringOrigins;                                   // 0x0760 (size: 0x10)
    float WheelMultiplier;                                                            // 0x0770 (size: 0x4)
    float MaxSlipResistance;                                                          // 0x0774 (size: 0x4)
    float SlipResistanceMultiplier;                                                   // 0x0778 (size: 0x4)

    void Crane_CanPlace(bool& Result, FVector& Location);
    void Crane_TryLift(class AActor* LiftingActor, class ACharacter* ControllingCharacter, bool& Result);
    void Crane_TryPlace(bool& Result);
    void Crane_TryDrop(bool& Result);
    void BPI_GetHighlightArray(TArray<int32>& HighlightArray);
    void BPI_SetHighlightArray(TArray<int32>& HighlightArray, bool& Result);
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void ToggleRefuelLight();
    void TryApplyDamping();
    void StartIgnition();
    void MassCheck();
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void Relocate(FTransform Transform);
    void LockVehicle(bool Lock, bool& Result);
    void GetInitSteeringOrigins(TArray<class USceneComponent*>& Array);
    class USceneComponent* GetTraceAtIndex(int32 Index);
    class USceneComponent* GetWheelAtIndex(int32 Index);
    void ExitTrace(const FVector ExitDirection, FVector& ExitLocation, bool& bBlockingHit);
    void SetExhaustSpawn(float Param);
    void SetSteeringRotation();
    float CalculateTireXForce(int32 Index);
    void CalcSlipAngle(float Y, float X, float& SlipAngle);
    void UpdateEngineSpeed();
    void PostPlayerAttached(bool Attached?);
    void ToggleAffectNavigation(bool bCanAffectNavigation);
    void FindExitPoint(FVector& ExitPoint);
    void CanEnter?(bool& Result);
    void FreezePhysics(bool bNewState);
    void ForceWheelsToRestLength();
    void ApplyFriction();
    void OnLand();
    void TickCameraZoom(float DeltaTime);
    void DetachPawnFromVehicle();
    void AttachPawnToVehicle(class APawn* Pawn, int32 Index);
    void SetHeadlights(bool NewValue);
    void ToggleHeadlights();
    void DrawDebugForces();
    void ApplyWheelRotation();
    void ApplyTireForce(int32 Index);
    void GetTireForce(int32 Index);
    void GetWheelLinearVelocityLocal(int32 Index);
    void UpdateWheelLocation(int32 Index);
    void ApplySuspensionForce(int32 Index);
    void GetSuspensionForce(int32 Index);
    void UpdateSuspensionLength(int32 Index);
    void SuspensionInit();
    void SetupReferences();
    void RayInit();
    void RayCast();
    void UserConstructionScript();
    void TurnOnHeadlights__FinishedFunc();
    void TurnOnHeadlights__UpdateFunc();
    void BlendFuelSFX__FinishedFunc();
    void BlendFuelSFX__UpdateFunc();
    void Fuel Light Bleep__FinishedFunc();
    void Fuel Light Bleep__UpdateFunc();
    void CamTransition__FinishedFunc();
    void CamTransition__UpdateFunc();
    void InpActEvt_Jump_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_BuildPlaceCloser_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_BuildPlaceFurther_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_0(FKey Key);
    void HornFinishCooldown();
    void EnterVehicle(class APawn* Pawn);
    void ReceiveBeginPlay();
    void StartCamTransition();
    void ExitVehicle();
    void ReceiveTick(float DeltaSeconds);
    void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_4(float AxisValue);
    void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_5(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void BPI_Unhighlight(class ABP_GameController_C* Controller);
    void BPI_Highlight(class ABP_GameController_C* Controller);
    void HasWater();
    void HasNoWater();
    void FOVChanged(float NewValue);
    void FuelVisualHeight();
    void BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt?);
    void InvertMouseYChanged(bool NewValue);
    void OverrideMoveForward(float AxisValue);
    void ForceVehicleOff();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void EDownWhileDriving();
    void EUpWhileDriving();
    void BndEvt__BP_ParentVehicle_Body_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Rotate1WhileDriving(bool RotationModify);
    void Rotate2WhileDriving(bool RotationModify);
    void Rotate3WhileDriving(bool RotationModify);
    void Accelerate(float Input);
    void Steer(float Input);
    void InpAxisEvt_VehicleForward_K2Node_InputAxisEvent_0(float AxisValue);
    void ChangeCameraZoom(float Amount);
    void BndEvt__BP_ParentVehicle_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorLoaded();
    void Crane_HandleRetract(bool Retracting);
    void ExecuteUbergraph_BP_ParentVehicle(int32 EntryPoint);
}; // Size: 0x77C

#endif
