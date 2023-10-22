#include <stdio.h>

int main()
{
	//doi so nhap vao thanh 1 tong cua cac so 100, 50, 20, 10, 5, 2, 1 
	//khai bao bien
	int n,c100, c50, c20, c10, c5, c2, c1;
	//nhap vao du lieu
	printf("Nhap vao so muon chuyen: ");
	scanf("%d", &n);
	//giai thuat va dien dap an 
	c100=n/100;
	n-=100*c100;
	c50=n/50;
	n-=50*c50;
	c20=n/20;
	n-=20*c20;
	c10=n/10;
	n-=10*c10;
	c5=n/5;
	n-=5*c5;
	c2=n/2;
	n-=2*c2;
	c1=n/1;
	n-=1*c1;
	printf("%d so 100\n", c100);
	printf("%d so 50\n", c50);
	printf("%d so 20\n", c20);
	printf("%d so 10\n", c10);
	printf("%d so 5\n", c5);
	printf("%d so 2\n", c2);
	printf("%d so 1\n", c1);
}
