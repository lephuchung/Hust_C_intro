#include <stdio.h>
#include <string.h>

char* str_any(char *, char *);

int main(void) {
	char* punc = ".,;:!?";
	char s[100];
	char *p;
	printf("Please enter a line of text\n");
	scanf("%100s", s);
	for (p = str_any(s, punc); p != NULL; p = str_any(p + 1, punc)) {
		*p = ' ';
	}
	printf("Resulting string is:\n%s\n", s);
	return 0;
}
	
char* str_any(char* str1, char* str2) {
	while (*str1 != '\0') {
		if (strchr(str2, *str1) != NULL) {
			return str1;
		}
		++str1;
	}
	return NULL;
}

