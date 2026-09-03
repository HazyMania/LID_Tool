#include "LIDConsole.h"

void Init(LPVOID lpReservered)
{
    //Lazy fix to not-Let it Start. :)
    Sleep(10000);

    LIDConsole* SDKConsole = new LIDConsole();
    SDKConsole->Init("LET IT DIE");
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        myModule = hModule;
        DisableThreadLibraryCalls(hModule);
        _beginthread(Init, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

