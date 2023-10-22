#include <stdio.h>

void nhapmang(int a[101][101], int &n, int &m)
{
	do 
	{
		printf("Nhap vao so hang cua ma tran (1<=m<=100) la: ");
		scanf("%d", &m);
		if(m<1||m>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<1||m>100);
	do 
	{
		printf("Nhap vao so cot cua ma tran (1<=n<=100) la: ");
		scanf("%d", &n);
		if(n<1||n>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>100);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void inmang(int a[101][101], int n, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void inmang1chieu(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void swap(int &a,int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void traimang(int a[101][101], int n, int m, int c[10001], int &p)
{
	int k=0;
	p=n*m;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[k]=a[i][j];
			k++;
		}
	}
}
void sort(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void result(int a[101][101], int n, int m, int c[10001], int p)
{
	int turn=0;
	int lan=1;
	int dem=p;
	int i=0;
	int k=0;
	int j=0;
	while(dem>0)
	{
		switch (lan)
		{
			case 1:{
				for(j;j<n;j++)
				{
					a[i][j]=c[k];
					k++;
					dem--;
				}
				i++;
				j--;
				n--;
				lan++;
				break;
			}
			case 2:{
				for(i;i<m;i++)
				{
					a[i][j]=c[k];
					k++;
					dem--;
				}
				j--;
				m--;
				i--;
				lan++;
				break;
			}
			case 3:{
				for(j;j>=0+turn;j--)
				{
					a[i][j]=c[k];
					k++;
					dem--;
				}
				i--;
				j++;
				lan++;
				turn++;
				break;
			}
			case 4:{
				for(i;i>=0+turn;i--)
				{
					a[i][j]=c[k];
					k++;
					dem--;
				}
				j++;
				i++;
				lan=1;
				break;
			}
		}
	}
}
int main()
{
	//sap xep mang 2 chieu dang xoan oc
	//khai bao bien
	int a[101][101];
	int c[10001];
	int n,m,p;
	//nhap du lieu 
	nhapmang(a,n,m);
	printf("Mang ban dau la: \n");
	inmang(a,n,m);
	traimang(a,n,m,c,p);
	sort(c,p);
	//goi ham va dien dap an 
	printf("Mang sau khi sap xep la:\n");
	result(a,n,m,c,p);
	inmang(a,n,m);
}
