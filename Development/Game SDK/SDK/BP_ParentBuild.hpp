#ifndef UE4SS_SDK_BP_ParentBuild_HPP
#define UE4SS_SDK_BP_ParentBuild_HPP

class ABP_ParentBuild_C : public ABP_ParentItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* SM_Plane5x5;
    class UStaticMeshComponent* GridGuide;
    bool Placing?;
    bool CanPlace?;
    TEnumAsByte<E_PlacementType::Type> PlacementType;
    bool PlacedDown?;
    bool Locked?;
    class ABP_HydroVoxelWorld_C* VoxelWorld;
    bool CanRTYFlip?;
    TArray<class ABP_ParentHook_C*> Hooks;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void RevertMaterials();
    void UpdateGridPlaneLocation();
    void StopPlacingItem();
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void FindTracePivots(TArray<FVector>& Pivots);
    void IsSpecificHookable(bool& CanPlace?);
    void IsHookable(bool& CanPlace?);
    void IsClipping(bool& CanPlace?);
    void ItemIsPlacing(class ABP_GameController_C* Controller);
    void ItemIsBuilt(class ABP_GameController_C* Controller);
    void UnderGroundTest(bool& CanPlace?);
    void TouchVoxelTest(bool& TouchingSomething);
    void TouchAnythingTest(bool& TouchingSomething);
    void UserConstructionScript();
    void LMBUpWhileCarrying();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBUpWhileCarrying();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void LockItem(bool Lock?);
    void OverridePickedup();
    void OverrideStartPlacing();
    void PlacementCheck();
    void ReceiveBeginPlay();
    void AttachPart(class ABP_ParentHook_C* Hook);
    void RemovePart(class ABP_ParentHook_C* Hook);
    void CancelPlacement();
    void ExecuteUbergraph_BP_ParentBuild(int32 EntryPoint);
};

#endif
