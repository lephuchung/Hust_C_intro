#include <stdio.h>

void nhapmang(int a[101][101], int &m, int &n)
{
	do
	{
		printf("nhap vao so hang cua ma tran (1<=m<=100) la: ");
		scanf("%d", &m);
		printf("nhap vao so cot cua ma tran (1<=n<=100) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>100||m<1||m>100);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void inmang(int a[101][101], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
void tonghang(int a[101][101], int m, int n)
{

	for(int i=0;i<m;i++)
	{	
		int tong=0;
		for(int j=0;j<n;j++)
		{
			tong+=a[i][j];
		}
		printf("tong hang %d la %d\n", i+1, tong);
	}
}
void tongcot(int a[101][101], int m, int n)
{
	for(int j=0;j<n;j++)
	{
		int tong=0;
		for(int i=0;i<m;i++)
		{
			tong+=a[i][j];	
		}
		printf("tong cua cot %d la %d\n", j+1, tong);
	}
}
void gttb(int a[101][101], int m, int n)
{
	float tong=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			tong+=a[i][j];
		}
	}
	float tb=tong/(m*n);
	printf("gia tri trung binh cua cac phan tu trong ma tran la %f", tb);
}
int main()
{
	//Nhap ma tran vuong cac so nguyen 2x2. Hien thi cac gia tri sau
	//Tong tung hang cua ma tran
	//Tong tung cot cua ma tran
	//Gia tri trung binh cua cac phan tu trong ma tran
	//khai bao bien
	int a[101][101];
	int m, n;
	//nhap du lieu
	nhapmang(a,m,n);
	inmang(a,m,n);
	//goi ham va dien dap an
	tonghang(a,m,n);
	tongcot(a,m,n);
	gttb(a,m,n);
}
