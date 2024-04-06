#ifndef UE4SS_SDK_BP_WeatherVolume_HPP
#define UE4SS_SDK_BP_WeatherVolume_HPP

class ABP_WeatherVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    TEnumAsByte<E_WeatherType::Type> Weather;                                         // 0x0230 (size: 0x1)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_WeatherVolume(int32 EntryPoint);
}; // Size: 0x231

#endif
