// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void UBP_SaveUserData_C::AfterRead()
{
	USaveGame::AfterRead();

}

void UBP_SaveUserData_C::BeforeDelete()
{
	USaveGame::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
