#pragma once

#ifdef SM_PLATFORM_WINDOWS
#ifdef SM_BUILD_DLL
#define SIMULA_API __declspec(dllexport)
#else
#define SIMULA_API __declspec(dllimport)
#endif
#else
#error Simula is currently supported on Windows.
#endif