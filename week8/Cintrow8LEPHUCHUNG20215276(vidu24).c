#include <stdio.h>
#include <math.h>

int gt(float i)
{
	if(i==0) return 1;
	if(i==1) return 1;
	return gt(i-1)*i;
}
int main()
{
	//tinh cos bang maclaurin, do chinh xac nhap tu ban phim 
	//khai bao bien 
	float co=1, x, e, i=2, dem=1;
	//nhap du lieu
	printf("Tinh cosx, nhap x muon tinh la: ");
	scanf("%f", &x);
	do
	{
		printf("Nhap do chinh xac (khong am) muon tinh: ");
		scanf("%f", &e);
		if(e<0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(e<0);
	while(fabs(co-cos(x))>e)
	{
		co+=(pow(x,i)*pow(-1,dem))/gt(i);
		dem++;
		i+=2;
	}
	printf("cos(%f)=%f\n", x, co);
	printf("cos(%f) theo math.h la: %f", x, cos(x));
}
