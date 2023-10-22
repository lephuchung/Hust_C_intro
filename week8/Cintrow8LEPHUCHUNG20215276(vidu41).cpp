#include <stdio.h>
#include <math.h>

int main()
{
	//chuyen tu he 10 sang he 2 khong su dung array
	//khai bao bien 
	int n,i; 
	//nhap du lieu 
	do
	{
		printf("Nhap so nguyen duong muon chuyen la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	for(i=0;i<n;i++)
	{
		if(n<pow(2,i)) break;
		else continue;
	}
	i--;
	printf("So he thap phan %d chuyen sang he nhi phan la: ",n);
	while(i>=0)
	{
		if(n>=pow(2,i))
		{
			n-=pow(2,i);
			printf("1");
			i--;
		}
		else if(n<pow(2,i))
		{
			printf("0");
			i--;
		}
	}
}
