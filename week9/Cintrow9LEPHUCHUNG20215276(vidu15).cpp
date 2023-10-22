#include <stdio.h>
void ktra(int n)
{
	if(n%2==0) printf("Day la so chan!\n");
	else printf("Day la so le!\n");
}
int main()
{
	//kiem tra chan le
	//khai bao bien 
	int n;
	//nhap vao du lieu 
	printf("Nhap vao so muon kiem tra: ");
	scanf("%d", &n);
	//goi ham va dien dap an 
	ktra(n);
}
