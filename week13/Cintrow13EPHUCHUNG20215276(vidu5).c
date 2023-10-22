#include <stdio.h>

char* my_strcpy(char *destination, char *source) {
	char *p = destination;
	while (*source != '\0') {
		*p++ = *source++;
	}
	*p = '\0';
	return destination;
}

int main() {
	char s1[20] = "";
	char s2[] = "Hello";
	my_strcpy(s1, s2);
	printf("%s\n", s1);
	return 0;
}

