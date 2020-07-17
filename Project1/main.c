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
	// ���� ����
	weapon weapons = SWORD | AXE | GUN;

	// 1����Ʈ ���� 
	char chWeapons = CHAR_SWORD | CHAR_AXE | CHAR_GUN | CHAR_BOW;

	// ���� ����
	weapons &= ~AXE;
	chWeapons &= ~(CHAR_SWORD | CHAR_GUN);

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
	printf("\n");


	if (chWeapons & CHAR_SWORD)
	{
		printf("SWORD ����");
	}
	if (chWeapons & CHAR_AXE)
	{
		printf("AXE ����");
	}
	if (chWeapons & CHAR_GUN)
	{
		printf("GUN ����");
	}
	if (chWeapons & CHAR_BOW)
	{
		printf("BOW ����");
	}

	return 0;
}