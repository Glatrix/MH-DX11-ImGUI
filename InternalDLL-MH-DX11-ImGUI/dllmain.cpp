#include "include.h"

void OnRenderCallback() 
{
    ImGui::Begin("Hello World!");

    ImGui::End();
}

void MainThread() 
{
    utility::AllocateConsole();
    DX11::Hook(OnRenderCallback);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) 
    {
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
    }
    return TRUE;
}