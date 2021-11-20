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

void FS_SavedRelic::AfterRead()
{
	READ_PTR_FULL(Item_6_1DC460AF4D76AAC06443BE8994B397AF, UClass);
}

void FS_SavedRelic::BeforeDelete()
{
	DELE_PTR_FULL(Item_6_1DC460AF4D76AAC06443BE8994B397AF);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
