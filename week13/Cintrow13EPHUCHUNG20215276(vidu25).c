#include <stdio.h>
#include <string.h>

void removeNonAlphabet(char []);
void place(char [], int);

int main() {
	char s[100];
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	removeNonAlphabet(s);
	printf("After removing the Output String: %s\n", s);
	return 0;
}

void removeNonAlphabet(char s[]) {
	int i=0;
	for (i = 0; i < strlen(s); i++) {
		if (!(s[i] >= 'A' && s[i] <= 'z')) {
			place(s, i);
		}
	}
}

void place(char s[], int n) {
	int i=0;
	for (i = n; i <= strlen(s); i++) {
		s[i] = s[i + 1];
	}
}

