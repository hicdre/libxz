#pragma once
#include "base/basictypes.h"
#include "base/string_piece.h"

namespace css
{
	enum TokenType{
		CSS_TOKEN_IDENT, CSS_TOKEN_ATKEYWORD, CSS_TOKEN_HASH,
		CSS_TOKEN_FUNCTION, CSS_TOKEN_STRING, CSS_TOKEN_INVALID_STRING, 
		CSS_TOKEN_URI, CSS_TOKEN_UNICODE_RANGE, CSS_TOKEN_CHAR, 
		CSS_TOKEN_NUMBER, CSS_TOKEN_PERCENTAGE, CSS_TOKEN_DIMENSION,

		/* Those tokens that want strings interned appear above */
		CSS_TOKEN_LAST_INTERN,

		CSS_TOKEN_CDO, CSS_TOKEN_CDC, CSS_TOKEN_S, CSS_TOKEN_COMMENT, 
		CSS_TOKEN_INCLUDES, CSS_TOKEN_DASHMATCH, CSS_TOKEN_PREFIXMATCH, 
		CSS_TOKEN_SUFFIXMATCH, CSS_TOKEN_SUBSTRINGMATCH, CSS_TOKEN_EOF 
	};

	struct Token{
		TokenType type;

		struct {
			char *data;
			size_t len;
		} data;


		int32 col;
		int32 line;
	};

	class Lexer
	{
	public:
		Lexer(const base::StringPiece& input);
		int GetToken(Token** token);


	private:
		int Start(Token** token);

		void EatWhitespaceAndComments();
		bool EatComment();
		void ConsumeDigits();
		bool ConsumeNMChars();


		bool CanConsume(int length);
		const char* NextChar();
		void NextNChars(int n);

		bool IsNMChars(char c);

		int EmitToken(TokenType type, Token** token);

		int AtKeyword(Token** token);
		int Hash(Token** token);

		const char* start_pos_;
		const char* pos_;
		const char* end_pos_;

		Token token_;//current token;
		bool escape_seen_;

		// The index in the input stream to which the parser is wound.
		int index_;
		// The last value of |index_| on the previous line.
		int index_last_line_;

		int line_number_;

		unsigned int state_    : 4;	/**< Current state */
		unsigned int substate_ : 4;	/**< Current substate */
	};
}