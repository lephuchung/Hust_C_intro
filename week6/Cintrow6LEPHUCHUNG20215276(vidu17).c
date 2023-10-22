#include <stdio.h>

int main()
{
	//kiem tra am duong 0
	//khai bao bien 
	int n;
	//nhap du lieu 
	printf("Nhap vao so muon kiem tra la: ");
	scanf("%d", &n);
	if(n>0) printf("Day la so duong!\n");
	if(n<0) printf("Day la so am!\n");
	if(n==0) printf("So nay bang 0!\n");
}
