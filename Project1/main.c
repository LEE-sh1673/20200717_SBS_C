#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TO_STR(expr) (#expr) 

int main(void)
{
	int a;
	int b;
	int c;

	fputs("Enter the numbers: ", stdout);
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c) 
		{
			printf("Max is %s (%d).\n", TO_STR(a), a);
		}
		else 
		{
			printf("Max is %s (%d).\n", TO_STR(c), c);
		}
	}
	else 
	{
		if (b > c) 
		{
			printf("Max is %s (%d).\n", TO_STR(b), b);
		}
		else 
		{
			printf("Max is %s (%d).\n", TO_STR(c), c);
		}
	}


	return 0;
}