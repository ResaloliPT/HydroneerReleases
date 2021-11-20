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

void FS_SavedCoins::AfterRead()
{
	READ_PTR_FULL(Coins_2_CEF8A6694169245B46C0479B95A83165, UClass);
}

void FS_SavedCoins::BeforeDelete()
{
	DELE_PTR_FULL(Coins_2_CEF8A6694169245B46C0479B95A83165);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
