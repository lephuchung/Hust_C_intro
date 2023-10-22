#include <stdio.h>

int fibo(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	else return fibo(n-1)+fibo(n-2);
}
int main()
{
	//nhap 1 so nguyen tu ban phim
	//tim so fibo lon nhat nho hon n
	//khai bao bien 
	int tam, t=1;
	int n;
	//nhap du lieu
	do
	{
		printf("Nhap mot so nguyen duong n la: ");
		scanf("%d", &n);
	}
	while(n<=0);
	//giai thuat va dien dap an 
	while(tam<n)
	{
		tam=fibo(t);
		t++;
	}
	printf("So fibo lon nhat nho hon n la: %d", fibo(t-2));
}
