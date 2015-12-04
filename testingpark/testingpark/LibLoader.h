#pragma once
#include <Windows.h>
#include <string>

using std::string;

class LibLoader
{
public:
	LibLoader(LPWSTR lib);
	~LibLoader();
	void* getFuncPointer(string funcname);
private:
	HMODULE module;
};

