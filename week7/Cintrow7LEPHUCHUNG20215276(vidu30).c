#include <stdio.h>
#include <math.h>

int giaithua(int k)
{
	int u,gt=1;
	for(u=1;u<=k;u++)
	{
		gt=gt*u;
	}
	return gt;
}
int main()
{
	//khai bao bien
	float x,sum=1;
	int n,i;
	//nhap du lieu
	printf("Nhap X: ");
	scanf("%f",&x);
	do
	{
		printf("Nhap so phan tu (n>0): ");
		scanf("%d",&n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	for (i=2;i<=(n-1)*2;i+=2)
	{
		sum = sum + (pow(-1,i/2)*pow(x,i))/giaithua(i);
	}
	printf("Sum: %.4f",sum);
}
