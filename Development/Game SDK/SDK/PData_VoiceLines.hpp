#ifndef UE4SS_SDK_PData_VoiceLines_HPP
#define UE4SS_SDK_PData_VoiceLines_HPP

class UPData_VoiceLines_C : public UPrimaryDataAsset
{
    TArray<FS_VoiceLine> VoiceLines;
    TArray<FS_VoiceLine> VoiceLines_Positive;
    TArray<FS_VoiceLine> VoiceLines_Negative;

    void CheckConditions(TArray<FName>& A, TArray<FName>& B, bool& Result);
    void RollVoiceline(TArray<FS_VoiceLine>& VoiceLines, TArray<FName>& Conditions, class USoundBase*& VoiceLine);
    void GetVoiceLine(TEnumAsByte<E_VoiceContext::Type> Context, TArray<FName>& Conditions, class USoundBase*& VoiceLine);
};

#endif
