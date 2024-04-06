#ifndef UE4SS_SDK_BP_WorldInteractable_HPP
#define UE4SS_SDK_BP_WorldInteractable_HPP

class ABP_WorldInteractable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_WorldInteractable(int32 EntryPoint);
};

#endif
