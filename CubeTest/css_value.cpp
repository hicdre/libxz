#include "stdafx.h"
#include "css_value.h"
#include "base/stringprintf.h"

namespace css
{


	Value::Value( int32 aValue, Unit aUnit )
		: mUnit(aUnit)
	{
		if (aUnit == Unit_Integer || aUnit == Unit_Enumerated ||
			aUnit == Unit_EnumColor) {
				mValue.mInt = aValue;
		}
		else {
			mUnit = Unit_Null;
			mValue.mInt = 0;
		}
	}

	Value::Value( float aValue, Unit aUnit )
		: mUnit(aUnit)
	{
		if (Unit_Percent <= aUnit) {
			mValue.mFloat = aValue;
			//MOZ_ASSERT(!MOZ_DOUBLE_IS_NaN(mValue.mFloat));
		}
		else {
			mUnit = Unit_Null;
			mValue.mInt = 0;
		}
	}

	Value::Value(const std::string& aValue, Unit aUnit)
		: mUnit(aUnit)
	{
		DCHECK(UnitHasStringValue());
		if (UnitHasStringValue()) {
			mValue.mString = new StringValue(aValue);
			//if (MOZ_UNLIKELY(!mValue.mString)) {
				// XXXbz not much we can do here; just make sure that our promise of a
				// non-null mValue.mString holds for string units.
			//	mUnit = eCSSUnit_Null;
			//}
		}
		else {
			mUnit = Unit_Null;
			mValue.mInt = 0;
		}
	}

	bool Value::IsEqual( Value* aOther ) const
	{
		if (mUnit == aOther->mUnit) 
		{
			//if (mUnit <= Unit_DummyInherit) {
			//	return true;
			//}
			//else 
			if (UnitHasStringValue()) {
				return (mValue.mString->IsEqual(aOther->mValue.mString)
					== 0);
			}
			else if ((Unit_Integer <= mUnit) && (mUnit <= Unit_EnumColor)) {
				return mValue.mInt == aOther->mValue.mInt;
			}
			else if (Unit_Color == mUnit) {
				return mValue.mColor == aOther->mValue.mColor;
			}
			//else if (UnitHasArrayValue()) {
			//	return *mValue.mArray == *aOther->mValue.mArray;
			//}
			//else if (Unit_URL == mUnit) {
			//	return *mValue.mURL == *aOther->mValue.mURL;
			//}
			//else if (Unit_Image == mUnit) {
			//	return *mValue.mImage == *aOther->mValue.mImage;
			//}
			//else if (Unit_Gradient == mUnit) {
			//	return *mValue.mGradient == *aOther->mValue.mGradient;
			//}
			//else if (Unit_Pair == mUnit) {
			//	return *mValue.mPair == *aOther->mValue.mPair;
			//}
			//else if (Unit_Triplet == mUnit) {
			//	return *mValue.mTriplet == *aOther->mValue.mTriplet;
			//}
			else if (Unit_Rect == mUnit) {
				return mValue.mRect->IsEqual(aOther->mValue.mRect);
			}
			//else if (Unit_List == mUnit) {
			//	return *mValue.mList == *aOther->mValue.mList;
			//}
			//else if (Unit_PairList == mUnit) {
			//	return *mValue.mPairList == *aOther->mValue.mPairList;
			//}
			else {
				return mValue.mFloat == aOther->mValue.mFloat;
			}
		}
		return false;
	}

