
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, A, B, s = 0;

	printf("Donner un entier A: ");
	scanf("%d", &A);
	printf("Donner un entier B: ");
	scanf("%d", &B);

	if (B > 0)
	{
		for (i = 1; i <= B; i++)
		{
			s = s + A;
		}
	}
	else
	{
		for (i = 1; i <= (-B); i++)
		{
			s = s + (-A);
		}
	}
	printf("Le produit entre %d et %d est : %d", A, B, s);
}
