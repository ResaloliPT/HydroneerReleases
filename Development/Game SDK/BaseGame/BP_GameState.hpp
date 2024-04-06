#ifndef UE4SS_SDK_BP_GameState_HPP
#define UE4SS_SDK_BP_GameState_HPP

class ABP_GameState_C : public AGameState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TArray<FS_StockPrices> Stocks;                                                    // 0x02A0 (size: 0x10)
    TArray<FS_SaveGenericVehicle> SavedGenericVehicles;                               // 0x02B0 (size: 0x10)
    TArray<FS_SaveTruckMK2> SavedMK2Trucks;                                           // 0x02C0 (size: 0x10)
    TArray<FS_SaveCropper> SavedCroppers;                                             // 0x02D0 (size: 0x10)
    TArray<FS_SaveLavaThaw> SavedLavaThaws;                                           // 0x02E0 (size: 0x10)
    FTimerHandle TrackPlayerMapTimer;                                                 // 0x02F0 (size: 0x8)
    TArray<FVector> PlayMapLocations;                                                 // 0x02F8 (size: 0x10)
    TMap<class FString, class FTransform> SavedPlayerLocations;                       // 0x0308 (size: 0x50)
    TArray<class AActor*> RequestNPCs;                                                // 0x0358 (size: 0x10)
    FBP_GameState_COnTrackedAction OnTrackedAction;                                   // 0x0368 (size: 0x10)
    void OnTrackedAction(FName ActionKey, int32 Amount);
    TArray<FName> SavedTrackedActionKeys;                                             // 0x0378 (size: 0x10)
    bool CanAchieve;                                                                  // 0x0388 (size: 0x1)
    FBP_GameState_COn NPC Dialogue On NPC Dialogue;                                   // 0x0390 (size: 0x10)
    void On NPC Dialogue(FText NPC Name, class USoundWave* Sound);

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    class ABP_QuestManager_C* GetQuestManager();
    class ABP_NPC_Manager_C* GetNPCManager();
    void InitOreVeins();
    void GetPlayerLocations();
    void TrackPlayerMap();
    void InitTrackPlayerMap();
    void AddVehiclesToSaveObject();
    void LoadVehicles();
    void UpdateAllStockBoards();
    void InitStockPrices();
    void DecrementStockPrice(TEnumAsByte<E_Stocks::Type> Stock, int32 Amount, class ABP_Stocks_C* StockMarket);
    void ChangeStockPrices();
    void OnCompleted_EDDF2202463CC300CC61729DFD1A9526();
    void ActorSaved();
    void NewGame();
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ActorPreSave();
    void CheckAction(FName ActionKey, int32 Amount);
    void NewGameVolcalidus();
    void HandleShadowQualityChange(int32 NewValue);
    void ExecuteUbergraph_BP_GameState(int32 EntryPoint);
    void On NPC Dialogue__DelegateSignature(FText NPC Name, class USoundWave* Sound);
    void OnTrackedAction__DelegateSignature(FName ActionKey, int32 Amount);
}; // Size: 0x3A0

#endif
