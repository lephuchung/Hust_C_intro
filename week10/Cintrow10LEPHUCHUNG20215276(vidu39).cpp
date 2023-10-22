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
void tonghang(int a[101][101], int n, int m)
{
	int sum=0;
	int i;
	do
	{
		printf("Nhap vao so hang muon tinh (1<=i<=%d) la: ",m);
		scanf("%d", &i);
		if(i<1||i>m) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(i<1||i>m);
	for(int j=0;j<n;j++)
	{
		sum+=a[i-1][j];
	}
	printf("Tong hang %d la %d \n", i, sum);
}
void tongcot(int a[101][101], int n, int m)
{
	int sum=0;
	int j;
	do
	{
		printf("Nhap vao so cot muon tinh (1<=j<=%d) la: ",n);
		scanf("%d", &j);
		if(j<1||j>n) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(j<1||j>n);
	for(int i=0;i<m;i++)
	{
		sum+=a[i][j-1];
	}
	printf("Tong cot %d la %d \n", j, sum);
}
int main()
{
	//tinh tong hang hoac cot
	//khai bao bien 
	int a[101][101];
	int n, m, k;
	//nhap du lieu 
	nhapmang(a,n,m);
	inmang(a,n,m);
	do
	{
		printf("Ban muon tinh tong hang hay cot?\n");
		printf("1)Hang.\n");
		printf("2)Cot.\n");
		printf("Nhap: ");
		scanf("%d", &k);
		if(k<1||k>2) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(k<1||k>2);
	if(k==1)
	{
		tonghang(a,n,m);
	}
	if(k==2)
	{
		tongcot(a,n,m);
	}
}
