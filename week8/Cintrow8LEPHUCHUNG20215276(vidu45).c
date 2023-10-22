#include <stdio.h>

int main()
{
	//tim boi chung nho nhat 
	//khai bao bien 
	int n, m, i, kq, a, b;
	//nhap du lieu 
	printf("Nhap vao 2 so nguyen lan luot la: ");
	scanf("%d %d", &m, &n);
	//giai thuat va dien dap an 
	a=m;
	b=n;
	if(m>n) 
	{
		i=2;
		while(i!=0)
		{
			if(m%n==0)
			{
				kq=m;
				break;
			}
			else 
			{
				m=a*i;
				i++;
				continue;	
			}
		}
	}
	if(n>m)
	{
		i=2;
		while(i!=0)
		{
			if(n%m==0)
			{
				kq=n;
				break;
			}
			else
			{
				n=b*i;
				i++;
				continue;	
			}
		}
	}
	else if(n==m) kq=n;
	printf("Boi chung nho nhat cua 2 so %d va %d la: %d", a, b, kq);
}
