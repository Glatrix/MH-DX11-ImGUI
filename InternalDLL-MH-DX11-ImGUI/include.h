#pragma once
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// SDK & Windows Includes
#include <windows.h>
#include <cstdio>

// Your Project Includes (In Order Of Use)
#include "thirdparty/kiero/kiero.h" // Includes Minhook Already
#include "thirdparty/imgui/imgui.h"
#include "thirdparty/imgui/imgui_impl_win32.h"
#include "thirdparty/imgui/imgui_impl_dx11.h"

#include "utility/utility.h"
#include "menu/dx11hook.h"