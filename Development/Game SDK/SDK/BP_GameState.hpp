#ifndef UE4SS_SDK_BP_GameState_HPP
#define UE4SS_SDK_BP_GameState_HPP

class ABP_GameState_C : public AGameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<FS_StockPrices> Stocks;
    TArray<FS_SaveGenericVehicle> SavedGenericVehicles;
    TArray<FS_SaveTruckMK2> SavedMK2Trucks;
    TArray<FS_SaveCropper> SavedCroppers;
    FTimerHandle TrackPlayerMapTimer;
    TArray<FVector> PlayMapLocations;
    TMap<class FString, class FTransform> SavedPlayerLocations;
    TArray<class AActor*> RequestNPCs;
    FBP_GameState_COnTrackedAction OnTrackedAction;
    void OnTrackedAction(FName ActionKey, int32 Amount);
    TArray<FName> SavedTrackedActionKeys;
    bool CanAchieve;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
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
    void StartAutoSaver();
    void autosave();
    void ReceiveBeginPlay();
    void ActorPreSave();
    void CheckAction(FName ActionKey, int32 Amount);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_GameState(int32 EntryPoint);
    void OnTrackedAction__DelegateSignature(FName ActionKey, int32 Amount);
};

#endif
