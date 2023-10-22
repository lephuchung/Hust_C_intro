#include <stdio.h>

int main()
{
	//khai bao bien
	int n,m,y;
	//giai thuat va dien dap an
	//bai 2
	//nhap du lieu
	printf("Nhap so tuoi cua ban: ");
	scanf("%d", &n);
	switch (n)
	{
		case 1 ... 17:
		{
			printf("Thieu nien\n");
			break;
		}
		case 18 ... 64:
		{
			printf("Truong thanh\n");
			break;
		}
		case 65 ... 125:
		{
			printf("Nguoi gia\n");
		}
		default:
		{
			printf("Nhap loi, tuoi khong xac dinh!\n");
			break;
		}
	}
	//bai 4
	//nhap du lieu
	printf("Nhap vao so ban doan la: ");
	scanf("%d", &y);
	srand(time(NULL));
	m=1+rand()%10;
	int k=m-y;
	switch (k)
	{
		case 0:
		{
			printf("Ban da doan dung!\n");
			break;
		}
		default:
			if(m<y)
			{
				printf("So ban doan lon hon so cua toi!\n");
				printf("Ket qua la: %d\n", m);
			}
			if(y<m) 
			{
				printf("So ban doan nho hon so cua toi!\n");	
				printf("Ket qua la: %d\n", m);
			}
			break;
	}
}
