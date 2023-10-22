#include <stdio.h>

int main()
{
	//ve tam giac can voi so hang nhap tu ban phim
	//khai bao bien 
	int n,i,j,k;
	//nhap du lieu
	do
	{
		printf("Nhap vao chieu cao cua tam giac (n>0)");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	for(i=0;i<=n;i++)
	{
		for(k=0;k<n-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
