#include <stdio.h>

void tinhluong(int h)
{
	float l;
	if(h<=40) l=15*h;
	if(h>40) l=15*40+((float)h-40)*15*1.5;
	printf("Luong cua nhan vien nay la: %f", l);
}
int main()
{
	//chuong trinh tinh luong 
	//khai bao bien 
	int h;
	//nhap du lieu 
	do 
	{
		printf("CHU Y: GIO LAM KHONG DUOC NHO HON 10 HOAC LON HON 65!\n");
		printf("Nhap vao so gio lam viec: ");
		scanf("%d", &h);
		if(h<10||h>65) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(h<10||h>65);
	//goi ham va dien dap an 
	tinhluong(h);
}
