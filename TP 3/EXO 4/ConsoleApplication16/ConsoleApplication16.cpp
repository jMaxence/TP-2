#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	int i;
	printf("\n Entrez la cha�ne � convertir en majuscule: ");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++) {
		
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
	printf("\n La cha�ne en majuscule = %s", str);
	return 0;
}



