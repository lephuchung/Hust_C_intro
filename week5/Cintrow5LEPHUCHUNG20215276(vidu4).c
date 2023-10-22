#include <stdio.h>

int main()
{
	//dung toan tu ? :
	//khai bao bien 
	int n,m,abs,max;
	//nhap du lieu 
	printf("Nhap vao 2 so n va m la: ");
	scanf("%d %d", &n, &m);
	abs=(n<0)?-n:n;
	max=(n<m)?m:n;
	printf("Gia tri tuyet doi cua %d la %d\n", n, abs);
	printf("Trong 2 so %d va %d, so lon hon la %d\n", n, m, max);
}
