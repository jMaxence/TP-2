
#include <stdio.h>
#include <string.h>

int main()
{
	
	char str[100], rev[100];
	
	int t, i, j;

	printf(" Entrez une chaîne de caractère :  ");
	gets_s(str);

	j = 0;
	t = strlen(str);

	rev[t] = '\0'; 
	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = str[i];
	}
	

	printf(" Chaîne de caractère après inversion = %s", rev);

	
}

