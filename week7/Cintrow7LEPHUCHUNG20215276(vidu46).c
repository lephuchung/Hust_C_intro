#include <stdio.h>

int main()
{
	//tam giac can chu
	//khai bao bien
	int i,j,k,n;
	//nhap du lieu
	do
	{
		printf("Nhap vao chieu cao cua tam giac (0<n<=26) la: ");
		scanf("%d", &n);
		if(0>=n||n>26) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(0>=n||n>26);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i;k++)
		{
			printf("  ");
		}
		for(j=0;j<i;j++)
		{
			printf("%c ", 65+j);
		}
		for(;j>=0;j--)
		{
			printf("%c ", 65+j);
		}
		printf("\n");
	}
}
