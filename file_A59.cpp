#include "file_A59.h"

HINSTANCE data_2212604 = 0;
int data_2212608 = 0;
HINSTANCE data_221260C = 0;
int data_2212610 = 0;

void FUN_A59DE0(HINSTANCE hInstance, HINSTANCE hPrevInstance, int nCmdShow) {
	int var_108;
	FUN_1437630(var_108);

	data_221260C = hInstance;
	data_2212604 = hPrevInstance;
	data_2212610 = nCmdShow;
	SetThreadAffinityMask(GetCurrentThread(), 1);
	FUN_196B7A0(GetCurrentThreadId(), "Main Thread");
}

int FUN_A59EC0(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    FUN_411E40(lpCmdLine);
	FUN_A59DE0(hInstance, hPrevInstance, nCmdShow);
}