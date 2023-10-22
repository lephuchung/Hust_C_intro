#include <stdio.h>

int main()
{
	//kiem tra so hoan hao
	//khai bao bien
	int n, i, j, tong, dem=0;
	//nhap du lieu
	do
	{
		printf("Nhap vao so gioi han (n>1) la: ");
		scanf("%d", &n);
		if(n<=1) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<=1);
	//giai thuat va dien dap an
	for (i=2; i<=n; i++)
	{
		tong = 1;
		for (j=2; j<=i/2; j++)
		{
			if (i%j == 0) tong += j;
			if (tong == i) 
			{
				printf("\n%d", i);
				dem++;
				break;
			}
		}
		if(tong==i) continue;
	}
	if(dem==0) printf("Khong co so hoan hao nao nho hon so gioi han nay!\n");
}
