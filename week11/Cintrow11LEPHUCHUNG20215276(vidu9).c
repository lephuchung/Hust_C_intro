#include <stdio.h>

void tangluong(int *n, int y)
{
	if(y>=3) *n+=300000;
}
int main()	
{
	int y;
	int n;
	do
	{
		printf("Nhap luong hien tai: ");
		scanf("%d", &n);
		if(n<0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<0);
	do
	{
		printf("Nhap vao so nam lam viec la: ");
		scanf("%d", &y);
		if(y<0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(y<0);
	tangluong(&n,y);
	printf("luong la: %d\n", n);
}
