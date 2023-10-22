#include <stdio.h>
#include <math.h>

int ktranguyento(int n)
{
	int kq=1;
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) kq=0;
		else continue;
	}
	return kq;
}
int main()
{
	//kiem tra xem 1 so co the tach thanh 2 so nguyen to khong
	//khai bao bien 
	int n, i, dem=0;
	//nhap du lieu 
	do
	{
		printf("Nhap vao so nguyen duong n la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<0);
	//giai thuat va dien dap an
	for(i=1;i<=n/2;i++)
	{
		if(ktranguyento(i)==1&&ktranguyento(n-i)==1)
		{
			printf("%d=%d+%d\n", n, i, n-i);
			dem++;
		}
		else continue;
	}
	if(dem==0) printf("So nay khong the tach thanh 2 so nguyen to.\n");
}
