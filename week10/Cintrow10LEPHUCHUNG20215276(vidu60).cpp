#include <stdio.h>

void nhapmang(int a[1001], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=500) la: ");
		scanf("%d", &n);
		if(n<1||n>500) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>500);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void nhandoimang(int a[1001], int n, int &k)
{
	k=n*2;
	for(int i=n;i<k;i++)
	{
		a[i]=a[i-n];
	}
}
void tongmax(int a[1001], int n, int m)
{
	int k=0;
	nhandoimang(a,n,k);
	int max=0;
	for(int i=0;i<k-m;i++)
	{	
		int temp=0;
		for(int j=i;j<=i+m-1;j++)
		{
			temp+=a[j];
		}
		if(temp>max) max=temp;
		else continue;
	}
	printf("Tong lon nhat cua %d so trong vong tron tao boi mang A la: %d\n",m,max);
}
int main()
{
	//tinh tong vong tron
	//khai bao bien 
	int a[1001];
	int n, m;
	//nhap du lieu
	nhapmang(a,n);
	printf("Tim tong lon nhat cua m so trong vong tron tao boi mang tren!\n");
	do
	{
		printf("Nhap vao so m (1<=m<=n) la: ");
		scanf("%d", &m);
		if(m<1||m>n) printf("Nhap loi, xin moi nhap lai!\n");
	} 
	while(m<1||m>n);
	//goi ham va dien dap an 
	tongmax(a,n,m);
	
	
}
