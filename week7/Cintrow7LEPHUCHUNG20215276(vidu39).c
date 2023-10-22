#include <stdio.h>

int main()
{
	//ve hinh thoi 
	//khai bao bien
	int n,i,j,k;
	//nhap du lieu
	do
	{
		printf("Nhap vao chieu cao cua hinh thoi muon ve (0<n va n la so le): ");
		scanf("%d", &n);
		if(n<=0||n%2==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0||n%2==0);
	//giai thuat va dien dap an 
	for(i=0;i<=n/2;i++)
	{
		for(k=0;k<n/2-i;k++)
		{
			printf("  ");
		}
		for(j=0;j<1+2*i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=0;i<=n/2;i++)
	{
		for(k=n/2;k<=n/2+i;k++)
		{
			printf("  ");
		}
		for(j=1;j<n-2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
