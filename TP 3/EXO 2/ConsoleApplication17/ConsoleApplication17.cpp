#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>




#include <stdio.h>
int main()
{
	char c, str[100];
	int i, occurrence = 0;

	printf("Entrez une chaîne de caractères: ");
	gets_s(str);

	printf("Entrez un caractère: ");
	scanf("%c", &c);

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == c)
			++occurrence;
	}

	printf("Le nombre d’occurrence de %c est %d", c, occurrence);
	return 0;
}


