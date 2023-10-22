#include <stdio.h>
#include <string.h>

int count(char []);

int main() {
	char s[100];
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	printf("The frequency of the word 'the' is: %d", count(s));
	return 0;
}

int count(char s[]) {
	int dem = 0;
	int i=0;
	if (strcmp(s, "the") == 0 || strcmp(s, "The") == 0) {
		return 1;
	}
	for (i = 0; i < strlen(s) - 2; i++) {
		if (((s[i] == 't' || s[i] == 'T') && s[i + 1] == 'h' && s[i + 2] == 'e') && (s[i - 1] == ' ' || s[i + 3] == ' ')) {
			dem++;
		} 
	} 
	return dem;
}

