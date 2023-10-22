#include <stdio.h>
#include <string.h>

char *extract(char [], int, int);

int main() {
	char s[100];
	int n, l;
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	printf("Input the position to start extraction: "); scanf("%d", &n);
	printf("Input the length of substring: "); scanf("%d", &l);
	printf("The substring retrieve from the string is: \"%s\"\n", extract(s, n, l));
	return 0;
} 

char *extract(char s[], int n, int l) {
	char *p;
	int i;
	int index = 0;
	for (i = n - 1; index < l; i++) {
		*(p + index) = s[i];
		index++;
	}
	*(p + index) = '\0';
	return p;
}

