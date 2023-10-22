#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=100) la: ");
		scanf("%d", &n);
		if(n<1||n>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>100);
	for(int i=0; i<n;i++)
	{
		printf("[%d]=", i);
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
			if(a[i]>a[j]) swap(a[i], a[j]);
		}
	}
}
void hop(int a[], int n, int b[], int m, int c[], int &p)
{
	p=0;
	int i=0;
	int j=0;
	int k=0;
	while(n-i>0||m-j>0)
	{
		if(a[i]>b[j] && i!=n && j!=m)
		{
			c[k]=b[j];
			p++;
			k++;
			j++;
		}
		else if(b[j]>=a[i] && i!=n && j!=m)
		{
			c[k]=a[i];
			p++;
			k++;
			i++;
		} 
		else if(j==m && i!=n)
		{
			c[k]=a[i];
			i++;
			k++;
			p++;
		}
		else if(i==n && j!=m)
		{
			c[k]=b[j];
			j++;
			k++;
			p++;
		}
	}
	inmang(c,p);
}
int main()
{
	//hop mang 
	//khai bao bien 
	int a[1001],b[1001],c[2002];
	int n, m, p;
	//nhap du lieu 
	printf("Nhap vao du lieu mang 1:\n");
	nhapmang(a,n);
	sort(a,n);
	inmang(a,n);
	printf("Nhap vao du lieu mang 2:\n");
	nhapmang(b,m);
	sort(b,m);
	inmang(b,m);
	//goi ham va dien dap an 
	printf("\nMang ket qua:\n");
	hop(a,n,b,m,c,p);
}
