#include <stdio.h>
#include <string.h>

void sort(char []);

int main() {
	char s[100] = "";
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	sort(s);
	printf("After sorting the string appears like:\n%s", s);
	return 0;
}

void sort(char s[]) {
	char tmp;
	int i=0;
	int j=0;
	for (i = 0; i < strlen(s) - 1; i++) {
		for (j = i + 1; j < strlen(s); j++) {
			if (s[i] > s[j]) {
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
}

