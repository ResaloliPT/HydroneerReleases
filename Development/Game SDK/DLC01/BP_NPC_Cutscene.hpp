#ifndef UE4SS_SDK_BP_NPC_Cutscene_HPP
#define UE4SS_SDK_BP_NPC_Cutscene_HPP

class ABP_NPC_Cutscene_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class ABP_NPC_C* NPC;                                                             // 0x0240 (size: 0x8)
    class USoundBase* VoiceLine;                                                      // 0x0248 (size: 0x8)
    class APawn* P1Pawn;                                                              // 0x0250 (size: 0x8)
    bool Played;                                                                      // 0x0258 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorLoaded();
    void ActorPreSave();
    void ActorSaved();
    void InitCutscene();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_NPC_Cutscene(int32 EntryPoint);
}; // Size: 0x259

#endif
