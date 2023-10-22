#include <stdio.h>
#include <string.h>

int main() {
	FILE *f1, *f2, *f3;
	char s1[100], s2[100], str[100];
	printf("Nhap ten file dau tien: "); scanf("%s", s1);
	printf("Nhap ten file thu hai: "); scanf("%s", s2);
	f1 = fopen(s1, "r");
	f2 = fopen(s2, "r");
	f3 = fopen("Ketqua.txt", "w+");
	while (fgets(str, 100, f1) != NULL) {
		fprintf(f3, "%s", str);
	}
	while (fgets(str, 100, f2) != NULL) {
		fprintf(f3, "%s", str);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("File Ketqua.txt duoc ghep tu file %s va %s\n", s1, s2);
	return 0;
}

