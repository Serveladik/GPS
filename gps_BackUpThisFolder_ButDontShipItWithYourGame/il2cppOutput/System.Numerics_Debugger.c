#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[132] = 
{
	{ 0, 0 } /* 0x06000001 System.Void System.Numerics.BigInteger::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x06000002 System.Void System.Numerics.BigInteger::.ctor(System.Int64) */,
	{ 0, 0 } /* 0x06000003 System.Void System.Numerics.BigInteger::.ctor(System.Byte[]) */,
	{ 0, 0 } /* 0x06000004 System.Void System.Numerics.BigInteger::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Boolean,System.Boolean) */,
	{ 0, 0 } /* 0x06000005 System.Void System.Numerics.BigInteger::.ctor(System.Int32,System.UInt32[]) */,
	{ 0, 0 } /* 0x06000006 System.Void System.Numerics.BigInteger::.ctor(System.UInt32[],System.Boolean) */,
	{ 0, 0 } /* 0x06000007 System.Numerics.BigInteger System.Numerics.BigInteger::get_MinusOne() */,
	{ 0, 0 } /* 0x06000008 System.Boolean System.Numerics.BigInteger::get_IsEven() */,
	{ 0, 0 } /* 0x06000009 System.Int32 System.Numerics.BigInteger::get_Sign() */,
	{ 0, 0 } /* 0x0600000A System.Numerics.BigInteger System.Numerics.BigInteger::ModPow(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x0600000B System.Int32 System.Numerics.BigInteger::GetHashCode() */,
	{ 0, 0 } /* 0x0600000C System.Boolean System.Numerics.BigInteger::Equals(System.Object) */,
	{ 0, 0 } /* 0x0600000D System.Boolean System.Numerics.BigInteger::Equals(System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x0600000E System.Int32 System.Numerics.BigInteger::CompareTo(System.Int64) */,
	{ 0, 0 } /* 0x0600000F System.Int32 System.Numerics.BigInteger::CompareTo(System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x06000010 System.Int32 System.Numerics.BigInteger::CompareTo(System.Object) */,
	{ 0, 0 } /* 0x06000011 System.Byte[] System.Numerics.BigInteger::ToByteArray() */,
	{ 0, 0 } /* 0x06000012 System.Byte[] System.Numerics.BigInteger::ToByteArray(System.Boolean,System.Boolean) */,
	{ 0, 0 } /* 0x06000013 System.Boolean System.Numerics.BigInteger::TryWriteBytes(System.Span`1<System.Byte>,System.Int32&,System.Boolean,System.Boolean) */,
	{ 0, 0 } /* 0x06000014 System.Boolean System.Numerics.BigInteger::TryWriteOrCountBytes(System.Span`1<System.Byte>,System.Int32&,System.Boolean,System.Boolean) */,
	{ 0, 0 } /* 0x06000015 System.Byte[] System.Numerics.BigInteger::TryGetBytes(System.Numerics.BigInteger/GetBytesMode,System.Span`1<System.Byte>,System.Boolean,System.Boolean,System.Int32&) */,
	{ 0, 0 } /* 0x06000016 System.String System.Numerics.BigInteger::ToString() */,
	{ 0, 0 } /* 0x06000017 System.String System.Numerics.BigInteger::ToString(System.String,System.IFormatProvider) */,
	{ 0, 0 } /* 0x06000018 System.Numerics.BigInteger System.Numerics.BigInteger::Add(System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x06000019 System.Numerics.BigInteger System.Numerics.BigInteger::op_Subtraction(System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x0600001A System.Numerics.BigInteger System.Numerics.BigInteger::Subtract(System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x0600001B System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Byte) */,
	{ 0, 0 } /* 0x0600001C System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32) */,
	{ 0, 0 } /* 0x0600001D System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int64) */,
	{ 0, 0 } /* 0x0600001E System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x0600001F System.Numerics.BigInteger System.Numerics.BigInteger::op_LeftShift(System.Numerics.BigInteger,System.Int32) */,
	{ 0, 0 } /* 0x06000020 System.Numerics.BigInteger System.Numerics.BigInteger::op_RightShift(System.Numerics.BigInteger,System.Int32) */,
	{ 0, 0 } /* 0x06000021 System.Numerics.BigInteger System.Numerics.BigInteger::op_Addition(System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x06000022 System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0 } /* 0x06000023 System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64) */,
	{ 0, 0 } /* 0x06000024 System.Boolean System.Numerics.BigInteger::GetPartsForBitManipulation(System.Numerics.BigInteger&,System.UInt32[]&,System.Int32&) */,
	{ 0, 0 } /* 0x06000025 System.Int32 System.Numerics.BigInteger::GetDiffLength(System.UInt32[],System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x06000026 System.Void System.Numerics.BigInteger::.cctor() */,
	{ 0, 0 } /* 0x06000027 System.UInt32[] System.Numerics.BigIntegerCalculator::Add(System.UInt32[],System.UInt32) */,
	{ 0, 0 } /* 0x06000028 System.UInt32[] System.Numerics.BigIntegerCalculator::Add(System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x06000029 System.Void System.Numerics.BigIntegerCalculator::Add(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600002A System.Void System.Numerics.BigIntegerCalculator::AddSelf(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600002B System.UInt32[] System.Numerics.BigIntegerCalculator::Subtract(System.UInt32[],System.UInt32) */,
	{ 0, 0 } /* 0x0600002C System.UInt32[] System.Numerics.BigIntegerCalculator::Subtract(System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x0600002D System.Void System.Numerics.BigIntegerCalculator::Subtract(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600002E System.Void System.Numerics.BigIntegerCalculator::SubtractSelf(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600002F System.Int32 System.Numerics.BigIntegerCalculator::Compare(System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x06000030 System.Int32 System.Numerics.BigIntegerCalculator::Compare(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x06000031 System.UInt32 System.Numerics.BigIntegerCalculator::Remainder(System.UInt32[],System.UInt32) */,
	{ 0, 0 } /* 0x06000032 System.UInt32[] System.Numerics.BigIntegerCalculator::Divide(System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x06000033 System.UInt32[] System.Numerics.BigIntegerCalculator::Remainder(System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x06000034 System.Void System.Numerics.BigIntegerCalculator::Divide(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x06000035 System.UInt32 System.Numerics.BigIntegerCalculator::AddDivisor(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x06000036 System.UInt32 System.Numerics.BigIntegerCalculator::SubtractDivisor(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt64) */,
	{ 0, 0 } /* 0x06000037 System.Boolean System.Numerics.BigIntegerCalculator::DivideGuessTooBig(System.UInt64,System.UInt64,System.UInt32,System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x06000038 System.UInt32[] System.Numerics.BigIntegerCalculator::CreateCopy(System.UInt32[]) */,
	{ 0, 0 } /* 0x06000039 System.Int32 System.Numerics.BigIntegerCalculator::LeadingZeros(System.UInt32) */,
	{ 0, 0 } /* 0x0600003A System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x0600003B System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x0600003C System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32[],System.UInt32) */,
	{ 0, 0 } /* 0x0600003D System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32[],System.UInt32) */,
	{ 0, 0 } /* 0x0600003E System.UInt32 System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.UInt32,System.UInt64,System.UInt64) */,
	{ 0, 0 } /* 0x0600003F System.UInt32 System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.UInt32,System.UInt64,System.UInt64) */,
	{ 0, 0 } /* 0x06000040 System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32,System.UInt32[]) */,
	{ 0, 0 } /* 0x06000041 System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32,System.UInt32[]) */,
	{ 0, 0 } /* 0x06000042 System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x06000043 System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32[],System.UInt32[]) */,
	{ 0, 0 } /* 0x06000044 System.UInt32[] System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000045 System.UInt32[] System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000046 System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000047 System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000048 System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.Numerics.BigIntegerCalculator/FastReducer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000049 System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.Numerics.BigIntegerCalculator/FastReducer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x0600004A System.Int32 System.Numerics.BigIntegerCalculator::ActualLength(System.UInt32[]) */,
	{ 0, 0 } /* 0x0600004B System.Int32 System.Numerics.BigIntegerCalculator::ActualLength(System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x0600004C System.Void System.Numerics.BigIntegerCalculator::Square(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600004D System.Void System.Numerics.BigIntegerCalculator::Multiply(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600004E System.Void System.Numerics.BigIntegerCalculator::SubtractCore(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0 } /* 0x0600004F System.Void System.Numerics.BigIntegerCalculator::.cctor() */,
	{ 0, 0 } /* 0x06000050 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::.ctor(System.Int32,System.UInt32) */,
	{ 0, 0 } /* 0x06000051 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::.ctor(System.Int32,System.UInt32[]) */,
	{ 0, 0 } /* 0x06000052 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::MultiplySelf(System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000053 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::SquareSelf(System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0 } /* 0x06000054 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::Reduce(System.Numerics.BigIntegerCalculator/FastReducer&) */,
	{ 0, 0 } /* 0x06000055 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::Reduce(System.UInt32[]) */,
	{ 0, 0 } /* 0x06000056 System.UInt32[] System.Numerics.BigIntegerCalculator/BitsBuffer::GetBits() */,
	{ 0, 0 } /* 0x06000057 System.Int32 System.Numerics.BigIntegerCalculator/BitsBuffer::GetSize() */,
	{ 0, 0 } /* 0x06000058 System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::Apply(System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Int32) */,
	{ 0, 0 } /* 0x06000059 System.Void System.Numerics.BigIntegerCalculator/FastReducer::.ctor(System.UInt32[]) */,
	{ 0, 0 } /* 0x0600005A System.Int32 System.Numerics.BigIntegerCalculator/FastReducer::Reduce(System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x0600005B System.Int32 System.Numerics.BigIntegerCalculator/FastReducer::DivMul(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x0600005C System.Int32 System.Numerics.BigIntegerCalculator/FastReducer::SubMod(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0 } /* 0x0600005D System.Char System.Numerics.BigNumber::ParseFormatSpecifier(System.ReadOnlySpan`1<System.Char>,System.Int32&) */,
	{ 0, 0 } /* 0x0600005E System.String System.Numerics.BigNumber::FormatBigIntegerToHex(System.Boolean,System.Numerics.BigInteger,System.Char,System.Int32,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&,System.Boolean&) */,
	{ 0, 0 } /* 0x0600005F System.String System.Numerics.BigNumber::FormatBigInteger(System.Numerics.BigInteger,System.String,System.Globalization.NumberFormatInfo) */,
	{ 0, 0 } /* 0x06000060 System.String System.Numerics.BigNumber::FormatBigInteger(System.Boolean,System.Numerics.BigInteger,System.String,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&,System.Boolean&) */,
	{ 0, 0 } /* 0x06000061 System.Void System.Numerics.NumericsHelpers::DangerousMakeTwosComplement(System.UInt32[]) */,
	{ 0, 0 } /* 0x06000062 System.UInt64 System.Numerics.NumericsHelpers::MakeUlong(System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x06000063 System.UInt32 System.Numerics.NumericsHelpers::Abs(System.Int32) */,
	{ 0, 0 } /* 0x06000064 System.UInt32 System.Numerics.NumericsHelpers::CombineHash(System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x06000065 System.Int32 System.Numerics.NumericsHelpers::CombineHash(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000066 System.Void System.Globalization.FormatProvider::FormatBigInteger(System.Text.ValueStringBuilder&,System.Int32,System.Int32,System.Boolean,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Char[],System.Int32) */,
	{ 0, 0 } /* 0x06000067 System.Void System.Globalization.FormatProvider/Number::Int32ToDecChars(System.Char*,System.Int32&,System.UInt32,System.Int32) */,
	{ 0, 0 } /* 0x06000068 System.Char System.Globalization.FormatProvider/Number::ParseFormatSpecifier(System.ReadOnlySpan`1<System.Char>,System.Int32&) */,
	{ 0, 0 } /* 0x06000069 System.Void System.Globalization.FormatProvider/Number::NumberToString(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Char,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean) */,
	{ 0, 0 } /* 0x0600006A System.Void System.Globalization.FormatProvider/Number::FormatCurrency(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo) */,
	{ 0, 0 } /* 0x0600006B System.Int32 System.Globalization.FormatProvider/Number::wcslen(System.Char*) */,
	{ 0, 0 } /* 0x0600006C System.Void System.Globalization.FormatProvider/Number::FormatFixed(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Int32[],System.String,System.String) */,
	{ 0, 0 } /* 0x0600006D System.Void System.Globalization.FormatProvider/Number::FormatNumber(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo) */,
	{ 0, 0 } /* 0x0600006E System.Void System.Globalization.FormatProvider/Number::FormatScientific(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Char) */,
	{ 0, 0 } /* 0x0600006F System.Void System.Globalization.FormatProvider/Number::FormatExponent(System.Text.ValueStringBuilder&,System.Globalization.NumberFormatInfo,System.Int32,System.Char,System.Int32,System.Boolean) */,
	{ 0, 0 } /* 0x06000070 System.Void System.Globalization.FormatProvider/Number::FormatGeneral(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Char,System.Boolean) */,
	{ 0, 0 } /* 0x06000071 System.Void System.Globalization.FormatProvider/Number::FormatPercent(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo) */,
	{ 0, 0 } /* 0x06000072 System.Void System.Globalization.FormatProvider/Number::RoundNumber(System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32) */,
	{ 0, 0 } /* 0x06000073 System.Int32 System.Globalization.FormatProvider/Number::FindSection(System.ReadOnlySpan`1<System.Char>,System.Int32) */,
	{ 0, 0 } /* 0x06000074 System.Void System.Globalization.FormatProvider/Number::NumberToStringFormat(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo) */,
	{ 0, 0 } /* 0x06000075 System.Void System.Globalization.FormatProvider/Number::.cctor() */,
	{ 0, 0 } /* 0x06000076 System.Char* System.Globalization.FormatProvider/Number/NumberBuffer::get_digits() */,
	{ 0, 0 } /* 0x06000077 System.Void System.Text.ValueStringBuilder::.ctor(System.Span`1<System.Char>) */,
	{ 0, 0 } /* 0x06000078 System.Int32 System.Text.ValueStringBuilder::get_Length() */,
	{ 0, 0 } /* 0x06000079 System.String System.Text.ValueStringBuilder::ToString() */,
	{ 0, 0 } /* 0x0600007A System.Boolean System.Text.ValueStringBuilder::TryCopyTo(System.Span`1<System.Char>,System.Int32&) */,
	{ 0, 0 } /* 0x0600007B System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.Char,System.Int32) */,
	{ 0, 0 } /* 0x0600007C System.Void System.Text.ValueStringBuilder::Append(System.Char) */,
	{ 0, 0 } /* 0x0600007D System.Void System.Text.ValueStringBuilder::Append(System.String) */,
	{ 0, 0 } /* 0x0600007E System.Void System.Text.ValueStringBuilder::AppendSlow(System.String) */,
	{ 0, 0 } /* 0x0600007F System.Void System.Text.ValueStringBuilder::Append(System.Char,System.Int32) */,
	{ 0, 0 } /* 0x06000080 System.Void System.Text.ValueStringBuilder::Append(System.Char*,System.Int32) */,
	{ 0, 0 } /* 0x06000081 System.Span`1<System.Char> System.Text.ValueStringBuilder::AppendSpan(System.Int32) */,
	{ 0, 0 } /* 0x06000082 System.Void System.Text.ValueStringBuilder::GrowAndAppend(System.Char) */,
	{ 0, 0 } /* 0x06000083 System.Void System.Text.ValueStringBuilder::Grow(System.Int32) */,
	{ 0, 0 } /* 0x06000084 System.Void System.Text.ValueStringBuilder::Dispose() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsSystem_Numerics[];
Il2CppSequencePoint g_sequencePointsSystem_Numerics[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsSystem_Numerics[];
Il2CppSequencePoint g_sequencePointsSystem_Numerics[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 46981, 11450, 176, 0, -1 },
{ 46981, 11450, 344, 1, -1 },
{ 46981, 11450, 438, 2, -1 },
{ 46981, 11450, 462, 3, -1 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[132] = 
{
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.ctor(System.Int64) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.ctor(System.Byte[]) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Boolean,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.ctor(System.Int32,System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.ctor(System.UInt32[],System.Boolean) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::get_MinusOne() */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::get_IsEven() */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::get_Sign() */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::ModPow(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::GetHashCode() */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::Equals(System.Object) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::Equals(System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::CompareTo(System.Int64) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::CompareTo(System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::CompareTo(System.Object) */,
	{ 0, 0, 0 } /* System.Byte[] System.Numerics.BigInteger::ToByteArray() */,
	{ 0, 0, 0 } /* System.Byte[] System.Numerics.BigInteger::ToByteArray(System.Boolean,System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::TryWriteBytes(System.Span`1<System.Byte>,System.Int32&,System.Boolean,System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::TryWriteOrCountBytes(System.Span`1<System.Byte>,System.Int32&,System.Boolean,System.Boolean) */,
	{ 0, 0, 0 } /* System.Byte[] System.Numerics.BigInteger::TryGetBytes(System.Numerics.BigInteger/GetBytesMode,System.Span`1<System.Byte>,System.Boolean,System.Boolean,System.Int32&) */,
	{ 0, 0, 0 } /* System.String System.Numerics.BigInteger::ToString() */,
	{ 0, 0, 0 } /* System.String System.Numerics.BigInteger::ToString(System.String,System.IFormatProvider) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::Add(System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_Subtraction(System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::Subtract(System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Byte) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int64) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_LeftShift(System.Numerics.BigInteger,System.Int32) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_RightShift(System.Numerics.BigInteger,System.Int32) */,
	{ 0, 0, 0 } /* System.Numerics.BigInteger System.Numerics.BigInteger::op_Addition(System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigInteger::GetPartsForBitManipulation(System.Numerics.BigInteger&,System.UInt32[]&,System.Int32&) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigInteger::GetDiffLength(System.UInt32[],System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigInteger::.cctor() */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Add(System.UInt32[],System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Add(System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::Add(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::AddSelf(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Subtract(System.UInt32[],System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Subtract(System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::Subtract(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::SubtractSelf(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator::Compare(System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator::Compare(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::Remainder(System.UInt32[],System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Divide(System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Remainder(System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::Divide(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::AddDivisor(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::SubtractDivisor(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt64) */,
	{ 0, 0, 0 } /* System.Boolean System.Numerics.BigIntegerCalculator::DivideGuessTooBig(System.UInt64,System.UInt64,System.UInt32,System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::CreateCopy(System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator::LeadingZeros(System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32[],System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32[],System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.UInt32,System.UInt64,System.UInt64) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.UInt32,System.UInt64,System.UInt64) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32,System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32,System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32,System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::Pow(System.UInt32[],System.UInt32[],System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.UInt32[],System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32[],System.Numerics.BigIntegerCalculator/FastReducer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::PowCore(System.UInt32,System.Numerics.BigIntegerCalculator/FastReducer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator::ActualLength(System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator::ActualLength(System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::Square(System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::Multiply(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::SubtractCore(System.UInt32*,System.Int32,System.UInt32*,System.Int32,System.UInt32*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator::.cctor() */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::.ctor(System.Int32,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::.ctor(System.Int32,System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::MultiplySelf(System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::SquareSelf(System.Numerics.BigIntegerCalculator/BitsBuffer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::Reduce(System.Numerics.BigIntegerCalculator/FastReducer&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::Reduce(System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt32[] System.Numerics.BigIntegerCalculator/BitsBuffer::GetBits() */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator/BitsBuffer::GetSize() */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/BitsBuffer::Apply(System.Numerics.BigIntegerCalculator/BitsBuffer&,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.BigIntegerCalculator/FastReducer::.ctor(System.UInt32[]) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator/FastReducer::Reduce(System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator/FastReducer::DivMul(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.BigIntegerCalculator/FastReducer::SubMod(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32) */,
	{ 0, 0, 0 } /* System.Char System.Numerics.BigNumber::ParseFormatSpecifier(System.ReadOnlySpan`1<System.Char>,System.Int32&) */,
	{ 0, 0, 0 } /* System.String System.Numerics.BigNumber::FormatBigIntegerToHex(System.Boolean,System.Numerics.BigInteger,System.Char,System.Int32,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&,System.Boolean&) */,
	{ 0, 0, 0 } /* System.String System.Numerics.BigNumber::FormatBigInteger(System.Numerics.BigInteger,System.String,System.Globalization.NumberFormatInfo) */,
	{ 0, 0, 0 } /* System.String System.Numerics.BigNumber::FormatBigInteger(System.Boolean,System.Numerics.BigInteger,System.String,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&,System.Boolean&) */,
	{ 0, 0, 0 } /* System.Void System.Numerics.NumericsHelpers::DangerousMakeTwosComplement(System.UInt32[]) */,
	{ 0, 0, 0 } /* System.UInt64 System.Numerics.NumericsHelpers::MakeUlong(System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.NumericsHelpers::Abs(System.Int32) */,
	{ 0, 0, 0 } /* System.UInt32 System.Numerics.NumericsHelpers::CombineHash(System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.Int32 System.Numerics.NumericsHelpers::CombineHash(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider::FormatBigInteger(System.Text.ValueStringBuilder&,System.Int32,System.Int32,System.Boolean,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Char[],System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::Int32ToDecChars(System.Char*,System.Int32&,System.UInt32,System.Int32) */,
	{ 0, 0, 0 } /* System.Char System.Globalization.FormatProvider/Number::ParseFormatSpecifier(System.ReadOnlySpan`1<System.Char>,System.Int32&) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::NumberToString(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Char,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatCurrency(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo) */,
	{ 0, 0, 0 } /* System.Int32 System.Globalization.FormatProvider/Number::wcslen(System.Char*) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatFixed(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Int32[],System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatNumber(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatScientific(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Char) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatExponent(System.Text.ValueStringBuilder&,System.Globalization.NumberFormatInfo,System.Int32,System.Char,System.Int32,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatGeneral(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Char,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::FormatPercent(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32,System.Int32,System.Globalization.NumberFormatInfo) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::RoundNumber(System.Globalization.FormatProvider/Number/NumberBuffer&,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 System.Globalization.FormatProvider/Number::FindSection(System.ReadOnlySpan`1<System.Char>,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::NumberToStringFormat(System.Text.ValueStringBuilder&,System.Globalization.FormatProvider/Number/NumberBuffer&,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo) */,
	{ 0, 0, 0 } /* System.Void System.Globalization.FormatProvider/Number::.cctor() */,
	{ 0, 0, 0 } /* System.Char* System.Globalization.FormatProvider/Number/NumberBuffer::get_digits() */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::.ctor(System.Span`1<System.Char>) */,
	{ 0, 0, 0 } /* System.Int32 System.Text.ValueStringBuilder::get_Length() */,
	{ 0, 0, 0 } /* System.String System.Text.ValueStringBuilder::ToString() */,
	{ 0, 0, 0 } /* System.Boolean System.Text.ValueStringBuilder::TryCopyTo(System.Span`1<System.Char>,System.Int32&) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.Char,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Append(System.Char) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Append(System.String) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::AppendSlow(System.String) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Append(System.Char,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Append(System.Char*,System.Int32) */,
	{ 0, 0, 0 } /* System.Span`1<System.Char> System.Text.ValueStringBuilder::AppendSpan(System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::GrowAndAppend(System.Char) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Grow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Text.ValueStringBuilder::Dispose() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Numerics;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Numerics = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsSystem_Numerics,
	4,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
