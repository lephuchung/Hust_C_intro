#include <stdio.h>

int main()
{
	//in ra tam giac so 
	//khai bao bien
	int n, i, j;
	//nhap du lieu
	do
	{
		printf("Nhap vao chieu cao cua hinh tam giac (0<n) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
