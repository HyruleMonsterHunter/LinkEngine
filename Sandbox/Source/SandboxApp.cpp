#include <LinkEngine.h>
#include <iostream>

#pragma region Test
//namespace LinkEngine
//{
//	__declspec(dllimport) void Print();
//}
//
//int main()
//{
//	// test print
//	LinkEngine::Print();
//
//	// get char
//	char c = std::cin.get();
//	std::cout << c << std::endl;
//}
#pragma endregion

class Sandbox : public LinkEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

private:

};


// Entry point
LinkEngine::Application* LinkEngine::CreateApplication()
{
	return new Sandbox();
}