#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (n>0) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void tongcuctridiaphuong(int a[], int n)
{
	int sum=0;
	if(a[0]>a[1]) sum+=a[0];
	if(a[n-1]>a[n-2]) sum+=a[n-1];
	for(int i=1;i<n-1;i++)
	{
		if(a[i]>a[i+1]&&a[i]>a[i-1]) sum+=a[i];
		else continue;
	}
	printf("Tong cac cuc tri dia phuong la: %d", sum);
}
int main()
{
	//tinh tong cua cac cuc tri dia phuong trong mang
	//khai bao bien 
	int n;
	int a[1001];
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an
	tongcuctridiaphuong(a,n);
	
}
