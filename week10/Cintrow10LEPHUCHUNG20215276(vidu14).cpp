#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
		if(n<1||n>1000) printf("Nhap loi, xin moi nhap lai!\n");	
	}	
	while(n<1||n>1000);
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
void daomang(int a[], int n)
{
	for(int i=0;i<n/2;i++)
	{
		swap(a[i], a[n-i-1]);	
	}	
	inmang(a,n);
} 
int main()
{
	//dao nguoc mang 
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	printf("Mang truoc khi dao la: ");
	inmang(a,n);
	printf("Mang sau khi dao la: ");
	daomang(a,n);
}
