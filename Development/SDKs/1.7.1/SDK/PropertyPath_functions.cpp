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

void FPropertyPathSegment::AfterRead()
{
	READ_PTR_FULL(Struct, UStruct);
	READ_PTR_FULL(Field, UField);
}

void FPropertyPathSegment::BeforeDelete()
{
	DELE_PTR_FULL(Struct);
	DELE_PTR_FULL(Field);
}

void FCachedPropertyPath::AfterRead()
{
	READ_PTR_FULL(CachedFunction, UFunction);
}

void FCachedPropertyPath::BeforeDelete()
{
	DELE_PTR_FULL(CachedFunction);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
