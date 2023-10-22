#include <stdio.h>
int main()
{
	//gia su ban co voucher mua dia nhac tri gia 100k, viet giai thuat de mua dia CD voi voucher noi tren 
	//khai bao bien
	int n,a,gia;
	//nhap vao du lieu
	do
	{
		printf("nhap vao gia dia CD la: ");
		scanf("%d", &n);
	}
	while(n<=0);
	//thuat toan va dien dap an
	printf("ban co muon dung voucher tri gia 100 ngan khong?\n");
	do
	{	
		printf("neu co an phim 1, neu khong an phim 0.\n");
		scanf("%d", &a);
	}
	while(a<0||a>1);
	if(a==1)
	{
		if(n<=100) 
		{
			gia=0;
		}
		else
		{
			gia=n-100;
		}
		printf("ban da dung mot voucher tri gia 100 ngan\n");
	}
	else
	{
		gia=n;
		printf("ban khong dung voucher tri gia 100 ngan\n");
	}
	printf("ban phai tra %d ngan dong de mua dia cd nay\n", gia);
}
