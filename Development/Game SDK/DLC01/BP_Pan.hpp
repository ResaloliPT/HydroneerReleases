#ifndef UE4SS_SDK_BP_Pan_HPP
#define UE4SS_SDK_BP_Pan_HPP

class ABP_Pan_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0458 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0460 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0470 (size: 0x8)
    class UStaticMeshComponent* WaterMesh;                                            // 0x0478 (size: 0x8)
    class UStaticMeshComponent* DirtMesh;                                             // 0x0480 (size: 0x8)
    TEnumAsByte<E_LiquidType::Type> HasLiquidType?;                                   // 0x0488 (size: 0x1)
    int32 DirtQualityAverage;                                                         // 0x048C (size: 0x4)
    int32 DirtLoads;                                                                  // 0x0490 (size: 0x4)
    TEnumAsByte<E_MetalType::Type> Vein;                                              // 0x0494 (size: 0x1)
    int32 IceLoads;                                                                   // 0x0498 (size: 0x4)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void ShowDirtMesh(int32 ResourceLoads);
    void OverlappedIce(class ABP_IceResource_C* Ice);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void GetRandXY(float& ReturnValue_X, float& ReturnValue_Y);
    void OverlappedDirtParticle(class ABP_DirtResource_C* Dirt);
    void GenerateResources();
    void UserConstructionScript();
    void ItemStored(class ABP_ParentItem_C* Item);
    void HasNoWater();
    void HasWater();
    void AddDirt(int32 DirtQualityAverage, int32 DirtLoads, TEnumAsByte<E_MetalType::Type> Vein);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EmptyLiquid();
    void DevTest();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void EmptyDirt();
    void Scrubbed();
    void BndEvt__BP_Pan_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TipOut();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_1_ItemAttached__DelegateSignature(class ABP_ParentItem_C* Item);
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void OverridePickedupPreCarry();
    void AddIce(int32 IceQualityAverage, int32 Ice Loads, TEnumAsByte<E_MetalType::Type> Vein);
    void ActorLoaded();
    void ExecuteUbergraph_BP_Pan(int32 EntryPoint);
}; // Size: 0x49C

#endif
