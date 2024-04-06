#ifndef UE4SS_SDK_BP_ParentConveyor_HPP
#define UE4SS_SDK_BP_ParentConveyor_HPP

class ABP_ParentConveyor_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* S_Conveyor_Running;
    class UStaticMeshComponent* Belt;
    class UStaticMeshComponent* Arrow;
    class UMaterialInstanceDynamic* BeltMaterial;
    float BeltPressure;
    TArray<class ABP_GameCharacter_C*> CharactersToMove;
    float ShovelToConveyorAddHeight;

    void ToggleBeltBoxCollision(bool Enabled);
    void ToggleBeltBoxOverlaps(bool Enabled);
    void GetBeltBoxes(TArray<class UPrimitiveComponent*>& Boxes);
    void GetHookedParentPressure(class ABP_ParentItem_C* HookedParent);
    void ConveyActors(TArray<class AActor*>& ItemsToMove, TArray<class AActor*>& CharactersToMove, FVector DeltaLocation, float DeltaTime);
    void ExitBelt(class AActor* Actor, const TArray<class ABP_ParentItem_C*>& MovingItems, const TArray<class ABP_GameCharacter_C*>& MovingCharacters, const class UBoxComponent*& ConveyorBox, bool& BeltEmpty?);
    void EnterBelt(class AActor* Actor, TArray<class ABP_ParentItem_C*>& MovingItems, const TArray<class ABP_GameCharacter_C*>& MovingCharacters, const class UBoxComponent*& ConveyorBox, bool& Result);
    void FindBeltSpeed(class USceneComponent* Component, FVector& DeltaLocationToAdd);
    void CanMoveItem?(class AActor* Actor, TArray<class ABP_ParentItem_C*>& CurrentlyMovingItems, const TArray<class ABP_GameCharacter_C*>& MovingCharacters, bool& CanMove?, class ABP_ParentItem_C*& ItemRef);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void ChangeBeltSpeed();
    void UserConstructionScript();
    void OverrideStartPlacing();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void OverrideParentNoWater();
    void ShovelOnToConveyor(int32 Quality, float Size, TEnumAsByte<E_MetalType::Type> Vein);
    void ItemExitConveyor(class ABP_ParentItem_C* Item, FVector ForwardVec);
    void OverrideHookCheckRot();
    void LoadCompleted();
    void ExecuteUbergraph_BP_ParentConveyor(int32 EntryPoint);
};

#endif
