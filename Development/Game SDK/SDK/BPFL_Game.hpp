#ifndef UE4SS_SDK_BPFL_Game_HPP
#define UE4SS_SDK_BPFL_Game_HPP

class UBPFL_Game_C : public UBlueprintFunctionLibrary
{

    void Get NPC By ID(FName ID, class UObject* __WorldContext, class ABP_NPC_C*& NPC);
    void BounceResource(class ABP_ParentItem_C* Item, FVector DirectionIfNotUp, class UObject* __WorldContext);
    void GetPlayerName(int32 SessionID, class UObject* __WorldContext, FString& PlayerName);
    void FindMetadata(FString Directory, class UObject* __WorldContext, FString& Version, FString& Title, FString& Description);
    void GetAllAttachedActors(class UStaticMeshComponent* StaticMesh, class UObject* __WorldContext, TArray<class AActor*>& AttachedActors);
    void GetSaveGameUserData(class UObject* __WorldContext, class USaveGame_UserData_C*& UserData);
    void GetBP_GameController(int32 PlayerIndex, class UObject* __WorldContext, class ABP_GameController_C*& Controller);
    void GetBP_GameState(class UObject* __WorldContext, class ABP_GameState_C*& GameState);
    void GetBP_GameInstance(class UObject* __WorldContext, class UBP_GameInstance_C*& GameInstance);
    void GetGM_Hydroneer(class UObject* __WorldContext, class AGM_Hydroneer_C*& GM_Hydroneer);
};

#endif
