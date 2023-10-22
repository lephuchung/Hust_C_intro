#include <stdio.h>

int ktrant(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0) return 0;
		else continue;
	}
	return 1;
}
int main()
{
	//kiem tra nguyen to 
	//khai bao bien 
	int n, m;
	//nhap du lieu
	do 
	{
		printf("Nhap vao so nguyen duong n la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an
	if(ktrant(n)==1) printf("Day la so nguyen to!\n");
	if(ktrant(n)==0) printf("Day khong phai la so nguyen to!\n");
	do
	{
		printf("Nhap vao so gioi han (m>2) la: ");
		scanf("%d", &m);
		if(m<=2) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<=0);
	printf("Cac so nguyen to nho hon so gioi han la: ");
	for(int i=2;i<m;i++)
	{
		if(ktrant(i)==1) printf("%d ", i);
		else continue;
	}
}
