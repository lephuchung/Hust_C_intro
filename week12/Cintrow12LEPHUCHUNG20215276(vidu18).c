#include <stdio.h>

void nhap(int *a, int *n)
{
	int i=0;
	do 
	{
		printf("Nhap vao so luong phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", n);
		if(*n<1||*n>1000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(*n<1||*n>1000);
	for(i=0;i<*n;i++)
	{
		printf("a[%d]=", i);
		scanf("%d", a+i);
	}
}
void sum(int *a, int n)
{
	int *ptr=NULL;
	int i=0;
	int sum=0;
	for (i;i<n;i++)
	{
		ptr=a+i;
		sum+=*ptr;
	}
	printf("Tong mang la: %d\n",sum);
}
int main()
{
	//tinh tong mang 
	//khai bao bien 
	int a[1001];
	int n; 
	//nhap vao du lieu 
	nhap(a,&n);
	//goi ham va dien dap an
	sum(a,n);
}
