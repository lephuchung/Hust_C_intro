#include <stdio.h>

int main()
{
	//kiem tra lua tuoi
	//khai bao bien
	int a;
	//nhap du lieu
	do
	{
		printf("Nhap vao so tuoi muon kiem tra (0<a) la: ");
		scanf("%d", &a);
		if(a<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(a<=0);
	//thuat toan va dien dap an
	if(a<18) printf("Tre em\n");
	if(18<=a&&a<65) printf("Truong thanh\n");
	else printf("Nguoi gia\n");
}
