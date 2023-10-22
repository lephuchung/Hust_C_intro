#include <stdio.h>

int main()
{
	//nhap vao so ngay, chia thanh nam, thang, ngay
	//bo qua nam nhuan
	//khai bao bien
	int n,d,w,y;
	//nhap vao du lieu
	do
	{
		printf("Nhap vao so ngay muon chuyen doi (0<n) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an 
	y=n/365;
	n-=y*365;
	w=n/7;
	n-=7*w;
	d=n;
	printf("Quy doi la: ");
	if(y!=0) printf("%d nam ", y);
	if(w!=0) printf("%d tuan ", w);
	if(d!=0) printf("%d ngay\n", d);
}
