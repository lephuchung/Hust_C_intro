#include <stdio.h>

int main()
{
	char a,b,c;
	printf("Nhap vao chu cai thu nhat: ");
	scanf(" %c", &a);
	printf("Nhap vao chu cai thu hai: ");
	scanf(" %c", &b);
	printf("Nhap vao chu cai thu ba: ");
	scanf(" %c", &c);
	int m,n,p;
	m=a;
	n=b;
	p=c;
	int min=m;
	if(min>n) min=n;
	if(min>p) min=p;
	printf("chu cai co thu tu be nhat la: %c\n", min);
}
