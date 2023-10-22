#include <stdio.h>
#include <math.h>

void timnhantu(int n, int a[], int &k)
{
	int j=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			a[j]=i;
			a[j+1]=n/i;
			j+=2;
		}
	}
	k=j;
}
void swap(int &a, int &b)
{
	int tam;
	tam=a;
	a=b;
	b=tam;
}
void sort(int a[], int k)
{
	for(int i=0;i<k-1;i++)
	{	
		for(int j=i+1;j<k;j++)
		{
			if(a[i]<a[j])
			{
				swap(a[i],a[j]);
			}
		}
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
int main()
{
	//tim cap nhan tu trung nhau lon nhat
	//khai bao bien
	int n,m,p,k,kq;
	int a[10001], b[10001];
	//nhap du lieu  
	do
	{
		printf("Nhap vao so thu nhat (<=10000) la: ");
		scanf("%d", &n);
		if(n>10000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n>10000);
	do
	{
		printf("Nhap vao so thu hai (<=10000) la: ");
		scanf("%d", &m);
		if(m>10000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m>10000);
	//goi ham va dien dap an
	timnhantu(n,a,k);
	sort(a,k);
	inmang(a,k);
	timnhantu(m,b,p);
	sort(b,p);
	inmang(b,p);
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<p;j++)
		{
			if(a[i]==b[j])
			{
				kq=a[i];
				break;
			}
			else continue;
		}
		if(kq!=0) break;
		else continue;
	}
	printf("Nhan tu chung lon nhat la: %d\n", kq);
}
