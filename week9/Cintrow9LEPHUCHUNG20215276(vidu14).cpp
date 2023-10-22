#include <stdio.h>

void ktra(int n)
{
	if(n%4==0 && n%100!=0) printf("Day la nam nhuan!\n");
	else if(n%400==0) printf("Day la nam nhuan!\n");
	else printf("Day khong la nam nhuan!\n");
}
int main()
{
	//kiem tra nam nhuan 
	//khai bao bien 
	int n;
	//nhap vao du lieu 
	do
	{
		printf("Nhap nam (sau cong nguyen) muon kiem tra la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an 
	ktra(n);
}
