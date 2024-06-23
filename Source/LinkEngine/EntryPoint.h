#pragma once
//#include "Application.h"

#ifdef LK_PLATFORM_WINDOWS

extern LinkEngine::Application* LinkEngine::CreateApplication();

int main(int argc, char** argv)
{
	// engine info
	std::cout << "Link Engine > »¶Ó­Äã!" << std::endl;

	// main loop 
	auto app = LinkEngine::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif // LK_PLATFORM_WINDOWS
