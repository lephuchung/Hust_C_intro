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
void ktra(int a[], int n)
{
	int check=1;
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i-1]) 
		{
			check=0;
			break;
		}
		else continue;
		printf("%d", check );
	}
	if(check==1) printf("Mang nay doi xung!\n");
	else if(check==0) printf("Mang nay khong doi xung!\n");
}
int main()
{
	//kiem tra tinh doi xung cua mang
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	inmang(a,n);
	ktra(a,n);
}
