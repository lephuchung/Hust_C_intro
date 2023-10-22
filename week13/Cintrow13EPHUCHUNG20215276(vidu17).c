#include <stdio.h>
#include <string.h>

int check(char [], char []);

int main() {
	char s1[100] = "", s2[100] = "";
	printf("Input the 1st string: "); fgets(s1, 99, stdin);
	printf("Input the 2nd string: "); fgets(s2, 99, stdin);
	s1[strlen(s1) - 1] = '\0';
	s2[strlen(s2) - 1] = '\0';
	if (check(s1, s2)) 
		printf("Strings are equal.");
	else 
		printf("Strings are not equal.");
	return 0;
}

int check(char s1[], char s2[]) {
	int i=0;
	if (strlen(s1) != strlen(s2))
		return 0;
	for (i = 0; i < strlen(s1); i++) {
		if (s1[i] != s2[i]) 
			return 0;
	}
	return 1;
}

