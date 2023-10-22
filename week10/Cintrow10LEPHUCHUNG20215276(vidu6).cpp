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
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void tongmang(int a[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("Tong cua mang a la: %d\n", sum);
}
int main()
{
	//tinh tong mang
	//khai bao bien 
	int a[1001];
	int n;
	//nhap du lieu
	nhapmang(a,n);
	//goi ham va dien dap an
	tongmang(a,n);
}
