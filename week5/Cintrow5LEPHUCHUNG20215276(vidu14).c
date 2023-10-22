#include <stdio.h>

int main()
{
	//bang tinh luong nhan vien
	//khai bao bien
	float lcb, da, hra=150, ta=120, k=450, pf, it, thuc;
	//nhap du lieu
	do
	{
		printf("Nhap vao luong co ban (0<luong co ban) la: ");
		scanf("%f", &lcb);
		if(lcb<=0) printf("Nhap loi, xin moi nhap lai!\n");	
	}
	while(lcb<=0);
	//giai thuat va dien dap an
	da=lcb*12/100;
	pf=lcb*14/100;
	it=lcb*15/100;
	thuc=lcb+da+hra+ta+k-pf-it;
	printf("Luong thuc lanh cua nhan vien nay la: %.0f", thuc);
}
