#include <stdio.h>

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	printf("Nhap so dau tien: "); scanf("%d", &a);
	printf("Nhap so thu hai: "); scanf("%d", &b);
	printf("So lon hon la: %d", *pa > *pb ? *pa : *pb);
	return 0;
}

