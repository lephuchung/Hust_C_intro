#include <stdio.h>

int main()
{
	//nhap vao 2 so m va n (m<n), in ra tong cac so trong khoang [m;n]
	//khai bao bien 
	int m, n, sum=0, i;
	//nhap du lieu
	do
	{
		printf("Nhap vao 2 so m va n (m<n) la: \n");
		printf("m = ");
		scanf("%d", &m);
		printf("n = ");
		scanf("%d", &n);
		if(n<=m) printf("loi, moi nhap lai\n");
	}
	while(n<=m);
	//thuat toan va dien dap an
	for(i=m;i<n+1;i++)
	{
		sum+=i;
	}
	printf("tong cua cac so trong khoang [%d;%d] la %d", m, n, sum);
}
