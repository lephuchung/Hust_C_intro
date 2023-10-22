#include <stdio.h>
#include <string.h>

int main() {
	char s[100] = "";
	char *p = s;
	int count = 0;
	printf("Input a string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	while (strcmp(p, "")) {
		p++;
		count++;
	}
	printf("Length of the string: %d\n", count);
}

