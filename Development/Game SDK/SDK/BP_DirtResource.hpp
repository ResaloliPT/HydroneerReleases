#ifndef UE4SS_SDK_BP_DirtResource_HPP
#define UE4SS_SDK_BP_DirtResource_HPP

class ABP_DirtResource_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 DirtQuality;
    float MaxDirtSize;
    TEnumAsByte<E_MetalType::Type> Vein;

    void SetChunkMaterial();
    void UserConstructionScript();
    void Cooldown();
    void OverrideHit(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ToggleSaveDirtChunksChanged(bool NewValue);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_DirtResource(int32 EntryPoint);
};

#endif
