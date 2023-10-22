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
void sortle(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0) continue;
		else
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]&&a[j]%2==1)
				{
					swap(a[i],a[j]);
				}
				else continue;
			}
		}
		
	}
}
int main()
{
	//sap xep mang giam dan 
	//sap xep cac so le trong mang giam dan 
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an 
	sortle(a,n);
	inmang(a,n);
	sort(a,n);
	inmang(a,n);
}	
