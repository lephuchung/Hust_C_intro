#include <stdio.h>

int main()
{
	//doi km sang dam
	//khai bao bien 
	float d,km;
	//nhap du lieu
	do 
	{
		printf("Nhap vao so km muon chuyen doi (0< so Km) la: ");
		scanf("%f", &km);
		if(km<=0) printf("Nhap loi, xin moi nhap lai!");
	}
	while(km<=0);
	//giai thuat va dien dap an 
	d=0.621371192*km;
	printf("Chuyen doi sang dam thi so km nay co gia tri la: %f\n", d);
}
