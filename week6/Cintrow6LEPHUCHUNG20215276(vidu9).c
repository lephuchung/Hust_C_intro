#include <stdio.h>

int main()
{
	//kiem tra so le
	//khai bao bien
	int n;
	//nhap du lieu
	printf("Nhap vao so n muon kiem tra la: ");
	scanf("%d", &n);
	//giai thuat va dien dap an
	if(n%2==0) printf("Day la so chan!\n");
	else printf("Day la so le!\n");
}
