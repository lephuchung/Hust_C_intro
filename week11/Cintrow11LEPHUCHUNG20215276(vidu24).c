#include <stdio.h>

int sum(int *pa, int *pb) {
	return *pa + *pb;
}

int main() {
	int a, b;
	printf("Nhap so dau tien: "); scanf("%d", &a);
	printf("Nhap so thu hai: "); scanf("%d", &b);
	printf("Tong cua 2 so la: %d", sum(&a, &b));
	return 0;
}

