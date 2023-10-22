#include <stdio.h>
#include <math.h>
int ktranhiphan(int n)
{
	while(n!=0)
	{
		if(n%10==0||n%10==1)
		{
			n/=10;
			continue;
		}
		else return 0;
	}
	return 1;
}
int chuyen(int n)
{
	int kq=0;
	kq+=4*n/100+2*((n/10)%10)+1*(n%10);
	return kq;
}
int main()
{
	//chuyen tu he 2 sang he 8
	//khai bao bien 
	int n,a;
	int kq=0;
	int i=0;
	int tam;
	//nhap du lieu 
	do
	{
		printf("Nhap vao 1 so nhi phan la: ");
		scanf("%d", &n);
		if(ktranhiphan(n)==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(ktranhiphan(n)==0);
	//giai thuat va dien dap an 
	a=n;
	while(n!=0)
	{
		tam=n%1000;
		kq+=chuyen(tam)*pow(10,i);
		i++;
		n/=1000;
	}
	printf("So nhi phan %d chuyen sang bat phan la: %d\n", a, kq);
}
