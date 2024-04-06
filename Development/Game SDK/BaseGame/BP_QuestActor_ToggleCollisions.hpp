#ifndef UE4SS_SDK_BP_QuestActor_ToggleCollisions_HPP
#define UE4SS_SDK_BP_QuestActor_ToggleCollisions_HPP

class ABP_QuestActor_ToggleCollisions_C : public ABP_QuestActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    TArray<class AActor*> CollisionActors;                                            // 0x0258 (size: 0x10)

    void DisableCollision();
    void Trigger();
    void ExecuteUbergraph_BP_QuestActor_ToggleCollisions(int32 EntryPoint);
}; // Size: 0x268

#endif
