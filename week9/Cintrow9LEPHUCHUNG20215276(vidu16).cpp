#include <stdio.h>

int giaithua(int n)
{
	if(n==0) return 1;
	if(n==1) return 1;
	return n*giaithua(n-1);
}
void tonggt(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=giaithua(i);
	}
	printf("Tong giai thua cac so tu 1 den %d la: %d", n, sum);
}
int main()
{
	//nhap n 
	//tinh giai thua
	//tinh tong giai thua tu 1 den n 
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
	printf("giai thua cua %d la %d\n", n, giaithua(n));
	tonggt(n);
}
