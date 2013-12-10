#include "stdafx.h"
#include "base/logging.h"
#include "css_lexter.h"

namespace css
{
	enum {
		sSTART		=  0,
		sATKEYWORD	=  1,
		sSTRING		=  2,
		sHASH		=  3,
		sNUMBER		=  4, 
		sCDO		=  5,
		sCDC		=  6,
		sS		=  7,
		sCOMMENT	=  8,
		sMATCH		=  9, 
		sURI		= 10,
		sIDENT		= 11,
		sESCAPEDIDENT	= 12,
		sURL		= 13,
		sUCR		= 14 
	};

	Lexer::Lexer(const base::StringPiece& input)
	{
		start_pos_ = input.data();
		pos_ = start_pos_;
		end_pos_ = start_pos_ + input.length();
		line_number_ = 1;

		token_.type = CSS_TOKEN_EOF;
		token_.data.data = NULL;
		token_.data.len = 0;
	}		

	int Lexer::GetToken( Token** token )
	{
		switch (state_)
		{
		case sSTART:
			return Start(token);
		/*case sATKEYWORD:
			return AtKeyword(token);
		case sSTRING:
			return String(token);
		case sHASH:
			return Hash(token);
		case sNUMBER:
			return NumberOrPercentageOrDimension(token);
		case sCDO:
			return CDO(lexer, token);
		case sCDC:
			return CDCOrIdentOrFunctionOrNPD(token);
		case sS:
			return S(token);
		case sCOMMENT:
			error = Comment(token);
			if (!lexer->emit_comments && error == CSS_OK && 
				(*token)->type == CSS_TOKEN_COMMENT)
				goto start;
			return error;
		case sMATCH:
			return Match(token);
		case sURI:
			return URI(lexer, token);
		case sIDENT:
			return IdentOrFunction(lexer, token);
		case sESCAPEDIDENT:
			return EscapedIdentOrFunction(lexer, token);
		case sURL:
			return URI(lexer, token);
		case sUCR:
			return UnicodeRange(lexer, token);*/
		}

		return 0;
	}

	int Lexer::Start( Token** token )
	{
		Token *t = &token_;
		char c;
		size_t clen;
		int error;

		EatWhitespaceAndComments();
		if (!CanConsume(1))
			return EmitToken(CSS_TOKEN_EOF, token);

		switch (*pos_) {
		//case '@':
		//	state_ = sATKEYWORD;
		//	substate_ = 0;
		//	return AtKeyword(token);
		case '#':
			state_ = sHASH;
			substate_ = 0;
			return Hash(token);
		}
	}

	void Lexer::EatWhitespaceAndComments()
	{
		while (pos_ < end_pos_) {
			switch (*pos_) {
			case '\r':
			case '\n':
				index_last_line_ = index_;
				// Don't increment line_number_ twice for "\r\n".
				if (!(*pos_ == '\n' && pos_ > start_pos_ && *(pos_ - 1) == '\r'))
					++line_number_;
				// Fall through.
			case ' ':
			case '\t':
				NextChar();
				break;
			case '/':
				if (!EatComment())
					return;
				break;
			default:
				return;
			}
		}
	}

	bool Lexer::EatComment()
	{
		if (*pos_ != '/' || !CanConsume(1))
			return false;

		char next_char = *NextChar();
		if (next_char == '/') {
			// Single line comment, read to newline.
			while (CanConsume(1)) {
				char next_char = *NextChar();
				if (next_char == '\n' || next_char == '\r')
					return true;
			}
		} else if (next_char == '*') {
			char previous_char = '\0';
			// Block comment, read until end marker.
			while (CanConsume(1)) {
				next_char = *NextChar();
				if (previous_char == '*' && next_char == '/') {
					// EatWhitespaceAndComments will inspect pos_, which will still be on
					// the last / of the comment, so advance once more (which may also be
					// end of input).
					NextChar();
					return true;
				}
				previous_char = next_char;
			}

			// If the comment is unterminated, GetNextToken will report T_END_OF_INPUT.
		}

		return false;
	}