	void Value::Assign( Value* aCopy )
	{
		Reset();
		//if (mUnit <= Unit_DummyInherit) {
			// nothing to do, but put this important case first
		//}
		//else 
		if (Unit_Percent <= mUnit) {
			mValue.mFloat = aCopy->mValue.mFloat;
			//MOZ_ASSERT(!MOZ_DOUBLE_IS_NaN(mValue.mFloat));
		}
		else if (UnitHasStringValue()) {
			mValue.mString = aCopy->mValue.mString;
			mValue.mString->AddRef();
		}
		else if (Unit_Integer <= mUnit && mUnit <= Unit_EnumColor) {
			mValue.mInt = aCopy->mValue.mInt;
		}
		else if (Unit_Color == mUnit) {
			mValue.mColor = aCopy->mValue.mColor;
		}
		//else if (UnitHasArrayValue()) {
		//	mValue.mArray = aCopy->mValue.mArray;
		//	mValue.mArray->AddRef();
		//}
		//else if (Unit_URL == mUnit) {
		//	mValue.mURL = aCopy->mValue.mURL;
		//	mValue.mURL->AddRef();
		//}
		//else if (Unit_Image == mUnit) {
		//	mValue.mImage = aCopy->mValue.mImage;
		//	mValue.mImage->AddRef();
		//}
		//else if (Unit_Gradient == mUnit) {
		//	mValue.mGradient = aCopy->mValue.mGradient;
		//	mValue.mGradient->AddRef();
		//}
		//else if (Unit_Pair == mUnit) {
		//	mValue.mPair = aCopy->mValue.mPair;
		//	mValue.mPair->AddRef();
		//}
		//else if (Unit_Triplet == mUnit) {
		//	mValue.mTriplet = aCopy->mValue.mTriplet;
		//	mValue.mTriplet->AddRef();
		//}
		else if (Unit_Rect == mUnit) {
			mValue.mRect = aCopy->mValue.mRect;
			mValue.mRect->AddRef();
		}
		//else if (Unit_List == mUnit) {
		//	mValue.mList = aCopy->mValue.mList;
		//	mValue.mList->AddRef();
		//}
		//else if (Unit_ListDep == mUnit) {
		//	mValue.mListDependent = aCopy->mValue.mListDependent;
		//}
		//else if (Unit_PairList == mUnit) {
		//	mValue.mPairList = aCopy->mValue.mPairList;
		//	mValue.mPairList->AddRef();
		//}
		//else if (Unit_PairListDep == mUnit) {
		//	mValue.mPairListDependent = aCopy->mValue.mPairListDependent;
		//}
		else {
			NOTREACHED();
		}
	}

	float Value::GetPixelLength() const
	{
		DCHECK(IsPixelLengthUnit());
		switch (mUnit) {
		case Unit_Pixel: 
			return mValue.mFloat;
		default:
			NOTREACHED();
			return 0;
		}
		return 0;
	}

	void Value::DoReset()
	{
		if (UnitHasStringValue()) {
			mValue.mString->Release();
		//} else if (UnitHasArrayValue()) {
		//	mValue.mArray->Release();
		//} else if (Unit_URL == mUnit) {
		//	mValue.mURL->Release();
		//} else if (Unit_Image == mUnit) {
		//	mValue.mImage->Release();
		//} else if (Unit_Gradient == mUnit) {
		//	mValue.mGradient->Release();
		//} else if (Unit_Pair == mUnit) {
		//	mValue.mPair->Release();
		//} else if (Unit_Triplet == mUnit) {
		//	mValue.mTriplet->Release();
		} else if (Unit_Rect == mUnit) {
			mValue.mRect->Release();
		//} else if (Unit_List == mUnit) {
		//	mValue.mList->Release();
		//} else if (Unit_PairList == mUnit) {
		//	mValue.mPairList->Release();
		}
		mUnit = Unit_Null;
	}

	std::string& Value::GetStringValue( std::string& aBuffer ) const
	{
		DCHECK(UnitHasStringValue());
		aBuffer = mValue.mString->buffer;
		return aBuffer;
	}

	const char* Value::GetStringBufferValue() const
	{
		DCHECK(UnitHasStringValue());
		return mValue.mString->buffer.data();
	}

	void Value::SetIntValue( int32 aValue, Unit aUnit )
	{
		Reset();
		if (aUnit == Unit_Integer || aUnit == Unit_Enumerated ||
			aUnit == Unit_EnumColor) {
				mUnit = aUnit;
				mValue.mInt = aValue;
		}
	}

	void Value::SetPercentValue( float aValue )
	{
		Reset();
		mUnit = Unit_Percent;
		mValue.mFloat = aValue;
	}

	void Value::SetFloatValue( float aValue, Unit aUnit )
	{
		Reset();
		if (Unit_Number <= aUnit) {
			mUnit = aUnit;
			mValue.mFloat = aValue;
		}
	}

	void Value::SetStringValue( const std::string& aValue, Unit aUnit )
	{
		Reset();
		mUnit = aUnit;
		if (UnitHasStringValue()) {
			mValue.mString = new StringValue(aValue);
			//if (MOZ_UNLIKELY(!mValue.mString)) {
				// XXXbz not much we can do here; just make sure that our promise of a
				// non-null mValue.mString holds for string units.
				//mUnit = eCSSUnit_Null;
			//}
		} else
			mUnit = Unit_Null;
	}

	void Value::SetColorValue( unsigned aValue )
	{
		Reset();
		mUnit = Unit_Color;
		mValue.mColor = aValue;
	}

	void Value::SetAutoValue()
	{
		Reset();
		mUnit = Unit_Auto;
	}

	void Value::SetInheritValue()
	{
		Reset();
		mUnit = Unit_Inherit;
	}

	void Value::SetNoneValue()
	{
		Reset();
		mUnit = Unit_None;
	}

	void Value::SetNormalValue()
	{
		Reset();
		mUnit = Unit_Normal;
	}

