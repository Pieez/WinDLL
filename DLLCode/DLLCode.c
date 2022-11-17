#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <vector>

#include "stdafx.h"


	/*BOOL bAllWenrWell = TRUE;

	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	if (bAllWenrWell)

		return TRUE;

	else

		return FALSE;

}*/

	BOOL  APIENTRY bAllWenrWell(HMODULE hModule,
		DWORD ul_reason_for_call,
		LPVOID lpReserved)
	{
		return TRUE;
	}

 __declspec(dllimport) int MyFunc(LPWSTR str);
int MyFunc(LPWSTR str) {

	MessageBox(NULL, str, L"Perfect", MB_OK);
	return 0;

}

__declspec(dllimport) int Summ(int a, int b);
int Summ(int a, int b) {

	return a + b;
}

__declspec(dllimport) int Razn(int a, int b);
int Razn(int a, int b) {

	return a - b;
}