#ifndef UE4SS_SDK_BP_QuestActor_ToggleCollisions_HPP
#define UE4SS_SDK_BP_QuestActor_ToggleCollisions_HPP

class ABP_QuestActor_ToggleCollisions_C : public ABP_QuestActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class AActor*> CollisionActors;

    void DisableCollision();
    void Trigger();
    void ExecuteUbergraph_BP_QuestActor_ToggleCollisions(int32 EntryPoint);
};

#endif
