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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_GameController.BP_GameController_C.LoadCreativeMode
	 */
	struct ABP_GameController_C_LoadCreativeMode_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveRhinosMod
	 */
	struct ABP_GameController_C_RemoveRhinosMod_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.DecrementStock
	 */
	struct ABP_GameController_C_DecrementStock_Params
	{
	public:
		TArray<class UClass*>                                      StockClasses;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ChangeStockPrices
	 */
	struct ABP_GameController_C_ChangeStockPrices_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.GrabStockPrice
	 */
	struct ABP_GameController_C_GrabStockPrice_Params
	{
	public:
		E_Stocks_E_Stocks                                          Stock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Higher_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    New_Price_Actual;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                NewBoardPrice;                                           // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.DeniedDrop
	 */
	struct ABP_GameController_C_DeniedDrop_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.SetGamma
	 */
	struct ABP_GameController_C_SetGamma_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PickUpItem
	 */
	struct ABP_GameController_C_PickUpItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.DigCheckForRelicPlants
	 */
	struct ABP_GameController_C_DigCheckForRelicPlants_Params
	{
	public:
		class AActor*                                              ActorHit;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.GetSaveSlot
	 */
	struct ABP_GameController_C_GetSaveSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsCloud_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ParkingBreak
	 */
	struct ABP_GameController_C_ParkingBreak_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.SpawnMusic
	 */
	struct ABP_GameController_C_SpawnMusic_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.SetMotionBlur
	 */
	struct ABP_GameController_C_SetMotionBlur_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SaveUserData
	 */
	struct ABP_GameController_C_SaveUserData_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.LoadUserData
	 */
	struct ABP_GameController_C_LoadUserData_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RecallVehicle
	 */
	struct ABP_GameController_C_RecallVehicle_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveDirtVehicle
	 */
	struct ABP_GameController_C_RemoveDirtVehicle_Params
	{
	public:
		struct FVector                                             Location1;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location2;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.CameraShake
	 */
	struct ABP_GameController_C_CameraShake_Params
	{
	public:
		E_CameraShakes_E_CameraShakes                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.1stStageLoadGame
	 */
	struct ABP_GameController_C__1stStageLoadGame_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveDirtLine
	 */
	struct ABP_GameController_C_RemoveDirtLine_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ExitVehicle
	 */
	struct ABP_GameController_C_ExitVehicle_Params
	{
	public:
		class AActor*                                              Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.EnterNewVehicle
	 */
	struct ABP_GameController_C_EnterNewVehicle_Params
	{
	public:
		class AActor*                                              Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.UnhighlightObject
	 */
	struct ABP_GameController_C_UnhighlightObject_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.HighlightObject
	 */
	struct ABP_GameController_C_HighlightObject_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SpawnInitialItems
	 */
	struct ABP_GameController_C_SpawnInitialItems_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MovePlayerToNearestUnstickPoint
	 */
	struct ABP_GameController_C_MovePlayerToNearestUnstickPoint_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.2ndStageLoadGame
	 */
	struct ABP_GameController_C__2ndStageLoadGame_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.SaveGame
	 */
	struct ABP_GameController_C_SaveGame_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.PostOpenUI
	 */
	struct ABP_GameController_C_PostOpenUI_Params
	{
	public:
		class UUserWidget*                                         OpenUI;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.CloseAllUI
	 */
	struct ABP_GameController_C_CloseAllUI_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.DropItem
	 */
	struct ABP_GameController_C_DropItem_Params
	{
	public:
		bool                                                       TrueDrop;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.MouseClickPan
	 */
	struct ABP_GameController_C_MouseClickPan_Params
	{
	public:
		class ABP_Pan_C*                                           Pan;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.MouseClickBucket
	 */
	struct ABP_GameController_C_MouseClickBucket_Params
	{
	public:
		class ABP_Bucket_C*                                        Bucket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PositionItemTimer
	 */
	struct ABP_GameController_C_PositionItemTimer_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.CrosshairTrace
	 */
	struct ABP_GameController_C_CrosshairTrace_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveTimeline__FinishedFunc
	 */
	struct ABP_GameController_C_MoveTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveTimeline__UpdateFunc
	 */
	struct ABP_GameController_C_MoveTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.Timeline_0__FinishedFunc
	 */
	struct ABP_GameController_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.Timeline_0__UpdateFunc
	 */
	struct ABP_GameController_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_6
	 */
	struct ABP_GameController_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_5
	 */
	struct ABP_GameController_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Rotate_K2Node_InputActionEvent_18
	 */
	struct ABP_GameController_C_InpActEvt_Rotate_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Rotate2_K2Node_InputActionEvent_17
	 */
	struct ABP_GameController_C_InpActEvt_Rotate2_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_16
	 */
	struct ABP_GameController_C_InpActEvt_Pickup_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_15
	 */
	struct ABP_GameController_C_InpActEvt_Pickup_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_VehicleKey_K2Node_InputActionEvent_14
	 */
	struct ABP_GameController_C_InpActEvt_VehicleKey_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_F1_K2Node_InputKeyEvent_4
	 */
	struct ABP_GameController_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Rotate3_K2Node_InputActionEvent_13
	 */
	struct ABP_GameController_C_InpActEvt_Rotate3_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Wiki_K2Node_InputActionEvent_12
	 */
	struct ABP_GameController_C_InpActEvt_Wiki_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_11
	 */
	struct ABP_GameController_C_InpActEvt_RMB_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_10
	 */
	struct ABP_GameController_C_InpActEvt_RMB_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_LeftMouseButton_K2Node_InputActionEvent_9
	 */
	struct ABP_GameController_C_InpActEvt_LeftMouseButton_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_LeftMouseButton_K2Node_InputActionEvent_8
	 */
	struct ABP_GameController_C_InpActEvt_LeftMouseButton_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
	 */
	struct ABP_GameController_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 */
	struct ABP_GameController_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
	 */
	struct ABP_GameController_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKInteract_K2Node_InputActionEvent_7
	 */
	struct ABP_GameController_C_InpActEvt_CKInteract_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKInteract_K2Node_InputActionEvent_6
	 */
	struct ABP_GameController_C_InpActEvt_CKInteract_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKWiki_K2Node_InputActionEvent_5
	 */
	struct ABP_GameController_C_InpActEvt_CKWiki_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKVehicle_K2Node_InputActionEvent_4
	 */
	struct ABP_GameController_C_InpActEvt_CKVehicle_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKRotX_K2Node_InputActionEvent_3
	 */
	struct ABP_GameController_C_InpActEvt_CKRotX_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKRotY_K2Node_InputActionEvent_2
	 */
	struct ABP_GameController_C_InpActEvt_CKRotY_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_CKRotZ_K2Node_InputActionEvent_1
	 */
	struct ABP_GameController_C_InpActEvt_CKRotZ_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PositioningItem
	 */
	struct ABP_GameController_C_PositioningItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PlaceDownItem
	 */
	struct ABP_GameController_C_PlaceDownItem_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.NoLongerPlacingItem
	 */
	struct ABP_GameController_C_NoLongerPlacingItem_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveDirt
	 */
	struct ABP_GameController_C_MoveDirt_Params
	{
	public:
		bool                                                       PickUp_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.BuyParcel
	 */
	struct ABP_GameController_C_BuyParcel_Params
	{
	public:
		class ABP_ForSaleSign_C*                                   Sign;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.Start New Game
	 */
	struct ABP_GameController_C_Start_New_Game_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.Continue Game
	 */
	struct ABP_GameController_C_Continue_Game_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.FreePlayer
	 */
	struct ABP_GameController_C_FreePlayer_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.autosave
	 */
	struct ABP_GameController_C_autosave_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.LevelTerrain
	 */
	struct ABP_GameController_C_LevelTerrain_Params
	{
	public:
		struct FIntBox                                             Remove;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FIntBox                                             Add;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.DropKeyCheck
	 */
	struct ABP_GameController_C_DropKeyCheck_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.FreePlacing
	 */
	struct ABP_GameController_C_FreePlacing_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.StopFreeplacing
	 */
	struct ABP_GameController_C_StopFreeplacing_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveDirtByLocation
	 */
	struct ABP_GameController_C_RemoveDirtByLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.VehicleRemoveDirt
	 */
	struct ABP_GameController_C_VehicleRemoveDirt_Params
	{
	public:
		struct FVector                                             Location1;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location2;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.HudAlertDropped
	 */
	struct ABP_GameController_C_HudAlertDropped_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReturnNoActivation
	 */
	struct ABP_GameController_C_ReturnNoActivation_Params
	{
	public:
		class AActor*                                              OriginalHitActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SetDiscordActivity
	 */
	struct ABP_GameController_C_SetDiscordActivity_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceiveTick
	 */
	struct ABP_GameController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SpawnStoreItem
	 */
	struct ABP_GameController_C_SpawnStoreItem_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Spawn_Transform_Location;                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceiveBeginPlay
	 */
	struct ABP_GameController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.PlayerTryTheft
	 */
	struct ABP_GameController_C_PlayerTryTheft_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ToggleScreenshotCam
	 */
	struct ABP_GameController_C_ToggleScreenshotCam_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ChangeTime
	 */
	struct ABP_GameController_C_ChangeTime_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PauseTime
	 */
	struct ABP_GameController_C_PauseTime_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ExecuteUbergraph_BP_GameController
	 */
	struct ABP_GameController_C_ExecuteUbergraph_BP_GameController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
