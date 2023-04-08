#include <Windows.h>
#include <stdio.h>

extern "C" __declspec(dllexport) void __cdecl Hello(void) {
	FILE* file = nullptr;
	const char buffer[] = "Hello!";
	fopen_s(&file, "output.txt", "w");
	fprintf(file, "%s", buffer);
	fclose(file);
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	return TRUE;
}

