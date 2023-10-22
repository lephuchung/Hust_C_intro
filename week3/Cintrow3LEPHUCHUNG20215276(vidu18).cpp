#include <stdio.h>
#include <limits.h>
#include <math.h>
void kiemtraseri(int i)
{
	switch (i)
	{
		case 0:
			{
				printf("");
				break;
			}
		
		case 1:
			{
				printf("cam\t\t%10dvnd\n", 10000);
				break;
			}
		case 2:
			{
				printf("tao\t\t%10dvnd\n", 20000);
				break;
			}
		case 3:
			{
				printf("buoi\t\t%10dvnd\n", 30000);
				break;
			}
		case 4:
			{
				printf("dua hau\t\t%10dvnd\n", 100000);
				break;
			}
		default:
			{
				printf("khong ton tai ma hang nay\n");
				break;
			}
	}
}
int kiemtragia(int i)
{
	switch (i)
	{
		case 1:
		{
			return 10000;
		}
		case 2: 
		{
			return 20000;
		}
		case 3:
		{
			return 30000;
		}
		case 4:
		{
			return 100000;
		}
		default:
			return 0;
	}
}
int main()
{
	//hien thi danh muc hang hoa khi mua mot don hang trong sieu thi
	//khai bao bien
	int n,m;
	char c[21], option;
	//nhap du lieu, giai thuat va dien dap an 
	//menu
	do
	{
		printf("1 - nhap hoa don\n");
		printf("x - thoat chuong trinh\n");
		scanf(" %c", &option);
		if(option=='1')
		{
			float sum;
			printf("Chung toi co the biet ten cua ban duoc khong? Chung toi muon kiem tra thanh vien\n");
			printf("Neu la thanh vien ban se nhan duoc cac uu dai\n");
			do 
			{
				printf("Neu co an 1, neu khong an 0: ");
				scanf("%d", &n);
				if(n<0||n>1) printf("Nhap khong hop le, xin moi nhap lai!\n");
			}
			while(n<0||n>1);
			if(n==1)
			{
				printf("Nhap ten cua ban: ");
				scanf("%20s", &c);
				printf("hoa don cua %s\n", c);
			}
			if(n==0)
			{
				printf("hoa don cua khach hang\n");
			}
			printf("Nhap 0 de ket thuc hoa don!\n");
			printf("Nhap vao ma san pham la:\n");
			for(int i=0;i<INT_MAX;i++)
			{
				
				scanf("%d", &m);
				if(m!=0)
				{
					kiemtraseri(m);
					int k;
					do
					{
						printf("Nhap vao so luong: ");
						scanf("%d", &k);
					}
					while(k<1);
					printf("gia la\t\t\t\t\t%10dvnd\n", kiemtragia(m)*k);
					sum+=(float)kiemtragia(m)*k;
					
				}
				if(m==0) break;
			}
			printf("\n\n");
			if(n==1) 
			{
				printf("Tong don hang:\t\t\t\t%10.0fvnd\n",sum);
				printf("Chiet khau:\t\t\t\t\t10%%\n");
				sum=(sum/10)*9;
				ceil(sum);
			}
			if(n==0) 
			{
				printf("Tong don hang:\t\t\t\t%10.0fvnd\n",sum);
				printf("Chiet khau:\t\t\t\t\t 0%%\n");
			}
			printf("thanh tien:\t\t\t\t%10.0fvnd\n", sum);
			sum=0;
		}
	}
	while(option!='x');
}
