#include <stdio.h>
#include <string.h>

void convert(char []);

int main() {
	char s[100];
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	printf("The given sentence is: %s\n", s);
	convert(s);
	printf("After Case changed the string is: %s\n", s);
	return 0;
}

void convert(char s[]) {
	int i=0;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 32;
		} else {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
		}
	}
}

