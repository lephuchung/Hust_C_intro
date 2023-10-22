#include <stdio.h>

int main()
{
	//tam giac can so 
	//khai bao bien 
	int n, i, j, k;
	//nhap du lieu 
	do
	{
		printf("Nhap vao chieu cao cua tam giac: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	for(i=1;i<=n;i++)
	{
		for(k=0;k<n-i;k++)
		{
			printf("  ");
		}
		for(j=1;j<i;j++)
		{
			printf("%d ",j);
		}
		for(j;j>0;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
