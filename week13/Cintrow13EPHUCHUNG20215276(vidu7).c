#include <stdio.h>
#include <string.h>

void trim(char []);
void place(char [], int i);
int check(char []);

int main() {
	char name[100] = "";
	int i=0;
	printf("Nhap ho va ten cua ban: ");
	fgets(name, 99, stdin);
	name[strlen(name) - 1] = '\0';
	trim(name);
	if (check(name)) {
		printf("Ten la: ");
		for (i = strlen(name); i >= 0; i--) {
			if (name[i] == ' ') {
				printf("%s\n", name + i + 1);
				break;
			}
		}
	} else {
		printf("Ho ten khong hop le\n");
	}
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

int check(char str[]) {
	int count = 0;
	int i=0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	return count;
}

