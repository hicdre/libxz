#include "stdafx.h"
#include "css_selector.h"
#include "base\string_util.h"
#include <stack>

namespace css
{


	StringList::StringList( const std::string& aAtomValue )
		: mAtom(aAtomValue)
		, mNext(NULL)
	{

	}

	StringList::~StringList( void )
	{
		StringList* p = mNext;
		mNext = NULL;
		while(p)
		{
			StringList* q = p->mNext;
			p->mNext = NULL;
			delete p;
			p = q;
		}
	}

	StringList* StringList::Clone( bool aDeep ) const
	{
		StringList *result = new StringList(mAtom);
		if (!result)
			return NULL;

		if (aDeep)
		{
			StringList *dest = result;                                        
			result->mNext = nullptr;                                          
			for (const StringList *src = mNext; src; src = src->mNext) {
				StringList *clm_clone = src->Clone(false);                        
				if (!clm_clone) {                                                 
					delete result;                                                
					return nullptr;                                                 
				}                                                                 
				dest->mNext = clm_clone;                                          
				dest = clm_clone;                                                 
			}          
		}                                                         
		return result;
	}


	Selector::Selector( void )
		: mIDList(nullptr),
		mClassList(nullptr),
		mNegations(nullptr),
		mNext(nullptr)
	{

	}

	Selector::~Selector( void )
	{
		Reset();

		Selector* p = mNext;
		mNext = NULL;
		while(p)
		{
			Selector* q = p->mNext;
			p->mNext = NULL;
			delete p;
			p = q;
		}
	}

	Selector* Selector::Clone( bool aDeepNext, bool aDeepNegations ) const
	{
		Selector *result = new Selector();
		if (!result)
			return nullptr;

		result->mLowercaseTag = mLowercaseTag;
		result->mCasedTag = mCasedTag;

		if (mIDList) {                       
			result->mIDList = mIDList->Clone();
			if (!result->mIDList) {            
				delete result;                   
				return nullptr;                  
			}                                  
		} 

		if (mClassList) {                       
			result->mClassList = mClassList->Clone();
			if (!result->mClassList) {            
				delete result;                   
				return nullptr;                  
			}                                  
		} 

		if (aDeepNegations) {
			Selector *dest = result;                                        
			result->mNegations = nullptr;                                          
			for (const Selector *src = mNegations; src; src = src->mNegations) {
				Selector *clm_clone = src->Clone(true, false);                        
				if (!clm_clone) {                                                 
					delete result;                                                
					return nullptr;                                                 
				}                                                                 
				dest->mNegations = clm_clone;                                          
				dest = clm_clone;                                                 
			}
		}
		if (aDeepNext) {
			Selector *dest = result;                                        
			result->mNext = nullptr;                                          
			for (const Selector *src = mNext; src; src = src->mNext) {
				Selector *clm_clone = src->Clone(false, true);                        
				if (!clm_clone) {                                                 
					delete result;                                                
					return nullptr;                                                 
				}                                                                 
				dest->mNext = clm_clone;                                          
				dest = clm_clone;                                                 
			}
		}

		return result;
	}

	void Selector::Reset( void )
	{
		mLowercaseTag.clear();
		mCasedTag.clear();

		if (mIDList){
			delete mIDList;
			mIDList = NULL;
		}

		if (mClassList){
			delete mClassList;
			mClassList = NULL;
		}
	}

	void Selector::SetTag( const std::string& aTag )
	{
		if (aTag.empty()) {
			mLowercaseTag.clear();
			mCasedTag.clear();
			return;
		}

		mCasedTag = aTag;

		mLowercaseTag = StringToLowerASCII(aTag);
	}

	void Selector::AddID( const std::string& aID )
	{
		if (!aID.empty()) {
			StringList** list = &mIDList;
			while (nullptr != *list) {
				list = &((*list)->mNext);
			}
			*list = new StringList(aID);
		}
	}

