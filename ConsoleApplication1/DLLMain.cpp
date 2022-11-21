#include "stdafx.h"

#define Export __declspec(dllexport)

int Export Summ(int i, int j);


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD ul_reason_for_call,
	LPVOID lpReserved)
{
	return TRUE;
}

int Export Summ(int i, int j)
{
	return i + j;
}