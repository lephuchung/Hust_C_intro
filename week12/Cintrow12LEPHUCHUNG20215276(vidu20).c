#include <stdio.h>

void nhap(int *a, int *n)
{
	int i=0;
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
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
void timmax(int *a, int n)
{
	int *ptr=NULL;
	ptr=a+0;
	int i=0;
	for(i=0;i<n;i++)
	{
		if(*(a+i)>*ptr) ptr=a+i;
	}
	printf("So lon nhat cua mang la: %d\n", *ptr);
}
int main()
{
	//tim so lon nhat 
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhap(a,&n);
	//goi ham va dien dap an 
	timmax(a,n);
}
