#include <stdio.h>

void nhapmang(int a[4][4])
{
	printf("Nhap vao ma tran 3x3\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void inmang(int a[4][4])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void nhan(int a[4][4], int b[4][4], int c[4][4])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=0;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	inmang(c);
}
int main()
{
	//nhan ma tran
	//khai bao bien 
	int a[4][4], b[4][4], c[4][4];
	int m,n,p,k,u,v;
	//nhap du lieu 
	nhapmang(a);
	inmang(a);
	nhapmang(b);
	inmang(b);
	nhan(a,b,c);
}
