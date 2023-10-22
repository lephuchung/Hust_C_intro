#include <stdio.h>
#include <math.h>

int main()
{
	//giai phuong trinh bac 2
	//khai bao bien 
	float a, b, c;
	float x1, x2, x, delta;
	//nhap du lieu
	printf("Nhap vao cac he so a, b, c cua phuong trinh ax^2+bx+c=0 lan luot la: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Phuong trinh: %dx^2+%dx+%d=0\n", a, b, c);
	//thuat toan va dien dap an 
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				printf("Phuong trinh vo so nghiem\n");
			}
			else printf("Phuong trinh vo nghiem\n");
		}
		else
		{
			x=-c/b;
			printf("Phuong trinh co nghiem la %.2f\n", x);
		}
	}
	else
	{
		delta=pow(b,2)-4*a*c;
		if(delta<0) printf("Phuong trinh vo nghiem\n");
		if(delta==0) 
		{
			x=-b/(2*a);
			printf("Phuong trinh co nghiem kep la: %.2f\n", x);
		}
		else
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet la %.2f va %.2f\n", x1, x2);
		}
	}
}
