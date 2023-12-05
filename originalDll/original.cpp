#include <Windows.h>
#include "original.h"

void __stdcall testInit()
{
	OutputDebugString(L"Replace DLL original init");
}

int __stdcall testAdd(int a, int b)
{
	return a + b;
}
