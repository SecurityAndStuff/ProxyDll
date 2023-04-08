#include <Windows.h>
typedef void(*HelloFn)();
int main()
{
	HMODULE hModule = LoadLibrary(L"SampleDll.dll");
	Sleep(1000);
	HelloFn helloFn = (HelloFn)GetProcAddress(hModule, "Hello");
	Sleep(1000);
	HelloFn();
	return 0;
}
