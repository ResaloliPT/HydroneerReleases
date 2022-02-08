/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryBitDataEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryBitDataEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007579A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Position_                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataReader::SetPosition(int32_t Position_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition");
		
		ULowEntryBitDataReader_SetPosition_Params params {};
		params.Position_ = Position_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757960
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryBitDataReader::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset");
		
		ULowEntryBitDataReader_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757900
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryBitDataReader::Remaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining");
		
		ULowEntryBitDataReader_Remaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757800
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FString> ULowEntryBitDataReader::GetStringUtf8Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array");
		
		ULowEntryBitDataReader_GetStringUtf8Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757700
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString ULowEntryBitDataReader::GetStringUtf8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8");
		
		ULowEntryBitDataReader_GetStringUtf8_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757600
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryBitDataReader::GetPositiveInteger3Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array");
		
		ULowEntryBitDataReader_GetPositiveInteger3Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007575A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryBitDataReader::GetPositiveInteger3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3");
		
		ULowEntryBitDataReader_GetPositiveInteger3_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007574A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryBitDataReader::GetPositiveInteger2Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array");
		
		ULowEntryBitDataReader_GetPositiveInteger2Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757440
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryBitDataReader::GetPositiveInteger2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2");
		
		ULowEntryBitDataReader_GetPositiveInteger2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757340
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryBitDataReader::GetPositiveInteger1Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array");
		
		ULowEntryBitDataReader_GetPositiveInteger1Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007572E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryBitDataReader::GetPositiveInteger1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1");
		
		ULowEntryBitDataReader_GetPositiveInteger1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757280
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryBitDataReader::GetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition");
		
		ULowEntryBitDataReader_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757180
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ULowEntryLong*> ULowEntryBitDataReader::GetLongBytesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray");
		
		ULowEntryBitDataReader_GetLongBytesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757120
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ULowEntryLong* ULowEntryBitDataReader::GetLongBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes");
		
		ULowEntryBitDataReader_GetLongBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757090
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULowEntryBitDataReader::GetIntegerMostSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits");
		
		ULowEntryBitDataReader_GetIntegerMostSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757000
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULowEntryBitDataReader::GetIntegerLeastSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits");
		
		ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756F30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> ULowEntryBitDataReader::GetIntegerArrayMostSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits");
		
		ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756E60
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> ULowEntryBitDataReader::GetIntegerArrayLeastSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits");
		
		ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756C80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryBitDataReader::GetIntegerArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray");
		
		ULowEntryBitDataReader_GetIntegerArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756D80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryBitDataReader::GetInteger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger");
		
		ULowEntryBitDataReader_GetInteger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756C80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<float> ULowEntryBitDataReader::GetFloatArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray");
		
		ULowEntryBitDataReader_GetFloatArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756C20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ULowEntryBitDataReader::GetFloat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat");
		
		ULowEntryBitDataReader_GetFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756B20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ULowEntryDouble*> ULowEntryBitDataReader::GetDoubleBytesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray");
		
		ULowEntryBitDataReader_GetDoubleBytesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756AC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ULowEntryDouble* ULowEntryBitDataReader::GetDoubleBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes");
		
		ULowEntryBitDataReader_GetDoubleBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756A60
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ULowEntryBitDataReader* ULowEntryBitDataReader::GetClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone");
		
		ULowEntryBitDataReader_GetClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007569D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char ULowEntryBitDataReader::GetByteMostSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits");
		
		ULowEntryBitDataReader_GetByteMostSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756940
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char ULowEntryBitDataReader::GetByteLeastSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits");
		
		ULowEntryBitDataReader_GetByteLeastSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756870
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryBitDataReader::GetByteArrayMostSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits");
		
		ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007567A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryBitDataReader::GetByteArrayLeastSignificantBits(int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits");
		
		ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Params params {};
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007566A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<unsigned char> ULowEntryBitDataReader::GetByteArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray");
		
		ULowEntryBitDataReader_GetByteArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756640
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	unsigned char ULowEntryBitDataReader::GetByte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte");
		
		ULowEntryBitDataReader_GetByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756510
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<bool> ULowEntryBitDataReader::GetBooleanArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray");
		
		ULowEntryBitDataReader_GetBooleanArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007564E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ULowEntryBitDataReader::GetBoolean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean");
		
		ULowEntryBitDataReader_GetBoolean_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756510
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<bool> ULowEntryBitDataReader::GetBitArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray");
		
		ULowEntryBitDataReader_GetBitArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007564E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ULowEntryBitDataReader::GetBit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit");
		
		ULowEntryBitDataReader_GetBit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007564A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryBitDataReader::Empty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty");
		
		ULowEntryBitDataReader_Empty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryBitDataReader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryBitDataReader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007563D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddStringUtf8Array(TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array");
		
		ULowEntryBitDataWriter_AddStringUtf8Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756330
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddStringUtf8(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8");
		
		ULowEntryBitDataWriter_AddStringUtf8_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756280
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddPositiveInteger3Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array");
		
		ULowEntryBitDataWriter_AddPositiveInteger3Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756200
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddPositiveInteger3(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3");
		
		ULowEntryBitDataWriter_AddPositiveInteger3_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756150
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddPositiveInteger2Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array");
		
		ULowEntryBitDataWriter_AddPositiveInteger2Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007560D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddPositiveInteger2(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2");
		
		ULowEntryBitDataWriter_AddPositiveInteger2_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756020
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddPositiveInteger1Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array");
		
		ULowEntryBitDataWriter_AddPositiveInteger1Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755FA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddPositiveInteger1(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1");
		
		ULowEntryBitDataWriter_AddPositiveInteger1_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755930
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddLongBytesArray(TArray<class ULowEntryLong*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray");
		
		ULowEntryBitDataWriter_AddLongBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007558B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddLongBytes(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes");
		
		ULowEntryBitDataWriter_AddLongBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755EE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits");
		
		ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755E20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits");
		
		ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755D30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddIntegerArrayMostSignificantBits(TArray<int32_t> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits");
		
		ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755C40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddIntegerArrayLeastSignificantBits(TArray<int32_t> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits");
		
		ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755B90
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddIntegerArray(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray");
		
		ULowEntryBitDataWriter_AddIntegerArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755B10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger");
		
		ULowEntryBitDataWriter_AddInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755A60
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddFloatArray(TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray");
		
		ULowEntryBitDataWriter_AddFloatArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007559E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddFloat(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat");
		
		ULowEntryBitDataWriter_AddFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755930
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray");
		
		ULowEntryBitDataWriter_AddDoubleBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007558B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddDoubleBytes(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes");
		
		ULowEntryBitDataWriter_AddDoubleBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007557F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddByteMostSignificantBits(unsigned char Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits");
		
		ULowEntryBitDataWriter_AddByteMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755730
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddByteLeastSignificantBits(unsigned char Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits");
		
		ULowEntryBitDataWriter_AddByteLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755640
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddByteArrayMostSignificantBits(TArray<unsigned char> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits");
		
		ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755550
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddByteArrayLeastSignificantBits(TArray<unsigned char> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits");
		
		ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007554A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddByteArray(TArray<unsigned char> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray");
		
		ULowEntryBitDataWriter_AddByteArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755420
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddByte(unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte");
		
		ULowEntryBitDataWriter_AddByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755370
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddBooleanArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray");
		
		ULowEntryBitDataWriter_AddBooleanArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007552E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddBoolean(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean");
		
		ULowEntryBitDataWriter_AddBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00755370
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddBitArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray");
		
		ULowEntryBitDataWriter_AddBitArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007552E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryBitDataWriter::AddBit(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit");
		
		ULowEntryBitDataWriter_AddBit_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryBitDataWriter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryBitDataWriter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryByteArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryByteArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryByteDataEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryByteDataEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613EA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Position_                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataReader::SetPosition(int32_t Position_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition");
		
		ULowEntryByteDataReader_SetPosition_Params params {};
		params.Position_ = Position_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757980
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryByteDataReader::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset");
		
		ULowEntryByteDataReader_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757930
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryByteDataReader::Remaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining");
		
		ULowEntryByteDataReader_Remaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757880
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FString> ULowEntryByteDataReader::GetStringUtf8Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array");
		
		ULowEntryByteDataReader_GetStringUtf8Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757780
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString ULowEntryByteDataReader::GetStringUtf8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8");
		
		ULowEntryByteDataReader_GetStringUtf8_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757680
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryByteDataReader::GetPositiveInteger3Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array");
		
		ULowEntryByteDataReader_GetPositiveInteger3Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007575D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryByteDataReader::GetPositiveInteger3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3");
		
		ULowEntryByteDataReader_GetPositiveInteger3_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757520
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryByteDataReader::GetPositiveInteger2Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array");
		
		ULowEntryByteDataReader_GetPositiveInteger2Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757470
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryByteDataReader::GetPositiveInteger2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2");
		
		ULowEntryByteDataReader_GetPositiveInteger2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007573C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryByteDataReader::GetPositiveInteger1Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array");
		
		ULowEntryByteDataReader_GetPositiveInteger1Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757310
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryByteDataReader::GetPositiveInteger1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1");
		
		ULowEntryByteDataReader_GetPositiveInteger1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007572B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryByteDataReader::GetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition");
		
		ULowEntryByteDataReader_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757200
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ULowEntryLong*> ULowEntryByteDataReader::GetLongBytesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray");
		
		ULowEntryByteDataReader_GetLongBytesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00757150
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ULowEntryLong* ULowEntryByteDataReader::GetLongBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes");
		
		ULowEntryByteDataReader_GetLongBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756DE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<int32_t> ULowEntryByteDataReader::GetIntegerArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray");
		
		ULowEntryByteDataReader_GetIntegerArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756DB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULowEntryByteDataReader::GetInteger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger");
		
		ULowEntryByteDataReader_GetInteger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756D00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<float> ULowEntryByteDataReader::GetFloatArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray");
		
		ULowEntryByteDataReader_GetFloatArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756C50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ULowEntryByteDataReader::GetFloat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat");
		
		ULowEntryByteDataReader_GetFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756BA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ULowEntryDouble*> ULowEntryByteDataReader::GetDoubleBytesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray");
		
		ULowEntryByteDataReader_GetDoubleBytesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756AF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ULowEntryDouble* ULowEntryByteDataReader::GetDoubleBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes");
		
		ULowEntryByteDataReader_GetDoubleBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756A90
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ULowEntryByteDataReader* ULowEntryByteDataReader::GetClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone");
		
		ULowEntryByteDataReader_GetClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756720
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<unsigned char> ULowEntryByteDataReader::GetByteArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray");
		
		ULowEntryByteDataReader_GetByteArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756670
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	unsigned char ULowEntryByteDataReader::GetByte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte");
		
		ULowEntryByteDataReader_GetByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007565C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<bool> ULowEntryByteDataReader::GetBooleanArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray");
		
		ULowEntryByteDataReader_GetBooleanArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00756590
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ULowEntryByteDataReader::GetBoolean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean");
		
		ULowEntryByteDataReader_GetBoolean_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007564C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryByteDataReader::Empty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty");
		
		ULowEntryByteDataReader_Empty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryByteDataReader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryByteDataReader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CBA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddStringUtf8Array(TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array");
		
		ULowEntryByteDataWriter_AddStringUtf8Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CB00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddStringUtf8(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8");
		
		ULowEntryByteDataWriter_AddStringUtf8_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CA50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddPositiveInteger3Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array");
		
		ULowEntryByteDataWriter_AddPositiveInteger3Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C9D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddPositiveInteger3(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3");
		
		ULowEntryByteDataWriter_AddPositiveInteger3_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C920
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddPositiveInteger2Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array");
		
		ULowEntryByteDataWriter_AddPositiveInteger2Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C8A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddPositiveInteger2(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2");
		
		ULowEntryByteDataWriter_AddPositiveInteger2_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C7F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddPositiveInteger1Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array");
		
		ULowEntryByteDataWriter_AddPositiveInteger1Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C770
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddPositiveInteger1(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1");
		
		ULowEntryByteDataWriter_AddPositiveInteger1_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C460
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddLongBytesArray(TArray<class ULowEntryLong*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray");
		
		ULowEntryByteDataWriter_AddLongBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C3E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddLongBytes(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes");
		
		ULowEntryByteDataWriter_AddLongBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C6C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddIntegerArray(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray");
		
		ULowEntryByteDataWriter_AddIntegerArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C640
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger");
		
		ULowEntryByteDataWriter_AddInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C590
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddFloatArray(TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray");
		
		ULowEntryByteDataWriter_AddFloatArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C510
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddFloat(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat");
		
		ULowEntryByteDataWriter_AddFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C460
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray");
		
		ULowEntryByteDataWriter_AddDoubleBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C3E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddDoubleBytes(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes");
		
		ULowEntryByteDataWriter_AddDoubleBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C330
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddByteArray(TArray<unsigned char> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray");
		
		ULowEntryByteDataWriter_AddByteArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C2B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddByte(unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte");
		
		ULowEntryByteDataWriter_AddByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C200
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddBooleanArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray");
		
		ULowEntryByteDataWriter_AddBooleanArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075C170
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryByteDataWriter::AddBoolean(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean");
		
		ULowEntryByteDataWriter_AddBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryByteDataWriter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryByteDataWriter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B920
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryDouble::SetBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes");
		
		ULowEntryDouble_SetBytes_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768490
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::LongBytes_LessThan(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan");
		
		ULowEntryDouble_LongBytes_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768400
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::LongBytes_GreaterThan(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan");
		
		ULowEntryDouble_LongBytes_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767160
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::Integer_LessThan(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan");
		
		ULowEntryDouble_Integer_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007670D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::Integer_GreaterThan(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan");
		
		ULowEntryDouble_Integer_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764740
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<unsigned char> ULowEntryDouble::GetBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes");
		
		ULowEntryDouble_GetBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763DD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryDouble::Float_Subtract(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract");
		
		ULowEntryDouble_Float_Subtract_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763D40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::Float_LessThan(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan");
		
		ULowEntryDouble_Float_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763CB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::Float_GreaterThan(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan");
		
		ULowEntryDouble_Float_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763C20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::Float_Equals(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals");
		
		ULowEntryDouble_Float_Equals_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763BA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryDouble::Float_Add(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add");
		
		ULowEntryDouble_Float_Add_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763730
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryDouble::DoubleBytes_Subtract(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract");
		
		ULowEntryDouble_DoubleBytes_Subtract_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007636A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::DoubleBytes_LessThan(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan");
		
		ULowEntryDouble_DoubleBytes_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763610
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::DoubleBytes_GreaterThan(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan");
		
		ULowEntryDouble_DoubleBytes_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763580
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryDouble::DoubleBytes_Equals(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals");
		
		ULowEntryDouble_DoubleBytes_Equals_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763500
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryDouble::DoubleBytes_Add(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add");
		
		ULowEntryDouble_DoubleBytes_Add_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762CE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryDouble* ULowEntryDouble::CreateClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone");
		
		ULowEntryDouble_CreateClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762660
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinFractionalDigits                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryDouble::CastToString(int32_t MinFractionalDigits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString");
		
		ULowEntryDouble_CastToString_Params params {};
		params.MinFractionalDigits = MinFractionalDigits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762630
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryLong* ULowEntryDouble::CastToLongBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes");
		
		ULowEntryDouble_CastToLongBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryDouble.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryDouble::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryDouble");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryExecutionQueue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryExecutionQueue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_XboxOnePlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform");
		
		ULowEntryExtendedStandardLibrary_XboxOnePlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_WithEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor");
		
		ULowEntryExtendedStandardLibrary_WithEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_WindowsRtPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform");
		
		ULowEntryExtendedStandardLibrary_WindowsRtPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_WindowsRtArmPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform");
		
		ULowEntryExtendedStandardLibrary_WindowsRtArmPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007633F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_WindowsPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform");
		
		ULowEntryExtendedStandardLibrary_WindowsPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076E370
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_WindowsNewlineCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter");
		
		ULowEntryExtendedStandardLibrary_WindowsNewlineCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007633F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_Windows64Platform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform");
		
		ULowEntryExtendedStandardLibrary_Windows64Platform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_Windows32Platform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform");
		
		ULowEntryExtendedStandardLibrary_Windows32Platform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076E1C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Ticks                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondsInterval                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_TickSeconds(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t Ticks, float SecondsInterval, int32_t* Tick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds");
		
		ULowEntryExtendedStandardLibrary_TickSeconds_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Ticks = Ticks;
		params.SecondsInterval = SecondsInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tick != nullptr)
			*Tick = params.Tick;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076E020
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Ticks                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FramesInterval                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_TickFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t Ticks, int32_t FramesInterval, int32_t* Tick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames");
		
		ULowEntryExtendedStandardLibrary_TickFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Ticks = Ticks;
		params.FramesInterval = FramesInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tick != nullptr)
			*Tick = params.Tick;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076DFB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_TextureUpdateResource(class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource");
		
		ULowEntryExtendedStandardLibrary_TextureUpdateResource_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076DE30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      TextureRenderTarget2D                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels");
		
		ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToPixels_Params params {};
		params.TextureRenderTarget2D = TextureRenderTarget2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (Pixels != nullptr)
			*Pixels = params.Pixels;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076DCD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      TextureRenderTarget2D                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes");
		
		ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToBytes_Params params {};
		params.TextureRenderTarget2D = TextureRenderTarget2D;
		params.ImageFormat = ImageFormat;
		params.CompressionQuality = CompressionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076DB50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_Texture2DToPixels(class UTexture2D* Texture2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels");
		
		ULowEntryExtendedStandardLibrary_Texture2DToPixels_Params params {};
		params.Texture2D = Texture2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (Pixels != nullptr)
			*Pixels = params.Pixels;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D9F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_Texture2DToBytes(class UTexture2D* Texture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes");
		
		ULowEntryExtendedStandardLibrary_Texture2DToBytes_Params params {};
		params.Texture2D = Texture2D;
		params.ImageFormat = ImageFormat;
		params.CompressionQuality = CompressionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_TestBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild");
		
		ULowEntryExtendedStandardLibrary_TestBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D970
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_TabCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter");
		
		ULowEntryExtendedStandardLibrary_TabCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_SwitchPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform");
		
		ULowEntryExtendedStandardLibrary_SwitchPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D890
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_StringToBytesUtf8(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8");
		
		ULowEntryExtendedStandardLibrary_StringToBytesUtf8_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D6F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LengthA                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              A                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              B                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SplitBytes(TArray<unsigned char> ByteArray, int32_t LengthA, TArray<unsigned char>* A, TArray<unsigned char>* B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes");
		
		ULowEntryExtendedStandardLibrary_SplitBytes_Params params {};
		params.ByteArray = ByteArray;
		params.LengthA = LengthA;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
		if (B != nullptr)
			*B = params.B;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D630
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SoundClass_SetVolume(class USoundClass* SoundClass, float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume");
		
		ULowEntryExtendedStandardLibrary_SoundClass_SetVolume_Params params {};
		params.SoundClass = SoundClass;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D570
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SoundClass_SetPitch(class USoundClass* SoundClass, float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch");
		
		ULowEntryExtendedStandardLibrary_SoundClass_SetPitch_Params params {};
		params.SoundClass = SoundClass;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D4E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULowEntryExtendedStandardLibrary::STATIC_SoundClass_GetVolume(class USoundClass* SoundClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume");
		
		ULowEntryExtendedStandardLibrary_SoundClass_GetVolume_Params params {};
		params.SoundClass = SoundClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D450
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULowEntryExtendedStandardLibrary::STATIC_SoundClass_GetPitch(class USoundClass* SoundClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch");
		
		ULowEntryExtendedStandardLibrary_SoundClass_GetPitch_Params params {};
		params.SoundClass = SoundClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C9B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FTimespan>                           TimespanArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortTimespanArrayDirectly(TArray<struct FTimespan>* TimespanArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortTimespanArrayDirectly_Params params {};
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimespanArray != nullptr)
			*TimespanArray = params.TimespanArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C870
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FTimespan>                           TimespanArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FTimespan> ULowEntryExtendedStandardLibrary::STATIC_SortTimespanArray(TArray<struct FTimespan> TimespanArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray");
		
		ULowEntryExtendedStandardLibrary_SortTimespanArray_Params params {};
		params.TimespanArray = TimespanArray;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D340
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              StringArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortStringArrayDirectly(TArray<class FString>* StringArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortStringArrayDirectly_Params params {};
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StringArray != nullptr)
			*StringArray = params.StringArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D1E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryExtendedStandardLibrary::STATIC_SortStringArray(TArray<class FString> StringArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray");
		
		ULowEntryExtendedStandardLibrary_SortStringArray_Params params {};
		params.StringArray = StringArray;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076D090
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UObject*>                             ObjectArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Comparator                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortObjectArrayDirectly(TArray<class UObject*>* ObjectArray, const class FScriptDelegate& Comparator, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortObjectArrayDirectly_Params params {};
		params.Comparator = Comparator;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectArray != nullptr)
			*ObjectArray = params.ObjectArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076CF00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UObject*>                             ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Comparator                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> ULowEntryExtendedStandardLibrary::STATIC_SortObjectArray(TArray<class UObject*> ObjectArray, const class FScriptDelegate& Comparator, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray");
		
		ULowEntryExtendedStandardLibrary_SortObjectArray_Params params {};
		params.ObjectArray = ObjectArray;
		params.Comparator = Comparator;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076CE10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    IntegerArray                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortIntegerArrayDirectly(TArray<int32_t>* IntegerArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortIntegerArrayDirectly_Params params {};
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntegerArray != nullptr)
			*IntegerArray = params.IntegerArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076CCD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    IntegerArray                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> ULowEntryExtendedStandardLibrary::STATIC_SortIntegerArray(TArray<int32_t> IntegerArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray");
		
		ULowEntryExtendedStandardLibrary_SortIntegerArray_Params params {};
		params.IntegerArray = IntegerArray;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076CBE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortFloatArrayDirectly(TArray<float>* FloatArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortFloatArrayDirectly_Params params {};
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloatArray != nullptr)
			*FloatArray = params.FloatArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076CAA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> ULowEntryExtendedStandardLibrary::STATIC_SortFloatArray(TArray<float> FloatArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray");
		
		ULowEntryExtendedStandardLibrary_SortFloatArray_Params params {};
		params.FloatArray = FloatArray;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C9B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FDateTime>                           DateTimeArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortDateTimeArrayDirectly(TArray<struct FDateTime>* DateTimeArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortDateTimeArrayDirectly_Params params {};
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DateTimeArray != nullptr)
			*DateTimeArray = params.DateTimeArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C870
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FDateTime>                           DateTimeArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FDateTime> ULowEntryExtendedStandardLibrary::STATIC_SortDateTimeArray(TArray<struct FDateTime> DateTimeArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray");
		
		ULowEntryExtendedStandardLibrary_SortDateTimeArray_Params params {};
		params.DateTimeArray = DateTimeArray;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C780
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SortByteArrayDirectly(TArray<unsigned char>* ByteArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly");
		
		ULowEntryExtendedStandardLibrary_SortByteArrayDirectly_Params params {};
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C640
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_SortByteArray(TArray<unsigned char> ByteArray, bool Reversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray");
		
		ULowEntryExtendedStandardLibrary_SortByteArray_Params params {};
		params.ByteArray = ByteArray;
		params.Reversed = Reversed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C5B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SimpleKismetSystemLibraryPrintString(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString");
		
		ULowEntryExtendedStandardLibrary_SimpleKismetSystemLibraryPrintString_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007633F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_ShippingBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild");
		
		ULowEntryExtendedStandardLibrary_ShippingBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C450
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Sha512(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512");
		
		ULowEntryExtendedStandardLibrary_Sha512_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C2F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Sha256(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256");
		
		ULowEntryExtendedStandardLibrary_Sha256_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C190
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Sha1(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1");
		
		ULowEntryExtendedStandardLibrary_Sha1_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C110
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetWorldRenderingEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled");
		
		ULowEntryExtendedStandardLibrary_SetWorldRenderingEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076C060
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetWindowSize(int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize");
		
		ULowEntryExtendedStandardLibrary_SetWindowSize_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BFB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetWindowPosition(int32_t X, int32_t Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition");
		
		ULowEntryExtendedStandardLibrary_SetWindowPosition_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BF00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetWindowPositiomInPercentagesCentered(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered");
		
		ULowEntryExtendedStandardLibrary_SetWindowPositiomInPercentagesCentered_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BE30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Fullscreen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFullscreenWindowed                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode");
		
		ULowEntryExtendedStandardLibrary_SetWindowMode_Params params {};
		params.Fullscreen = Fullscreen;
		params.IsFullscreenWindowed = IsFullscreenWindowed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BDC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetSplitScreenType_TwoPlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers");
		
		ULowEntryExtendedStandardLibrary_SetSplitScreenType_TwoPlayers_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BD50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetSplitScreenType_ThreePlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers");
		
		ULowEntryExtendedStandardLibrary_SetSplitScreenType_ThreePlayers_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BCD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetSplitScreenEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled");
		
		ULowEntryExtendedStandardLibrary_SetSplitScreenEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BC20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetMousePositionInPercentages(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages");
		
		ULowEntryExtendedStandardLibrary_SetMousePositionInPercentages_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BB70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetMousePosition(int32_t X, int32_t Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition");
		
		ULowEntryExtendedStandardLibrary_SetMousePosition_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BAF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Locked                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetMouseLockedToViewport(bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport");
		
		ULowEntryExtendedStandardLibrary_SetMouseLockedToViewport_Params params {};
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076BA40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TeamID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SetGenericTeamId(class AActor* Target, unsigned char TeamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId");
		
		ULowEntryExtendedStandardLibrary_SetGenericTeamId_Params params {};
		params.Target = Target;
		params.TeamID = TeamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B7C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ServerChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class APlayerController* SpecificPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap");
		
		ULowEntryExtendedStandardLibrary_ServerChangeMap_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Map = Map;
		params.Args = Args;
		params.SpecificPlayer = SpecificPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B4B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels");
		
		ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToPixels_Params params {};
		params.SceneCaptureComponent2D = SceneCaptureComponent2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (Pixels != nullptr)
			*Pixels = params.Pixels;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B350
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes");
		
		ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToBytes_Params params {};
		params.SceneCaptureComponent2D = SceneCaptureComponent2D;
		params.ImageFormat = ImageFormat;
		params.CompressionQuality = CompressionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B700
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FOV                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float FOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov");
		
		ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_SetFov_Params params {};
		params.SceneCaptureComponent2D = SceneCaptureComponent2D;
		params.FOV = FOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B630
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FOV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float* FOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov");
		
		ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_GetFov_Params params {};
		params.SceneCaptureComponent2D = SceneCaptureComponent2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FOV != nullptr)
			*FOV = params.FOV;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B040
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2DToPixels(class ASceneCapture2D* SceneCapture2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels");
		
		ULowEntryExtendedStandardLibrary_SceneCapture2DToPixels_Params params {};
		params.SceneCapture2D = SceneCapture2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (Pixels != nullptr)
			*Pixels = params.Pixels;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076AEE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2DToBytes(class ASceneCapture2D* SceneCapture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes");
		
		ULowEntryExtendedStandardLibrary_SceneCapture2DToBytes_Params params {};
		params.SceneCapture2D = SceneCapture2D;
		params.ImageFormat = ImageFormat;
		params.CompressionQuality = CompressionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B290
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FOV                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2D_SetFov(class ASceneCapture2D* SceneCapture2D, float FOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov");
		
		ULowEntryExtendedStandardLibrary_SceneCapture2D_SetFov_Params params {};
		params.SceneCapture2D = SceneCapture2D;
		params.FOV = FOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B1C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FOV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2D_GetFov(class ASceneCapture2D* SceneCapture2D, float* FOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov");
		
		ULowEntryExtendedStandardLibrary_SceneCapture2D_GetFov_Params params {};
		params.SceneCapture2D = SceneCapture2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FOV != nullptr)
			*FOV = params.FOV;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076AE10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Decimals                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULowEntryExtendedStandardLibrary::STATIC_RoundDecimals(float Number, int32_t Decimals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals");
		
		ULowEntryExtendedStandardLibrary_RoundDecimals_Params params {};
		params.Number = Number;
		params.Decimals = Decimals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076ACC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int32_t MinFrames, int32_t MaxFrames, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames");
		
		ULowEntryExtendedStandardLibrary_RetriggerableRandomDelayFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MinFrames = MinFrames;
		params.MaxFrames = MaxFrames;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076AB70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_RetriggerableRandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay");
		
		ULowEntryExtendedStandardLibrary_RetriggerableRandomDelay_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MinDuration = MinDuration;
		params.MaxDuration = MaxDuration;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076AA50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Frames                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_RetriggerableDelayFrames(class UObject* WorldContextObject, int32_t Frames, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames");
		
		ULowEntryExtendedStandardLibrary_RetriggerableDelayFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Frames = Frames;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076A810
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               KeepLowercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               KeepUppercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               KeepNumbers                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OtherCharactersToKeep                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_ReplaceCharactersExcept(const class FString& String, const class FString& ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept");
		
		ULowEntryExtendedStandardLibrary_ReplaceCharactersExcept_Params params {};
		params.String = String;
		params.ReplacementCharacter = ReplacementCharacter;
		params.KeepLowercaseAZ = KeepLowercaseAZ;
		params.KeepUppercaseAZ = KeepUppercaseAZ;
		params.KeepNumbers = KeepNumbers;
		params.OtherCharactersToKeep = OtherCharactersToKeep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076A620
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               KeepLowercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               KeepUppercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               KeepNumbers                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OtherCharactersToKeep                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_RemoveCharactersExcept(const class FString& String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept");
		
		ULowEntryExtendedStandardLibrary_RemoveCharactersExcept_Params params {};
		params.String = String;
		params.KeepLowercaseAZ = KeepLowercaseAZ;
		params.KeepUppercaseAZ = KeepUppercaseAZ;
		params.KeepNumbers = KeepNumbers;
		params.OtherCharactersToKeep = OtherCharactersToKeep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076A4A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Replacement                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_RegexReplace(const class FString& String, const class FString& Pattern, const class FString& Replacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace");
		
		ULowEntryExtendedStandardLibrary_RegexReplace_Params params {};
		params.String = String;
		params.Pattern = Pattern;
		params.Replacement = Replacement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076A3B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_RegexMatch(const class FString& String, const class FString& Pattern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch");
		
		ULowEntryExtendedStandardLibrary_RegexMatch_Params params {};
		params.String = String;
		params.Pattern = Pattern;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076A190
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLowEntryRegexMatch> ULowEntryExtendedStandardLibrary::STATIC_RegexGetMatches(const class FString& String, const class FString& Pattern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches");
		
		ULowEntryExtendedStandardLibrary_RegexGetMatches_Params params {};
		params.String = String;
		params.Pattern = Pattern;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076A0A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULowEntryExtendedStandardLibrary::STATIC_RegexCount(const class FString& String, const class FString& Pattern)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount");
		
		ULowEntryExtendedStandardLibrary_RegexCount_Params params {};
		params.String = String;
		params.Pattern = Pattern;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769F50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_RandomDelayFrames(class UObject* WorldContextObject, int32_t MinFrames, int32_t MaxFrames, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames");
		
		ULowEntryExtendedStandardLibrary_RandomDelayFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MinFrames = MinFrames;
		params.MaxFrames = MaxFrames;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769E00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_RandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay");
		
		ULowEntryExtendedStandardLibrary_RandomDelay_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MinDuration = MinDuration;
		params.MaxDuration = MaxDuration;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769CC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULowEntryExecutionQueue*                     Queue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue** Queue, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions");
		
		ULowEntryExtendedStandardLibrary_QueueExecutions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Queue != nullptr)
			*Queue = params.Queue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_Ps4Platform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform");
		
		ULowEntryExtendedStandardLibrary_Ps4Platform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769BA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULocalPlayer*                                LocalPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_PlayerControllerGetLocalPlayer(class APlayerController* PlayerController, bool* Success, class ULocalPlayer** LocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer");
		
		ULowEntryExtendedStandardLibrary_PlayerControllerGetLocalPlayer_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (LocalPlayer != nullptr)
			*LocalPlayer = params.LocalPlayer;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769A80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_PixelsToTexture2D(int32_t Width, int32_t Height, TArray<struct FColor> Pixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D");
		
		ULowEntryExtendedStandardLibrary_PixelsToTexture2D_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.Pixels = Pixels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007698B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ReusedGivenTexture2D                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_PixelsToExistingTexture2D(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, int32_t Width, int32_t Height, TArray<struct FColor> Pixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D");
		
		ULowEntryExtendedStandardLibrary_PixelsToExistingTexture2D_Params params {};
		params.Texture2D = Texture2D;
		params.Width = Width;
		params.Height = Height;
		params.Pixels = Pixels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReusedGivenTexture2D != nullptr)
			*ReusedGivenTexture2D = params.ReusedGivenTexture2D;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007696B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_PixelsToBytes(int32_t Width, int32_t Height, TArray<struct FColor> Pixels, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes");
		
		ULowEntryExtendedStandardLibrary_PixelsToBytes_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.Pixels = Pixels;
		params.ImageFormat = ImageFormat;
		params.CompressionQuality = CompressionQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007694F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HashLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Pearson(TArray<unsigned char> ByteArray, int32_t HashLength, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson");
		
		ULowEntryExtendedStandardLibrary_Pearson_Params params {};
		params.ByteArray = ByteArray;
		params.HashLength = HashLength;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007693D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_ParseStringIntoLongBytes(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes");
		
		ULowEntryExtendedStandardLibrary_ParseStringIntoLongBytes_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769330
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_ParseStringIntoDoubleBytes(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes");
		
		ULowEntryExtendedStandardLibrary_ParseStringIntoDoubleBytes_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769470
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryParsedHashcash*                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid");
		
		ULowEntryExtendedStandardLibrary_ParsedHashcashIsValid_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007692C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryExecutionQueue*                     Queue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_NextQueueExecution(class ULowEntryExecutionQueue* Queue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution");
		
		ULowEntryExtendedStandardLibrary_NextQueueExecution_Params params {};
		params.Queue = Queue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769240
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_NewlineCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter");
		
		ULowEntryExtendedStandardLibrary_NewlineCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00769090
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_MinString(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString");
		
		ULowEntryExtendedStandardLibrary_MinString_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768DC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FTimespan>                           TimespanArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimespan                                   MinValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_MinOfTimespanArray(TArray<struct FTimespan> TimespanArray, int32_t* IndexOfMinValue, struct FTimespan* MinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray");
		
		ULowEntryExtendedStandardLibrary_MinOfTimespanArray_Params params {};
		params.TimespanArray = TimespanArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768F00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MinValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_MinOfStringArray(TArray<class FString> StringArray, int32_t* IndexOfMinValue, class FString* MinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray");
		
		ULowEntryExtendedStandardLibrary_MinOfStringArray_Params params {};
		params.StringArray = StringArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768DC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FDateTime>                           DateTimeArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   MinValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_MinOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int32_t* IndexOfMinValue, struct FDateTime* MinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray");
		
		ULowEntryExtendedStandardLibrary_MinOfDateTimeArray_Params params {};
		params.DateTimeArray = DateTimeArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768CD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryByteArray*>                  ByteArrays                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_MergeEncapsulatedByteArrays(TArray<class ULowEntryByteArray*> ByteArrays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays");
		
		ULowEntryExtendedStandardLibrary_MergeEncapsulatedByteArrays_Params params {};
		params.ByteArrays = ByteArrays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768B30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              A                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              B                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_MergeBytes(TArray<unsigned char> A, TArray<unsigned char> B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes");
		
		ULowEntryExtendedStandardLibrary_MergeBytes_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007689D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Md5(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5");
		
		ULowEntryExtendedStandardLibrary_Md5_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768820
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_MaxString(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString");
		
		ULowEntryExtendedStandardLibrary_MaxString_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768550
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FTimespan>                           TimespanArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimespan                                   MaxValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_MaxOfTimespanArray(TArray<struct FTimespan> TimespanArray, int32_t* IndexOfMaxValue, struct FTimespan* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray");
		
		ULowEntryExtendedStandardLibrary_MaxOfTimespanArray_Params params {};
		params.TimespanArray = TimespanArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768690
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MaxValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_MaxOfStringArray(TArray<class FString> StringArray, int32_t* IndexOfMaxValue, class FString* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray");
		
		ULowEntryExtendedStandardLibrary_MaxOfStringArray_Params params {};
		params.StringArray = StringArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768550
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FDateTime>                           DateTimeArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   MaxValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_MaxOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int32_t* IndexOfMaxValue, struct FDateTime* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray");
		
		ULowEntryExtendedStandardLibrary_MaxOfDateTimeArray_Params params {};
		params.DateTimeArray = DateTimeArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_MacPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform");
		
		ULowEntryExtendedStandardLibrary_MacPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00768520
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_Long_CreateZero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero");
		
		ULowEntryExtendedStandardLibrary_Long_CreateZero_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761650
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_Long_Create(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create");
		
		ULowEntryExtendedStandardLibrary_Long_Create_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007681B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSoundComponent*                        MediaSoundComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMediaPlayer*                                MediaPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMediaTexture*                               MediaTexture                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PlayOnOpen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Loop                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LoadVideo(class UMediaSoundComponent* MediaSoundComponent, const class FString& URL, bool* Success, class UMediaPlayer** MediaPlayer, class UMediaTexture** MediaTexture, bool PlayOnOpen, bool Loop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo");
		
		ULowEntryExtendedStandardLibrary_LoadVideo_Params params {};
		params.MediaSoundComponent = MediaSoundComponent;
		params.URL = URL;
		params.PlayOnOpen = PlayOnOpen;
		params.Loop = Loop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (MediaPlayer != nullptr)
			*MediaPlayer = params.MediaPlayer;
		if (MediaTexture != nullptr)
			*MediaTexture = params.MediaTexture;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LinuxPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform");
		
		ULowEntryExtendedStandardLibrary_LinuxPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007680C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessStringString(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString");
		
		ULowEntryExtendedStandardLibrary_LessStringString_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767FF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessIntegerFloat(int32_t A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat");
		
		ULowEntryExtendedStandardLibrary_LessIntegerFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767F30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessIntegerByte(int32_t A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte");
		
		ULowEntryExtendedStandardLibrary_LessIntegerByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767E60
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessFloatInteger(float A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger");
		
		ULowEntryExtendedStandardLibrary_LessFloatInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767DA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessFloatByte(float A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte");
		
		ULowEntryExtendedStandardLibrary_LessFloatByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767CB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualStringString(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString");
		
		ULowEntryExtendedStandardLibrary_LessEqualStringString_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767BE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualIntegerFloat(int32_t A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat");
		
		ULowEntryExtendedStandardLibrary_LessEqualIntegerFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767B20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualIntegerByte(int32_t A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte");
		
		ULowEntryExtendedStandardLibrary_LessEqualIntegerByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767A50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualFloatInteger(float A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger");
		
		ULowEntryExtendedStandardLibrary_LessEqualFloatInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767990
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualFloatByte(float A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte");
		
		ULowEntryExtendedStandardLibrary_LessEqualFloatByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007678D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualByteInteger(unsigned char A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger");
		
		ULowEntryExtendedStandardLibrary_LessEqualByteInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767810
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualByteFloat(unsigned char A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat");
		
		ULowEntryExtendedStandardLibrary_LessEqualByteFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767750
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessByteInteger(unsigned char A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger");
		
		ULowEntryExtendedStandardLibrary_LessByteInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767690
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_LessByteFloat(unsigned char A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat");
		
		ULowEntryExtendedStandardLibrary_LessByteFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767610
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLatentActionString*                 LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_String(class ULowEntryLatentActionString** LatentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String");
		
		ULowEntryExtendedStandardLibrary_LatentAction_Create_String_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatentAction != nullptr)
			*LatentAction = params.LatentAction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767590
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLatentActionObject*                 LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Object(class ULowEntryLatentActionObject** LatentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object");
		
		ULowEntryExtendedStandardLibrary_LatentAction_Create_Object_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatentAction != nullptr)
			*LatentAction = params.LatentAction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767510
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLatentActionNone*                   LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_None(class ULowEntryLatentActionNone** LatentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None");
		
		ULowEntryExtendedStandardLibrary_LatentAction_Create_None_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatentAction != nullptr)
			*LatentAction = params.LatentAction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767490
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLatentActionInteger*                LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Integer(class ULowEntryLatentActionInteger** LatentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer");
		
		ULowEntryExtendedStandardLibrary_LatentAction_Create_Integer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatentAction != nullptr)
			*LatentAction = params.LatentAction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767410
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLatentActionFloat*                  LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Float(class ULowEntryLatentActionFloat** LatentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float");
		
		ULowEntryExtendedStandardLibrary_LatentAction_Create_Float_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatentAction != nullptr)
			*LatentAction = params.LatentAction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767390
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLatentActionBoolean*                LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean** LatentAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean");
		
		ULowEntryExtendedStandardLibrary_LatentAction_Create_Boolean_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatentAction != nullptr)
			*LatentAction = params.LatentAction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762800
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_JoinGame(class UObject* WorldContextObject, const class FString& ServerAddress, const class FString& Args, class APlayerController* SpecificPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame");
		
		ULowEntryExtendedStandardLibrary_JoinGame_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ServerAddress = ServerAddress;
		params.Args = Args;
		params.SpecificPlayer = SpecificPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007672B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_IsWorldRenderingEnabled(bool* Success, bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled");
		
		ULowEntryExtendedStandardLibrary_IsWorldRenderingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007671F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bit                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_IsBitSet(unsigned char B, int32_t Bit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet");
		
		ULowEntryExtendedStandardLibrary_IsBitSet_Params params {};
		params.B = B;
		params.Bit = Bit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsAndroidDaydreamApplication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_IsAndroidDaydreamApplication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsAndroidDaydreamApplication");
		
		ULowEntryExtendedStandardLibrary_IsAndroidDaydreamApplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_IosPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform");
		
		ULowEntryExtendedStandardLibrary_IosPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00767010
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_IntegerToBytes(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes");
		
		ULowEntryExtendedStandardLibrary_IntegerToBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_Html5Platform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform");
		
		ULowEntryExtendedStandardLibrary_Html5Platform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766EB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_HostGame(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class APlayerController* SpecificPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame");
		
		ULowEntryExtendedStandardLibrary_HostGame_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Map = Map;
		params.Args = Args;
		params.SpecificPlayer = SpecificPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007664A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_HMAC(TArray<unsigned char> ByteArray, TArray<unsigned char> Key, LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm Algorithm, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC");
		
		ULowEntryExtendedStandardLibrary_HMAC_Params params {};
		params.ByteArray = ByteArray;
		params.Key = Key;
		params.Algorithm = Algorithm;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766DD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Hex                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_HexToBytes(const class FString& Hex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes");
		
		ULowEntryExtendedStandardLibrary_HexToBytes_Params params {};
		params.Hex = Hex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766CC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Hashes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class ULowEntryParsedHashcash*> ULowEntryExtendedStandardLibrary::STATIC_HashcashParseArray(TArray<class FString> Hashes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray");
		
		ULowEntryExtendedStandardLibrary_HashcashParseArray_Params params {};
		params.Hashes = Hashes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766C20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Hash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryParsedHashcash* ULowEntryExtendedStandardLibrary::STATIC_HashcashParse(const class FString& Hash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse");
		
		ULowEntryExtendedStandardLibrary_HashcashParse_Params params {};
		params.Hash = Hash;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766AC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   UtcDate                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_HashcashCustomCreationDate(const class FString& Resource, const struct FDateTime& UtcDate, int32_t Bits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate");
		
		ULowEntryExtendedStandardLibrary_HashcashCustomCreationDate_Params params {};
		params.Resource = Resource;
		params.UtcDate = UtcDate;
		params.Bits = Bits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766920
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              Resources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   UtcDate                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryExtendedStandardLibrary::STATIC_HashcashArrayCustomCreationDate(TArray<class FString> Resources, const struct FDateTime& UtcDate, int32_t Bits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate");
		
		ULowEntryExtendedStandardLibrary_HashcashArrayCustomCreationDate_Params params {};
		params.Resources = Resources;
		params.UtcDate = UtcDate;
		params.Bits = Bits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007667C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              Resources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryExtendedStandardLibrary::STATIC_HashcashArray(TArray<class FString> Resources, int32_t Bits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray");
		
		ULowEntryExtendedStandardLibrary_HashcashArray_Params params {};
		params.Resources = Resources;
		params.Bits = Bits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007666A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_Hashcash(const class FString& Resource, int32_t Bits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash");
		
		ULowEntryExtendedStandardLibrary_Hashcash_Params params {};
		params.Resource = Resource;
		params.Bits = Bits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007663B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterStringString(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString");
		
		ULowEntryExtendedStandardLibrary_GreaterStringString_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007662E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterIntegerFloat(int32_t A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat");
		
		ULowEntryExtendedStandardLibrary_GreaterIntegerFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766220
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterIntegerByte(int32_t A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte");
		
		ULowEntryExtendedStandardLibrary_GreaterIntegerByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766150
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterFloatInteger(float A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger");
		
		ULowEntryExtendedStandardLibrary_GreaterFloatInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00766090
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterFloatByte(float A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte");
		
		ULowEntryExtendedStandardLibrary_GreaterFloatByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765FA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualStringString(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualStringString_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765ED0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualIntegerFloat(int32_t A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualIntegerFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765E10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualIntegerByte(int32_t A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualIntegerByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765D40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualFloatInteger(float A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualFloatInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765C80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualFloatByte(float A, unsigned char B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualFloatByte_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765BC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualByteInteger(unsigned char A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualByteInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765B00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualByteFloat(unsigned char A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat");
		
		ULowEntryExtendedStandardLibrary_GreaterEqualByteFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765A40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterByteInteger(unsigned char A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger");
		
		ULowEntryExtendedStandardLibrary_GreaterByteInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765980
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_GreaterByteFloat(unsigned char A, float B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat");
		
		ULowEntryExtendedStandardLibrary_GreaterByteFloat_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765890
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FColor>                              Pixel                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FColor> ULowEntryExtendedStandardLibrary::STATIC_GrayscalePixels(TArray<struct FColor> Pixel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixels");
		
		ULowEntryExtendedStandardLibrary_GrayscalePixels_Params params {};
		params.Pixel = Pixel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765800
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FColor                                      Pixel                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor ULowEntryExtendedStandardLibrary::STATIC_GrayscalePixel(const struct FColor& Pixel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixel");
		
		ULowEntryExtendedStandardLibrary_GrayscalePixel_Params params {};
		params.Pixel = Pixel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007656D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetWindowSize(bool* Success, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize");
		
		ULowEntryExtendedStandardLibrary_GetWindowSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007655A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetWindowPosition(bool* Success, int32_t* X, int32_t* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition");
		
		ULowEntryExtendedStandardLibrary_GetWindowPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765470
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetWindowPositiomInPercentagesCentered(bool* Success, float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered");
		
		ULowEntryExtendedStandardLibrary_GetWindowPositiomInPercentagesCentered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765340
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Fullscreen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFullscreenWindowed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetWindowMode(bool* Success, bool* Fullscreen, bool* IsFullscreenWindowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode");
		
		ULowEntryExtendedStandardLibrary_GetWindowMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Fullscreen != nullptr)
			*Fullscreen = params.Fullscreen;
		if (IsFullscreenWindowed != nullptr)
			*IsFullscreenWindowed = params.IsFullscreenWindowed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765160
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetWindowBounds(bool* Success, int32_t* X, int32_t* Y, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds");
		
		ULowEntryExtendedStandardLibrary_GetWindowBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00765080
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBorderSize
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMargin                                     Margin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetWindowBorderSize(bool* Success, struct FMargin* Margin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBorderSize");
		
		ULowEntryExtendedStandardLibrary_GetWindowBorderSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Margin != nullptr)
			*Margin = params.Margin;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764FF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULowEntryExtendedStandardLibrary::STATIC_GetUserFocusedWidgetType(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType");
		
		ULowEntryExtendedStandardLibrary_GetUserFocusedWidgetType_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764F70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetSplitScreenType(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType");
		
		ULowEntryExtendedStandardLibrary_GetSplitScreenType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764DF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetPrimaryMonitorWorkArea(int32_t* X, int32_t* Y, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea");
		
		ULowEntryExtendedStandardLibrary_GetPrimaryMonitorWorkArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764D10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetPrimaryMonitorResolution(int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution");
		
		ULowEntryExtendedStandardLibrary_GetPrimaryMonitorResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764BE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetMousePositionInPercentages(bool* Success, float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages");
		
		ULowEntryExtendedStandardLibrary_GetMousePositionInPercentages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764AB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetMousePosition(bool* Success, int32_t* X, int32_t* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition");
		
		ULowEntryExtendedStandardLibrary_GetMousePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007643B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetMaximumVolume(int32_t* Volume, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume");
		
		ULowEntryExtendedStandardLibrary_GetMaximumVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007649F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_GetLocalToAbsoluteScale(const struct FGeometry& Geometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale");
		
		ULowEntryExtendedStandardLibrary_GetLocalToAbsoluteScale_Params params {};
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007649B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FName ULowEntryExtendedStandardLibrary::STATIC_GetKeyboardFocusedWidgetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType");
		
		ULowEntryExtendedStandardLibrary_GetKeyboardFocusedWidgetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007648F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TeamID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetGenericTeamId(class AActor* Target, unsigned char* TeamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId");
		
		ULowEntryExtendedStandardLibrary_GetGenericTeamId_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamID != nullptr)
			*TeamID = params.TeamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764570
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetCurrentVolumePercentage(float* Percentage, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage");
		
		ULowEntryExtendedStandardLibrary_GetCurrentVolumePercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percentage != nullptr)
			*Percentage = params.Percentage;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007643B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetCurrentVolume(int32_t* Volume, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume");
		
		ULowEntryExtendedStandardLibrary_GetCurrentVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007647C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ClassName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetClassWithName(const class FString& ClassName, class UClass** Class_, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName");
		
		ULowEntryExtendedStandardLibrary_GetClassWithName_Params params {};
		params.ClassName = ClassName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class_ != nullptr)
			*Class_ = params.Class_;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764650
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Byte                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bit                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char ULowEntryExtendedStandardLibrary::STATIC_GetByteWithBitSet(unsigned char Byte, int32_t Bit, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet");
		
		ULowEntryExtendedStandardLibrary_GetByteWithBitSet_Params params {};
		params.Byte = Byte;
		params.Bit = Bit;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764570
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Celsius                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetBatteryTemperature(float* Celsius, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature");
		
		ULowEntryExtendedStandardLibrary_GetBatteryTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Celsius != nullptr)
			*Celsius = params.Celsius;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764490
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntryBatteryState State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetBatteryState(LowEntryExtendedStandardLibrary_ELowEntryBatteryState* State, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState");
		
		ULowEntryExtendedStandardLibrary_GetBatteryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007643B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetBatteryCharge(int32_t* Percentage, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge");
		
		ULowEntryExtendedStandardLibrary_GetBatteryCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percentage != nullptr)
			*Percentage = params.Percentage;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764330
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GetAndroidVolume(int32_t* Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume");
		
		ULowEntryExtendedStandardLibrary_GetAndroidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion");
		
		ULowEntryExtendedStandardLibrary_GetAndroidVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidOsLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage");
		
		ULowEntryExtendedStandardLibrary_GetAndroidOsLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764280
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryExtendedStandardLibrary::STATIC_GetAndroidNumberOfCores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores");
		
		ULowEntryExtendedStandardLibrary_GetAndroidNumberOfCores_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidGpuFamily()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily");
		
		ULowEntryExtendedStandardLibrary_GetAndroidGpuFamily_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidGlVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion");
		
		ULowEntryExtendedStandardLibrary_GetAndroidGlVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidDeviceModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel");
		
		ULowEntryExtendedStandardLibrary_GetAndroidDeviceModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidDeviceMake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake");
		
		ULowEntryExtendedStandardLibrary_GetAndroidDeviceMake_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007642B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidDefaultLocale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale");
		
		ULowEntryExtendedStandardLibrary_GetAndroidDefaultLocale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764280
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryExtendedStandardLibrary::STATIC_GetAndroidBuildVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion");
		
		ULowEntryExtendedStandardLibrary_GetAndroidBuildVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007641C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_GetAbsoluteToLocalScale(const struct FGeometry& Geometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale");
		
		ULowEntryExtendedStandardLibrary_GetAbsoluteToLocalScale_Params params {};
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764100
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_GetAbsoluteSize(const struct FGeometry& Geometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize");
		
		ULowEntryExtendedStandardLibrary_GetAbsoluteSize_Params params {};
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763FF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GenerateRandomBytesRandomLength(int32_t MinLength, int32_t MaxLength, TArray<unsigned char>* ByteArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength");
		
		ULowEntryExtendedStandardLibrary_GenerateRandomBytesRandomLength_Params params {};
		params.MinLength = MinLength;
		params.MaxLength = MaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763F20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_GenerateRandomBytes(int32_t Length, TArray<unsigned char>* ByteArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes");
		
		ULowEntryExtendedStandardLibrary_GenerateRandomBytes_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ByteArray != nullptr)
			*ByteArray = params.ByteArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763E50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Decimals                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULowEntryExtendedStandardLibrary::STATIC_FloorDecimals(float Number, int32_t Decimals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals");
		
		ULowEntryExtendedStandardLibrary_FloorDecimals_Params params {};
		params.Number = Number;
		params.Decimals = Decimals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763AD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_FloatToBytes(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes");
		
		ULowEntryExtendedStandardLibrary_FloatToBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763A10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ExecToInteger(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger");
		
		ULowEntryExtendedStandardLibrary_ExecToInteger_Params params {};
		params.Branch = Branch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763950
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ExecToByte(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, unsigned char* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte");
		
		ULowEntryExtendedStandardLibrary_ExecToByte_Params params {};
		params.Branch = Branch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763890
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse Branch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ExecToBoolean(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean");
		
		ULowEntryExtendedStandardLibrary_ExecToBoolean_Params params {};
		params.Branch = Branch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007637E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteArray* ULowEntryExtendedStandardLibrary::STATIC_EncapsulateByteArray(TArray<unsigned char> ByteArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray");
		
		ULowEntryExtendedStandardLibrary_EncapsulateByteArray_Params params {};
		params.ByteArray = ByteArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007637B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_Double_CreateZero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero");
		
		ULowEntryExtendedStandardLibrary_Double_CreateZero_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760DD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_Double_Create(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create");
		
		ULowEntryExtendedStandardLibrary_Double_Create_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00763420
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_Divide_Vector2dVector2d(const struct FVector2D& A, const struct FVector2D& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d");
		
		ULowEntryExtendedStandardLibrary_Divide_Vector2dVector2d_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_DevelopmentBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild");
		
		ULowEntryExtendedStandardLibrary_DevelopmentBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007633F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_DesktopPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform");
		
		ULowEntryExtendedStandardLibrary_DesktopPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007632D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Frames                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_DelayFrames(class UObject* WorldContextObject, int32_t Frames, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames");
		
		ULowEntryExtendedStandardLibrary_DelayFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Frames = Frames;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_DebugBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild");
		
		ULowEntryExtendedStandardLibrary_DebugBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007631F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   DateTime                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULowEntryLong*                               Timestamp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_DateTime_ToUnixTimestamp(const struct FDateTime& DateTime, class ULowEntryLong** Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp");
		
		ULowEntryExtendedStandardLibrary_DateTime_ToUnixTimestamp_Params params {};
		params.DateTime = DateTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Timestamp != nullptr)
			*Timestamp = params.Timestamp;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007630A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   DateTime                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Format                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_DateTime_ToString(const struct FDateTime& DateTime, class FString* String, const class FString& Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString");
		
		ULowEntryExtendedStandardLibrary_DateTime_ToString_Params params {};
		params.DateTime = DateTime;
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762FB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   DateTime                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_DateTime_ToIso8601(const struct FDateTime& DateTime, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601");
		
		ULowEntryExtendedStandardLibrary_DateTime_ToIso8601_Params params {};
		params.DateTime = DateTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762EF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   DateTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, struct FDateTime* DateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp");
		
		ULowEntryExtendedStandardLibrary_DateTime_FromUnixTimestamp_Params params {};
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DateTime != nullptr)
			*DateTime = params.DateTime;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762DD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filler                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_CreateString(int32_t Length, const class FString& Filler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString");
		
		ULowEntryExtendedStandardLibrary_CreateString_Params params {};
		params.Length = Length;
		params.Filler = Filler;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762D10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_CreateObject(class UClass* Class, class UObject** Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject");
		
		ULowEntryExtendedStandardLibrary_CreateObject_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Object != nullptr)
			*Object = params.Object;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762CC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_Crash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash");
		
		ULowEntryExtendedStandardLibrary_Crash_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762BF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   Utc                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Local                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ConvertUtcDateToLocalDate(const struct FDateTime& Utc, struct FDateTime* Local)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate");
		
		ULowEntryExtendedStandardLibrary_ConvertUtcDateToLocalDate_Params params {};
		params.Utc = Utc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Local != nullptr)
			*Local = params.Local;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762B20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   Local                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Utc                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ConvertLocalDateToUtcDate(const struct FDateTime& Local, struct FDateTime* Utc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate");
		
		ULowEntryExtendedStandardLibrary_ConvertLocalDateToUtcDate_Params params {};
		params.Local = Local;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Utc != nullptr)
			*Utc = params.Utc;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762A90
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ClipboardSet(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardSet");
		
		ULowEntryExtendedStandardLibrary_ClipboardSet_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762A10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardGet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_ClipboardGet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardGet");
		
		ULowEntryExtendedStandardLibrary_ClipboardGet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007629A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ClearUserFocus(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus");
		
		ULowEntryExtendedStandardLibrary_ClearUserFocus_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762980
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ClearKeyboardFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus");
		
		ULowEntryExtendedStandardLibrary_ClearKeyboardFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762960
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ClearAllUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus");
		
		ULowEntryExtendedStandardLibrary_ClearAllUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762800
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class APlayerController* SpecificPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap");
		
		ULowEntryExtendedStandardLibrary_ChangeMap_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Map = Map;
		params.Args = Args;
		params.SpecificPlayer = SpecificPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00762730
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Decimals                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULowEntryExtendedStandardLibrary::STATIC_CeilDecimals(float Number, int32_t Decimals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals");
		
		ULowEntryExtendedStandardLibrary_CeilDecimals_Params params {};
		params.Number = Number;
		params.Decimals = Decimals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007622A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OnlyCheckFirstX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _1__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _2__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _3__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _4__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _5__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _6__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _7__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _8__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _9__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     _10__                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_CaseSwitchObject(int32_t OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject");
		
		ULowEntryExtendedStandardLibrary_CaseSwitchObject_Params params {};
		params.OnlyCheckFirstX = OnlyCheckFirstX;
		params.Value = Value;
		params._1__ = _1__;
		params._2__ = _2__;
		params._3__ = _3__;
		params._4__ = _4__;
		params._5__ = _5__;
		params._6__ = _6__;
		params._7__ = _7__;
		params._8__ = _8__;
		params._9__ = _9__;
		params._10__ = _10__;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761F30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OnlyCheckFirstX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _1__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _2__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _3__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _4__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _5__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _6__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _7__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _8__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _9__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _10__                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_CaseSwitchInteger(int32_t OnlyCheckFirstX, int32_t Value, int32_t _1__, int32_t _2__, int32_t _3__, int32_t _4__, int32_t _5__, int32_t _6__, int32_t _7__, int32_t _8__, int32_t _9__, int32_t _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger");
		
		ULowEntryExtendedStandardLibrary_CaseSwitchInteger_Params params {};
		params.OnlyCheckFirstX = OnlyCheckFirstX;
		params.Value = Value;
		params._1__ = _1__;
		params._2__ = _2__;
		params._3__ = _3__;
		params._4__ = _4__;
		params._5__ = _5__;
		params._6__ = _6__;
		params._7__ = _7__;
		params._8__ = _8__;
		params._9__ = _9__;
		params._10__ = _10__;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761BB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OnlyCheckFirstX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _1__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _2__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _3__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _4__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _5__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _6__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _7__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _8__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _9__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      _10__                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_CaseSwitchByte(int32_t OnlyCheckFirstX, unsigned char Value, unsigned char _1__, unsigned char _2__, unsigned char _3__, unsigned char _4__, unsigned char _5__, unsigned char _6__, unsigned char _7__, unsigned char _8__, unsigned char _9__, unsigned char _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte");
		
		ULowEntryExtendedStandardLibrary_CaseSwitchByte_Params params {};
		params.OnlyCheckFirstX = OnlyCheckFirstX;
		params.Value = Value;
		params._1__ = _1__;
		params._2__ = _2__;
		params._3__ = _3__;
		params._4__ = _4__;
		params._5__ = _5__;
		params._6__ = _6__;
		params._7__ = _7__;
		params._8__ = _8__;
		params._9__ = _9__;
		params._10__ = _10__;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761B30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_CarriageReturnCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter");
		
		ULowEntryExtendedStandardLibrary_CarriageReturnCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760310
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_ByteToBytes(unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes");
		
		ULowEntryExtendedStandardLibrary_ByteToBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760290
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Byte                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_ByteToBoolean(unsigned char Byte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean");
		
		ULowEntryExtendedStandardLibrary_ByteToBoolean_Params params {};
		params.Byte = Byte;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FF80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Byte                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit2                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit3                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit4                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit5                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit6                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit7                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit8                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_ByteToBits(unsigned char Byte, bool* Bit1, bool* Bit2, bool* Bit3, bool* Bit4, bool* Bit5, bool* Bit6, bool* Bit7, bool* Bit8)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits");
		
		ULowEntryExtendedStandardLibrary_ByteToBits_Params params {};
		params.Byte = Byte;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bit1 != nullptr)
			*Bit1 = params.Bit1;
		if (Bit2 != nullptr)
			*Bit2 = params.Bit2;
		if (Bit3 != nullptr)
			*Bit3 = params.Bit3;
		if (Bit4 != nullptr)
			*Bit4 = params.Bit4;
		if (Bit5 != nullptr)
			*Bit5 = params.Bit5;
		if (Bit6 != nullptr)
			*Bit6 = params.Bit6;
		if (Bit7 != nullptr)
			*Bit7 = params.Bit7;
		if (Bit8 != nullptr)
			*Bit8 = params.Bit8;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007619D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_BytesToStringUtf8(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8");
		
		ULowEntryExtendedStandardLibrary_BytesToStringUtf8_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761770
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_BytesToPixels(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels");
		
		ULowEntryExtendedStandardLibrary_BytesToPixels_Params params {};
		params.ByteArray = ByteArray;
		params.ImageFormat = ImageFormat;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (Pixels != nullptr)
			*Pixels = params.Pixels;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761650
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_BytesToLongBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes");
		
		ULowEntryExtendedStandardLibrary_BytesToLongBytes_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761530
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULowEntryExtendedStandardLibrary::STATIC_BytesToInteger(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger");
		
		ULowEntryExtendedStandardLibrary_BytesToInteger_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007613D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_BytesToImage(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage");
		
		ULowEntryExtendedStandardLibrary_BytesToImage_Params params {};
		params.ByteArray = ByteArray;
		params.ImageFormat = ImageFormat;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00761200
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               AddSpaces                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_BytesToHex(TArray<unsigned char> ByteArray, bool AddSpaces, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex");
		
		ULowEntryExtendedStandardLibrary_BytesToHex_Params params {};
		params.ByteArray = ByteArray;
		params.AddSpaces = AddSpaces;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007610E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULowEntryExtendedStandardLibrary::STATIC_BytesToFloat(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat");
		
		ULowEntryExtendedStandardLibrary_BytesToFloat_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760EF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ReusedGivenTexture2D                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_BytesToExistingImage(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage");
		
		ULowEntryExtendedStandardLibrary_BytesToExistingImage_Params params {};
		params.Texture2D = Texture2D;
		params.ByteArray = ByteArray;
		params.ImageFormat = ImageFormat;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReusedGivenTexture2D != nullptr)
			*ReusedGivenTexture2D = params.ReusedGivenTexture2D;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760DD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_BytesToDoubleBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes");
		
		ULowEntryExtendedStandardLibrary_BytesToDoubleBytes_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760CB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char ULowEntryExtendedStandardLibrary::STATIC_BytesToByte(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte");
		
		ULowEntryExtendedStandardLibrary_BytesToByte_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760B90
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_BytesToBoolean(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean");
		
		ULowEntryExtendedStandardLibrary_BytesToBoolean_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007609C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               AddSpaces                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBitString(TArray<unsigned char> ByteArray, bool AddSpaces, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString");
		
		ULowEntryExtendedStandardLibrary_BytesToBitString_Params params {};
		params.ByteArray = ByteArray;
		params.AddSpaces = AddSpaces;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007607F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               AddSpaces                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBinary(TArray<unsigned char> ByteArray, bool AddSpaces, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary");
		
		ULowEntryExtendedStandardLibrary_BytesToBinary_Params params {};
		params.ByteArray = ByteArray;
		params.AddSpaces = AddSpaces;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760690
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBase64Url(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url");
		
		ULowEntryExtendedStandardLibrary_BytesToBase64Url_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00760530
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBase64(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64");
		
		ULowEntryExtendedStandardLibrary_BytesToBase64_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007603D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BytesSubArray(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray");
		
		ULowEntryExtendedStandardLibrary_BytesSubArray_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FEB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryByteDataWriter*                     ByteDataWriter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes");
		
		ULowEntryExtendedStandardLibrary_ByteDataWriter_GetBytes_Params params {};
		params.ByteDataWriter = ByteDataWriter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FE00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULowEntryByteDataEntry*>              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::STATIC_ByteDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryByteDataEntry*> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure");
		
		ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArrayPure_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FE00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryByteDataEntry*>              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::STATIC_ByteDataWriter_CreateFromEntryArray(TArray<class ULowEntryByteDataEntry*> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FCE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Bytes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataReader* ULowEntryExtendedStandardLibrary::STATIC_ByteDataReader_Create(TArray<unsigned char> Bytes, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create");
		
		ULowEntryExtendedStandardLibrary_ByteDataReader_Create_Params params {};
		params.Bytes = Bytes;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FC10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromStringUtf8Array(TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FB70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromStringUtf8(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FAC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075FA40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger3(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F990
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F910
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger2(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F860
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F7E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger1(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F730
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F6B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F600
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromIntegerArray(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromIntegerArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F580
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F4D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromFloatArray(TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloatArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F450
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromFloat(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F3A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F320
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F270
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromByteArray(TArray<unsigned char> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByteArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F1F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromByte(unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F140
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromBooleanArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBooleanArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075F0B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromBoolean(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean");
		
		ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075EFE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BooleanToBytes(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes");
		
		ULowEntryExtendedStandardLibrary_BooleanToBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075EF60
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char ULowEntryExtendedStandardLibrary::STATIC_BooleanToByte(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte");
		
		ULowEntryExtendedStandardLibrary_BooleanToByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075EBD0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Bits                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BitStringToBytes(const class FString& Bits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes");
		
		ULowEntryExtendedStandardLibrary_BitStringToBytes_Params params {};
		params.Bits = Bits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075ECB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Bit1                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit2                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit3                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit4                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit5                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit6                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit7                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bit8                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Byte                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryExtendedStandardLibrary::STATIC_BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, unsigned char* Byte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte");
		
		ULowEntryExtendedStandardLibrary_BitsToByte_Params params {};
		params.Bit1 = Bit1;
		params.Bit2 = Bit2;
		params.Bit3 = Bit3;
		params.Bit4 = Bit4;
		params.Bit5 = Bit5;
		params.Bit6 = Bit6;
		params.Bit7 = Bit7;
		params.Bit8 = Bit8;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Byte != nullptr)
			*Byte = params.Byte;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075EB00
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryBitDataWriter*                      BitDataWriter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes");
		
		ULowEntryExtendedStandardLibrary_BitDataWriter_GetBytes_Params params {};
		params.BitDataWriter = BitDataWriter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075EA50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULowEntryBitDataEntry*>               Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::STATIC_BitDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryBitDataEntry*> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure");
		
		ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArrayPure_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075EA50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULowEntryBitDataEntry*>               Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::STATIC_BitDataWriter_CreateFromEntryArray(TArray<class ULowEntryBitDataEntry*> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray");
		
		ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E930
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Bytes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataReader* ULowEntryExtendedStandardLibrary::STATIC_BitDataReader_Create(TArray<unsigned char> Bytes, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create");
		
		ULowEntryExtendedStandardLibrary_BitDataReader_Create_Params params {};
		params.Bytes = Bytes;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E860
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromStringUtf8Array(TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E7C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromStringUtf8(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E710
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger3Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E690
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger3(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E5E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger2Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E560
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger2(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E4B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger1Array(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1Array_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E430
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger1(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E380
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E300
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E240
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerMostSignificantBits(int32_t Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E180
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerLeastSignificantBits(int32_t Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075E090
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int32_t> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DFA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int32_t> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DEF0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerArray(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DE70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DDC0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromFloatArray(TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloatArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DD40
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromFloat(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DC90
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytesArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DC10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytes_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DB50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteMostSignificantBits(unsigned char Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075DA90
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteLeastSignificantBits(unsigned char Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D9A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<unsigned char> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayMostSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D8B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<unsigned char> Value, int32_t BitCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayLeastSignificantBits_Params params {};
		params.Value = Value;
		params.BitCount = BitCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D800
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteArray(TArray<unsigned char> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D780
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByte(unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D6D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBooleanArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBooleanArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D640
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBoolean(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D590
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBitArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBitArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D500
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBit(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit");
		
		ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBit_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D420
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Binary                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BinaryToBytes(const class FString& Binary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes");
		
		ULowEntryExtendedStandardLibrary_BinaryToBytes_Params params {};
		params.Binary = Binary;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CEA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Salt                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BCrypt(TArray<unsigned char> ByteArray, TArray<unsigned char> Salt, int32_t Strength, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt");
		
		ULowEntryExtendedStandardLibrary_BCrypt_Params params {};
		params.ByteArray = ByteArray;
		params.Salt = Salt;
		params.Strength = Strength;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D340
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Base64Url                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Base64UrlToBytes(const class FString& Base64Url)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes");
		
		ULowEntryExtendedStandardLibrary_Base64UrlToBytes_Params params {};
		params.Base64Url = Base64Url;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D260
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Base64Url                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_Base64UrlToBase64(const class FString& Base64Url)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64");
		
		ULowEntryExtendedStandardLibrary_Base64UrlToBase64_Params params {};
		params.Base64Url = Base64Url;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D180
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Base64                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Base64ToBytes(const class FString& Base64)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes");
		
		ULowEntryExtendedStandardLibrary_Base64ToBytes_Params params {};
		params.Base64 = Base64;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075D0A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Base64                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryExtendedStandardLibrary::STATIC_Base64ToBase64Url(const class FString& Base64)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url");
		
		ULowEntryExtendedStandardLibrary_Base64ToBase64Url_Params params {};
		params.Base64 = Base64;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CCA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LengthA                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LengthB                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_AreBytesEqual(TArray<unsigned char> A, TArray<unsigned char> B, int32_t IndexA, int32_t LengthA, int32_t IndexB, int32_t LengthB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual");
		
		ULowEntryExtendedStandardLibrary_AreBytesEqual_Params params {};
		params.A = A;
		params.B = B;
		params.IndexA = IndexA;
		params.LengthA = LengthA;
		params.IndexB = IndexB;
		params.LengthB = LengthB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_AreAndroidHeadphonesPluggedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn");
		
		ULowEntryExtendedStandardLibrary_AreAndroidHeadphonesPluggedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0075CC70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryExtendedStandardLibrary::STATIC_AndroidPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform");
		
		ULowEntryExtendedStandardLibrary_AndroidPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryExtendedStandardLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryExtendedStandardLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770630
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionBoolean::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone");
		
		ULowEntryLatentActionBoolean_WaitTillDone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007702D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryLatentActionBoolean::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone");
		
		ULowEntryLatentActionBoolean_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FD20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionBoolean::GetResult(bool* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult");
		
		ULowEntryLatentActionBoolean_GetResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F6E0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionBoolean::Done(bool Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done");
		
		ULowEntryLatentActionBoolean_Done_Params params {};
		params.Result_ = Result_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLatentActionBoolean.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLatentActionBoolean::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770770
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionFloat::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone");
		
		ULowEntryLatentActionFloat_WaitTillDone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007702D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryLatentActionFloat::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone");
		
		ULowEntryLatentActionFloat_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FDB0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionFloat::GetResult(float* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult");
		
		ULowEntryLatentActionFloat_GetResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F770
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionFloat::Done(float Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done");
		
		ULowEntryLatentActionFloat_Done_Params params {};
		params.Result_ = Result_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLatentActionFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLatentActionFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007708B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionInteger::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone");
		
		ULowEntryLatentActionInteger_WaitTillDone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007702D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryLatentActionInteger::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone");
		
		ULowEntryLatentActionInteger_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FE50
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionInteger::GetResult(int32_t* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult");
		
		ULowEntryLatentActionInteger_GetResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F7F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionInteger::Done(int32_t Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done");
		
		ULowEntryLatentActionInteger_Done_Params params {};
		params.Result_ = Result_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLatentActionInteger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLatentActionInteger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007709F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionNone::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone");
		
		ULowEntryLatentActionNone_WaitTillDone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007702D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryLatentActionNone::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone");
		
		ULowEntryLatentActionNone_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F870
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryLatentActionNone::Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done");
		
		ULowEntryLatentActionNone_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLatentActionNone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLatentActionNone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770AE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionObject::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UObject** Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone");
		
		ULowEntryLatentActionObject_WaitTillDone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007702D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryLatentActionObject::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone");
		
		ULowEntryLatentActionObject_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FEE0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionObject::GetResult(class UObject** Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult");
		
		ULowEntryLatentActionObject_GetResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F890
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionObject::Done(class UObject* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done");
		
		ULowEntryLatentActionObject_Done_Params params {};
		params.Result_ = Result_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLatentActionObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLatentActionObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770C20
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Result_                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionString::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class FString* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone");
		
		ULowEntryLatentActionString_WaitTillDone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007702D0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryLatentActionString::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone");
		
		ULowEntryLatentActionString_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FF70
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Result_                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionString::GetResult(class FString* Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult");
		
		ULowEntryLatentActionString_GetResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result_ != nullptr)
			*Result_ = params.Result_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F910
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Result_                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLatentActionString::Done(const class FString& Result_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done");
		
		ULowEntryLatentActionString_Done_Params params {};
		params.Result_ = Result_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLatentActionString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLatentActionString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076B920
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLong::SetBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes");
		
		ULowEntryLong_SetBytes_Params params {};
		params.ByteArray = ByteArray;
		params.Index = Index;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770530
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLong::LongBytes_Subtract(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract");
		
		ULowEntryLong_LongBytes_Subtract_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007704A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::LongBytes_LessThan(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan");
		
		ULowEntryLong_LongBytes_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770410
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::LongBytes_GreaterThan(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan");
		
		ULowEntryLong_LongBytes_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770380
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::LongBytes_Equals(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals");
		
		ULowEntryLong_LongBytes_Equals_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770300
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLong::LongBytes_Add(class ULowEntryLong* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add");
		
		ULowEntryLong_LongBytes_Add_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770250
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLong::Integer_Subtract(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract");
		
		ULowEntryLong_Integer_Subtract_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007701C0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::Integer_LessThan(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan");
		
		ULowEntryLong_Integer_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770130
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::Integer_GreaterThan(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan");
		
		ULowEntryLong_Integer_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007700A0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::Integer_Equals(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals");
		
		ULowEntryLong_Integer_Equals_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00770020
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryLong::Integer_Add(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add");
		
		ULowEntryLong_Integer_Add_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00764740
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<unsigned char> ULowEntryLong::GetBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes");
		
		ULowEntryLong_GetBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FBA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::Float_LessThan(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan");
		
		ULowEntryLong_Float_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FB10
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::Float_GreaterThan(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan");
		
		ULowEntryLong_Float_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FA80
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::DoubleBytes_LessThan(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan");
		
		ULowEntryLong_DoubleBytes_LessThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F9F0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryLong::DoubleBytes_GreaterThan(class ULowEntryDouble* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan");
		
		ULowEntryLong_DoubleBytes_GreaterThan_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F6B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryLong* ULowEntryLong::CreateClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone");
		
		ULowEntryLong_CreateClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F630
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryLong::CastToString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString");
		
		ULowEntryLong_CastToString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076F600
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryDouble* ULowEntryLong::CastToDoubleBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes");
		
		ULowEntryLong_CastToDoubleBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryLong.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryLong::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLong");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007705B0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryParsedHashcash::ToString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString");
		
		ULowEntryParsedHashcash_ToString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FCA0
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryParsedHashcash::GetResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource");
		
		ULowEntryParsedHashcash_GetResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FC60
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FDateTime ULowEntryParsedHashcash::GetDate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate");
		
		ULowEntryParsedHashcash_GetDate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0076FC30
	 * 		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryParsedHashcash::GetBits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits");
		
		ULowEntryParsedHashcash_GetBits_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryParsedHashcash.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryParsedHashcash::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash");
		return ptr;
	}

}


