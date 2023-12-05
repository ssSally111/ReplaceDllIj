#include <Windows.h>

#pragma comment(linker, "/export:testAdd=original1.testAdd")
#pragma comment(linker, "/export:testInit=original1.testInit")

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        OutputDebugString(L"Replace DLL ATTACH");
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        OutputDebugString(L"Replace DLL DETACH");
        break;
    }
    return TRUE;
}

