#pragma once
#include <string>
#include <queue>


class Node;
class XmlConstructer
{
public:
	XmlConstructer(Node* node);

	void Load( const std::wstring& file );

	
private:
	

	Node* root_;

	//std::queue<Instruction> instructions_queue_;
};