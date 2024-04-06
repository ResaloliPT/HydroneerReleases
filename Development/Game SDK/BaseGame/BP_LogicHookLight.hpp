#ifndef UE4SS_SDK_BP_LogicHookLight_HPP
#define UE4SS_SDK_BP_LogicHookLight_HPP

class ABP_LogicHookLight_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x04C0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x04C8 (size: 0x8)
    float Timeline_1_Alpha_57A53BA042C5E263D5C22CBF1D8B8EAA;                          // 0x04D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_57A53BA042C5E263D5C22CBF1D8B8EAA; // 0x04D4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04D8 (size: 0x8)
    float Timeline_0_NewTrack_0_D9E9CE0D445A7192AE7F4A820EFDA114;                     // 0x04E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D9E9CE0D445A7192AE7F4A820EFDA114; // 0x04E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x04E8 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x04F0 (size: 0x8)
    FString PreviousLogic;                                                            // 0x04F8 (size: 0x10)

    float GetLightValue();
    void UpdatePlantLight(class AActor* PlantActor, float LightValue);
    void LightPlants(const float& LightValue);
    void TraceForParents();
    void TurnOffLight();
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void RaiseBrightness(bool Up?);
    void ChangeColor(FVector A);
    void NewLogicInput(class ABP_ParentLogic_C* LogicItem);
    void OverridePickedup();
    void ActorLoaded();
    void BndEvt__BP_LogicHookLight_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicHookLight_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_LogicHookLight(int32 EntryPoint);
}; // Size: 0x508

#endif
