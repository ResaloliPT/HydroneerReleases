﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
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
	 * BlueprintGeneratedClass BP_GameState.BP_GameState_C
	 * Size -> 0x00C8 (FullSize[0x0358] - InheritedSize[0x0290])
	 */
	class ABP_GameState_C : public AGameState
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class USceneComponent*                                   DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		TArray<struct FS_StockPrices>                            Stocks;                                                  // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		TArray<struct FS_SaveGenericVehicle>                     SavedGenericVehicles;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		TArray<struct FS_SaveTruckMK2>                           SavedMK2Trucks;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		TArray<struct FS_SaveCropper>                            SavedCroppers;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		struct FTimerHandle                                      TrackPlayerMapTimer;                                     // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		TArray<struct FVector>                                   PlayMapLocations;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TMap<class FString, struct FTransform>                   SavedPlayerLocations;                                    // 0x02F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		TArray<class AActor*>                                    RequestNPCs;                                             // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


	public:

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void GetPlayerLocations();

		void TrackPlayerMap();

		void InitTrackPlayerMap();

		void AddVehiclesToSaveObject();

		void LoadVehicles();

		void UpdateAllStockBoards();

		void InitStockPrices();

		void DecrementStockPrice(
E_Stocks Stock
, 
int32_t Amount
, 
class ABP_Stocks_C* StockMarket
);

		void ChangeStockPrices();

		void OnCompleted_EDDF2202463CC300CC61729DFD1A9526();

		void ActorSaved();

		void NewGame();

		void ActorLoaded();

		void StartAutoSaver();

		void autosave();

		void ReceiveBeginPlay();

		void ActorPreSave();

		void ExecuteUbergraph_BP_GameState(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
