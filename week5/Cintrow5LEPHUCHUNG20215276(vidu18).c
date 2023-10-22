#include <stdio.h>
#include <math.h>

int main()
{
	//tinh can((x2-x1)^2+(y2-y1)^2)
	//khai bao bien
	float x1, x2, y1, y2;
	float kq;
	//nhap du lieu
	printf("Tinh can((x2-x1)^2+(y2-y1)^2)\n");
	printf("Nhap vao cac tham so:\n");
	printf("x1=");
	scanf("%f", &x1);
	printf("y1=");
	scanf("%f", &y1);	
	printf("x2=");
	scanf("%f", &x2);
	printf("y2=");
	scanf("%f", &y2);
	//giai thuat va dien dap an
	kq=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	printf("Dap an la: %f", kq);	
}
