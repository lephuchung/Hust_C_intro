#include <stdio.h>

int main()
{
	char loai;
	float gia;
	int h;
	do
	{
		printf("Nhap vao loai xe (c,t,b) la: ");
		scanf(" %c", &loai);
		if(loai!='c'&&loai!='b'&&loai!='t') printf("Nhap loi, xin moi nhap lai\n");
	}
	while(loai!='c'&&loai!='b'&&loai!='t');
	do
	{
		printf("Nhap vao so gio gui xe (h>0) la: ");
		scanf("%d", &h);
		if(h<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(h<=0);
	if(loai=='c') 
	{
		if(h<=2) gia=0.7*h;
		else gia=0.7*2+2.5*(h-2);
	}
	if(loai=='b') 
	{
		if(h<=2) gia=1.5*h;
		else gia=1.5*2+2*(h-2);
	}
	if(loai=='t') 
	{
		if(h<=2) gia=2.5*h;
		else gia=2.5*2+3.25*(h-2);
	}
	printf("So tien phai tra la: $%.2f\n", gia);
}
