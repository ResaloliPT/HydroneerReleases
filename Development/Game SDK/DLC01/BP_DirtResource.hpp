#ifndef UE4SS_SDK_BP_DirtResource_HPP
#define UE4SS_SDK_BP_DirtResource_HPP

class ABP_DirtResource_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    int32 DirtQuality;                                                                // 0x0468 (size: 0x4)
    float MaxDirtSize;                                                                // 0x046C (size: 0x4)
    TEnumAsByte<E_MetalType::Type> Vein;                                              // 0x0470 (size: 0x1)
    TArray<class UMaterialInterface*> MaterialTiers;                                  // 0x0478 (size: 0x10)

    void TryCombine(class ABP_DirtResource_C* HitDirt);
    void SetChunkMaterial();
    void UserConstructionScript();
    void Cooldown();
    void OverrideHit(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ToggleSaveDirtChunksChanged(bool NewValue);
    void OverrideLoaded();
    void OverrideItemStored(class UAC_Storage_C* Storage);
    void ExecuteUbergraph_BP_DirtResource(int32 EntryPoint);
}; // Size: 0x488

#endif
