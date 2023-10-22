#include <stdio.h>

int max(int *pa, int *pb) 
{
	return *pa > *pb ? *pa : *pb;
}

int main() 
{
	int a, b;
	printf("Nhap so dau tien: "); scanf("%d", &a);
	printf("Nhap so thu hai: "); scanf("%d", &b);
	printf("So lon hon la: %d", max(&a, &b));
	return 0;
}
