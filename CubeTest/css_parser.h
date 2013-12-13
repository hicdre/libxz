#pragma once
#include <string>

namespace css
{


	class ParserImpl;
	class Parser
	{
	public:
		Parser();
		~Parser();


	protected:
		ParserImpl* impl;
	};
}