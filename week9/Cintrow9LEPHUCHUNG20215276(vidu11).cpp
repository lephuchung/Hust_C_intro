#include <stdio.h>

void tamgiac(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	//viet ham in tam giac
	//khai bao bien 
	int n;
	//nhap du lieu 
	do 
	{
		printf("Nhap vao chieu cao cua tam giac: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an
	tamgiac(n);
	
}
