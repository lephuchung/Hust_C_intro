#include <stdio.h>

int main()
{
	//so armstrong
	//khai bao bien 
	int n, sum=0, i, tam;
	//nhap du lieu 
	do 
	{
		printf("Nhap vao so muon kiem tra (n>0) la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	tam=n;
	for(i=0;i<10;i++)
	{
		if(n!=0)
		{
			sum+=(n%10)*(n%10)*(n%10);
			n/=10;
		}
		else break;
	}
	if(sum==tam) printf("Day la so armstrong!\n");
	else printf("Day khong phai la so armstrong!\n");
}
