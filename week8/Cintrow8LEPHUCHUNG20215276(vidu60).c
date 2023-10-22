#include <stdio.h>
#include <math.h>
#define e 2.71828
#define limit 1e-10

int main()
{
	//xac dinh ham cosh(x) voi do chinh xac 1e-10
	//khai bao bien 
	float x, sum=0, t, m, d=0, u, i=0;
	//nhap du lieu 
	printf("Tinh cosh(x), nhap vao so x muon tinh la: ");
	scanf("%f", &x);
	//giai thuat va dien dap an
	t=1;
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
	printf("cos(%f)=%.10f",x,sum);
}
