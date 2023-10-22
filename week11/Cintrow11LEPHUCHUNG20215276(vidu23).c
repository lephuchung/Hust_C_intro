#include <stdio.h>

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	printf("Nhap so dau tien: "); scanf("%d", &a);
	printf("Nhap so thu hai: "); scanf("%d", &b);
	printf("Tong cua 2 so la: %d", *pa + *pb);
	return 0;
}

