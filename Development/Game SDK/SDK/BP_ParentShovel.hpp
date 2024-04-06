#ifndef UE4SS_SDK_BP_ParentShovel_HPP
#define UE4SS_SDK_BP_ParentShovel_HPP

class ABP_ParentShovel_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Dirt;
    int32 DirtQuality;
    int32 MaxDepth;
    TEnumAsByte<E_MetalType::Type> Vein;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void DirtFX(bool ShowDirt?);
    void HitActorItem(class ABP_GameController_C* Controller, class AActor* HitActor, bool& Success?);
    void HitActorSpecialDig(class ABP_GameController_C* Controller, class AActor* HitActor);
    void CantMine(FVector HitLocation);
    void SetDirt(bool Making Hole?, int32 Quality, TEnumAsByte<E_MetalType::Type> Vein);
    void ExecuteUbergraph_BP_ParentShovel(int32 EntryPoint);
};

#endif
