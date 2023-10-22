#include <stdio.h>
#include <math.h>
#define e 2.71828
#define limit 1e-10

int main()
{
	//xac dinh ham sinh(x) voi do chinh xac 1e-10
	//khai bao bien 
	float x, sum=0, t, m, d=1, u, i=1;
	//nhap du lieu 
	printf("Tinh sinh(x), nhap vao so x muon tinh la: ");
	scanf("%f", &x);
	//giai thuat va dien dap an
	t=x;
	m=1;
	do
	{	
		sum+=t/m;
		i+=2;
		d+=2;
		t=pow(x,i);
		m*=d*(d-1);
		u=t/m;	
	}
	while(fabs(u)>limit);
	printf("sinh(%f)=%.10f",x,sum);
}
