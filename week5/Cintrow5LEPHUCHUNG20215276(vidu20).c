#include <stdio.h>

int main()
{
	//doi thoi gian tu giay thanh gio va phut
	//khai bao bien 
	int h,m,s;
	//nhap du lieu
	do
	{
		printf("Nhap vao so giay muon doi (0<s) la: ");
		scanf("%d", &s);
		if(s<=0) printf("Nhap vao loi, xin moi nhap lai!\n");
	}
	while(s<=0);
	//giai thuat va dien dap an
	m=s/60;
	s-=60*m;
	h=m/60;
	m-=60*h;
	printf("thoi gian quy doi la: ");
	if(h!=0) printf("%d gio ", h);
	if(m!=0) printf("%d phut ", m);
	if(s!=0) printf("%d giay ", s);
}
