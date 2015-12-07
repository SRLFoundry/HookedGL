#include <windows.h>
#include "Export.h"

extern "C" {
	BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
	{
		OutputDebugStringA("called");
		switch (fdwReason)
		{
		case DLL_PROCESS_ATTACH:
			DisableThreadLibraryCalls(hinstDLL);
			OutputDebugStringA("attached");
			return (init() ? TRUE : FALSE);
			break;

		case DLL_PROCESS_DETACH:
			break;

		default:
			break;
		}
		return TRUE;
	}
}