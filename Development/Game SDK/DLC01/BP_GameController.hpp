#ifndef UE4SS_SDK_BP_GameController_HPP
#define UE4SS_SDK_BP_GameController_HPP

class ABP_GameController_C : public APlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    float MoveTimeline_NewTrack_0_637096C0404CFE678CE754B416A1F939;                   // 0x0578 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveTimeline__Direction_637096C0404CFE678CE754B416A1F939; // 0x057C (size: 0x1)
    class UTimelineComponent* MoveTimeline;                                           // 0x0580 (size: 0x8)
    class UUI_HUD_C* HUD;                                                             // 0x0588 (size: 0x8)
    TEnumAsByte<E_Crosshairs::Type> CurrentCrosshair;                                 // 0x0590 (size: 0x1)
    class ABP_HydroVoxelWorld_C* VoxelWorld;                                          // 0x0598 (size: 0x8)
    class ABP_GameCharacter_C* Game Character;                                        // 0x05A0 (size: 0x8)
    class ABP_ParentItem_C* CarryingItem;                                             // 0x05A8 (size: 0x8)
    TArray<class ABP_WorldStore_C*> InStore?;                                         // 0x05B0 (size: 0x10)
    class ABP_ParentItem_C* PlacingItem;                                              // 0x05C0 (size: 0x8)
    float BuildingZRotation;                                                          // 0x05C8 (size: 0x4)
    float BuildingLength;                                                             // 0x05CC (size: 0x4)
    class AActor* LastThingLookingAt;                                                 // 0x05D0 (size: 0x8)
    float BuildingXRotation;                                                          // 0x05D8 (size: 0x4)
    class UUserWidget* OpenUI;                                                        // 0x05E0 (size: 0x8)
    FTransform MenuLocation;                                                          // 0x05F0 (size: 0x30)
    FTransform Player1Location;                                                       // 0x0620 (size: 0x30)
    FTimerHandle AutoSaverHandle;                                                     // 0x0650 (size: 0x8)
    class ABP_DayNightCycle_C* DayNight;                                              // 0x0658 (size: 0x8)
    class AActor* CurrentVehicle;                                                     // 0x0660 (size: 0x8)
    TEnumAsByte<E_MovementMode::Type> CurrentMovementMode;                            // 0x0668 (size: 0x1)
    float Building YRotation;                                                         // 0x066C (size: 0x4)
    FDateTime StartingUTC;                                                            // 0x0670 (size: 0x8)
    bool AutosaveToggle;                                                              // 0x0678 (size: 0x1)
    TArray<class UObject*> HighlightedObjects;                                        // 0x0680 (size: 0x10)
    class ABP_ScreenshotCam_C* ScreenshotCam;                                         // 0x0690 (size: 0x8)
    class UUI_ScreenshotCam_C* ScreenshotCamUI;                                       // 0x0698 (size: 0x8)
    float TimeBeforeScreenshotCam;                                                    // 0x06A0 (size: 0x4)
    FTransform StartingTrans;                                                         // 0x06B0 (size: 0x30)
    FTransform TargetTrans;                                                           // 0x06E0 (size: 0x30)
    float PickupTimerLerp;                                                            // 0x0710 (size: 0x4)
    float PlayerVoicePitch;                                                           // 0x0714 (size: 0x4)
    class ABP_ParentVehicle_C* NearestVehicle;                                        // 0x0718 (size: 0x8)
    FS_DoubleVec PreviousPlacementLocRot;                                             // 0x0720 (size: 0x18)
    FTimerHandle PickupLerpTimerHandle;                                               // 0x0738 (size: 0x8)
    FTimerHandle MenuFocusTimer;                                                      // 0x0740 (size: 0x8)
    class ABP_Dummy_HydroGuy_C* Dummy;                                                // 0x0748 (size: 0x8)
    bool IsCreativeMode?;                                                             // 0x0750 (size: 0x1)
    bool IsCloudSave?;                                                                // 0x0751 (size: 0x1)
    FString PlayerName;                                                               // 0x0758 (size: 0x10)
    bool RotationModify;                                                              // 0x0768 (size: 0x1)
    bool HardHatMode?;                                                                // 0x0769 (size: 0x1)
    class UUI_Menu_Loading_C* LoadingToolTip;                                         // 0x0770 (size: 0x8)
    bool CanPickUp?;                                                                  // 0x0778 (size: 0x1)
    FHitResult CrosshairTraceHit;                                                     // 0x077C (size: 0x8C)
    bool SaveEnabled;                                                                 // 0x0808 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void CreateHUD();
    bool ObjectTraceFromCharacter(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FHitResult& OutHit);
    void RemoveLoadingTooltip();
    void GetRemotePlayerStartTransform(const FTransform& OutputPin);
    void FindFixedLocation(class ABP_ParentBuild_C* Item, FVector TraceLocation, bool Debug, FVector& Location, FRotator& Rotation);
    FVoxelIntBox GetBoxBoundsInVoxel(class AVoxelWorld* VoxelWorld, FVector Location, float Bounds);
    void Scan for Items in Voxel Dirt(FVector Location, float Rad);
    void HardHatCheck();
    void UnhighlightCleanup();
    FTransform FindSpawnTransform();
    void DeleteSaveFile(FString SaveSlot);
    FString FormatCloudPathToLocalPath(FString SourceString);
    void FormatSaveSlotCloudPath(FString SaveSlot, FString FilePath, FString& CloudPath);
    void GetFileDataFromCloud(FString CloudFilePath, FString LocalFilePath, bool& Conflict?, TArray<uint8>& Data);
    bool IsMainController?();
    void PropagateCloudSaves();
    void GetSaveSlotFiles(FString SaveSlot, TArray<FString>& Files);
    FString GetSaveSlotDirectory(FString SaveSlot);
    FString GetSaveDirectory();
    void LoadCurrentFilesFromCloud(bool Override?, bool& Conflict?, FText& CloudTime, FText& LocalTime);
    void WriteCurrentFilesToCloud();
    void MenuFocusTick();
    void ToggleMenuFocusTimer(bool On?);
    void ScanForItemsOnTop(FVector Location, float ExtentX, float ExtentY);
    void SetHUD_Crosshair(TEnumAsByte<E_Crosshairs::Type> Crosshair);
    void BoxTraceForRelics(FVector Location);
    void SetStartPosition();
    void MoveVehicleToNearestUnstickPoint();
    void Hrrm();
    void InitController();
    void PlayerIsThief(class ABP_WorldStore_C* Store);
    void Spawn Store Item(class ABP_ParentItem_C* Item);
    void ChangeBuildRotation(int32 XYZ?);
    void TryPickupItem();
    bool LineTraceFromCharacter(float Range, FHitResult& OutHit);
    void StartFreeplacing();
    void DeniedDrop();
    void PickUpItem(class ABP_ParentItem_C* Item);
    void RecallVehicle();
    void RemoveDirtVehicle(FVector Location1, FVector Location2);
    void CameraShake(TEnumAsByte<E_CameraShakes::Type> Type);
    void RemoveDirtLine(FVector Position, float Radius);
    void ExitVehicle(class AActor* Vehicle);
    void EnterNewVehicle(class AActor* Vehicle);
    void UnhighlightObject();
    void HighlightObject(class AActor* Actor);
    void TryHighlightObject(const FHitResult& Hit, bool& Result);
    void SpawnInitialItems();
    void MovePlayerToNearestUnstickPoint();
    void PostOpenUI(class UUserWidget* OpenUI);
    void CloseAllUI();
    void DropItem(bool& TrueDrop);
    void PositionItemTimer();
    void CrosshairTrace();
    void MoveTimeline__FinishedFunc();
    void MoveTimeline__UpdateFunc();
    void InpActEvt_Rotate_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_Rotate2_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_Pickup_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Pickup_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_VehicleKey_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Rotate3_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Wiki_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_RMB_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_RMB_K2Node_InputActionEvent_7(FKey Key);
    void OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC();
    void InpActEvt_LMB_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_LMB_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_EscMenu_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_RotationMod_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_RotationMod_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_BuildPlaceCloser_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_BuildPlaceFurther_K2Node_InputActionEvent_0(FKey Key);
    void MoveDirt(bool PickUp?, float Radius);
    void FreePlayer();
    void Autosave();
    void LevelTerrain(FVoxelIntBox Remove, FVoxelIntBox Add);
    void RemoveDirtByLocation(FVector Location, float Radius);
    void VehicleRemoveDirt(FVector Location1, FVector Location2);
    void HudAlertDropped();
    void ToggleScreenshotCam();
    void ChangeTime(float Amount, bool GrowCrops?);
    void NoLongerPlacingItem();
    void TogglePauseTime();
    void PlaceDownItem();
    void LerpToCharacter(class ABP_ParentItem_C* Item, class USceneComponent* Socket Component);
    void PickupLerpTimer();
    void PositioningItem(class ABP_ParentItem_C* Item);
    void EMS Save();
    void StartAutosaverTimer(float Time);
    void StartGameLerp();
    void ActorPreSave();
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void SaveToCloud();
    void SensitivityChanged(float NewValue);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ActorSaved();
    void ReceiveDestroyed();
    void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_0(float AxisValue);
    void ActorLoaded();
    void AutosaveChanged(float NewValue);
    void DetectVehicle();
    void LerpItemToLocation(class ABP_ParentItem_C* Item, FTransform Target Transform, class USceneComponent* AttachTo);
    void ExecuteUbergraph_BP_GameController(int32 EntryPoint);
}; // Size: 0x809

#endif
