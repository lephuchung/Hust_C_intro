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
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void ktra(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i]) dem++;
				else continue;
			}
		}
	}
	printf("So tam giac co the tao la: %d", dem);
}
int main()
{
	//dem tam giac co the tao ra tu mot day
	//khai bao bien 
	int a[101];
	int n;
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va giai thuat 
	ktra(a,n);
}
