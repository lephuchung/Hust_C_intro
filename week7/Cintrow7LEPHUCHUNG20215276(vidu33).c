#include <stdio.h>

int main()
{
	//tam giac floyd
	//khai bao bien 
	int n,i,j,k;
	//nhap du lieu
	do
	{
		printf("Nhap vao chieu cao cua tam giac: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an 
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			k=(1+i+j)%2;
			printf("%d ",k);
			
		}
		printf("\n");
	}
}
