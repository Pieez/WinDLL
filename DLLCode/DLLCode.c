#include <Windows.h>

BOOL WINAPI DllMain(HINSTANCE hlnstDLL, DWORD dwReason, LPVOID IpReserved) {

	BOOL bAllWenrWell = TRUE;

	switch (dwReason)
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

}

extern "C" __declspec(dllimport) int MyFunc(LPWSTR str);

int MyFunc(LPWSTR str) {

	MessageBox(NULL, str, L"Nise", MB_OK);
	return 0;

}
