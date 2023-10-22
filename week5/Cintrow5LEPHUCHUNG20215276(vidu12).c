#include <stdio.h>

int main()
{
	//nhap vao chieu dai, chieu rong, tinh dien tich, chu vi hinh chu nhat
	//khai bao bien 
	float cd, cr, p, s;
	//nhap du lieu 
	do
	{
		printf("Nhap vao chieu dai hinh chu nhat (0<cd) la: ");
		scanf("%f", &cd);
		if(cd<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(cd<=0);
	do
	{
		printf("Nhap vao chieu rong hinh chu nhat (0<cr) la: ");
		scanf("%f", &cr);
		if(cr<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(cr<=0);
	//giai thuat va dien dap an
	p=(cd+cr)*2;
	s=cd*cr;
	printf("chu vi hinh chu nhat la: %f\n", p);
	printf("Dien tich hinh chu nhat la: %f\n", s);
}
