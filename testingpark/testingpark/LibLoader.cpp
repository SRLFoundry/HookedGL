#include "LibLoader.h"

LibLoader::LibLoader(string lib)
{
	std::wstring stemp = std::wstring(lib.begin(), lib.end());
	LPCWSTR sw = stemp.c_str();
	module = LoadLibrary(sw);
}

LibLoader::~LibLoader()
{
	FreeLibrary(module);
}


void* LibLoader::getFuncPointer(string funcName)
{
	return GetProcAddress(module, funcName.c_str());
}
