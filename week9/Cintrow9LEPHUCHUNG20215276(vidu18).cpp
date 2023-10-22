#include <stdio.h>

void giaipt(float a, float b)
{
	if(a==0)
	{
		if(b==0) printf("Phuong trinh vo so nghiem!\n");
		else printf("Phuong trinh vo nghiem!\n");
	}
	if(a!=0) printf("Phuong trinh co nghiem duy nhat la: %f", -b/a);
}
int main()
{
	//giai ax+b=0
	//khai bao bien 
	float a,b;
	//nhap du lieu 
	printf("Giai phuong trinh ax+b=0\n");
	printf("Nhap vao tham so a la: ");
	scanf("%d", &a);
	printf("Nhap vao tham so b la: ");
	scanf("%d", &b);
	giaipt(a,b);
}
