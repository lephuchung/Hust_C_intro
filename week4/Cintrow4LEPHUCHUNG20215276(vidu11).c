#include <stdio.h>
#include <limits.h>

void kiemtraten(int i)
{
	switch (i)
	{
		case 1:
			{
				printf("%35s", "Conan");
				break;
			}
		case 2: 
			{
				printf("%38s","Doraemon");
				break;
			}	
		default:
			{
				printf("hien chua ban san pham co ma so nay\n");
				break;
			}
	}
}
void kiemtragia(int i)
{
	switch (i)
	{
		case 1:
			{
				printf("%25d", 20000);
				break;
			}
		case 2:
			{
				printf("%22d", 25000);
				break;
			}	
		default:
			{
				printf(" ");
				break;	
			}	
	}
}
int giaa(int i)
{
		switch (i)
	{
		case 1:
			{
				return 20000;
			}
		case 2:
			{
				return 25000;
			}	
		default:
			{
				return 0;
			}	
	}
}
int main()
{
	int i;
	char o;
	do 
	{
		printf("1 - nhap hoa don\n");
		printf("x - thoat chuong trinh\n");
		scanf(" %c", &o);
		if(o=='1');
		{
			int gia;
			float tong=0;
			printf("nhap 0/0 de ket thuc hoa don\n\n\n");
			printf("Bk bookseller\n\n");
			printf("%s%16s%16s%24s%16s\n", "Ma so", "So luong", "Ten sach", "Gia bia", "Thanh tien");
			for(i=1;i<INT_MAX;i++)
			{
				int m,j;
				scanf("%d%*c%d", &m, &j);	
				if(m!=0)
				{
					int tien;
					kiemtraten(m);
					kiemtragia(m);
					tien=giaa(m)*j;
					tong+=tien;
					printf("%15d\n", tien);
				}
				if(m==0)
				{
					break;
				}
			}
			printf("\n_____________________________________________________________________________________________\n");
			printf("\nTong:\t\t\t\t%f\n", tong);
			printf("VAT: \t\t\t\t%d%%\n", 10);
			printf("Ban phai tra: \t\t\t%f\n\n\n", tong*110/100);
		}	
	}
	while(o!='x');
}
