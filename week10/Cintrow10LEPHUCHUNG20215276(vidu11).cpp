#include <stdio.h>

void nhapmatran(int a[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("[%d][%d]=", i, j);
			scanf("%d",&a[i][j]);
		}
	}
}
void inmatran(int a[3][3])
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
void tong(int a[3][3], int b[3][3], int c[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Tong cua ma tran A va ma tran B la: \n");
	inmatran(c); 
}
int main()
{
	//tong 2 ma tran 
	//khai bao bien 
	int a[3][3], b[3][3], c[3][3];
	//nhap du lieu
	nhapmatran(a);
	printf("Ma tran A:\n");
	inmatran(a);
	nhapmatran(b);
	printf("Ma tran B:\n");
	inmatran(b);
	tong(a,b,c);
	
}
