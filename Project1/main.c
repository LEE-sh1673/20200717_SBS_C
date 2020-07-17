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
	// ¹«±â ÀåÂø
	weapon weapons = SWORD | AXE | GUN;

	// ¹«±â ÇØÁ¦
	weapons &= ~AXE;

	if (weapons & SWORD)
	{
		printf("SWORD ÀåÂø");
	}
	if (weapons & AXE)
	{
		printf("AXE ÀåÂø");
	}
	if (weapons & GUN)
	{
		printf("GUN ÀåÂø");
	}
	if (weapons & BOW)
	{
		printf("BOW ÀåÂø");
	}
	if (weapons & STAFF)
	{
		printf("STAFF ÀåÂø");
	}

	return 0;
}