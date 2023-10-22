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
int main()
{
	//dem so phan tu bang 0 cua mang
	//tim day con bang 0 dai nhat
	//dem so lan xuat hien cua tung phan tu 
	//khai bao bien 
	int a[1001];
	int n;
	int max=0, temp=0, kq;
	int dem=0, check=1;
	//nhap du lieu 
	nhapmang(a,n);
	//giai thuat va dien dap an
	for(int i=0;i<n;i++)
 	{
		if(a[i]==0) dem++;
	}
	printf("So phan tu bang 0 cua mang la: %d\n", dem);
	for(int i=0;i<n;i++)
	{
		if(a[i] == 0) temp++;
		if(a[i] != 0|| i==n-1)
		{
			if(temp > max)
			{	
				max = temp;
			}
			temp = 0;
		}
	}
	if (temp > max) max = temp;
	printf("Do dai day con bang 0 lon nhat la: %d\n", max);
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			} 
		}
		for(int o=0;o<i;o++)
		{
			if(a[o]==a[i])
			{
				check=0;
				break;
			}
		}
		if(check==1) printf("Phan tu %d xuat hien %d lan\n", a[i], --count);
		check=1;
	}
}
