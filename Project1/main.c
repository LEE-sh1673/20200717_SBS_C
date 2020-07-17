#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	fputs("Enter the number: ", stdout);
	scanf("%d", &n);

	printf("Output: %d\n", n);

	return 0;
}