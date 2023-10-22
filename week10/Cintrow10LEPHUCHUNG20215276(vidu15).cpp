#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (so phan tu phai duong) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("[%d]=",i);
		scanf("%d", &a[i]);
	}
}
void tong(int a[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("Tong mang la: %d\n", sum);
}
void min(int a[], int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(min>a[i]) min=a[i];
		else continue;
	}
	printf("Phan tu nho nhat cua mang la: %d\n", min);
}
void max(int a[], int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i]) max=a[i];
		else continue;
	}
	printf("Phan tu lon nhat cua mang la: %d\n", max);
}

int main()
{
	//tinh tong mang
	//tim min, max 
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an 
	tong(a,n);
	min(a,n);
	max(a,n);
}
