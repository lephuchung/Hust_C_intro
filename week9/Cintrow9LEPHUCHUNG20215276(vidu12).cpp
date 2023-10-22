#include <stdio.h>

void chuyen(float f)
{
	float c;
	c=(f-32)*5/9;
	printf("Nhiet do sau khi chuyen la: %.1f'C\n", c);
}
int main()
{
	//chuyen tu do f sang do c
	//khai bao bien 
	float f;
	//nhap vao du lieu
	printf("Nhap vao nhiet do (F) muon chuyen sang nhiet do (C) la: ");
	scanf("%f", &f);
	//goi ham va dien dap an 
	chuyen(f);
}
