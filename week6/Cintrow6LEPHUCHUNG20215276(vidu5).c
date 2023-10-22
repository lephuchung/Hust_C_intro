#include <stdio.h>

int main()
{
	//tim min 3 so
	//khai bao bien 
	int m,n,p;
	//nhap du lieu
	printf("Nhap vao 3 so la: ");
	scanf("%d %d %d", &m, &n, &p);
	int min=m;
	if(min>n) min=n;
	if(min>p) min=p;
	printf("So nho nhat la: %d\n", min);
}
