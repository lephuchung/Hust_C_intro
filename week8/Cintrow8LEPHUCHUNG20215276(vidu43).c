#include <stdio.h>

int main()
{
	//tim uoc chung lon nhat
	//khai bao bien 
	int a, b, c, d;
	//nhap du lieu
	printf("Nhap vao 2 so muon tim uoc chung la: ");
	scanf("%d %d", &a, &b);
	c=a;
	d=b;
	//giai thuat va dien dap an
	while(a>0&&b>0)
	{
		if(a>b) a-=b;
		if(b>a) b-=a;
		if(b==a) break;
	}
	printf("Uoc chung lon nhat cua 2 so %d va %d la: %d", c, d, a);
}
