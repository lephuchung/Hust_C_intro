#include <stdio.h>
#include <math.h>
#define e 2.71828
#define limit 1e-10

int main()
{
	//tinh e mu x bang taylor voi do chinh xac 1e-10
	//khai bao bien 
	float x, sum=1, t, m=1, i=1, u;
	//nhap du lieu 
	printf("Tinh e^x, nhap x muon tinh la: ");
	scanf("%f", &x);
	//giai thuat va dien dap an
	do
	{	
		t=pow(x,i);
		m*=i;
		u=t/m;
		sum+=t/m;
		i++;
	}
	while(u>limit);
	printf("e^%f=%.10f",x,sum);
}
