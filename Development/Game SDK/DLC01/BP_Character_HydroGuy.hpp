#ifndef UE4SS_SDK_BP_Character_HydroGuy_HPP
#define UE4SS_SDK_BP_Character_HydroGuy_HPP

class ABP_Character_HydroGuy_C : public ABP_GameCharacter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0588 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Head;                                          // 0x0590 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Hair;                                          // 0x0598 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Beard;                                         // 0x05A0 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Hips;                                          // 0x05A8 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Arms;                                          // 0x05B0 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Legs;                                          // 0x05B8 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Shirt;                                         // 0x05C0 (size: 0x8)
    class USceneComponent* Cart_IK_L;                                                 // 0x05C8 (size: 0x8)
    class USceneComponent* Cart_IK_R;                                                 // 0x05D0 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Chest;                                         // 0x05D8 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Pants;                                         // 0x05E0 (size: 0x8)
    FS_CharacterStyle Style;                                                          // 0x05E8 (size: 0x4C)
    TArray<TEnumAsByte<E_MeshParts::Type>> ShirtHideMeshParts;                        // 0x0638 (size: 0x10)
    TArray<TEnumAsByte<E_MeshParts::Type>> PantsHideMeshParts;                        // 0x0648 (size: 0x10)
    float DemoDelay;                                                                  // 0x0658 (size: 0x4)
    class ABP_ParentItem_C* ProxyItem;                                                // 0x0660 (size: 0x8)
    float DeltaSeconds;                                                               // 0x0668 (size: 0x4)
    float CartPitch;                                                                  // 0x066C (size: 0x4)
    float CartRoll;                                                                   // 0x0670 (size: 0x4)
    FTimerHandle CartPivotTimer;                                                      // 0x0678 (size: 0x8)
    class ABP_ParentCart_C* Cart;                                                     // 0x0680 (size: 0x8)
    class ABP_ParentHat_C* Hat;                                                       // 0x0688 (size: 0x8)
    FTransform UpperHeadTransform;                                                    // 0x0690 (size: 0x30)
    FTransform LowerHeadTransform;                                                    // 0x06C0 (size: 0x30)
    FTransform ForeheadTransform;                                                     // 0x06F0 (size: 0x30)
    FTransform NoseTransform;                                                         // 0x0720 (size: 0x30)
    FTransform ChinTransform;                                                         // 0x0750 (size: 0x30)
    FTransform EarRightTransform;                                                     // 0x0780 (size: 0x30)
    FTransform EarLeftTransform;                                                      // 0x07B0 (size: 0x30)
    FTransform EyebrowRightTransform;                                                 // 0x07E0 (size: 0x30)
    FTransform EyebrowLeftTransform;                                                  // 0x0810 (size: 0x30)
    bool RandomizeFaceTransforms?;                                                    // 0x0840 (size: 0x1)
    bool InVehicle?;                                                                  // 0x0841 (size: 0x1)
    bool UseVehicleHandIK?;                                                           // 0x0842 (size: 0x1)
    class ABP_ParentVehicle_C* CurrentVehicle;                                        // 0x0848 (size: 0x8)
    class USceneComponent* VehicleHandleR;                                            // 0x0850 (size: 0x8)
    class USceneComponent* VehicleHandleL;                                            // 0x0858 (size: 0x8)
    class USceneComponent* VehicleSteerPivot;                                         // 0x0860 (size: 0x8)
    class UDataTable* CustomizationDT;                                                // 0x0868 (size: 0x8)
    class APawn* HitInstigator;                                                       // 0x0870 (size: 0x8)

    void HandleItemDestroyed(class AActor* DestroyedActor);
    void GetDefaultFacialHair(TSoftObjectPtr<USkeletalMesh>& Mesh);
    void Owchie();
    void Hrrm(float PlayerVoicePitch);
    void ToggleOwnerNoSee(bool bNewOwnerNoSee);
    void CalculateVehicleHandIK();
    void SetCharacterVehicle(class ABP_ParentVehicle_C* Vehicle, bool UseHandIK?, class USceneComponent* HandleR, class USceneComponent* HandleL, class USceneComponent* SteerPivot, bool HasVehiclePose?, TEnumAsByte<E_Vehicle::Type> VehicleType);
    void RandomizeFaceTransforms();
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    float GetSpineRotationIncrement();
    void CalculateCartPivotRotation();
    void ToggleFree(bool isFree?);
    void IsProxyTwoHanded?(FName Socket, bool& Result);
    void PlayMontage(class UAnimMontage* AnimMontage);
    void GetClothingColor(FName ColorParameter, FName& Color);
    void RandomHairColor();
    void RandomSkinColor();
    void RandomBeardMesh();
    void RandomHairMesh();
    void RandomPantsColor();
    void RandomShirtColor();
    void RandomPantsMesh();
    void RandomShirtMesh();
    void UpdateProxyItem(class ABP_ParentItem_C* ProxyItem, bool Attach?);
    void UpdateHairColor(FName Hair Color ID);
    void UpdateBeardMesh(int32 BeardIndex);
    void GetCurrentHead(class UPData_Head_C*& Output);
    void CreateDynamicDefaultMaterial(class USkeletalMeshComponent* Mesh, int32 MaterialSlot, class UMaterialInstanceDynamic*& DynamicMaterial);
    void GetMeshDefaultMaterial(class USkinnedMeshComponent* MeshComponent, int32 MaterialSlot, class UMaterialInterface*& Material);
    void RandomStyle();
    void UpdateHairMesh(int32 HairIndex);
    void RefreshClothingColor();
    void UpdateClothingPantsColor(FName Clothing Color);
    void ToggleHideMeshParts(TArray<TEnumAsByte<E_MeshParts::Type>>& MeshParts, bool Hide?);
    void UpdateClothingShirtColor(FName Clothing Color);
    void UpdateClothingColor(FName ColorParameter, FName Color);
    void UpdateClothingPantsMesh(int32 PantsIndex);
    void UpdateClothingShirtMesh(int32 Shirt Index);
    void ClearClothingMeshes();
    void UpdateClothingMesh(class USkeletalMeshComponent* MeshClothing, TEnumAsByte<E_ClothingSlots::Type> Slot, int32 ClothingIndex, TArray<TEnumAsByte<E_MeshParts::Type>>& UnhideMeshParts, TArray<TEnumAsByte<E_MeshParts::Type>>& HideMeshParts);
    void UpdateSkinColor(FName SkinColorID);
    void UpdateHeadMesh(int32 HeadIndex);
    void OnConstruct();
    void UpdateBodyMesh(FName BodyID);
    void InitClothing();
    void InitBody();
    void InitStyle(FS_CharacterStyle Style);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void HitFlinch(class APawn* Instigator);
    void ExecuteUbergraph_BP_Character_HydroGuy(int32 EntryPoint);
}; // Size: 0x878

#endif
