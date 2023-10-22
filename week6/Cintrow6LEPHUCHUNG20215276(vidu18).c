#include <stdio.h>

int main()
{
	//kiem tra chia het cho 5 va 11
	//khai bao bien 
	int n;
	//nhap du lieu
	printf("Nhap vao so muon kiem tra la: ");
	scanf("%d", &n);
	if(n%5==0)
	{
		printf("So nay chia het cho 5\n");
	}
	if(n%11==0)
	{
		printf("So nay chia het cho 11\n");
	}
	else printf("So nay khong chia het cho ca 11 va 5\n");
}
