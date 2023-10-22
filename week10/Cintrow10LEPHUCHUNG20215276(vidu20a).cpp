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
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void ktra(int a[1001], int n)
{	
	for(int i=0;i<n;i++)
	{
		int check=0;
		int k=a[i];
		int dem=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==k)
			{
				dem++;
			}
			else continue;
		}
		for(int j=0;j<i;j++)
		{
			if(k==a[j]) 
			{
				check=1;
				break;
			}
		}
		if(check==0) printf("So %d xuat hien %d lan!\n", k, dem);
	}
}
int main()
{
	//dem so phan tu lap lai cua mang 
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an
	inmang(a,n);
	ktra(a,n);	
}
