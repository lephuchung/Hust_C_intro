#include <stdio.h>

int main()
{
	//tinh giai thua 
	//khai bao bien
	int n, i, kq=1;
	//nhap du lieu
	do
	{
		printf("Nhap so muon tinh giai thua (n>=0) la: ");
		scanf("%d", &n);
		if(n<0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<0);
	if(n==0) kq=1;
	else
	{
		for(i=1;i<=n;i++)
		{
			kq*=i;
		}
	}
	
	printf("Giai thua cua so %d la: %d", n, kq);
}
