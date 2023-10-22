#include <stdio.h>

int main()
{
	//kiem tra lua tuoi
	//khai bao bien
	int a;
	//nhap du lieu
	printf("Nhap vao so tuoi cua ban: ");
	scanf("%d", &a);
	//thuat toan va dien dap an
	if(a<=0||a>125) printf("Nhap loi!\n");
	else
	{
		if(a<18) printf("Tre em\n");
		if(18<=a&&a<65) printf("Truong thanh\n");
		else printf("Nguoi gia\n");
	}
}
