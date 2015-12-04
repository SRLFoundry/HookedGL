#include "LibLoader.h"

LibLoader::LibLoader(LPWSTR lib)
{
	module = LoadLibrary(lib);
}

LibLoader::~LibLoader()
{
	FreeLibrary(module);
}


void* LibLoader::getFuncPointer(string funcName)
{
	return GetProcAddress(module, funcName.c_str());
}
