#include <stdio.h>
#include <string.h>

void trim(char []);
void place(char [], int i);

int main(){
	char s[100] = "";
	int count = 0;
	int i=0; 
	printf("Input the string: "); fgets(s, 99, stdin);
	s[strlen(s) - 1] = '\0';
	trim(s);
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			count++;
		}
	}
	printf("Total number of words in the string is: %d\n", ++count);
	return 0;
}

void trim(char str[]) {
	int i;
	while (str[0] == ' ') {
		strcpy(str, str + 1);
	}
	i = strlen(str) - 2;
	while (str[i] == ' ') {
		str[i] = '\0';
		i--;
	}
	i = 0;
	while (str[i] != '\0') {
		if (str[i] == ' ' && str[i + 1] == ' ') {
			place(str, i);
		} else {
			i++;
		}
	}
}

void place(char s[], int n) {
	int i=0;
	for (i = n; i <= strlen(s); i++) {
		s[i] = s[i + 1];
	}
}

