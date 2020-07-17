#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum weapon {
	SWORD = 0x00000001,
	AXE = 0x00000002,
	GUN = 0x00000004,
	BOW = 0x00000008,
	STAFF = 0x00000010,
}weapon;

#define CHAR_SWORD 0x1
#define CHAR_AXE 0x2
#define CHAR_GUN 0x4
#define CHAR_BOW 0x8


int main(void)
{
	// ¹«±â ÀåÂø
	weapon weapons = SWORD | AXE | GUN;

	// 1¹ÙÀÌÆ® ±âÁØ 
	char chWeapons = CHAR_SWORD | CHAR_AXE | CHAR_GUN | CHAR_BOW;

	// ¹«±â ÇØÁ¦
	weapons &= ~AXE;
	chWeapons &= ~(CHAR_SWORD | CHAR_GUN);

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
	printf("\n");


	if (chWeapons & CHAR_SWORD)
	{
		printf("SWORD ÀåÂø");
	}
	if (chWeapons & CHAR_AXE)
	{
		printf("AXE ÀåÂø");
	}
	if (chWeapons & CHAR_GUN)
	{
		printf("GUN ÀåÂø");
	}
	if (chWeapons & CHAR_BOW)
	{
		printf("BOW ÀåÂø");
	}

	return 0;
}