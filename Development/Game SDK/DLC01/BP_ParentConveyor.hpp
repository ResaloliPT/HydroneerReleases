#ifndef UE4SS_SDK_BP_ParentConveyor_HPP
#define UE4SS_SDK_BP_ParentConveyor_HPP

class ABP_ParentConveyor_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UAudioComponent* S_Conveyor_Running;                                        // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* Belt;                                                 // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* Arrow;                                                // 0x04D0 (size: 0x8)
    class UMaterialInstanceDynamic* BeltMaterial;                                     // 0x04D8 (size: 0x8)
    float BeltPressure;                                                               // 0x04E0 (size: 0x4)
    TArray<class ABP_GameCharacter_C*> CharactersToMove;                              // 0x04E8 (size: 0x10)
    float ShovelToConveyorAddHeight;                                                  // 0x04F8 (size: 0x4)
    float BeltSpeed;                                                                  // 0x04FC (size: 0x4)

    void ToggleBeltBoxCollision(bool Enabled);
    void ToggleBeltBoxOverlaps(bool Enabled);
    void GetBeltBoxes(TArray<class UPrimitiveComponent*>& Boxes);
    void GetHookedParentPressure(class ABP_ParentItem_C* HookedParent);
    void ConveyActors(TArray<class ABP_ParentItem_C*>& ItemsToMove, TArray<class AActor*>& CharactersToMove, class UBoxComponent* ConveyorBox, float DeltaTime);
    void ExitBelt(class AActor* Actor, const TArray<class ABP_ParentItem_C*>& MovingItems, const TArray<class ABP_GameCharacter_C*>& MovingCharacters, const class UBoxComponent*& ConveyorBox, bool& BeltEmpty?);
    void EnterBelt(class AActor* Actor, TArray<class ABP_ParentItem_C*>& MovingItems, const TArray<class ABP_GameCharacter_C*>& MovingCharacters, const class UBoxComponent*& ConveyorBox, bool& Result);
    void CanAddToConveyor?(class AActor* Actor, TArray<class ABP_ParentItem_C*>& CurrentlyMovingItems, const TArray<class ABP_GameCharacter_C*>& MovingCharacters, bool& CanMove?, class ABP_ParentItem_C*& ItemRef);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void ChangeBeltSpeed();
    void UserConstructionScript();
    void OverrideStartPlacing();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void OverrideParentNoWater();
    void ShovelOnToConveyor(int32 Quality, float Size, TEnumAsByte<E_MetalType::Type> Vein, TSubclassOf<class ABP_DirtResource_C> Class);
    void ItemExitConveyor(class ABP_ParentItem_C* Item, FVector ForwardVec);
    void OverrideHookCheckRot();
    void LoadCompleted();
    void StopPlacingItem();
    void OverrideParentPlacedDown();
    void OverrideParentPickedUp();
    void ExecuteUbergraph_BP_ParentConveyor(int32 EntryPoint);
}; // Size: 0x500

#endif
