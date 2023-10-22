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
void xoa(int a[], int &n)
{
	int k;
	do
	{
		printf("Nhap vao so muon xoa (nam trong mang)la: ");
		scanf("%d", &k);
		if(k<1||k>n) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(k<1||k>n);
	for(int i=k-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	//xoa mot phan tu cua mang
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an 
	xoa(a,n);
	inmang(a,n);
}
