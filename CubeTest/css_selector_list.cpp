#include "stdafx.h"
#include "css_selector_list.h"
#include "base\logging.h"

namespace css
{
	SelectorList::SelectorList()
		: mSelectors(nullptr),
		mWeight(0),
		mNext(nullptr)
	{

	}

	SelectorList::~SelectorList()
	{
		delete mSelectors;

		SelectorList* p = mNext;
		mNext = NULL;
		while(p)
		{
			SelectorList* q = p->mNext;
			p->mNext = NULL;
			delete p;
			p = q;
		}
	}

	Selector* SelectorList::AddSelector( char aOperator )
	{
		Selector* newSel = new Selector();

		if (mSelectors) {
			DCHECK(aOperator != 0)<<"chaining without combinator";
			//mSelectors->SetOperator(aOperator);
		} else {
			DCHECK(aOperator == 0)<<"combinator without chaining";
		}

		newSel->mNext = mSelectors;
		mSelectors = newSel;
		return newSel;
	}

	void SelectorList::ToString( std::string& aResult, StyleSheet* aSheet )
	{
		aResult.clear();
		SelectorList *p = this;
		for (;;) {
			p->mSelectors->ToString(aResult, aSheet, true);
			p = p->mNext;
			if (!p)
				break;
			aResult.append(", ");
		}
	}

	SelectorList* SelectorList::Clone( bool aDeep ) const
	{
		SelectorList *result = new SelectorList();
		result->mWeight = mWeight;
		if(mSelectors)
		{
			result->mSelectors = mSelectors->Clone();
		}

		if (aDeep) {
			SelectorList *dest = result;                                        
			result->mNext = nullptr;                                          
			for (const SelectorList *src = mNext; src; src = src->mNext) {
				SelectorList *clm_clone = src->Clone(false);                        
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

}

