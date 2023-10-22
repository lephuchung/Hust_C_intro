#include <stdio.h>
#include <math.h>

int chuyen(int n)
{
	int kq;
	if(n>=4)
	{
		n-=4;
		kq+=100;
	}
	if(n>=2)
	{
		n-=2;
		kq+=10;
	}
	if(n>=1)
	{
		n-=1;
		kq+=1;
	}
	return kq;
}
int ktrabatphan(int n)
{
	while(n!=0)
	{
		if(n%10==8||n%10==9) return 0;
		else 
		{
			n/=10;
			continue;
		}
	}
	return 1;
}
int main()
{
	//chuyen tu he bat phan sang he nhi phan
	//khai bao bien 
	int n, a;
	int i=0;
	int kq=0;
	//nhap du lieu 
	do
	{
		printf("Nhap vao 1 so he bat phan muon chuyen doi la: ");
		scanf("%d", &n);
		if(ktrabatphan(n)==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(ktrabatphan(n)==0);
	//giai thuat va dien dap an
	a=n;
	while(n!=0)
	{
		kq+=chuyen(n%10)*pow(1000,i);
		n/=10;
		i++;
	}
	printf("Chuyen so bat phan %d sang so nhi phan la: %d", a, kq);
}
