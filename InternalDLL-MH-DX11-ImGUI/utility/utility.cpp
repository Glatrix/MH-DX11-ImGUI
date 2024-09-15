#include "utility.h"
#include <Windows.h>
#include <cstdio>

bool utility::AllocateConsole(bool _in, bool _err, bool _out) 
{
	if (!AllocConsole()) {
		return FALSE;
	}

	FILE* dummyFile;
	if (_in) { freopen_s(&dummyFile, "CONIN$", "r", stdin); }
	if(_err) { freopen_s(&dummyFile, "CONOUT$", "w", stderr); }
	if(_out) { freopen_s(&dummyFile, "CONOUT$", "w", stdout); }
	return TRUE;
}