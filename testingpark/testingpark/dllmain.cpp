#include <windows.h>
#include "Export.h"

extern "C" bool __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	//OutputDebugStringA("called");
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hinstDLL);
		//OutputDebugStringA("attached");
		return init();
		break;

	case DLL_PROCESS_DETACH:
		break;

	default:
		break;
	}
	return true;
}