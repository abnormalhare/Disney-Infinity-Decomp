#include "file_409.h"

int data_213AF0C;

unkStruct* FUN_4098E0(unkStruct* arg1, const char* text, int length, const char* name) {
	arg1->unk0 = name;
	arg1->unk40 = 0;
	arg1->unk88 = 0xFFFF0000;
	arg1->unkC8 = 0;
	arg1->unk110 = 0xFFFF0000;
	arg1->unk150 = 0;
	arg1->unk198 = 0xFFFF0000;
	arg1->unk1D8 = 0;
	arg1->unk220 = 0xFFFF0000;
	FUN_406D10(arg1->unk284);
	arg1->unk350.func2 = FUN_409510;
	arg1->unk350.unk8 = (unkClass*)arg1;
	arg1->unk350.func = FUN_182C6B0;
	arg1->unk35C.func = FUN_182C6B0;
	arg1->unk35C.func2 = FUN_405FF0;
	arg1->unk35C.unk8 = (unkClass*)arg1;
	arg1->unk368.func = FUN_182C6B0;
	arg1->unk368.func2 = FUN_406070;
	arg1->unk368.unk8 = (unkClass*)arg1;
	arg1->len = length;
	arg1->text = text;
	return arg1;
}

void FUN_409B60(void) {
	unkStruct* var_380;
	FUN_4098E0(var_380, MEMORY_XML, 0x7DC, "Memory.xml");
	// ...
}

int FUN_409BE0(void) {
	if (data_213AF0C == 0) {
		FUN_409B60();
	}

	return data_213AF0C;
}

void FUN_409DF0(int arg0) {
    
}