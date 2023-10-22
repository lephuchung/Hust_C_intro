#include <stdio.h>

int main()
{
	//giai phuong trinh bac nhat
	printf("Giai phuong trinh bac nhat ax+b=0\n"); 
	//khai bao bien 
	float a,b,x;
	//nhap du lieu
	printf("Nhap vao tham so a va b la: ");
	scanf("%f %f", &a, &b);
	//giai thuat va dien dap an 
	printf("Giai phuong trinh %.2fx+%.2f=0\n", a, b);
	if(a==0)
	{
		if(b!=0) printf("Phuong trinh vo nghiem!\n");
		else printf("Phuong trinh vo so nghiem!\n");
	}
	else 
	{
		x=-b/a;
		printf("Nghiem cua phuong trinh la: %.2f", x);
	}
	
}
