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
void chia(int a[], int n, int b[], int &m, int c[], int &p)
{
	int j=0,k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			m++;
			j++;
		}
		if(a[i]%2==1)
		{
			c[k]=a[i];
			p++;
			k++;
		}
	}
}
int main()
{
	//chia 1 day chan thanh 2 day: chan va le
	//khai bao bien 
	int a[1001], b[1001], c[1001];
	int m=0, n, p=0;
	//nhap du lieu
	nhapmang(a,n);
	//goi ham va dien dap an
	chia(a,n,b,m,c,p);
	inmang(a,n);
	inmang(b,m);
	inmang(c,p);
}
