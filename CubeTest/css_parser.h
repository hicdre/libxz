#pragma once
#include <string>

namespace css
{
	class Parser
	{
	public:
		Parser();
		~Parser();

		void ParseChunk(const std::string& data);


	private:
		struct State
		{
			unsigned int state : 16;
			unsigned int substate : 16;
		};

		


		State state_;
	};
}