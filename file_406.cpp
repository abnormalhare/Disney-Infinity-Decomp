#include "file_406.h"

unkClass::FUN_406170(int* arg2) {
	FUN_404EC0();
}

int FUN_406B60(int* Destination, int arg0, int arg1, int* arg2, int* arg3, int* arg4) {
	return 0;
}

unkClass* __fastcall FUN_406D10(unkClass* arg1) {
	arg1[0].func = FUN_182C6B0;
	arg1[0].func2 = unkClass::FUN_406170;
	arg1[0].unk8 = NULL;

	arg1[0x10].func = FUN_182C6B0;
	arg1[0x10].func2 = FUN_4060D0;
	arg1[0x10].unk8 = arg1;
	FUN_401370(arg1);
	return arg1;
}

int FUN_406E80(int arg0) {
    return FUN_406B60(FUN_409BE0(), 0x7F, arg0, NULL, NULL, 2);
}