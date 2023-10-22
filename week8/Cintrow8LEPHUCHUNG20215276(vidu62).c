#include <stdio.h>
#include <math.h>
#include <float.h>
#define limit 1e-10
int main()
{
	//tinh sin(x) voi do chinh xac 1e-10
	//khai bao bien 
	double a,b,c,d,e,x,bg;
	int n;
	a=0;
	int i;
	//nhap du lieu
	printf("Tinh sin(x), nhap x muon tinh la: ");
	scanf("%lf",&x);
	//giai thuat va dien dap an 
	i=1;
	b=1;
	bg=x;
	int kt=1;
	while(x/b>limit)
	{
		if(kt==1)
		{
			a=a+x/b;
			kt=0;
		}
		else
		{
			a=a-x/b;
			kt=1;
		}
		x=x*bg*bg;
		b=b*(i+1)*(i+2);
		i=i+2;
	}
	printf("sin(%lf)=%.10lf",bg,a);
}
