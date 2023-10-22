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
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void swap(int &a, int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void sort(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
			else continue;
		}
	}
}
void lietke(int a[], int n, int m)
{
	m-=1;
	if(a[m]-a[m-1]>1)
	{
		printf("Co the dien them: ");
		for(int i=a[m-1]+1;i<a[m];i++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	else printf("Khong the dien them so nao!\n");
}
int main()
{
	//chen them so de khong lam hong day tang
	//khai bao bien 
	int a[1001];
	int n,m;
	//nhap du lieu
	nhapmang(a,n);
	printf("Mang sau khi da sap xep la: ");
	sort(a,n);
	inmang(a,n);
	do
	{
		printf("Nhap vao vi tri muon chen (vi tri duong va nho hon so phan tu cua mang) la: ");
		scanf("%d", &m);
		if(m<=0||m>=n) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<=0||m>=n);
	//goi ham va dien dap an
	lietke(a,n,m);
}
