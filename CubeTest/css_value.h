#pragma once
#include "base/basictypes.h"
#include "base/logging.h"

namespace css
{
	enum Unit {
		Unit_Null,	// (n/a) null unit, value is not specified
		Unit_None,   // (n/a) value is none
		Unit_Auto,	// (n/a) value is algorithmic
		Unit_Inherit,      // (n/a) value is inherited
		Unit_Normal,      // (n/a) value is normal (algorithmic, different than auto)

		Unit_String,  // (string*) a string value
		Unit_Element,     // (string*) an element id
		
		Unit_Rect, // (RectValue*) rectangle (four values)

		Unit_Integer,
		Unit_Enumerated,
		Unit_EnumColor,
		Unit_Color,

		Unit_Percent,
		Unit_Number,

		// Length units - relative
		Unit_EM,    // (float) == current font size
		Unit_RootEM,    // (float) == root element font size

		Unit_Pixel,// (float) CSS pixel unit

		Unit_Degree// (float) 360 per circle
	};

	struct StringValue;
	struct RectValue;
	class Value
	{
	public:
		Value(Unit nUnit = Unit_Null) : mUnit(nUnit){}
		Value(int32 val, Unit nUnit);
		Value(float val, Unit nUnit);
		Value(const std::string& aValue, Unit aUnit);

		~Value(){ Reset();};

		bool IsEqual(Value* in) const;
		void Assign(Value* in);

		/**
		* Serialize |this| as a specified value for |aProperty| and append
		* it to |aResult|.
		*/
		void AppendToString(PropertyId aProperty, std::string& aResult) const;

		Unit GetUnit() const { return mUnit; }
		bool IsLengthUnit() const { return Unit_EM <= mUnit && mUnit <= Unit_Pixel; }
		bool IsFixedLengthUnit() const { return false; }
		bool IsRelativeLengthUnit() const  { return Unit_EM <= mUnit && mUnit <= Unit_RootEM; }
		bool IsPixelLengthUnit() const { return  mUnit == Unit_Pixel; }
		bool IsAngularUnit() const  { return Unit_Degree == mUnit; }
		bool UnitHasStringValue() const	{ 
			return Unit_String <= mUnit && mUnit <= Unit_Element;
		}
		bool UnitHasArrayValue() const { return false; }

		int32 GetIntValue() const
		{
			DCHECK(mUnit == Unit_Integer ||
				mUnit == Unit_Enumerated ||
				mUnit == Unit_EnumColor);
			return mValue.mInt;
		}

		float GetPercentValue() const
		{
			DCHECK(mUnit == Unit_Percent);
			return mValue.mFloat;
		}

		float GetFloatValue() const
		{
			//NS_ABORT_IF_FALSE(eCSSUnit_Number <= mUnit, "not a float value");
			//MOZ_ASSERT(!MOZ_DOUBLE_IS_NaN(mValue.mFloat));
			return mValue.mFloat;
		}

		float GetAngleValue() const
		{
			DCHECK(mUnit == Unit_Degree);
			return mValue.mFloat;
		}

		std::string& GetStringValue(std::string& aBuffer) const;

		const char* GetStringBufferValue() const;

		unsigned GetColorValue() const
		{
			DCHECK(mUnit == Unit_Color);
			return mValue.mInt;
		}

		float GetPixelLength() const;

