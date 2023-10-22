#include <stdio.h>
#include <string.h>

void sort(char []);

int main() {
	char s[100] = "";
	int max = 0, count = 1;
	int i=0;
	char chmax;
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	sort(s);
	chmax = s[0];
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == s[i - 1]) {
			count++;
			if (count > max) {
				chmax = s[i];
				max = count;
			}
		} else {
			count = 1;
			if (count > max) {
				max = count;
			}
		}
	}
	printf("The Highest frequency of character '%c'\n", chmax);
	printf("Appears number of times: %d\n", max);
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

