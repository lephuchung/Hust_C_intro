#include <stdio.h>

int giaithua(int n)
{
	if(n==1) return 1;
	int kq=n*giaithua(n-1);
	return kq;
}
int main()
{
	//kiem tra xem 1 so co phai strong number khong 
	//khai bao bien 
	int n,i,k;
	//nhap du lieu 
	do 
	{
		printf("Nhap vao so nguyen duong n la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//giai thuat va dien dap an
	k=n;
	for(i=1;i<=3;i++)
	{
		int j=1;
		for(j=1;j<=n+1;j++)
		{
			if(giaithua(j)>n)
			{
				n-=giaithua(j-1);
				break;
			}
			else continue;
		}
	}
	if(n==0) 
	{
		printf("A Strong Number.\n");
		for(i=1;i<=3;i++)
		{
			int j=1;
			for(j=1;j<=k+1;j++)
			{
				if(giaithua(j)>k)
				{
					k-=giaithua(j-1);
					printf("%d! ", j-1);
					break;
				}
				else continue;
			}
		}
	}
	if(n>0) printf("Not A Strong Number.\n");
}
