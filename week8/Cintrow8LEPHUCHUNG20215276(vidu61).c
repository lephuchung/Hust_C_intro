#include <stdio.h>
#include <math.h>
#define limit 1e-10

double giaithua(int i) 
{
    int j = 1;
    double gt = 1;
    for(j = 1; j<=i; j++)
	{
        gt*=j;
    }
    return gt;
}
int heso(int i)
{
    int hs;
    if(i%2==0) 
	{
        hs = 1;
    }
	else 
	{
        hs = -1;
    }
    return hs;
}
int main() 
{
    float x;//parameter x in RADIAN
    printf("Enter the value of x (in radian): ");
    scanf("%f", &x);
    float arctanx  = atan(x);
    printf("Arctan(%.2f) in math = %.2f\n", x, arctanx);
    //Handle the Maclaurin
    int i = 1; //index number
    double arc = 0;
    double sin, cos;
    while (fabs(arc-arctanx)>=limit) 
	{
        sin = (heso(i) * pow(x,2*i+1)) / giaithua(2*i+1);
        cos = (heso(i) * pow(x,2*i)) / giaithua(2*i);
        arc += atan(sin/cos);
        printf("%.2f\n", arc);
        if (fabs(arc-arctanx)<=0.5) 
		{
            break;
        }
        i++;
    }
    printf("Arctan(%.2f) in C = %.2f\n", x, arc);
}
