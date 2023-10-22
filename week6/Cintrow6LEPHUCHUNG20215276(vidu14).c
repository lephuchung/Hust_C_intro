#include <stdio.h>

int main()
{
	//tim gia tri lon nhat cua 4 so nguyen nhap vao tu ban phim
	//khai bao bien 
	int a,b,c,d;
	//nhap du lieu
	printf("Nhap vao 4 so lan luot la: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//thuat toan va dien dap an
	int max1=(a>b)?a:b;
	int max2=(c>d)?c:d;
	int max=(max1>max2)?max1:max2;
	printf("So lon nhat trong 4 so la: %d", max);
}
