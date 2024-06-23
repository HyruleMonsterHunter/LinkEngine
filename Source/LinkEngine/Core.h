#pragma once

#ifdef LK_PLATFORM_WINDOWS
	#ifdef LK_BUILD_DLL
		#define LK_API __declspec(dllexport)
	#else
		#define LK_API __declspec(dllimport)
	#endif // LK_BUILD_DLL
#else
	#error Link Engine only support windows
#endif // LK_PLATFORM_WINDOWS
