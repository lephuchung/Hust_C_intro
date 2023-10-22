#include <stdio.h>
#include <string.h>

void reverse(char []);

int main() {
	char s[100] = "";
	printf("Input a string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	reverse(s);
	printf("Output: %s\n", s);
	return 0;
} 

void reverse(char str[]) {
	char temp;
	int i=0;
	for (i = 0; i < strlen(str) / 2; i++) {
		temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;	
	}
}
