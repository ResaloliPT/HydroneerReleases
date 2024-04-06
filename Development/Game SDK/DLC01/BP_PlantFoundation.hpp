#ifndef UE4SS_SDK_BP_PlantFoundation_HPP
#define UE4SS_SDK_BP_PlantFoundation_HPP

class ABP_PlantFoundation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void ActorLoaded();
    void ActorPreSave();
    void ActorSaved();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void DestroyFoundation();
    void HasNoWater();
    void HasWater();
    void ExecuteUbergraph_BP_PlantFoundation(int32 EntryPoint);
}; // Size: 0x230

#endif
