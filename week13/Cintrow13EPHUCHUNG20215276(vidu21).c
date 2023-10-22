#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sort(char s[][100], int n);

int main() {
	char s[100][100];
	int n;
	int i=0;
	printf("Input number of strings: "); scanf("%d", &n);
	printf("Input string: \n");
	for (i = 0; i <= n; i++) {
		fgets(s[i], 99, stdin);
		s[i][strlen(s[i]) - 1] = '\0';
	}
	sort(s, n);
	printf("The strings appears after sorting: ");
	for (i = 0; i <= n; i++) {
		printf("%s\n", s[i]);
	}
	return 0;
}

void sort(char s[][100], int n) {
	char tmp[100];
	bool check;
	int i=0;
	do {
		check = false;
		for (i = 0; i < n; i++) {
			if (strcmp(s[i], s[i + 1]) == 1) {
				strcpy(tmp, s[i]);
				strcpy(s[i], s[i + 1]);
				strcpy(s[i + 1], tmp);
				check = true;
			}
		}
	} while (check != false);
}