		void Reset()  // sets to null
		{
			if (mUnit != Unit_Null)
				DoReset();
		}
	private:
		void DoReset();
	public:
		void SetIntValue(int32 aValue, Unit aUnit);
		void SetPercentValue(float aValue);
		void SetFloatValue(float aValue, Unit aUnit);
		void SetStringValue(const std::string& aValue, Unit aUnit);
		void SetColorValue(unsigned aValue);
		//void SetArrayValue(nsCSSValue::Array* aArray, nsCSSUnit aUnit);
		//void SetURLValue(mozilla::css::URLValue* aURI);
		//void SetImageValue(mozilla::css::ImageValue* aImage);
		//void SetGradientValue(nsCSSValueGradient* aGradient);
		//void SetPairValue(const nsCSSValuePair* aPair);
		//void SetPairValue(const nsCSSValue& xValue, const nsCSSValue& yValue);
		//void SetDependentListValue(nsCSSValueList* aList);
		//void SetDependentPairListValue(nsCSSValuePairList* aList);
		//void SetTripletValue(const nsCSSValueTriplet* aTriplet);
		//void SetTripletValue(const nsCSSValue& xValue, const nsCSSValue& yValue, const nsCSSValue& zValue);
		void SetAutoValue();
		void SetInheritValue();
		//void SetInitialValue();
		void SetNoneValue();
		//void SetAllValue();
		void SetNormalValue();
		//void SetSystemFontValue();
		//void SetDummyValue();
		//void SetDummyInheritValue();
	protected:
		Unit mUnit;
		union {
			int32 mInt;
			unsigned mColor;
			float mFloat;
			StringValue* mString;
			RectValue* mRect;
		} mValue;
		DISALLOW_COPY_AND_ASSIGN(Value);
	};

	struct RectValue {
		RectValue(void);
		~RectValue();

		//void AppendToString(nsCSSProperty aProperty, nsAString& aResult) const;

		bool IsEqual(RectValue* aOther) const {
			return mTop.IsEqual(&aOther->mTop) &&
				mRight.IsEqual(&aOther->mRight) &&
				mBottom.IsEqual(&aOther->mBottom) &&
				mLeft.IsEqual(&aOther->mLeft);
		}

		void SetAllSidesTo(Value* aValue);

		bool AllSidesEqualTo(Value* aValue) const {
			return mTop.IsEqual(aValue) &&
				mRight.IsEqual(aValue) &&
				mBottom.IsEqual(aValue) &&
				mLeft.IsEqual(aValue);
		}

		void Reset() {
			mTop.Reset();
			mRight.Reset();
			mBottom.Reset();
			mLeft.Reset();
		}

		bool HasValue() const {
			return
				mTop.GetUnit() != Unit_Null ||
				mRight.GetUnit() != Unit_Null ||
				mBottom.GetUnit() != Unit_Null ||
				mLeft.GetUnit() != Unit_Null;
		}

		Value mTop;
		Value mRight;
		Value mBottom;
		Value mLeft;

		typedef Value RectValue::*side_type;
		static const side_type sides[4];

		void AddRef() {
			if (mRefCnt == size_t(-1)) { // really want SIZE_MAX
				//NS_WARNING("refcount overflow, leaking nsCSSValue::Array");
				return;
			}
			++mRefCnt;
			//NS_LOG_ADDREF(this, mRefCnt, "nsCSSValue::Array", sizeof(*this));
		}
		void Release() {
			if (mRefCnt == size_t(-1)) { // really want SIZE_MAX
				//NS_WARNING("refcount overflow, leaking nsCSSValue::Array");
				return;
			}
			--mRefCnt;
			//NS_LOG_RELEASE(this, mRefCnt, "nsCSSValue::Array");
			if (mRefCnt == 0)
				delete this;
		}
	private:
		size_t mRefCnt;
	};

	struct StringValue{
		StringValue();
		StringValue(const std::string& in);

		bool IsEqual(StringValue* value) const{
			return buffer.compare(value->buffer) == 0;
		}

		std::string buffer;
		void AddRef() {
			if (mRefCnt == size_t(-1)) { // really want SIZE_MAX
				return;
			}
			++mRefCnt;
		}
		void Release() {
			if (mRefCnt == size_t(-1)) { // really want SIZE_MAX
				return;
			}
			--mRefCnt;
			if (mRefCnt == 0)
				delete this;
		}
	private:
		size_t mRefCnt;
	};
}