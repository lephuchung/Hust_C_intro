#include<stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (so phan tu duong) la: ");
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
int ktra(int a[], int n, int b[], int m)
{
	if(m==n)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[i]) 
			{
				continue;
			}
			else return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	//kiem tra 2 mang giong nhau
	//khai bao bien 
	int a[1001], b[1001];
	int n, m;
	//nhap du lieu
	printf("Nhap du lieu mang thu nhat la: \n"); 
	nhapmang(a,n);
	printf("Nhap du lieu mang thu hai la: \n");
	nhapmang(b,m);
	if(ktra(a,n,b,m)==1) printf("2 mang giong nhau!\n");
	else printf("2 mang khong giong nhau!\n");	
}
