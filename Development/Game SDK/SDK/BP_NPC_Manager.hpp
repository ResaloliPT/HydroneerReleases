#ifndef UE4SS_SDK_BP_NPC_Manager_HPP
#define UE4SS_SDK_BP_NPC_Manager_HPP

class ABP_NPC_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    float RollRequestTime;
    FTimerHandle RequestTimer;
    float RequestProgression;
    class UCurveFloat* RequestProgressionCurve;
    TMap<TEnumAsByte<E_NPC_RequestType::Type>, float> Progression;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void GetAdjustedProgression(TMap<TEnumAsByte<E_NPC_RequestType::Type>, float> Raw, TMap<TEnumAsByte<E_NPC_RequestType::Type>, int32>& Adjusted);
    void NPCID_COUNT(TArray<FName>& IDs, FName TestID, int32& Count);
    void NPCID_CHECK();
    void ProgressRequests(const TEnumAsByte<E_NPC_RequestType::Type>& RequestType);
    void Roll NPC Requests();
    void OnCompleted_A1BCB8F14656F69C2D83EBB37A90A4DF();
    void ActorSaved();
    void ReceiveBeginPlay();
    void TryRollRequests();
    void InitRequestTimer();
    void ActorPreSave();
    void ActorLoaded();
    void ExecuteUbergraph_BP_NPC_Manager(int32 EntryPoint);
};

#endif
