#ifndef UE4SS_SDK_AC_WeatherManager_HPP
#define UE4SS_SDK_AC_WeatherManager_HPP

class UAC_WeatherManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    TArray<class UAC_PlayerWeather_C*> PlayerWeather;                                 // 0x00B8 (size: 0x10)
    TMap<TEnumAsByte<E_WeatherType::Type>, float> WeatherTypeWeights;                 // 0x00C8 (size: 0x50)
    TEnumAsByte<E_WeatherType::Type> CurrentWeather;                                  // 0x0118 (size: 0x1)
    FTimerHandle WeatherTimer;                                                        // 0x0120 (size: 0x8)

    void SetWeather();
    void RollWeather();
    void UnregisterPlayerWeather(class UAC_PlayerWeather_C* PW);
    void RegisterPlayerWeather(class UAC_PlayerWeather_C* PW);
    void ReceiveBeginPlay();
    void WeatherTimerEnd();
    void StartWeatherTimer();
    void ExecuteUbergraph_AC_WeatherManager(int32 EntryPoint);
}; // Size: 0x128

#endif
