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
void tongle(int a[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			sum+=a[i];
		}
		else continue;
	}
	printf("Tong cac so le trong mang nay la: %d\n", sum);
}
void min(int a[], int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i]) min=a[i];
		else continue;
	}
	printf("So nho nhat cua mang la: %d\n", min);
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
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				min=j;
			}
			else continue;
		}
		swap(a[i],a[min]);
	}
}
void minchan(int a[], int n)
{
	int dem=0;
	int min;
	sort(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0) 
		{
			min=a[i];
			dem=1;
			break;
		}
		else continue;
	}
	if(dem==1) printf("So chan be nhat trong mang nay la: %d\n", min);
	else printf("Trong mang khong co mot so chan nao!\n");
}
void tbcchan(int a[], int n)
{
	float dem=0;
	float sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum+=a[i];
			dem++;
		}
		else continue;
	}
	float kq=sum/dem;
	if(dem!=0) printf("Trung binh cong cac so chan trong mang la: %f\n", kq);
}
int main()
{
	//viet phuong trinh nhap mang chua 20 so nguyen 
	//tinh tong cac so le trong mang 
	//tim so nho nhat trong cac gia tri vua nhap
	//tim so chan nho nhat trong mang 
	//tim trung binh cong cua cac so chan trong mang 
	//khai bao bien 
	int n;
	int a[1001];
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an 
	tongle(a,n);
	min(a,n);
	minchan(a,n);
	tbcchan(a,n);
}
