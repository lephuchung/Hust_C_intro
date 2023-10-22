#include <stdio.h>
#include <math.h>

void checkarm(int n)
{
	int sum=0, a;
	a=n;
	while(n>0)
	{
		sum+=pow(n%10,3);
		n/=10;	
	}
	if(a==sum) printf("%d la so Armstrong.\n", a);
	else printf("%d khong la so Armstrong.\n", a);
}
int main()
{
	//kiem tra so armstrong
	//khai bao bien 
	int n;
	//nhap du lieu
	do
	{
		printf("Nhap so n muon kiem tra (n>0) la: ");
		scanf("%d", &n);
		if(n<0) printf("Nhap loi, xin moi nhap lai");
	}
	while(n<0);
	//goi ham va dien dap an 
	checkarm(n);
}
