#include <stdio.h>
int main()
{
	//viet mot giai thuat de lua chon quan ao cho cac hoat dong khac nhau tuy vao thoi tiet(vd, tham gia hoat dong the thao khi troi dep, truot tuyet khi troi co tuyet, v.v). Giai thuat can lam ro viec lua chon quan ao phu thuoc vao thoi tiet nhu the nao va hoat dong co kha nang dap ung duoc cac hoat dong thoi tiet khac nhau
	//khai bao bien
	int n;
	//nhap du lieu, giai thuat va dien dap an
	printf("chu thich:\n");
	printf("troi nang: 1\n");
	printf("troi mua: 2\n");
	printf("troi gio: 3\n");
	printf("troi tuyet: 4\n");
	do
	{
		printf("nhap vao so the hien thoi tiet hien gio: ");
		scanf("%d", &n);
		if(n>4||n<1) printf("thoi tiet chua duoc dinh dang\n");
	}
	while(n<1||n>4);
	switch (n)
	{
		case 1:
			{
				printf("ra ngoai mac ao chong nang va boi kem chong nang cho khoi ung thu da\n");
				printf("di bien choi\n");
				break;
			}
		case 2:
			{
				printf("ra ngoai mac ao mua cho khoi uot\n");
				printf("uu tien o trong nha\n");
				break;
			}	
		case 3:
			{
				printf("mac ao ngan tay, quan dui cho mat\n");
				printf("ra san tha dieu\n");
				break;
			}
		case 4:
			{
				printf("mac ao phao, quan len cho am\n");
				printf("di truot tuyet\n");
				break;
			}
	}
}
