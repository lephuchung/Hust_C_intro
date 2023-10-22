#include <stdio.h>
#include <string.h>

int main() {
	char s[100] = "";
	char vowels[5] = "aeiou";
	int i=0;
	int countVowels = 0, countConstant = 0;
	printf("Input a string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	for (i = 0; i < strlen(s); i++) {
		if (strchr(vowels, s[i]) != NULL) 
			countVowels++;
		else 
			countConstant++;
	}
	printf("Number of vowels: %d\n", countVowels);
	printf("Number of constant: %d\n", countConstant);
	return 0;
}

