#include <stdio.h>

void trans(float &i)
{
	if(i<4) i=0;
	if(4<=i && i<5.5) i=1;
	if(5.5<=i && i<7.0) i=2;
	if(7.0<=i && i<8.5) i=3;
	if(8.5<=i && i<=10) i=4;
}
int main()
{
	//viet chuong trinh tinh gpa ki nay 
	//khai bao bien 
	float i;
	//giai thuat va dien dap an
	do
	{
		printf("Dien diem giai tich (0<=x<=10) la: ");
		scanf("%f", &i);
		if(i<0||10<i) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(i<0||10<i);
	trans(i);
	printf("Gpa giai tich la: %f\n", i);
	do
	{
		printf("Dien diem triet hoc (0<=x<=10) la: ");
		scanf("%f", &i);
		if(i<0||10<i) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(i<0||10<i);
	trans(i);
	printf("Gpa triet hoc la: %f\n", i);
	do
	{
		printf("Dien diem quan su (0<=x<=10) la: ");
		scanf("%f", &i);
		if(i<0||10<i) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(i<0||10<i);
	trans(i);
	printf("Gpa quan su la: %f\n", i);
	do
	{
		printf("Dien diem tieng phap (0<=x<=10) la: ");
		scanf("%f", &i);
		if(i<0||10<i) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(i<0||10<i);
	trans(i);
	printf("Gpa tieng phap la: %f\n", i);

}
