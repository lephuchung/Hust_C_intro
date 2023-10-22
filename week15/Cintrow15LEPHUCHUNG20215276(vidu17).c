#include <stdio.h>
#include <string.h>

int main() {
	FILE *f1, *f2;
	char str[500];
	int i;
	printf("Nhap ten file: "); scanf("%s", str);
	f1 = fopen(str, "r");
	f2 = fopen("Ketqua.c", "w+");
	while (fgets(str, 500, f1) != NULL) {
		for (i = 0; i < strlen(str) - 1; i++) {
			if (str[i] == '/' && str[i + 1] == '/') {
				str[i] = '\n';
				str[i + 1] = '\0';
				break;
			}
		}
		fprintf(f2, "%s", str);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
