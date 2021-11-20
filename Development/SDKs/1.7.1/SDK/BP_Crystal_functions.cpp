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

void ABP_Crystal_C::AfterRead()
{
	ABP_ParentResource_C::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void ABP_Crystal_C::BeforeDelete()
{
	ABP_ParentResource_C::BeforeDelete();

	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
