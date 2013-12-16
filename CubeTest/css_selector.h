#pragma once
#include <string>
#include "base\basictypes.h"
#include "base\memory\scoped_ptr.h"

namespace css
{
	class StyleSheet;
	//暂不支持伪类

	//暂不支持属性

	class StringList
	{
	public:
		StringList(const std::string& aAtomValue);
		~StringList(void);

		/** Do a deep clone.  Should be used only on the first in the linked list. */
		StringList* Clone() const { return Clone(true); }

		//size_t SizeOfIncludingThis(nsMallocSizeOfFun aMallocSizeOf) const;

		std::string       mAtom;
		StringList*       mNext;
	private: 
		StringList* Clone(bool aDeep) const;

		DISALLOW_COPY_AND_ASSIGN(StringList);
	};
	
	class Selector
	{
	public:
		Selector(void);
		~Selector(void);

		/** Do a deep clone.  Should be used only on the first in the linked list. */
		Selector* Clone() const { return Clone(true, true); }

		void Reset(void);
		void SetTag(const std::string& aTag);
		void AddID(const std::string& aID);
		void AddClass(const std::string& aClass);
		//void AddPseudoClass(nsCSSPseudoClasses::Type aType);
		//void AddAttribute(int32_t aNameSpace, const nsString& aAttr);

		inline bool HasTagSelector() const {
			return mCasedTag.empty();
		}

		inline bool IsPseudoElement() const {
			return !mLowercaseTag.empty() && mCasedTag.empty();
		}

		// Calculate the specificity of this selector (not including its mNext!).
		int32 CalcWeight() const;

		void ToString(std::string& aString, StyleSheet* aSheet,
			bool aAppend = false) const;
	private:
		Selector* Clone(bool aDeepNext, bool aDeepNegations) const;

		void AppendToStringWithoutCombinators(std::string& aString,
			StyleSheet* aSheet) const;

		void AppendToStringWithoutCombinatorsOrNegations(std::string& aString,
			StyleSheet* aSheet,
			bool aIsNegated) const;

		int32 CalcWeightWithoutNegations() const;
	public:
		//mLowercaseTag is lowercase.
		//for pseudo-elements mCasedTag will be null but mLowercaseTag
		// contains their name.
		std::string mLowercaseTag;
		std::string mCasedTag;
		StringList* mIDList;
		StringList* mClassList;

		Selector*  mNegations;
		Selector*  mNext;

		DISALLOW_COPY_AND_ASSIGN(Selector);
	};

}