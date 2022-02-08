#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GameController.BP_GameController_C
	 * Size -> 0x01F1 (FullSize[0x0869] - InheritedSize[0x0678])
	 */
	class ABP_GameController_C : public APlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0678(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_NewTrack_0_9E6B866B48474E63C779388F179CEB56;  // 0x0680(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_9E6B866B48474E63C779388F179CEB56;  // 0x0684(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BLUP[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveTimeline_NewTrack_0_637096C0404CFE678CE754B416A1F939; // 0x0690(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  MoveTimeline__Direction_637096C0404CFE678CE754B416A1F939; // 0x0694(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JQ5K[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MoveTimeline;                                            // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_HUD_C*                                           HUD;                                                     // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Crosshairs_E_Crosshairs                                  CurrentCrosshair;                                        // 0x06A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GCNR[0x7];                                   // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVoxelWorld*                                         VoxelWorld;                                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_GameCharacter_C*                                 Game_Character;                                          // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InStore_;                                                // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJFC[0x7];                                   // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentItem_C*                                    PlacingItem;                                             // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingZRotation;                                       // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingLength;                                          // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastThingLookingAt;                                      // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingXRotation;                                       // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OSSY[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         OpenUI;                                                  // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanDig_;                                                 // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FRK5[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TargetTransform;                                         // 0x0700(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TargetTransform2;                                        // 0x0730(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        AutoSaverHandle;                                         // 0x0760(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_DayNightCycle_C*                                 DayNight;                                                // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DevCam_C*                                        DevCam;                                                  // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Freeplacing_;                                            // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OIGG[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentVehicle;                                          // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MovementMode_E_MovementMode                              CurrentMovementMode;                                     // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2AOI[0x7];                                   // 0x0789(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     EngineSound;                                             // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Building_YRotation;                                      // 0x0798(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_87LP[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     SOUNDTRACK;                                              // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MotionBlur_;                                             // 0x07A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G4JO[0x3];                                   // 0x07A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SaveSlot;                                                // 0x07AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingLengthOffset;                                    // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VMNR[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartingUTC;                                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       MouseInverted_;                                          // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OK8G[0x3];                                   // 0x07C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VehicleFOVValue;                                         // 0x07C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MouseSensX;                                              // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MouseSenseY;                                             // 0x07CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerFOVValue;                                          // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Gamma;                                                   // 0x07D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MusicVolume;                                             // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SoundEffectVolume;                                       // 0x07DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutosaveToggle;                                          // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SaveDirtChunksToggle;                                    // 0x07E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ToggleHeadbob;                                           // 0x07E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LOCR[0x5];                                   // 0x07E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     HighlightedObjects;                                      // 0x07E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       PipeWarnings;                                            // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L21W[0x7];                                   // 0x07F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ScreenshotCam_C*                                 ScreenshotCam;                                           // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ScreenshotCam_C*                                 ScreenshotCamUI;                                         // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeScreenshotCam;                                 // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveRawResources;                                        // 0x0814(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S6SM[0x3];                                   // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_Stocks_E_Stocks, int32_t>                           StockPrices;                                             // 0x0818(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       CreativeMode_;                                           // 0x0868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoadCreativeMode();
		void RemoveRhinosMod();
		void DecrementStock(TArray<class UClass*>* StockClasses);
		void ChangeStockPrices();
		void GrabStockPrice(E_Stocks_E_Stocks Stock, bool* Higher_, int32_t* New_Price_Actual, class FText* NewBoardPrice);
		void DeniedDrop();
		void SetGamma(float NewValue);
		void PickUpItem(class ABP_ParentItem_C* Item);
		void DigCheckForRelicPlants(class AActor* ActorHit);
		void GetSaveSlot(int32_t Slot, class FString* SlotName, bool* IsCloud_);
		void ParkingBreak();
		void SpawnMusic();
		void SetMotionBlur(bool Condition);
		void SaveUserData();
		void LoadUserData();
		void RecallVehicle();
		void RemoveDirtVehicle(const struct FVector& Location1, const struct FVector& Location2);
		void CameraShake(E_CameraShakes_E_CameraShakes Type);
		void _1stStageLoadGame();
		void RemoveDirtLine(const struct FVector& Position, float Radius);
		void ExitVehicle(class AActor* Vehicle);
		void EnterNewVehicle(class AActor* Vehicle);
		void UnhighlightObject();
		void HighlightObject(class AActor* Actor);
		void SpawnInitialItems();
		void MovePlayerToNearestUnstickPoint();
		void _2ndStageLoadGame();
		void SaveGame();
		void PostOpenUI(class UUserWidget* OpenUI);
		void CloseAllUI();
		void DropItem(bool* TrueDrop);
		void MouseClickPan(class ABP_Pan_C* Pan);
		void MouseClickBucket(class ABP_Bucket_C* Bucket);
		void PositionItemTimer();
		void CrosshairTrace();
		void MoveTimeline__FinishedFunc();
		void MoveTimeline__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Rotate_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_Rotate2_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_Pickup_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_Pickup_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_VehicleKey_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Rotate3_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_Wiki_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_RMB_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_RMB_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_CKInteract_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_CKInteract_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_CKWiki_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_CKVehicle_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_CKRotX_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_CKRotY_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_CKRotZ_K2Node_InputActionEvent_1(const struct FKey& Key);
		void PositioningItem(class ABP_ParentItem_C* Item);
		void PlaceDownItem();
		void NoLongerPlacingItem();
		void MoveDirt(bool PickUp_, float Radius);
		void BuyParcel(class ABP_ForSaleSign_C* Sign);
		void Start_New_Game();
		void Continue_Game();
		void FreePlayer();
		void autosave();
		void LevelTerrain(const struct FIntBox& Remove, const struct FIntBox& Add);
		void DropKeyCheck();
		void FreePlacing();
		void StopFreeplacing();
		void RemoveDirtByLocation(const struct FVector& Location, float Radius);
		void VehicleRemoveDirt(const struct FVector& Location1, const struct FVector& Location2);
		void HudAlertDropped();
		void ReturnNoActivation(class AActor* OriginalHitActor);
		void SetDiscordActivity();
		void ReceiveTick(float DeltaSeconds);
		void SpawnStoreItem(class UClass* Item, const struct FVector& Spawn_Transform_Location);
		void ReceiveBeginPlay();
		void PlayerTryTheft();
		void ToggleScreenshotCam();
		void ChangeTime(float Amount);
		void PauseTime();
		void ExecuteUbergraph_BP_GameController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
