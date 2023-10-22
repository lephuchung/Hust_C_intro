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
void hopmang(int a[], int n, int b[], int m, int c[], int &p)
{
	p=m+n;
	int k=0;
	for(int i=0;i<n;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(int j=0;j<m;j++)
	{
		c[k]=b[j];
		k++;
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
			if(a[i]>=a[j])
			{
				swap(a[i],a[j]);
			}
			else continue;
		}
	}
}
int main()
{
	//hop hai mang
	//sap xep tang dan
	//khai bao bien 
	int a[1001], b[1001], c[2002];
	int n, m, p;
	//nhap du lieu
	printf("Nhap vao mang thu nhat la: \n");
	nhapmang(a,n);
	printf("Nhap vao mang thu hai la: \n");
	nhapmang(b,m);
	//goi ham va dien dap an 
	hopmang(a,n,b,m,c,p);
	sort(c,p);
	printf("Mang sau khi da hop va sap xep la: ");
	inmang(c,p);	
}
