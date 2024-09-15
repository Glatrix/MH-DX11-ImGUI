#pragma once
#include "../include.h"

typedef void(__stdcall* Callback)();

namespace DX11 {
	DWORD Hook(Callback callback);
}