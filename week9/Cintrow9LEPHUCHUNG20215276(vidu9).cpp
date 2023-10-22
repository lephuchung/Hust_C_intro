#include <stdio.h>

void tlp(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i*i*i;
	}
	printf("Tong lap phuong cac so nho hon %d la: %d", n, sum);
	printf("\n");
}
void uoc(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) printf("%d ", i);
	}
	printf("\n");
}
void bp(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("%d ", i*i);
	}
	printf("\n");
}
int main()
{
	//ham tinh tong lap phuong cac so tu 1 den n
	//ham liet ke cac uoc so cua n
	//ham liet ke n^2 cua n so dau tien
	//khai bao bien 
	int n;
	//nhap du lieu 
	do
	{
		printf("Nhap vao so nguyen duong n muon xu li la: ");
		scanf("%d", &n);
		if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=0);
	//goi ham va dien dap an
	tlp(n);
	uoc(n);
	bp(n);
}
