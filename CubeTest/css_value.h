#pragma once

namespace css
{
	class Value
	{
	public:
		//bool isColorCalss() const { return class_type_ == ColorClass;}
		bool isPrimitiveCalss() const { return class_type_ == PrimitiveClass;}
	protected:
		enum ClassType {
			PrimitiveClass,	
			//ColorClass,
		};

		Value(ClassType type) : class_type_(type){}
		~Value(){};

		ClassType class_type_ : 16;
		unsigned primitive_type_ : 16;
	};

	class PrimitiveValue : public Value
	{
	public:
		enum UnitTypes {
			CSS_UNKNOWN = 0,
			CSS_NUMBER = 1,
			CSS_PERCENTAGE = 2,
			CSS_RGBCOLOR = 3,
		};

		bool isNumber() const { return primitive_type_ == CSS_NUMBER;}
		bool isPercentage() const { return primitive_type_ == CSS_PERCENTAGE; }
		bool isRGBColor() const { return primitive_type_ == CSS_RGBCOLOR; }

		double getDoubleValue() const { return value_.num; }
		float getFloatValue() const { return (float)value_.num; }
		int getIntValue() const { return value_.ident; }
		unsigned getRGBA32Value() const { return isRGBColor() ? value_.rgbcolor : 0; }
	private:
		union {
			int ident;
			double num;
			unsigned rgbcolor;
		} value_;
	};
}