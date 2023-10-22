#include <stdio.h>
#include <math.h>
int demsocs(int n)
{
	int dem=0,i;
	while(n>0)
	{
		n/=10;
		dem++;
	}
	return dem;
}
int main()
{
	//kiem tra doi xung
	//khai bao bien 
	int n,i,kq=1;
	//nhap du lieu 
	do
	{
		printf("Nhap vao so muon kiem tra (n>=10): ");
		scanf("%d", &n);
	}
	while(n<10);
	//giai thuat va dien dap an
	if(demsocs(n)%2==0)
	{
		for(i=1;i<demsocs(n)/2;i++)
		{
			int j,k;
			int tam=n;
			int u=pow(10,demsocs(n)-i);
			int v=pow(10,i);
			int m=pow(10,i-1);
			j=(tam/u)%10;
			k=(tam%v)/m;
			if(j==k) continue;
			if(j!=k) 
			{
				kq=0;
				printf("So nay khong doi xung\n");
				break;
			}
		}	
		if(kq==1)
		{
			printf("So nay la so doi xung\n");
		}
	}
	if(demsocs(n)%2==1)
	{
		for(i=1;i<=demsocs(n)/2;i++)
		{
			int j,k;
			int tam=n;
			int u=pow(10,demsocs(n)-i);
			int v=pow(10,i);
			int m=pow(10,i-1);
			j=(tam/u)%10;
			k=(tam%v)/m;
			if(j==k) continue;
			if(j!=k) 
			{
				kq=0;
				printf("So nay khong doi xung\n");
				break;
			}
		}
		if(kq==1)
		{
			printf("So nay la so doi xung\n");
		}
	}
}
