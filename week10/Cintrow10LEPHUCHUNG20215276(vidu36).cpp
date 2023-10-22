#include <stdio.h>
void nhapmang(int a[101][101], int &n, int &m)
{
	do
	{
		printf("Nhap vao so hang (1<=m<=100) la: ");
		scanf("%d", &m);
		if(0>=m||101<=m) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(0>=m||101<=m);
	do
	{
		printf("Nhap vao so cot (1<=n<=100) la: ");
		scanf("%d", &n);
		if(0>=n||101<=n) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(0>=n||101<=n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void inmang(int a[101][101], int n, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void chuyenvi(int a[101][101], int n, int m)
{
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	//chuyen vi ma tran 
	//khai bao bien 
	int a[101][101];
	int m,n;
	//nhap du lieu 
	nhapmang(a,n,m);
	//goi ham va dien dap an
	inmang(a,n,m);
	printf("Chuyen vi: \n");
	chuyenvi(a,n,m);
	
}
