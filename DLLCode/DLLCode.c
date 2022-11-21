#include <Windows.h>

#define LIB L"DllLib.dll"
#define SUMM "Summ"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevHinstance, PSTR pCmdLine, int nCmdShow) {

	HMODULE hDllE = LoadLibrary(LIB);
	if (!hDllE)
		return 1;
	int(*Summ)(int, int) = NULL;


	(FARPROC*)Summ = GetProcAddress(hDllE, SUMM);

	if (Summ)
	{
		int iValSumm = Summ(2, 2);
	}

	FreeLibrary(hDllE);
	return 0;

}



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

	/*BOOL  APIENTRY bAllWenrWell(HMODULE hModule,
		DWORD ul_reason_for_call,
		LPVOID lpReserved)
	{
		return TRUE;
	}

 declspec(dllimport) int MyFunc(LPWSTR str);
int MyFunc(LPWSTR str) {

	MessageBox(NULL, str, L"Perfect", MB_OK);
	return 0;

}

declspec(dllimport) int Summ(int a, int b);
int Summ(int a, int b) {

	return a + b;
}

__declspec(dllimport) int Razn(int a, int b);
int Razn(int a, int b) {

	return a - b;
}*/