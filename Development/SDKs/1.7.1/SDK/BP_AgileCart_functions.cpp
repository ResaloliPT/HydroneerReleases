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

void ABP_AgileCart_C::AfterRead()
{
	ABP_ParentCart_C::AfterRead();

	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
}

void ABP_AgileCart_C::BeforeDelete()
{
	ABP_ParentCart_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
