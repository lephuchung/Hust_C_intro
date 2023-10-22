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
void ktra(int a[101][101], int n, int m)
{
	int check1=1,check2=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=1&&a[i][j]!=0) check1=0;
			if(a[i][j]==1&&i!=j) check2=0;
		}
	}
	if(check1==0||check2==0) printf("Day khong phai ma tran don vi!\n");
	else printf("Day la ma tran don vi!\n");
}
int main()
{
	//kiem tra ma tran don vi
	//khai bao bien 
	int a[101][101];
	int n,m;
	//nhap du lieu 
	nhapmang(a,n,m);
	inmang(a,n,m);
	ktra(a,n,m);
}
