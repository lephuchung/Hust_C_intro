#include <stdio.h>

int main()
{
	//giai he phuon trinh 2 an
	//khai bao bien 
	float a,b,c,d,e,f,x,y;
	//nhap du lieu
	printf("Dang he phuong trinh 2 an:\n");
	printf("ax+by=c\n");
	printf("dx+ey=f\n");
	printf("Nhap vao 6 so a b c d e f lan luot la: ");
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	//giai thuat va dien dap an 
	if (a!=0 && (e-((d*b)/a))!=0)
	{
		y = (f-((d*c)/a))/(e-((d*b)/a));
		x = (c-b*y)/a;
		printf("He phuong trinh co nghiem duy nhat la: (x;y)=(%f;%f)",x,y);
	}
	if (a!=0 && (e-((d*b)/a))==0 && (f-((d*c)/a))!=0) printf("He phuong trinh vo nghiem");
	if (a!=0 && (e-((d*b)/a))==0 && (f-((d*c)/a))==0) printf("He phuong trinh co vo so nghiem");
	if (a==0 && b!=0) 
	{
		y = -c/b;
		if (d==0) 
		{
			if((((-e*c)/b)-f)==0) printf("He phuong trinh co vo so nghiem. ");
			else printf("He phuong trinh vo nghiem.");
		}
		if (d!=0)
		{
			x = (((e*c)/b) +f)/d;
			printf("He phuong trinh co nghiem duy nhat: (x;y)=(%f;%f)",x,y);
		} 
	}
}
