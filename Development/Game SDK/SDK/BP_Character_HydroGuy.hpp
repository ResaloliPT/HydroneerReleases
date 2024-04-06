#ifndef UE4SS_SDK_BP_Character_HydroGuy_HPP
#define UE4SS_SDK_BP_Character_HydroGuy_HPP

class ABP_Character_HydroGuy_C : public ABP_GameCharacter_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Mesh_Head;
    class USkeletalMeshComponent* Mesh_Hair;
    class USkeletalMeshComponent* Mesh_Beard;
    class USkeletalMeshComponent* Mesh_Hips;
    class USkeletalMeshComponent* Mesh_Arms;
    class USkeletalMeshComponent* Mesh_Legs;
    class USkeletalMeshComponent* Mesh_Shirt;
    class USceneComponent* Cart_IK_L;
    class USceneComponent* Cart_IK_R;
    class USkeletalMeshComponent* Mesh_Chest;
    class USkeletalMeshComponent* Mesh_Pants;
    FS_CharacterStyle Style;
    TArray<TEnumAsByte<E_MeshParts::Type>> ShirtHideMeshParts;
    TArray<TEnumAsByte<E_MeshParts::Type>> PantsHideMeshParts;
    float DemoDelay;
    class ABP_ParentItem_C* ProxyItem;
    float DeltaSeconds;
    float CartPitch;
    float CartRoll;
    FTimerHandle CartPivotTimer;
    class ABP_ParentCart_C* Cart;
    class ABP_ParentHat_C* Hat;
    FTransform UpperHeadTransform;
    FTransform LowerHeadTransform;
    FTransform ForeheadTransform;
    FTransform NoseTransform;
    FTransform ChinTransform;
    FTransform EarRightTransform;
    FTransform EarLeftTransform;
    FTransform EyebrowRightTransform;
    FTransform EyebrowLeftTransform;
    bool RandomizeFaceTransforms?;
    bool InVehicle?;
    bool UseVehicleHandIK?;
    class ABP_ParentVehicle_C* CurrentVehicle;
    class USceneComponent* VehicleHandleR;
    class USceneComponent* VehicleHandleL;
    class USceneComponent* VehicleSteerPivot;

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
    void ExecuteUbergraph_BP_Character_HydroGuy(int32 EntryPoint);
};

#endif