	inline bool Lexer::CanConsume( int length )
	{
		return pos_ + length <= end_pos_;
	}

	const char* Lexer::NextChar()
	{
		DCHECK(CanConsume(1));
		++index_;
		++pos_;
		return pos_;
	}

	void Lexer::NextNChars( int n )
	{
		DCHECK(CanConsume(n));
		index_ += n;
		pos_ += n;
	}

	int Lexer::EmitToken( TokenType type, Token** token )
	{
		token_.type = type;

		switch (type) {
		case CSS_TOKEN_EOF:
			token_.data.data = NULL;
			break;
		case CSS_TOKEN_ATKEYWORD:
			/* Strip the '@' from the front */
			token_.data.data += 1;
			token_.data.len -= 1;
			break;
		case CSS_TOKEN_STRING:
			/* Strip the leading quote */
			token_.data.data += 1;
			token_.data.len -= 1;

			/* Strip the trailing quote, iff it exists (may have hit EOF) */
			//if (token_.data.len > 0 && (token_.data.data[token_.data.len - 1] == '"' ||
			//		t->data.data[t->data.len - 1] == '\'')) {
			//	t->data.len -= 1;
			//}
			break;
		case CSS_TOKEN_INVALID_STRING:
			/* Strip the leading quote */
			token_.data.data += 1;
			token_.data.len -= 1;
			break;
		case CSS_TOKEN_HASH:
			/* Strip the '#' from the front */
			token_.data.data += 1;
			token_.data.len -= 1;
			break;
		case CSS_TOKEN_PERCENTAGE:
			/* Strip the '%' from the end */
			token_.data.len -= 1;
			break;
		case CSS_TOKEN_DIMENSION:
			break;
		case CSS_TOKEN_URI:
			/* Strip the "url(" from the start */
			token_.data.data += 4;
			token_.data.len -= 4;

			/* Strip any leading whitespace */
			//while (isSpace(t->data.data[0])) {
			//	t->data.data++;
			//	t->data.len--;
			//}

			/* Strip any leading quote */
			//if (t->data.data[0] == '"' || t->data.data[0] == '\'') {
			//	t->data.data += 1;
			//	t->data.len -= 1;
			//}

			/* Strip the trailing ')' */
			//t->data.len -= 1;
			//
			///* Strip any trailing whitespace */
			//while (t->data.len > 0 &&
			//		isSpace(t->data.data[t->data.len - 1])) {
			//	t->data.len--;
			//}
			//
			///* Strip any trailing quote */
			//if (t->data.len > 0 && (t->data.data[t->data.len - 1] == '"' || 
			//		t->data.data[t->data.len - 1] == '\'')) {
			//	t->data.len -= 1;
			//}
			break;
		case CSS_TOKEN_FUNCTION:
			/* Strip the trailing '(' */
			token_.data.len -= 1;
			break;
		default:
			break;
		}

		*token = &token_;

		/* Reset the lexer's state */
		state_ = sSTART;
		substate_ = 0;

		return 0;
	}

	int Lexer::AtKeyword( Token** token )
	{

	}

	int Lexer::Hash( Token** token )
	{
		const char* prev_pos_ = pos_;
		NextChar();//skip '#'
		if (!ConsumeNMChars())
			return -1;

		/* Require at least one NMChar otherwise, we're just a raw '#' */
		if (pos_ - prev_pos_ > 0)
			return EmitToken(CSS_TOKEN_HASH, token);

		return EmitToken(CSS_TOKEN_CHAR, token);
	}

	bool Lexer::ConsumeNMChars()
	{
		/* nmchar = [a-zA-Z] | '-' | '_' | nonascii | escape */
		while (IsNMChars(*pos_));
		{
			char c = *pos_;

			if (!CanConsume(1))
				return false;

			char c = *pos_;

		} 
	}

	bool Lexer::IsNMChars( char c )
	{
		return c == '_' || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || 
			('0' <= c && c <= '9') || c == '-' || c >= 0x80;
	}


}