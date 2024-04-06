#ifndef UE4SS_SDK_PData_VoiceLines_HPP
#define UE4SS_SDK_PData_VoiceLines_HPP

class UPData_VoiceLines_C : public UPrimaryDataAsset
{
    TArray<FS_VoiceLine> VoiceLines;                                                  // 0x0030 (size: 0x10)
    TArray<FS_VoiceLine> VoiceLines_Positive;                                         // 0x0040 (size: 0x10)
    TArray<FS_VoiceLine> VoiceLines_Negative;                                         // 0x0050 (size: 0x10)

    void CheckConditions(TArray<FName>& A, TArray<FName>& B, bool& Result);
    void RollVoiceline(TArray<FS_VoiceLine>& VoiceLines, TArray<FName>& Conditions, class USoundBase*& VoiceLine);
    void GetVoiceLine(TEnumAsByte<E_VoiceContext::Type> Context, TArray<FName>& Conditions, class USoundBase*& VoiceLine);
}; // Size: 0x60

#endif
