#include <Windows.h>

class unkClass {
public:
	void func();
	void func2(int*);
	unkClass* unk8;
}

typedef struct _unkStruct {
	char* name;
	char* text;
	int len;
	char unk4[0x34];
	int unk40;
	char unk44[0x44];
	int unk88;
	char unk8C[0x3C];
	int unkC8;
	char unkCC[0x44];
	int unk110;
	char unk114[0x3C];
	int unk150;
	char unk154[0x44];
	int unk198;
	char unk19C[0x3C];
	int unk1D8;
	char unk1DC[0x44];
	int unk220;
	char unk224[0x60];
	unkClass* unk284;
	char unk288[0x78];
	char unk300[0x50];
	unkClass unk350;
	unkClass unk35C;
	unkClass unk368;
} unkStruct;