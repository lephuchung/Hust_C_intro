#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
	//tinh the tich hinh tru
	//khai bao bien
	float v,s,r,h;
	//nhap du lieu 
	do
	{
		printf("Nhap vao ban kinh hinh tru (0<r) la: ");
		scanf("%f", &r);
		if(0>=r) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(0>=r);
	do
	{
		printf("Nhap vao chieu cao hinh tru (0<h) la: ");
		scanf("%f", &h);
		if(0>=h) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(0>=h);
	//giai thuat va dien dap an
	s=pi*pow(r,2);
	v=s*h;
	printf("Dien tich day hinh tru la: %f\n", s);
	printf("The tich hinh tru la: %f\n", v);
}
