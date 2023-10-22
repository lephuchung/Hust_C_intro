#include <stdio.h>
#include <string.h>

void str_cpy(char [], char []);

int main() {
	char s1[100] = "", s2[100] = "";
	printf("Input the string: "); fgets(s1, 99, stdin);
	s1[strlen(s1) - 1] = '\0';
	printf("The First string is: %s\n", s1);
	str_cpy(s2, s1);
	printf("The Second string is: %s\n", s2);
	printf("Number of characters copied: %d\n", strlen(s2));
	return 0;
}

void str_cpy(char s2[], char s1[]) {
	int i=0;
	for (i = 0; i < strlen(s1); i++) {
		s2[i] = s1[i];
	}
}

