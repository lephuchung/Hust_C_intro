#include <stdio.h>

int fibo(int n)
{
	if(n==1||n==0) return 1;
	int kq= fibo(n-1)+fibo(n-2);
	return kq;
}
int main()
{
	//fibonacci
	//khai bao bien
	int n, i;
	//nhap du lieu
	do
	{
		printf("Nhap vao so phan tu cua day fibo muon in (n>0): ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai");
	}
	while(n<=0);
	//giai thuat va dien dap an
	for(i=0;i<n;i++)
	{
		printf("%d ", fibo(i));
	}
	printf("\n");
}
