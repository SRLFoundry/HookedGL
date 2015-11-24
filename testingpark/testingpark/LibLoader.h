#pragma once
#include <Windows.h>
#include <string>

using std::string;

class LibLoader
{
public:
	LibLoader(string lib);
	~LibLoader();
	void* getFuncPointer(string funcname);
private:
	HMODULE module;
};

