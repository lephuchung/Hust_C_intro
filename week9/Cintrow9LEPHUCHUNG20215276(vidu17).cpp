#include <stdio.h>
#include <math.h>

void chuyen(int n)
{
	int bp;
	int kq=0;
	int a=n;
	int i;
	for(i=1;i<=n;i++)
	{
		bp=pow(2,i);
		if(bp>n) break;
		
	}
	i--;
	while(i>=0)
	{
		printf("%d ", kq);
		if(pow(2,i)<=n)
		{
			kq*=10;
			kq+=1;
			n-=pow(2,i);
			i--;
		}
		else
		{
			kq*=10;
			i--;
		}
	}
	printf("Chuyen so %d tu he 10 sang he 2 la: %d", a, kq);
}
int main()
{
	//chuyen tu he 10 sang he 2 
	//khai bao bien 
	int n ;
	// nhap du lieu 
	do 
	{
		printf("Nhap vao so nguyen duong muon chuyen la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an 
	chuyen(n);
}
