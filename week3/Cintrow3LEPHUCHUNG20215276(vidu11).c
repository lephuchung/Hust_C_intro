#include <stdio.h>

int main()
{
	//nhap vao 2 so nguyen, tinh tong 2 so do
	//khai bao bien
	int a, b, sum;
	//nhap du lieu
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	//dien dap an
	sum = a + b;
	printf("tong cua 2 so %d va %d la %d", a, b, sum);
}
