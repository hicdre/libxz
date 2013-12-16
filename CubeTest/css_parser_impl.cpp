#include "stdafx.h"
#include "css_parser_impl.h"
#include "css_stylesheet.h"

namespace css
{


	ParserImpl::ParserImpl()
		: mToken(),
		mScanner(nullptr),
		mHavePushBack(false),
		mSheet(nullptr)
	{

	}

	ParserImpl::~ParserImpl()
	{

	}

	void ParserImpl::SetStyleSheet( StyleSheet* aSheet )
	{
		 mSheet = aSheet;
	}

	void ParserImpl::Reset()
	{
		SetStyleSheet(nullptr);
	}

	void ParserImpl::InitScanner( Scanner& aScanner )
	{
		mScanner = &aScanner;
		//mReporter = &aReporter;
		//mScanner->SetErrorReporter(mReporter);

		mHavePushBack = false;
	}

	void ParserImpl::ReleaseScanner()
	{
		mScanner = nullptr;
	}

	bool ParserImpl::ParseSheet( const std::string& aInput, uint32 aLineNumber )
	{
		Scanner scanner(aInput, aLineNumber);
		//css::ErrorReporter reporter(scanner, mSheet, mChildLoader, aSheetURI);
		InitScanner(scanner);


		Token* tk = &mToken;
		for (;;) {
			// Get next non-whitespace token
			if (!GetToken(true)) {
				break;
			}
			if (Token_HTMLComment == tk->mType) {
				continue; // legal here only
			}
			if (Token_AtKeyword == tk->mType) {
				ParseAtRule(AppendRuleToSheet, this, false);
				continue;
			}
			UngetToken();
			if (ParseRuleSet(AppendRuleToSheet, this)) {
				//mSection = eCSSSection_General;
			}
		}
		ReleaseScanner();

		// XXX check for low level errors
		return true;
	}

	bool ParserImpl::ParseStyleAttribute( const std::string& aAttributeValue, Rule** aResult )
	{

	}


	bool ParserImpl::ParseRuleSet( RuleAppendFunc aAppendFunc, void* aData, bool aInsideBraces )
	{
		/*SelectorList* slist = nullptr;
		uint32_t linenum = mScanner->GetLineNumber();
		if (! ParseSelectorList(slist, PRUnichar('{'))) {
			REPORT_UNEXPECTED(PEBadSelectorRSIgnored);
			OUTPUT_ERROR();
			SkipRuleSet(aInsideBraces);
			return false;
		}
		NS_ASSERTION(nullptr != slist, "null selector list");
		CLEAR_ERROR();

		// Next parse the declaration block
		uint32_t parseFlags = eParseDeclaration_InBraces |
			eParseDeclaration_AllowImportant;
		css::Declaration* declaration = ParseDeclarationBlock(parseFlags);
		if (nullptr == declaration) {
			delete slist;
			return false;
		}

		// Translate the selector list and declaration block into style data

		nsRefPtr<css::StyleRule> rule = new css::StyleRule(slist, declaration);
		rule->SetLineNumber(linenum);
		(*aAppendFunc)(rule, aData);*/

		return true;
	}


	

	bool ParserImpl::GetToken(bool aSkipWS)
	{
		if (mHavePushBack) {
			mHavePushBack = false;
			if (!aSkipWS || mToken.mType != Token_Whitespace) {
				return true;
			}
		}
		return mScanner->Next(mToken, aSkipWS);
	}

	void ParserImpl::UngetToken()
	{
		mHavePushBack = true;
	}

	bool ParserImpl::ExpectSymbol( char aSymbol, bool aSkipWS )
	{
		if (!GetToken(aSkipWS)) {
			// CSS2.1 specifies that all "open constructs" are to be closed at
			// EOF.  It simplifies higher layers if we claim to have found an
			// ), ], }, or ; if we encounter EOF while looking for one of them.
			// Do still issue a diagnostic, to aid debugging.
			if (aSymbol == ')' || aSymbol == ']' ||
				aSymbol == '}' || aSymbol == ';') {
					//REPORT_UNEXPECTED_EOF_CHAR(aSymbol);
					return true;
			}
			else
				return false;
		}
		if (mToken.IsSymbol(aSymbol)) {
			return true;
		}
		UngetToken();
		return false;
	}

	bool ParserImpl::CheckEndProperty()
	{
		if (!GetToken(true)) {
			return true; // properties may end with eof
		}
		if ((Token_Symbol == mToken.mType) &&
			((';' == mToken.mSymbol) ||
			('!' == mToken.mSymbol) ||
			('}' == mToken.mSymbol) ||
			(')' == mToken.mSymbol))) {
				// XXX need to verify that ! is only followed by "important [;|}]
				// XXX this requires a multi-token pushback buffer
				UngetToken();
				return true;
		}
		UngetToken();
		return false;
	}

}