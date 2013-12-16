#pragma once
#include "base\memory\scoped_ptr.h"
#include <string>

namespace css
{
	class RuleList;
	class StyleSheet
	{
	public:
		StyleSheet();
		~StyleSheet();

		bool HasRules() const;
		void SetEnabled(bool aEnabled);
		bool IsComplete() const;
		void SetComplete();

		void AppendStyleSheet(StyleSheet* aSheet);
		void InsertStyleSheetAt(StyleSheet* aSheet, int32 aIndex);

		// XXX do these belong here or are they generic?
		void PrependStyleRule(Rule* aRule);
		void AppendStyleRule(Rule* aRule);
		void ReplaceStyleRule(Rule* aOld, Rule* aNew);

		int32 StyleRuleCount() const;
		bool GetStyleRuleAt(int32 aIndex, Rule*& aRule) const;

		int32 StyleSheetCount() const;

		bool IsModified() const { return mDirty; }

		/**
		* Like the DOM insertRule() method, but doesn't do any security checks
		*/
		bool InsertRuleInternal(const std::string& aRule,
								  uint32 aIndex, uint32* aReturn);
	private:
		std::string              mTitle;
		bool                  mDisabled;
		bool                  mDirty; // has been modified 

		scoped_ptr<RuleList> mRuleCollection;
	};
}