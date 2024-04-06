#ifndef UE4SS_SDK_BP_MuseumDisplay_HPP
#define UE4SS_SDK_BP_MuseumDisplay_HPP

class ABP_MuseumDisplay_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Bucket;                                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0238 (size: 0x8)
    TArray<FS_BoneMuseum> Requirements;                                               // 0x0240 (size: 0x10)
    TArray<FS_BoneMuseum> Inserted;                                                   // 0x0250 (size: 0x10)
    TArray<class UStaticMeshComponent*> MeshPieces;                                   // 0x0260 (size: 0x10)
    FBP_MuseumDisplay_COnBoneDeposited OnBoneDeposited;                               // 0x0270 (size: 0x10)
    void OnBoneDeposited(int32 BonesDeposited, int32 BonesRequired);

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void AddToDisplayMesh(const FS_BoneMuseum& Bone);
    void IsBoneRequired?(TEnumAsByte<E_BoneType::Type> Type, bool& Required?, FName& ID, int32& ArrayIndex);
    void ActorPreSave();
    void ActorSaved();
    void RebuildDisplayMesh();
    void ActorLoaded();
    void BndEvt__BP_MuseumDisplay_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_MuseumDisplay(int32 EntryPoint);
    void OnBoneDeposited__DelegateSignature(int32 BonesDeposited, int32 BonesRequired);
}; // Size: 0x280

#endif