	void Value::AppendToString( Property::Id aProperty, std::string& aResult ) const
	{
		Unit unit = GetUnit();
		if (unit == Unit_Null) {
			return;
		}

		if (Unit_Integer == unit) {
			//aResult.AppendInt(GetIntValue(), 10);
			base::StringAppendF(&aResult, "%d", GetIntValue());
		}
		else if (Unit_Percent == unit) {
			//aResult.AppendFloat(GetPercentValue() * 100.0f);
			base::StringAppendF(&aResult, "%f", GetPercentValue() * 100.0f);
		}
		else if (Unit_Percent < unit) {  // length unit
			//aResult.AppendFloat(GetFloatValue());
			base::StringAppendF(&aResult, "%f", GetPercentValue());
		}

		switch (unit) {
			case Unit_Null:         break;
			case Unit_Auto:         aResult.append("auto");     break;
			case Unit_Inherit:      aResult.append("inherit");  break;
			//case Unit_Initial:      aResult.append("initial");  break;
			case Unit_None:         aResult.append("none");     break;
			case Unit_Normal:       aResult.append("normal");   break;
			//case Unit_System_Font:  aResult.append("-moz-use-system-font"); break;
			//case Unit_All:          aResult.append("all"); break;
			//case Unit_Dummy:
			//case Unit_DummyInherit:
			//	NS_ABORT_IF_FALSE(false, "should never serialize");
			//	break;

			case Unit_String:       break;
			//case Unit_Ident:        break;
			//case Unit_Families:     break;
			//case Unit_URL:          break;
			//case Unit_Image:        break;
			case Unit_Element:      break;
			//case Unit_Array:        break;
			//case Unit_Attr:
			//case Unit_Cubic_Bezier:
			//case Unit_Steps:
			//case Unit_Counter:
			//case Unit_Counters:     aResult.Append(PRUnichar(')'));    break;
			//case Unit_Local_Font:   break;
			//case Unit_Font_Format:  break;
			//case Unit_Function:     break;
			//case Unit_Calc:         break;
			//case Unit_Calc_Plus:    break;
			//case Unit_Calc_Minus:   break;
			//case Unit_Calc_Times_L: break;
			//case Unit_Calc_Times_R: break;
			//case Unit_Calc_Divided: break;
			case Unit_Integer:      break;
			case Unit_Enumerated:   break;
			case Unit_EnumColor:    break;
			case Unit_Color:        break;
			case Unit_Percent:      aResult.append(1,'%');    break;
			case Unit_Number:       break;
			//case Unit_Gradient:     break;
			//case Unit_Pair:         break;
			//case Unit_Triplet:      break;
			case Unit_Rect:         break;
			//case Unit_List:         break;
			//case Unit_ListDep:      break;
			//case Unit_PairList:     break;
			//case Unit_PairListDep:  break;

			//case Unit_Inch:         aResult.append("in");   break;
			//case Unit_Millimeter:   aResult.append("mm");   break;
			//case Unit_PhysicalMillimeter: aResult.append("mozmm");   break;
			//case Unit_Centimeter:   aResult.append("cm");   break;
			//case Unit_Point:        aResult.append("pt");   break;
			//case Unit_Pica:         aResult.append("pc");   break;

			//case Unit_ViewportWidth:  aResult.append("vw");   break;
			//case Unit_ViewportHeight: aResult.append("vh");   break;
			//case Unit_ViewportMin:    aResult.append("vmin"); break;
			//case Unit_ViewportMax:    aResult.append("vmax"); break;

			case Unit_EM:           aResult.append("em");   break;
			//case Unit_XHeight:      aResult.append("ex");   break;
			//case Unit_Char:         aResult.append("ch");   break;
			case Unit_RootEM:       aResult.append("rem");  break;

			case Unit_Pixel:        aResult.append("px");   break;

			case Unit_Degree:       aResult.append("deg");  break;
			//case Unit_Grad:         aResult.append("grad"); break;
			//case Unit_Radian:       aResult.append("rad");  break;
			//case Unit_Turn:         aResult.append("turn");  break;
			
			//case Unit_Hertz:        aResult.append("Hz");   break;
			//case Unit_Kilohertz:    aResult.append("kHz");  break;
			
			//case Unit_Seconds:      aResult.Append(PRUnichar('s'));    break;
			//case Unit_Milliseconds: aResult.append("ms");   break;
		}
	}

	


	RectValue::RectValue( void )
		: mRefCnt(1)
	{

	}

	RectValue::~RectValue()
	{

	}


	StringValue::StringValue()
		: mRefCnt(1)
	{

	}

	StringValue::StringValue( const std::string& in )
		: mRefCnt(1)
		, buffer(in)
	{

	}

}