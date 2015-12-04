#include <windows.h>
#include "Export.h"

extern "C" bool __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hinstDLL);
		LPWSTR path;
		GetSystemDirectory(path, MAX_PATH);
		wcscat(path, L"\\opengl32.dll");
		MessageBox(NULL, path, (LPCWSTR)L":)", MB_OK);
		return init();
		break;

	case DLL_PROCESS_DETACH:
		break;

	default:
		break;
	}
	return true;
}
