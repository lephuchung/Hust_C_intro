#include <stdio.h>

void dongnang(float m, float v)
{
	float kq;
	kq=m*v*v/2;
	printf("Dong nang cua vat la: %f", kq);
}
int main()
{
	//tinh dong nang cua vat
	//khai bao bien 
	float v,m;
	//nhap du lieu 
	printf("Tinh dong nang cua vat, Nhap vao: \n");
	do
	{
		printf("Khoi luong (m>0): ");
		scanf("%f", &m);
		if(m<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<=0);
	do
	{
		printf("Van toc (m>0): ");
		scanf("%f", &v);
		if(v<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(v<=0);
	//goi ham va dien dap an 
	dongnang(m,v);
	
}
