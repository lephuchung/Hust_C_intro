#include <stdio.h>

int main()
{
	//kiem tra nam nhuan
	//khai bao bien 
	int n;
	//nhap du lieu 
	do
	{
		printf("Nhap nam muon kiem tra (n>0) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//thuat toan va dien dap an 
	if(n%400==0) printf("Day la nam nhuan!\n");
	else if((n%4==0)&&(n%100!=0)) printf("Day la nam nhuan!\n");
	else 
	{
		printf("Day khong phai nam nhuan!\n");
	}
}
