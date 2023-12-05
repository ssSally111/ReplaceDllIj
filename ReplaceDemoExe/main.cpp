#include <Windows.h>
#include <iostream>

typedef int (WINAPI* Add)(int a, int b);

int main(void)
{
	HMODULE hmodule = LoadLibrary(L"./original.dll");
	if (!hmodule)
	{
		std::cout << "original.dll fail..." << std::endl;
		return 0;
	}

	GetProcAddress(hmodule, "testInit")();

	FARPROC pAdd = GetProcAddress(hmodule, "testAdd");
	std::cout << ((Add)pAdd) (1, 2) << std::endl;;

	return 0;
}