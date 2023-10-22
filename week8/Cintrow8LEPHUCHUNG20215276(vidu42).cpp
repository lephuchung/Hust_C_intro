#include <stdio.h>
#include <math.h>

int ktranhiphan(int n)
{
	while(n>0)
	{
		if(n%10!=1&&n%10!=0) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	//doi tu he 2 sang he 10 
	//khai bao bien 
	int n, dem=0, i=0, sum;
	//nhap du lieu 
	do 
	{
		printf("Nhap vao so nhi phan muon chuyen: ");
		scanf("%d", &n);
		if(ktranhiphan(n)==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(ktranhiphan(n)==0);
	int a=n;
	//giai thuat va dien dap an 
	while(n>0)
	{
		if(n%10==1)
		{
			sum+=pow(2,i);
			dem++;
			i++;
			n/=10;	
		} 
		else
		{
			dem++;
			i++;
			n/=10;
		}
	}
	printf("So nhi phan %d chuyen sang he thap phan la: %d", a, sum);
}
