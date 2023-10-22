#include <stdio.h>
#include <math.h>

int main()
{
	//lam phep tinh 
	//khai bao bien 
	float x,y,kq;
	int n;
	const float e=2.718282;
	//nhap du lieu 
	printf("Nhap vao tham so thuc x la: ");
	scanf("%f", &x);
	printf("Nhap vao tham so thuc y la: ");
	scanf("%f", &y);
	printf("Nhap vao so nguyen n la: ");
	scanf("%d", &n);
	kq=sqrt(pow(x,5)+pow(e, log(fabs(y))+1))+(1+sin(x))/(cos(n*x)+sqrt(2+abs(n)));
	printf("ket qua la: %f", kq);
}
