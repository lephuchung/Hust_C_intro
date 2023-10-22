#include <stdio.h>

void nhap(int *a, int *n)
{
	int i=0;
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", n);
		if(*n<1||*n>1000);
	}
	while(*n<1||*n>1000);
	for(i=0;i<*n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", a+i);
	}
}
void innguoc(int *a, int n)
{
	int i;
	int *ptr;
	for(i=n-1;i>=0;i--)
	{
		ptr=a+i;
		printf("%d ", *ptr);
	}
	printf("\n");
}
int main()
{
	//in nguoc mang 
	//khai bao bien 
	int a[1001];
	int n;
	//nhap mang
	nhap(a,&n);
	//goi ham va dien dap an 
	innguoc(a,n);
}
