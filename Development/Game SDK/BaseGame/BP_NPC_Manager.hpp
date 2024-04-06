#ifndef UE4SS_SDK_BP_NPC_Manager_HPP
#define UE4SS_SDK_BP_NPC_Manager_HPP

class ABP_NPC_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    float RollRequestTime;                                                            // 0x0230 (size: 0x4)
    FTimerHandle RequestTimer;                                                        // 0x0238 (size: 0x8)
    float RequestProgression;                                                         // 0x0240 (size: 0x4)
    class UCurveFloat* RequestProgressionCurve;                                       // 0x0248 (size: 0x8)
    TMap<TEnumAsByte<E_NPC_RequestType::Type>, float> Progression;                    // 0x0250 (size: 0x50)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void GetAdjustedProgression(TMap<TEnumAsByte<E_NPC_RequestType::Type>, int32>& Adjusted);
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
}; // Size: 0x2A0

#endif
