#include <stdio.h>

void swap(int &a, int &b)
{
	int tam=0;
	tam=a;
	a=b;
	b=tam;
}
void daonguoc(int a[], int b)
{
	int i;
	for(i=0;i<b/2;i++)
	{
		swap(a[i], a[b-i-1]);
	}
}
void chuyen(int n, int a[20], int &b)
{
	int k=n;
	int kq;
	int i=0;
	while(n!=0)
	{
		kq=n%16;
		a[i]=kq;
		i++;
		n/=16;
	}
	b=i+1;
	daonguoc(a,b);
	printf("Chuyen so %d tu he 10 sang he 16 la: ",k);
	for(i=1;i<b;i++)
	{
		switch (a[i])
		{
			case 0:
			{
				printf("0");
				break;
			}
			case 1:
			{
				printf("1");
				break;	
			}	
			case 2:
			{
				printf("2");
				break;
			}
			case 3:
			{
				printf("3");
				break;	
			}	
			case 4:
			{
				printf("4");
				break;
			}
			case 5:
			{
				printf("5");
				break;	
			}	
			case 6:
			{
				printf("6");
				break;
			}
			case 7:
			{
				printf("7");
				break;	
			}	
			case 8:
			{
				printf("8");
				break;
			}
			case 9:
			{
				printf("9");
				break;	
			}
			case 10:
			{
				printf("A");
				break;
			}
			case 11:
			{
				printf("B");
				break;	
			}	
			case 12:
			{
				printf("C");
				break;
			}
			case 13:
			{
				printf("D");
				break;	
			}	
			case 14:
			{
				printf("E");
				break;
			}
			case 15:
			{
				printf("F");
				break;	
			}	
		}
	}	
	printf("\n");
}
int main()
{
	//chuyen tu he 10 ve he 16
	//khai bao bien 
	int n,b;
	int a[20];
	//nhap du lieu
	do
	{
		printf("Nhap vao so nguyen duong n muon chuyen la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an 
	chuyen(n,a,b);
	
}
