#pragma once

namespace css
{
	class Selector
	{
	public:
		enum Type {
			TYPE,
			CLASS,
			ID
		};


	private:
		Type type_;
	};
}