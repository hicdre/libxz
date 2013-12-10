#pragma once
#include "base\memory\scoped_ptr.h"
#include <string>

namespace css
{
	class Parser;
	class StyleSheet
	{
	public:
		StyleSheet();
		~StyleSheet();

		void AddData(const std::string& data);
	private:
		scoped_ptr<Parser> parser_;
	};
}