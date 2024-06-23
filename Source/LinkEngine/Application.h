#pragma once

#include "Core.h"

namespace LinkEngine
{
	class LK_API Application
	{
	public:
		// constructor
		Application();
		// destructor
		~Application();

		// Main loop
		void Run();
	};

	// To be definded in CLIENT
	Application* CreateApplication();
}

