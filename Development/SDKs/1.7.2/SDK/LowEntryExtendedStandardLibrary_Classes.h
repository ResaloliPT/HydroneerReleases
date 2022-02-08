#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class ULowEntryBitDataEntry : public UObject
	{
	public:
		unsigned char                                              Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ByteValue;                                               // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33DF[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntegerValue;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULowEntryLong*                                       LongBytesValue;                                          // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4WP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULowEntryDouble*                                     DoubleBytesValue;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BooleanValue;                                            // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2B0[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringUtf8Value;                                         // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ByteArrayValue;                                          // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            IntegerArrayValue;                                       // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ULowEntryLong*>                               LongBytesArrayValue;                                     // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FloatArrayValue;                                         // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ULowEntryDouble*>                             DoubleBytesArrayValue;                                   // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               BooleanArrayValue;                                       // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringUtf8ArrayValue;                                    // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class ULowEntryBitDataReader : public UObject
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Position;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurrentByte;                                             // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q0J[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentBytePosition;                                     // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Y70[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetPosition(int32_t Position_);
		void Reset();
		int32_t Remaining();
		TArray<class FString> GetStringUtf8Array();
		class FString GetStringUtf8();
		TArray<int32_t> GetPositiveInteger3Array();
		int32_t GetPositiveInteger3();
		TArray<int32_t> GetPositiveInteger2Array();
		int32_t GetPositiveInteger2();
		TArray<int32_t> GetPositiveInteger1Array();
		int32_t GetPositiveInteger1();
		int32_t GetPosition();
		TArray<class ULowEntryLong*> GetLongBytesArray();
		class ULowEntryLong* GetLongBytes();
		int32_t GetIntegerMostSignificantBits(int32_t BitCount);
		int32_t GetIntegerLeastSignificantBits(int32_t BitCount);
		TArray<int32_t> GetIntegerArrayMostSignificantBits(int32_t BitCount);
		TArray<int32_t> GetIntegerArrayLeastSignificantBits(int32_t BitCount);
		TArray<int32_t> GetIntegerArray();
		int32_t GetInteger();
		TArray<float> GetFloatArray();
		float GetFloat();
		TArray<class ULowEntryDouble*> GetDoubleBytesArray();
		class ULowEntryDouble* GetDoubleBytes();
		class ULowEntryBitDataReader* GetClone();
		unsigned char GetByteMostSignificantBits(int32_t BitCount);
		unsigned char GetByteLeastSignificantBits(int32_t BitCount);
		TArray<unsigned char> GetByteArrayMostSignificantBits(int32_t BitCount);
		TArray<unsigned char> GetByteArrayLeastSignificantBits(int32_t BitCount);
		TArray<unsigned char> GetByteArray();
		unsigned char GetByte();
		TArray<bool> GetBooleanArray();
		bool GetBoolean();
		TArray<bool> GetBitArray();
		bool GetBit();
		void Empty();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULowEntryBitDataWriter : public UObject
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              CurrentByte;                                             // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO0U[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentBytePosition;                                     // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void AddStringUtf8Array(TArray<class FString> Value);
		void AddStringUtf8(const class FString& Value);
		void AddPositiveInteger3Array(TArray<int32_t> Value);
		void AddPositiveInteger3(int32_t Value);
		void AddPositiveInteger2Array(TArray<int32_t> Value);
		void AddPositiveInteger2(int32_t Value);
		void AddPositiveInteger1Array(TArray<int32_t> Value);
		void AddPositiveInteger1(int32_t Value);
		void AddLongBytesArray(TArray<class ULowEntryLong*> Value);
		void AddLongBytes(class ULowEntryLong* Value);
		void AddIntegerMostSignificantBits(int32_t Value, int32_t BitCount);
		void AddIntegerLeastSignificantBits(int32_t Value, int32_t BitCount);
		void AddIntegerArrayMostSignificantBits(TArray<int32_t> Value, int32_t BitCount);
		void AddIntegerArrayLeastSignificantBits(TArray<int32_t> Value, int32_t BitCount);
		void AddIntegerArray(TArray<int32_t> Value);
		void AddInteger(int32_t Value);
		void AddFloatArray(TArray<float> Value);
		void AddFloat(float Value);
		void AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
		void AddDoubleBytes(class ULowEntryDouble* Value);
		void AddByteMostSignificantBits(unsigned char Value, int32_t BitCount);
		void AddByteLeastSignificantBits(unsigned char Value, int32_t BitCount);
		void AddByteArrayMostSignificantBits(TArray<unsigned char> Value, int32_t BitCount);
		void AddByteArrayLeastSignificantBits(TArray<unsigned char> Value, int32_t BitCount);
		void AddByteArray(TArray<unsigned char> Value);
		void AddByte(unsigned char Value);
		void AddBooleanArray(TArray<bool> Value);
		void AddBoolean(bool Value);
		void AddBitArray(TArray<bool> Value);
		void AddBit(bool Value);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryByteArray
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULowEntryByteArray : public UObject
	{
	public:
		TArray<unsigned char>                                      ByteArray;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class ULowEntryByteDataEntry : public UObject
	{
	public:
		unsigned char                                              Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ByteValue;                                               // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z61I[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntegerValue;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULowEntryLong*                                       LongBytesValue;                                          // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X27G[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULowEntryDouble*                                     DoubleBytesValue;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BooleanValue;                                            // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSDC[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringUtf8Value;                                         // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ByteArrayValue;                                          // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            IntegerArrayValue;                                       // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ULowEntryLong*>                               LongBytesArrayValue;                                     // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FloatArrayValue;                                         // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ULowEntryDouble*>                             DoubleBytesArrayValue;                                   // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               BooleanArrayValue;                                       // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringUtf8ArrayValue;                                    // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULowEntryByteDataReader : public UObject
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Position;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEMX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetPosition(int32_t Position_);
		void Reset();
		int32_t Remaining();
		TArray<class FString> GetStringUtf8Array();
		class FString GetStringUtf8();
		TArray<int32_t> GetPositiveInteger3Array();
		int32_t GetPositiveInteger3();
		TArray<int32_t> GetPositiveInteger2Array();
		int32_t GetPositiveInteger2();
		TArray<int32_t> GetPositiveInteger1Array();
		int32_t GetPositiveInteger1();
		int32_t GetPosition();
		TArray<class ULowEntryLong*> GetLongBytesArray();
		class ULowEntryLong* GetLongBytes();
		TArray<int32_t> GetIntegerArray();
		int32_t GetInteger();
		TArray<float> GetFloatArray();
		float GetFloat();
		TArray<class ULowEntryDouble*> GetDoubleBytesArray();
		class ULowEntryDouble* GetDoubleBytes();
		class ULowEntryByteDataReader* GetClone();
		TArray<unsigned char> GetByteArray();
		unsigned char GetByte();
		TArray<bool> GetBooleanArray();
		bool GetBoolean();
		void Empty();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULowEntryByteDataWriter : public UObject
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void AddStringUtf8Array(TArray<class FString> Value);
		void AddStringUtf8(const class FString& Value);
		void AddPositiveInteger3Array(TArray<int32_t> Value);
		void AddPositiveInteger3(int32_t Value);
		void AddPositiveInteger2Array(TArray<int32_t> Value);
		void AddPositiveInteger2(int32_t Value);
		void AddPositiveInteger1Array(TArray<int32_t> Value);
		void AddPositiveInteger1(int32_t Value);
		void AddLongBytesArray(TArray<class ULowEntryLong*> Value);
		void AddLongBytes(class ULowEntryLong* Value);
		void AddIntegerArray(TArray<int32_t> Value);
		void AddInteger(int32_t Value);
		void AddFloatArray(TArray<float> Value);
		void AddFloat(float Value);
		void AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
		void AddDoubleBytes(class ULowEntryDouble* Value);
		void AddByteArray(TArray<unsigned char> Value);
		void AddByte(unsigned char Value);
		void AddBooleanArray(TArray<bool> Value);
		void AddBoolean(bool Value);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryDouble
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULowEntryDouble : public UObject
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SetBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		bool LongBytes_LessThan(class ULowEntryLong* Value);
		bool LongBytes_GreaterThan(class ULowEntryLong* Value);
		bool Integer_LessThan(int32_t Value);
		bool Integer_GreaterThan(int32_t Value);
		TArray<unsigned char> GetBytes();
		void Float_Subtract(float Value);
		bool Float_LessThan(float Value);
		bool Float_GreaterThan(float Value);
		bool Float_Equals(float Value);
		void Float_Add(float Value);
		void DoubleBytes_Subtract(class ULowEntryDouble* Value);
		bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
		bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
		bool DoubleBytes_Equals(class ULowEntryDouble* Value);
		void DoubleBytes_Add(class ULowEntryDouble* Value);
		class ULowEntryDouble* CreateClone();
		class FString CastToString(int32_t MinFractionalDigits);
		class ULowEntryLong* CastToLongBytes();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULowEntryExecutionQueue : public UObject
	{
	public:
		int32_t                                                    Count;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Next;                                                    // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y6K[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULowEntryExtendedStandardLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_XboxOnePlatform();
		bool STATIC_WithEditor();
		bool STATIC_WindowsRtPlatform();
		bool STATIC_WindowsRtArmPlatform();
		bool STATIC_WindowsPlatform();
		class FString STATIC_WindowsNewlineCharacter();
		bool STATIC_Windows64Platform();
		bool STATIC_Windows32Platform();
		void STATIC_TickSeconds(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t Ticks, float SecondsInterval, int32_t* Tick);
		void STATIC_TickFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t Ticks, int32_t FramesInterval, int32_t* Tick);
		void STATIC_TextureUpdateResource(class UTexture* Texture);
		void STATIC_TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels);
		void STATIC_TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality);
		void STATIC_Texture2DToPixels(class UTexture2D* Texture2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels);
		void STATIC_Texture2DToBytes(class UTexture2D* Texture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality);
		bool STATIC_TestBuild();
		class FString STATIC_TabCharacter();
		bool STATIC_SwitchPlatform();
		TArray<unsigned char> STATIC_StringToBytesUtf8(const class FString& String);
		void STATIC_SplitBytes(TArray<unsigned char> ByteArray, int32_t LengthA, TArray<unsigned char>* A, TArray<unsigned char>* B);
		void STATIC_SoundClass_SetVolume(class USoundClass* SoundClass, float Volume);
		void STATIC_SoundClass_SetPitch(class USoundClass* SoundClass, float Pitch);
		float STATIC_SoundClass_GetVolume(class USoundClass* SoundClass);
		float STATIC_SoundClass_GetPitch(class USoundClass* SoundClass);
		void STATIC_SortTimespanArrayDirectly(TArray<struct FTimespan>* TimespanArray, bool Reversed);
		TArray<struct FTimespan> STATIC_SortTimespanArray(TArray<struct FTimespan> TimespanArray, bool Reversed);
		void STATIC_SortStringArrayDirectly(TArray<class FString>* StringArray, bool Reversed);
		TArray<class FString> STATIC_SortStringArray(TArray<class FString> StringArray, bool Reversed);
		void STATIC_SortObjectArrayDirectly(TArray<class UObject*>* ObjectArray, const class FScriptDelegate& Comparator, bool Reversed);
		TArray<class UObject*> STATIC_SortObjectArray(TArray<class UObject*> ObjectArray, const class FScriptDelegate& Comparator, bool Reversed);
		void STATIC_SortIntegerArrayDirectly(TArray<int32_t>* IntegerArray, bool Reversed);
		TArray<int32_t> STATIC_SortIntegerArray(TArray<int32_t> IntegerArray, bool Reversed);
		void STATIC_SortFloatArrayDirectly(TArray<float>* FloatArray, bool Reversed);
		TArray<float> STATIC_SortFloatArray(TArray<float> FloatArray, bool Reversed);
		void STATIC_SortDateTimeArrayDirectly(TArray<struct FDateTime>* DateTimeArray, bool Reversed);
		TArray<struct FDateTime> STATIC_SortDateTimeArray(TArray<struct FDateTime> DateTimeArray, bool Reversed);
		void STATIC_SortByteArrayDirectly(TArray<unsigned char>* ByteArray, bool Reversed);
		TArray<unsigned char> STATIC_SortByteArray(TArray<unsigned char> ByteArray, bool Reversed);
		void STATIC_SimpleKismetSystemLibraryPrintString(const class FString& inString);
		bool STATIC_ShippingBuild();
		TArray<unsigned char> STATIC_Sha512(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		TArray<unsigned char> STATIC_Sha256(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		TArray<unsigned char> STATIC_Sha1(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		void STATIC_SetWorldRenderingEnabled(bool Enabled);
		void STATIC_SetWindowSize(int32_t Width, int32_t Height);
		void STATIC_SetWindowPosition(int32_t X, int32_t Y);
		void STATIC_SetWindowPositiomInPercentagesCentered(float X, float Y);
		void STATIC_SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed);
		void STATIC_SetSplitScreenType_TwoPlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers Type);
		void STATIC_SetSplitScreenType_ThreePlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers Type);
		void STATIC_SetSplitScreenEnabled(bool Enabled);
		void STATIC_SetMousePositionInPercentages(float X, float Y);
		void STATIC_SetMousePosition(int32_t X, int32_t Y);
		void STATIC_SetMouseLockedToViewport(bool Locked);
		void STATIC_SetGenericTeamId(class AActor* Target, unsigned char TeamID);
		void STATIC_ServerChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class APlayerController* SpecificPlayer);
		void STATIC_SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels);
		void STATIC_SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality);
		void STATIC_SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float FOV);
		void STATIC_SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float* FOV);
		void STATIC_SceneCapture2DToPixels(class ASceneCapture2D* SceneCapture2D, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels);
		void STATIC_SceneCapture2DToBytes(class ASceneCapture2D* SceneCapture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality);
		void STATIC_SceneCapture2D_SetFov(class ASceneCapture2D* SceneCapture2D, float FOV);
		void STATIC_SceneCapture2D_GetFov(class ASceneCapture2D* SceneCapture2D, float* FOV);
		float STATIC_RoundDecimals(float Number, int32_t Decimals);
		void STATIC_RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int32_t MinFrames, int32_t MaxFrames, const struct FLatentActionInfo& LatentInfo);
		void STATIC_RetriggerableRandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo);
		void STATIC_RetriggerableDelayFrames(class UObject* WorldContextObject, int32_t Frames, const struct FLatentActionInfo& LatentInfo);
		class FString STATIC_ReplaceCharactersExcept(const class FString& String, const class FString& ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep);
		class FString STATIC_RemoveCharactersExcept(const class FString& String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep);
		class FString STATIC_RegexReplace(const class FString& String, const class FString& Pattern, const class FString& Replacement);
		bool STATIC_RegexMatch(const class FString& String, const class FString& Pattern);
		TArray<struct FLowEntryRegexMatch> STATIC_RegexGetMatches(const class FString& String, const class FString& Pattern);
		int32_t STATIC_RegexCount(const class FString& String, const class FString& Pattern);
		void STATIC_RandomDelayFrames(class UObject* WorldContextObject, int32_t MinFrames, int32_t MaxFrames, const struct FLatentActionInfo& LatentInfo);
		void STATIC_RandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo);
		void STATIC_QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue** Queue, const struct FLatentActionInfo& LatentInfo);
		bool STATIC_Ps4Platform();
		void STATIC_PlayerControllerGetLocalPlayer(class APlayerController* PlayerController, bool* Success, class ULocalPlayer** LocalPlayer);
		class UTexture2D* STATIC_PixelsToTexture2D(int32_t Width, int32_t Height, TArray<struct FColor> Pixels);
		class UTexture2D* STATIC_PixelsToExistingTexture2D(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, int32_t Width, int32_t Height, TArray<struct FColor> Pixels);
		void STATIC_PixelsToBytes(int32_t Width, int32_t Height, TArray<struct FColor> Pixels, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int32_t CompressionQuality);
		TArray<unsigned char> STATIC_Pearson(TArray<unsigned char> ByteArray, int32_t HashLength, int32_t Index, int32_t Length);
		class ULowEntryLong* STATIC_ParseStringIntoLongBytes(const class FString& String);
		class ULowEntryDouble* STATIC_ParseStringIntoDoubleBytes(const class FString& String);
		bool STATIC_ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target);
		void STATIC_NextQueueExecution(class ULowEntryExecutionQueue* Queue);
		class FString STATIC_NewlineCharacter();
		class FString STATIC_MinString(const class FString& A, const class FString& B);
		void STATIC_MinOfTimespanArray(TArray<struct FTimespan> TimespanArray, int32_t* IndexOfMinValue, struct FTimespan* MinValue);
		void STATIC_MinOfStringArray(TArray<class FString> StringArray, int32_t* IndexOfMinValue, class FString* MinValue);
		void STATIC_MinOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int32_t* IndexOfMinValue, struct FDateTime* MinValue);
		TArray<unsigned char> STATIC_MergeEncapsulatedByteArrays(TArray<class ULowEntryByteArray*> ByteArrays);
		TArray<unsigned char> STATIC_MergeBytes(TArray<unsigned char> A, TArray<unsigned char> B);
		TArray<unsigned char> STATIC_Md5(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		class FString STATIC_MaxString(const class FString& A, const class FString& B);
		void STATIC_MaxOfTimespanArray(TArray<struct FTimespan> TimespanArray, int32_t* IndexOfMaxValue, struct FTimespan* MaxValue);
		void STATIC_MaxOfStringArray(TArray<class FString> StringArray, int32_t* IndexOfMaxValue, class FString* MaxValue);
		void STATIC_MaxOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int32_t* IndexOfMaxValue, struct FDateTime* MaxValue);
		bool STATIC_MacPlatform();
		class ULowEntryLong* STATIC_Long_CreateZero();
		class ULowEntryLong* STATIC_Long_Create(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		void STATIC_LoadVideo(class UMediaSoundComponent* MediaSoundComponent, const class FString& URL, bool* Success, class UMediaPlayer** MediaPlayer, class UMediaTexture** MediaTexture, bool PlayOnOpen, bool Loop);
		bool STATIC_LinuxPlatform();
		bool STATIC_LessStringString(const class FString& A, const class FString& B);
		bool STATIC_LessIntegerFloat(int32_t A, float B);
		bool STATIC_LessIntegerByte(int32_t A, unsigned char B);
		bool STATIC_LessFloatInteger(float A, int32_t B);
		bool STATIC_LessFloatByte(float A, unsigned char B);
		bool STATIC_LessEqualStringString(const class FString& A, const class FString& B);
		bool STATIC_LessEqualIntegerFloat(int32_t A, float B);
		bool STATIC_LessEqualIntegerByte(int32_t A, unsigned char B);
		bool STATIC_LessEqualFloatInteger(float A, int32_t B);
		bool STATIC_LessEqualFloatByte(float A, unsigned char B);
		bool STATIC_LessEqualByteInteger(unsigned char A, int32_t B);
		bool STATIC_LessEqualByteFloat(unsigned char A, float B);
		bool STATIC_LessByteInteger(unsigned char A, int32_t B);
		bool STATIC_LessByteFloat(unsigned char A, float B);
		void STATIC_LatentAction_Create_String(class ULowEntryLatentActionString** LatentAction);
		void STATIC_LatentAction_Create_Object(class ULowEntryLatentActionObject** LatentAction);
		void STATIC_LatentAction_Create_None(class ULowEntryLatentActionNone** LatentAction);
		void STATIC_LatentAction_Create_Integer(class ULowEntryLatentActionInteger** LatentAction);
		void STATIC_LatentAction_Create_Float(class ULowEntryLatentActionFloat** LatentAction);
		void STATIC_LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean** LatentAction);
		void STATIC_JoinGame(class UObject* WorldContextObject, const class FString& ServerAddress, const class FString& Args, class APlayerController* SpecificPlayer);
		void STATIC_IsWorldRenderingEnabled(bool* Success, bool* Enabled);
		bool STATIC_IsBitSet(unsigned char B, int32_t Bit);
		bool STATIC_IsAndroidDaydreamApplication();
		bool STATIC_IosPlatform();
		TArray<unsigned char> STATIC_IntegerToBytes(int32_t Value);
		bool STATIC_Html5Platform();
		void STATIC_HostGame(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class APlayerController* SpecificPlayer);
		TArray<unsigned char> STATIC_HMAC(TArray<unsigned char> ByteArray, TArray<unsigned char> Key, LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm Algorithm, int32_t Index, int32_t Length);
		TArray<unsigned char> STATIC_HexToBytes(const class FString& Hex);
		TArray<class ULowEntryParsedHashcash*> STATIC_HashcashParseArray(TArray<class FString> Hashes);
		class ULowEntryParsedHashcash* STATIC_HashcashParse(const class FString& Hash);
		class FString STATIC_HashcashCustomCreationDate(const class FString& Resource, const struct FDateTime& UtcDate, int32_t Bits);
		TArray<class FString> STATIC_HashcashArrayCustomCreationDate(TArray<class FString> Resources, const struct FDateTime& UtcDate, int32_t Bits);
		TArray<class FString> STATIC_HashcashArray(TArray<class FString> Resources, int32_t Bits);
		class FString STATIC_Hashcash(const class FString& Resource, int32_t Bits);
		bool STATIC_GreaterStringString(const class FString& A, const class FString& B);
		bool STATIC_GreaterIntegerFloat(int32_t A, float B);
		bool STATIC_GreaterIntegerByte(int32_t A, unsigned char B);
		bool STATIC_GreaterFloatInteger(float A, int32_t B);
		bool STATIC_GreaterFloatByte(float A, unsigned char B);
		bool STATIC_GreaterEqualStringString(const class FString& A, const class FString& B);
		bool STATIC_GreaterEqualIntegerFloat(int32_t A, float B);
		bool STATIC_GreaterEqualIntegerByte(int32_t A, unsigned char B);
		bool STATIC_GreaterEqualFloatInteger(float A, int32_t B);
		bool STATIC_GreaterEqualFloatByte(float A, unsigned char B);
		bool STATIC_GreaterEqualByteInteger(unsigned char A, int32_t B);
		bool STATIC_GreaterEqualByteFloat(unsigned char A, float B);
		bool STATIC_GreaterByteInteger(unsigned char A, int32_t B);
		bool STATIC_GreaterByteFloat(unsigned char A, float B);
		TArray<struct FColor> STATIC_GrayscalePixels(TArray<struct FColor> Pixel);
		struct FColor STATIC_GrayscalePixel(const struct FColor& Pixel);
		void STATIC_GetWindowSize(bool* Success, int32_t* Width, int32_t* Height);
		void STATIC_GetWindowPosition(bool* Success, int32_t* X, int32_t* Y);
		void STATIC_GetWindowPositiomInPercentagesCentered(bool* Success, float* X, float* Y);
		void STATIC_GetWindowMode(bool* Success, bool* Fullscreen, bool* IsFullscreenWindowed);
		void STATIC_GetWindowBounds(bool* Success, int32_t* X, int32_t* Y, int32_t* Width, int32_t* Height);
		void STATIC_GetWindowBorderSize(bool* Success, struct FMargin* Margin);
		class FName STATIC_GetUserFocusedWidgetType(int32_t UserIndex);
		void STATIC_GetSplitScreenType(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType* Type);
		void STATIC_GetPrimaryMonitorWorkArea(int32_t* X, int32_t* Y, int32_t* Width, int32_t* Height);
		void STATIC_GetPrimaryMonitorResolution(int32_t* Width, int32_t* Height);
		void STATIC_GetMousePositionInPercentages(bool* Success, float* X, float* Y);
		void STATIC_GetMousePosition(bool* Success, int32_t* X, int32_t* Y);
		void STATIC_GetMaximumVolume(int32_t* Volume, bool* Success);
		struct FVector2D STATIC_GetLocalToAbsoluteScale(const struct FGeometry& Geometry);
		class FName STATIC_GetKeyboardFocusedWidgetType();
		void STATIC_GetGenericTeamId(class AActor* Target, unsigned char* TeamID);
		void STATIC_GetCurrentVolumePercentage(float* Percentage, bool* Success);
		void STATIC_GetCurrentVolume(int32_t* Volume, bool* Success);
		void STATIC_GetClassWithName(const class FString& ClassName, class UClass** Class_, bool* Success);
		unsigned char STATIC_GetByteWithBitSet(unsigned char Byte, int32_t Bit, bool Value);
		void STATIC_GetBatteryTemperature(float* Celsius, bool* Success);
		void STATIC_GetBatteryState(LowEntryExtendedStandardLibrary_ELowEntryBatteryState* State, bool* Success);
		void STATIC_GetBatteryCharge(int32_t* Percentage, bool* Success);
		void STATIC_GetAndroidVolume(int32_t* Volume);
		class FString STATIC_GetAndroidVersion();
		class FString STATIC_GetAndroidOsLanguage();
		int32_t STATIC_GetAndroidNumberOfCores();
		class FString STATIC_GetAndroidGpuFamily();
		class FString STATIC_GetAndroidGlVersion();
		class FString STATIC_GetAndroidDeviceModel();
		class FString STATIC_GetAndroidDeviceMake();
		class FString STATIC_GetAndroidDefaultLocale();
		int32_t STATIC_GetAndroidBuildVersion();
		struct FVector2D STATIC_GetAbsoluteToLocalScale(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
		void STATIC_GenerateRandomBytesRandomLength(int32_t MinLength, int32_t MaxLength, TArray<unsigned char>* ByteArray);
		void STATIC_GenerateRandomBytes(int32_t Length, TArray<unsigned char>* ByteArray);
		float STATIC_FloorDecimals(float Number, int32_t Decimals);
		TArray<unsigned char> STATIC_FloatToBytes(float Value);
		void STATIC_ExecToInteger(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, int32_t* Value);
		void STATIC_ExecToByte(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, unsigned char* Value);
		void STATIC_ExecToBoolean(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool* Value);
		class ULowEntryByteArray* STATIC_EncapsulateByteArray(TArray<unsigned char> ByteArray);
		class ULowEntryDouble* STATIC_Double_CreateZero();
		class ULowEntryDouble* STATIC_Double_Create(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		struct FVector2D STATIC_Divide_Vector2dVector2d(const struct FVector2D& A, const struct FVector2D& B);
		bool STATIC_DevelopmentBuild();
		bool STATIC_DesktopPlatform();
		void STATIC_DelayFrames(class UObject* WorldContextObject, int32_t Frames, const struct FLatentActionInfo& LatentInfo);
		bool STATIC_DebugBuild();
		void STATIC_DateTime_ToUnixTimestamp(const struct FDateTime& DateTime, class ULowEntryLong** Timestamp);
		void STATIC_DateTime_ToString(const struct FDateTime& DateTime, class FString* String, const class FString& Format);
		void STATIC_DateTime_ToIso8601(const struct FDateTime& DateTime, class FString* String);
		void STATIC_DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, struct FDateTime* DateTime);
		class FString STATIC_CreateString(int32_t Length, const class FString& Filler);
		void STATIC_CreateObject(class UClass* Class, class UObject** Object);
		void STATIC_Crash();
		void STATIC_ConvertUtcDateToLocalDate(const struct FDateTime& Utc, struct FDateTime* Local);
		void STATIC_ConvertLocalDateToUtcDate(const struct FDateTime& Local, struct FDateTime* Utc);
		void STATIC_ClipboardSet(const class FString& Value);
		class FString STATIC_ClipboardGet();
		void STATIC_ClearUserFocus(int32_t UserIndex);
		void STATIC_ClearKeyboardFocus();
		void STATIC_ClearAllUserFocus();
		void STATIC_ChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class APlayerController* SpecificPlayer);
		float STATIC_CeilDecimals(float Number, int32_t Decimals);
		void STATIC_CaseSwitchObject(int32_t OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch);
		void STATIC_CaseSwitchInteger(int32_t OnlyCheckFirstX, int32_t Value, int32_t _1__, int32_t _2__, int32_t _3__, int32_t _4__, int32_t _5__, int32_t _6__, int32_t _7__, int32_t _8__, int32_t _9__, int32_t _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch);
		void STATIC_CaseSwitchByte(int32_t OnlyCheckFirstX, unsigned char Value, unsigned char _1__, unsigned char _2__, unsigned char _3__, unsigned char _4__, unsigned char _5__, unsigned char _6__, unsigned char _7__, unsigned char _8__, unsigned char _9__, unsigned char _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch);
		class FString STATIC_CarriageReturnCharacter();
		TArray<unsigned char> STATIC_ByteToBytes(unsigned char Value);
		bool STATIC_ByteToBoolean(unsigned char Byte);
		void STATIC_ByteToBits(unsigned char Byte, bool* Bit1, bool* Bit2, bool* Bit3, bool* Bit4, bool* Bit5, bool* Bit6, bool* Bit7, bool* Bit8);
		class FString STATIC_BytesToStringUtf8(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		void STATIC_BytesToPixels(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int32_t* Width, int32_t* Height, TArray<struct FColor>* Pixels, int32_t Index, int32_t Length);
		class ULowEntryLong* STATIC_BytesToLongBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		int32_t STATIC_BytesToInteger(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		class UTexture2D* STATIC_BytesToImage(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int32_t Index, int32_t Length);
		class FString STATIC_BytesToHex(TArray<unsigned char> ByteArray, bool AddSpaces, int32_t Index, int32_t Length);
		float STATIC_BytesToFloat(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		class UTexture2D* STATIC_BytesToExistingImage(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int32_t Index, int32_t Length);
		class ULowEntryDouble* STATIC_BytesToDoubleBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		unsigned char STATIC_BytesToByte(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		bool STATIC_BytesToBoolean(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		class FString STATIC_BytesToBitString(TArray<unsigned char> ByteArray, bool AddSpaces, int32_t Index, int32_t Length);
		class FString STATIC_BytesToBinary(TArray<unsigned char> ByteArray, bool AddSpaces, int32_t Index, int32_t Length);
		class FString STATIC_BytesToBase64Url(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		class FString STATIC_BytesToBase64(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		TArray<unsigned char> STATIC_BytesSubArray(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		TArray<unsigned char> STATIC_ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter);
		class ULowEntryByteDataWriter* STATIC_ByteDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryByteDataEntry*> Array);
		class ULowEntryByteDataWriter* STATIC_ByteDataWriter_CreateFromEntryArray(TArray<class ULowEntryByteDataEntry*> Array);
		class ULowEntryByteDataReader* STATIC_ByteDataReader_Create(TArray<unsigned char> Bytes, int32_t Index, int32_t Length);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromStringUtf8Array(TArray<class FString> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromStringUtf8(const class FString& Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int32_t> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger3(int32_t Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int32_t> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger2(int32_t Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int32_t> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger1(int32_t Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromIntegerArray(TArray<int32_t> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromInteger(int32_t Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromFloatArray(TArray<float> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromFloat(float Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromByteArray(TArray<unsigned char> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromByte(unsigned char Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromBooleanArray(TArray<bool> Value);
		class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromBoolean(bool Value);
		TArray<unsigned char> STATIC_BooleanToBytes(bool Value);
		unsigned char STATIC_BooleanToByte(bool Value);
		TArray<unsigned char> STATIC_BitStringToBytes(const class FString& Bits);
		void STATIC_BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, unsigned char* Byte);
		TArray<unsigned char> STATIC_BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter);
		class ULowEntryBitDataWriter* STATIC_BitDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryBitDataEntry*> Array);
		class ULowEntryBitDataWriter* STATIC_BitDataWriter_CreateFromEntryArray(TArray<class ULowEntryBitDataEntry*> Array);
		class ULowEntryBitDataReader* STATIC_BitDataReader_Create(TArray<unsigned char> Bytes, int32_t Index, int32_t Length);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromStringUtf8Array(TArray<class FString> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromStringUtf8(const class FString& Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger3Array(TArray<int32_t> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger3(int32_t Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger2Array(TArray<int32_t> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger2(int32_t Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger1Array(TArray<int32_t> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger1(int32_t Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerMostSignificantBits(int32_t Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerLeastSignificantBits(int32_t Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int32_t> Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int32_t> Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerArray(TArray<int32_t> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromInteger(int32_t Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromFloatArray(TArray<float> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromFloat(float Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteMostSignificantBits(unsigned char Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteLeastSignificantBits(unsigned char Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<unsigned char> Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<unsigned char> Value, int32_t BitCount);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteArray(TArray<unsigned char> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByte(unsigned char Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBooleanArray(TArray<bool> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBoolean(bool Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBitArray(TArray<bool> Value);
		class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBit(bool Value);
		TArray<unsigned char> STATIC_BinaryToBytes(const class FString& Binary);
		TArray<unsigned char> STATIC_BCrypt(TArray<unsigned char> ByteArray, TArray<unsigned char> Salt, int32_t Strength, int32_t Index, int32_t Length);
		TArray<unsigned char> STATIC_Base64UrlToBytes(const class FString& Base64Url);
		class FString STATIC_Base64UrlToBase64(const class FString& Base64Url);
		TArray<unsigned char> STATIC_Base64ToBytes(const class FString& Base64);
		class FString STATIC_Base64ToBase64Url(const class FString& Base64);
		bool STATIC_AreBytesEqual(TArray<unsigned char> A, TArray<unsigned char> B, int32_t IndexA, int32_t LengthA, int32_t IndexB, int32_t LengthB);
		bool STATIC_AreAndroidHeadphonesPluggedIn();
		bool STATIC_AndroidPlatform();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULowEntryLatentActionBoolean : public UObject
	{
	public:
		bool                                                       Finished;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       result;                                                  // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZWD[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KeepAliveCount;                                          // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Result_);
		bool IsDone();
		void GetResult(bool* Result_);
		void Done(bool Result_);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULowEntryLatentActionFloat : public UObject
	{
	public:
		bool                                                       Finished;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OA7L[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      result;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KeepAliveCount;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCBY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Result_);
		bool IsDone();
		void GetResult(float* Result_);
		void Done(float Result_);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULowEntryLatentActionInteger : public UObject
	{
	public:
		bool                                                       Finished;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPBT[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    result;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KeepAliveCount;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKYE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t* Result_);
		bool IsDone();
		void GetResult(int32_t* Result_);
		void Done(int32_t Result_);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULowEntryLatentActionNone : public UObject
	{
	public:
		bool                                                       Finished;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRHF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KeepAliveCount;                                          // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		bool IsDone();
		void Done();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULowEntryLatentActionObject : public UObject
	{
	public:
		bool                                                       Finished;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5S1W[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             result;                                                  // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KeepAliveCount;                                          // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6NP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UObject** Result_);
		bool IsDone();
		void GetResult(class UObject** Result_);
		void Done(class UObject* Result_);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class ULowEntryLatentActionString : public UObject
	{
	public:
		bool                                                       Finished;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZVG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              result;                                                  // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KeepAliveCount;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQCQ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class FString* Result_);
		bool IsDone();
		void GetResult(class FString* Result_);
		void Done(const class FString& Result_);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryLong
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULowEntryLong : public UObject
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SetBytes(TArray<unsigned char> ByteArray, int32_t Index, int32_t Length);
		void LongBytes_Subtract(class ULowEntryLong* Value);
		bool LongBytes_LessThan(class ULowEntryLong* Value);
		bool LongBytes_GreaterThan(class ULowEntryLong* Value);
		bool LongBytes_Equals(class ULowEntryLong* Value);
		void LongBytes_Add(class ULowEntryLong* Value);
		void Integer_Subtract(int32_t Value);
		bool Integer_LessThan(int32_t Value);
		bool Integer_GreaterThan(int32_t Value);
		bool Integer_Equals(int32_t Value);
		void Integer_Add(int32_t Value);
		TArray<unsigned char> GetBytes();
		bool Float_LessThan(float Value);
		bool Float_GreaterThan(float Value);
		bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
		bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
		class ULowEntryLong* CreateClone();
		class FString CastToString();
		class ULowEntryDouble* CastToDoubleBytes();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULowEntryParsedHashcash : public UObject
	{
	public:
		bool                                                       Valid;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N5W[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Resource;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Date;                                                    // 0x0040(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Bits;                                                    // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WX5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		class FString ToString();
		class FString GetResource();
		struct FDateTime GetDate();
		int32_t GetBits();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
