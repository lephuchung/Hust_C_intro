#include <stdio.h>
#include <string.h>

int main() {
	char s[100] = "";
	int i=0;
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	printf("The characters of the string are :\n");
	for (i = 0; i < strlen(s); i++) {
		printf("'%c' ", s[i]);
	}
	return 0;
}

