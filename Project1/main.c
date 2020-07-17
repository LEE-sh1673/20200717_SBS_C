#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	fputs("Enter the numbers: ", stdout);
	scanf("%d %d %d", &a, &b, &c);

	printf("Sequences: ");

	if (a > b)
	{
		if (a > c) 
		{
			printf("%d, ", a);

			if (c > b)
			{
				printf("%d, %d\n", c, b);
			}
			else
			{
				printf("%d, %d\n", b, c);
			}
		}
		else 
		{
			printf("%d, %d, %d\n", c, a, b);
		}
	}
	else 
	{
		if (b > c) 
		{
			printf("%d, ", b);

			if (a > c)
			{
				printf("%d, %d\n", a, c);
			}
			else
			{
				printf("%d, %d\n", c, a);
			}
		}
		else 
		{
			printf("%d, %d, %d\n", c, b, a);
		}
	}

	return 0;
}