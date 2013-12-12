#pragma once
#include "base/basictypes.h"
#include "css_const.h"
#include <vector>
#include <unordered_map>
#include "css_value.h"

namespace css
{
	class Value;
	class Declaration
	{
	public:
		Declaration();
		~Declaration();

		void RemoveProperty(PropertyId aProperty);

		bool HasProperty(PropertyId aProperty) const;

		void GetValue(PropertyId aProperty, std::string& aValue) const;

		int32 Count() const;

		// Returns whether we actually had a property at aIndex
		//bool GetNthProperty(int32 aIndex, std::string& aReturn) const;

		void ToString(std::string& aString) const;

		/**
		* Initialize this declaration as holding no data.  Cannot fail.
		*/
		void InitializeEmpty();

		void ClearData();
	private:
		bool AppendValueToString(PropertyId aProperty, std::string& aResult) const;
		// Helper for ToString with strange semantics regarding aValue.
		void AppendPropertyAndValueToString(PropertyId aProperty,
			std::string& aValue,
			std::string& aResult) const;

		std::unordered_map<PropertyId, Value*> mData;
	};
}