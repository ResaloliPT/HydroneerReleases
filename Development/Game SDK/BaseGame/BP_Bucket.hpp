#ifndef UE4SS_SDK_BP_Bucket_HPP
#define UE4SS_SDK_BP_Bucket_HPP

class ABP_Bucket_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0458 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0460 (size: 0x8)
    class UStaticMeshComponent* WaterMesh;                                            // 0x0468 (size: 0x8)
    class UStaticMeshComponent* DirtMesh;                                             // 0x0470 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0478 (size: 0x8)
    int32 DirtQualityAverage;                                                         // 0x0480 (size: 0x4)
    int32 DirtLoads;                                                                  // 0x0484 (size: 0x4)
    TEnumAsByte<E_LiquidType::Type> HasLiquidType?;                                   // 0x0488 (size: 0x1)
    TEnumAsByte<E_MetalType::Type> Vein;                                              // 0x0489 (size: 0x1)
    int32 IceLoads;                                                                   // 0x048C (size: 0x4)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void SetDQA(int32 DQA);
    void OverlappedIce(class ABP_IceResource_C* Ice);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void OverlappedDirt(class ABP_DirtResource_C* Dirt);
    void UserConstructionScript();
    void HasNoWater();
    void HasWater();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AddDirt(int32 DirtQuality, int32 DirtLoads, TEnumAsByte<E_MetalType::Type> Vein);
    void EmptyResource();
    void EmptyLiquid();
    void EmptyDirtNoAnim();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ChangeDirtMesh(bool bNewVisibility);
    void BndEvt__BP_Bucket_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Empty();
    void OverridePickedupPreCarry();
    void AddIce(int32 IceQuality, int32 IceLoads, TEnumAsByte<E_MetalType::Type> Vein);
    void ActorLoaded();
    void ExecuteUbergraph_BP_Bucket(int32 EntryPoint);
}; // Size: 0x490

#endif
