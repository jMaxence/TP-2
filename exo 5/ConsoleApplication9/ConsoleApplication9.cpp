#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>


int main()
{
	int i, j, n;
	printf("Taper un nombre :");
	scanf("%d", &n);
	printf("   |");
	for (i = 1; i <= n; i++)
	{
		printf("%3d   ", i);
	}
	printf("\n");

	for (i = 1; i <= n * 6; i++)
	{
		printf("-");
	}
	printf("\n");

	for (i = 1; i <= n; i++)

	{
		printf("%2d |", i);
		for (j = 1; j <= n; j++)
		{
			printf("%3d   ", i*j);
		}
		printf("\n");
	}
	return 0;
}
