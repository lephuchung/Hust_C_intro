#include <stdio.h>

int main()
{
	const float pi=3.14;
	float r;
	do
	{
		printf("Nhap vao ban kinh duong tron (r>0): ");
		scanf("%f", &r);
		if(r<=0) printf("Nhap khong hop le, moi ban nhap lai!\n");
	}
	while(r<=0);
	float s, p;
	s=pi*r*r;
	p=2*pi*r;
	printf("dien tich hinh tron la: %.2f\n", s);
	printf("chu vi hinh tron la: %.2f\n", p);
}