	void Selector::AddClass( const std::string& aClass )
	{
		if (!aClass.empty()) {
			StringList** list = &mClassList;
			while (nullptr != *list) {
				list = &((*list)->mNext);
			}
			*list = new StringList(aClass);
		}
	}

	int32 Selector::CalcWeightWithoutNegations() const
	{
		int32 weight = 0;

		if (!mLowercaseTag.empty()) {
			weight += 0x000001;
		}
		StringList* list = mIDList;
		while (nullptr != list) {
			weight += 0x010000;
			list = list->mNext;
		}
		list = mClassList;
		while (nullptr != list) {
			weight += 0x000100;
			list = list->mNext;
		}
		return weight;
	}

	int32 Selector::CalcWeight() const
	{
		// Loop over this selector and all its negations.
		int32 weight = 0;
		for (const Selector *n = this; n; n = n->mNegations) {
			weight += n->CalcWeightWithoutNegations();
		}
		return weight;
	}

	void Selector::ToString( std::string& aString, StyleSheet* aSheet, bool aAppend /*= false*/ ) const
	{
		if (!aAppend)
			aString.clear();

		std::stack<const Selector*> stacks;
		for (const Selector *s = this; s; s = s->mNext) {
			stacks.push(s);
		}

		while (!stacks.empty()) 
		{
			const Selector *s = stacks.top();
			stacks.pop();

			s->AppendToStringWithoutCombinators(aString, aSheet);
		}
	}

	void Selector::AppendToStringWithoutCombinators( std::string& aString, StyleSheet* aSheet ) const
	{
		AppendToStringWithoutCombinatorsOrNegations(aString, aSheet, false);

		for (const Selector* negation = mNegations; negation;
			negation = negation->mNegations) {
				aString.append(":not(");
				negation->AppendToStringWithoutCombinatorsOrNegations(aString, aSheet,
					true);
				aString.append(1,')');
		}
	}

	void Selector::AppendToStringWithoutCombinatorsOrNegations( std::string& aString, StyleSheet* aSheet, bool aIsNegated ) const
	{
		std::string temp;
		bool isPseudoElement = IsPseudoElement();

		if (mLowercaseTag.empty()) 
		{
			// Universal selector:  avoid writing the universal selector when we
			// can avoid it, especially since we're required to avoid it for the
			// inside of :not()
			if ((!mIDList && !mClassList && (aIsNegated || !mNegations))) {
					aString.append(1,'*');
			}
		} 
		else 
		{
			// Append the tag name
			std::string tag = (isPseudoElement ? mLowercaseTag : mCasedTag);

			if (isPseudoElement) {
				/*if (!mNext) {
					// Lone pseudo-element selector -- toss in a wildcard type selector
					// XXXldb Why?
					aString.Append(PRUnichar('*'));
				}
				if (!nsCSSPseudoElements::IsCSS2PseudoElement(mLowercaseTag)) {
					aString.Append(PRUnichar(':'));
				}
				// This should not be escaped since (a) the pseudo-element string
				// has a ":" that can't be escaped and (b) all pseudo-elements at
				// this point are known, and therefore we know they don't need
				// escaping.
				aString.Append(tag);*/
			} else {
				//nsStyleUtil::AppendEscapedCSSIdent(tag, aString);
				aString.append(tag);
			}
		}

		// Append the id, if there is one
		if (mIDList) {
			StringList* list = mIDList;
			while (list != nullptr) {
				temp = list->mAtom;
				aString.append(1, '#');
				//nsStyleUtil::AppendEscapedCSSIdent(temp, aString);
				aString.append(temp);
				list = list->mNext;
			}
		}

		// Append each class in the linked list
		if (mClassList) {
			if (isPseudoElement) {
				NOTREACHED()<<"Can't happen";
			} else {
				StringList* list = mClassList;
				while (list != nullptr) {
					temp = list->mAtom;
					aString.append(1, '.');
					//nsStyleUtil::AppendEscapedCSSIdent(temp, aString);
					aString.append(temp);
					list = list->mNext;
				}
			}
		}
	}

}