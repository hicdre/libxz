#include "stdafx.h"
#include "css_value.h"

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
			mValue.mString = new std::string(aValue);
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
				return (mValue.mString->compare(*aOther->mValue.mString)
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

	

}