#ifndef UE4SS_SDK_BP_DayNightCycle_HPP
#define UE4SS_SDK_BP_DayNightCycle_HPP

class ABP_DayNightCycle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class ADirectionalLight* Sun;                                                     // 0x0230 (size: 0x8)
    class UCurveFloat* SunLightCurve;                                                 // 0x0238 (size: 0x8)
    class ABP_Sky_Sphere_C* Sky;                                                      // 0x0240 (size: 0x8)
    float Minutes Per Day;                                                            // 0x0248 (size: 0x4)
    float One Day;                                                                    // 0x024C (size: 0x4)
    float One Hour;                                                                   // 0x0250 (size: 0x4)
    float Hour;                                                                       // 0x0254 (size: 0x4)
    float Sun Angle;                                                                  // 0x0258 (size: 0x4)
    class ASkyLight* SkyLight;                                                        // 0x0260 (size: 0x8)
    class AExponentialHeightFog* ExpoHeightFog;                                       // 0x0268 (size: 0x8)
    bool Day?;                                                                        // 0x0270 (size: 0x1)
    FTimerHandle MainTimer;                                                           // 0x0278 (size: 0x8)
    class UCurveLinearColor* FogColor;                                                // 0x0280 (size: 0x8)
    bool Paused?;                                                                     // 0x0288 (size: 0x1)
    FBP_DayNightCycle_COnChangeTime OnChangeTime;                                     // 0x0290 (size: 0x10)
    void OnChangeTime(float HourDelta, float ActualSecondsDelta);
    FTimerHandle SkipTimeTimer;                                                       // 0x02A0 (size: 0x8)
    class UCurveFloat* SkyLightCurve;                                                 // 0x02A8 (size: 0x8)
    class UCurveLinearColor* FogPlaneColor;                                           // 0x02B0 (size: 0x8)
    class UCurveLinearColor* FogPostProcessColor;                                     // 0x02B8 (size: 0x8)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ChangeTime(float Delta, bool GrowCrops?);
    void UnpauseTime();
    void PauseTime();
    void SetDayModePostLoad();
    void SetDayMode();
    void ActorSaved();
    void ReceiveBeginPlay();
    void ActorPreSave();
    void SpeedUpToSunrise(class ABP_ParentBed_C* Bed, class ABP_GameController_C* Controller);
    void SunRiseTimerCheck();
    void SetNewRate();
    void Update();
    void ActorLoaded();
    void ExecuteUbergraph_BP_DayNightCycle(int32 EntryPoint);
    void OnChangeTime__DelegateSignature(float HourDelta, float ActualSecondsDelta);
}; // Size: 0x2C0

#endif
