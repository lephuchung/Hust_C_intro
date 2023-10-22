#include <stdio.h>
int fibo(int n)
{
	if(n==1) return 1;
	if(n==2) return 1;
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	//xac dinh so fibo thu n
	//khai bao bien 
	int n;
	//nhap du lieu 
	do
	{
		printf("Nhap vao so fibo muon tinh (0<n) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an
	printf("So fibo thu %d la: %d", n, fibo(n));
}
