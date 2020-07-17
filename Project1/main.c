#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum weapon {
	SWORD = 0x00000001,
	AXE = 0x00000002,
	GUN = 0x00000004,
	BOW = 0x00000008,
	STAFF = 0x00000010,
}weapon;

int main(void)
{
	// ���� ����
	weapon weapons = SWORD | AXE | GUN;

	// ���� ����
	weapons &= ~AXE;

	if (weapons & SWORD)
	{
		printf("SWORD ����");
	}
	if (weapons & AXE)
	{
		printf("AXE ����");
	}
	if (weapons & GUN)
	{
		printf("GUN ����");
	}
	if (weapons & BOW)
	{
		printf("BOW ����");
	}
	if (weapons & STAFF)
	{
		printf("STAFF ����");
	}

	return 0;
}