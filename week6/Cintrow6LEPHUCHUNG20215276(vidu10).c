#include <stdio.h>

int main()
{
	//so ngay cua mot thang
	//khai bao bien 
	int m;
	//nhap du lieu
	printf("Nhap vao thang muon kiem tra la: ");
	scanf("%d", &m);
	//thuat toan va dien dap an
	switch (m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			printf("Thang %d co 31 ngay\n", m);
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			printf("Thang %d co 30 ngay\n", m);
			break;
		}
		case 2:
		{
			printf("Thang %d co 28 hoac 29 ngay\n", m);
			break;
		}
		default:
		{
			printf("Nhap khong hop le!\n");
			break;
		}
	}
}
