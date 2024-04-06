#ifndef UE4SS_SDK_AC_ResourceSpawn_HPP
#define UE4SS_SDK_AC_ResourceSpawn_HPP

class UAC_ResourceSpawn_C : public UActorComponent
{

    void AddImpulseToResource(class UStaticMeshComponent* Mesh, float Impulse);
    void FindVein(FVector AtLocation, TEnumAsByte<E_MetalType::Type>& Vein);
    void BalanceResources(int32 DQA In, float& DQA Out);
    void GetDirtDepth(FVector AtLocation, class ABP_HydroVoxelWorld_C* VoxelWorld, int32& QualityValue);
    void SpawnResourceByClass(TSubclassOf<class ABP_ParentResource_C> Class, FTransform SpawnTransform, float Weight, float Impulse);
    void CalcDQA(class USceneComponent* VoxelWorld, class USceneComponent* DiggingComp, bool Z?, int32& DirtQualityAverage);
    void SpawnFishByLuck(FVector Spawn Transform Location, int32 Luck, class ABP_CaughtFish_C*& Fish);
    void SpawnResource(int32 DirtLoads, int32 DirtQualityAverage, FTransform SpawnTrans, float Impulse, bool HandPan?, TEnumAsByte<E_MetalType::Type> Vein, int32 OriginalQuality, TEnumAsByte<E_LiquidType::Type> LiquidType, TEnumAsByte<E_Buffs::Type> SizeBoost, TEnumAsByte<E_Buffs::Type> VeinEfficiency);
}; // Size: 0xB0

#endif
