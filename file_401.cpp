#include "file_401.h"

DWORD BitScanForward(DWORD index) { // 0x401030
    DWORD edx = -1;
    if (_BitScanForward(&index, index) == 0) {
        return edx;
    } else {
        return index;
    }
}

DWORD BitScanReverse(DWORD index) { // 0x401040
    DWORD edx = -1;
    if (_BitScanReverse(&index, index) == 0) {
        return edx;
    } else {
        return index;
    }
}

// ...

void __fastcall FUN_401370(unkClass* arg1) {
	unkClass[3].func2 = (void*)-1;
	unkClass[3].unk8 = NULL;
}