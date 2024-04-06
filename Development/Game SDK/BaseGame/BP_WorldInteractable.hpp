#ifndef UE4SS_SDK_BP_WorldInteractable_HPP
#define UE4SS_SDK_BP_WorldInteractable_HPP

class ABP_WorldInteractable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void OverridePickupPressed(class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_WorldInteractable(int32 EntryPoint);
}; // Size: 0x230

#endif
