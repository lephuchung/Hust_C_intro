#include <stdio.h>
#include <math.h>
int main()
{
	//tinh tong cac so 9
	//9+99+999+...
	//khai bao bien
	int n, sum=0, i; 
	//nhap du lieu
	do
	{
		printf("Nhap vao so luong muon cong (n>0) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	for(i=1;i<=n;i++)
	{
		sum+=pow(10,i);
	}
	printf("Dap so la: %d", sum-n);
}
