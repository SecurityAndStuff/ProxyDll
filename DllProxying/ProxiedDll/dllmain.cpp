#include <Windows.h>
#pragma comment(linker,"/export:Hello=SampleDll_Original.Hello,@1")
BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, L"Proxied DLL", L"Proxied DLL", MB_OK);
		break;
	}
	return TRUE;
}

