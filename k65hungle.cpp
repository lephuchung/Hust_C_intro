#include <stdio.h>
#include <string.h>
#include <math.h>

struct athlete{
	char name[50];
	char nation[50];
	int registe[3];
	short pass[3];
	int final;
	char medal;
};
void nhap(struct athlete &d)
{
	do
	{
		printf("Nhap vao ten van dong vien (so luong ki tu nho hon 50) la: ");
		fgets(d.name, 15, stdin);
		d.name[strlen(d.name)-1]='\0';
		fflush(stdin);
		if(strlen(d.name)>=50) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(strlen(d.name)>=50);
	printf("Nhap quoc tich cua van dong vien la: ");
	fgets(d.nation, 20, stdin);
	d.nation[strlen(d.nation)-1]='\0';
	fflush(stdin);
	for(int i=0;i<3;i++)
	{
		do
		{
			printf("Nhap vao muc xa nhay lan %d (muc xa duong) la: ", i+1);
			scanf("%d", &d.registe[i]);
			fflush(stdin);
			if(d.registe[i]<1) printf("Nhap loi, xin moi nhap lai!\n");
		}
		while(d.registe[i]<1);
	}
	printf("Nhap vao ket qua cac lan nhay:\n");
	printf("Chu thich: \t 0=that bai \t 1=thanh cong\n");
	for(int j=0;j<3;j++)
	{
		do
		{
			printf("Ket qua lan %d la: ", j+1);
			scanf("%d", &d.pass[j]);
			fflush(stdin);
			if(d.pass[j]!=1&&d.pass[j]!=0) printf("Nhap loi, xin moi nhap lai!\n");
		}
		while(d.pass[j]!=1&&d.pass[j]!=0);
	}
}
void tinhkq(struct athlete &d)
{
	int max=0;
	for(int i=0;i<3;i++)
	{
		if(d.registe[i]>max&&d.pass[i]==1) max=d.registe[i];
	}
	d.final=max;
}
char medal(int i)
{
	if(i==0) return 'G';
	else if(i==1) return 'S';
	else if(i==2) return 'C';
	else return 'N';
}
int main(){
	//de thi k65 
	//khai bao bien 
	struct athlete ath[101];
	int o,n;
	//goi ham va dien dap an
	do{
		printf("~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~\n");
		printf("1 - Nhap thong tin cac van dong vien\n");
		printf("2 - Tinh diem thanh tich cac van dong vien\n");
		printf("3 - Sap xep theo diem\n");
		printf("4 - Cap nhat lai thanh tich\n");
		printf("5 - Thoat chuong trinh\n");
		do{
			printf("Nhap vao lua chon cua ban la: ");
			scanf("%d", &o);
			fflush(stdin);
			if(o<1||o>5) printf("Nhap loi, xin moi nhap lai!\n");
		}
		while(o<1||o>5);
		if(o==1)
		{
			do{	
				printf("Nhap vao so luong van dong vien (3<=n<=100): ");
				scanf("%d", &n);
				fflush(stdin);
				if(n<3||n>100) printf("Nhap loi, xin moi nhap lai!\n");
			}
			while(n<3||n>100);
			for(int i=0;i<n;i++)
			{
				nhap(ath[i]);
			}
			printf("%-20s%-20s%10s%10s%10s%10s%10s%10s\n", "Name", "Nation", "R1", "R2", "R3", "P1", "P2", "P3");
			for(int i=0;i<n;i++)
			{
				printf("%-20s%-20s%10d%10d%10d%10d%10d%10d\n", ath[i].name, ath[i].nation, ath[i].registe[0], ath[i].registe[1], ath[i].registe[2], ath[i].pass[0], ath[i].pass[1], ath[i].pass[2]);
			}
		}
		if(o==2)
		{
			printf("%-20s%-20s%10s%10s%10s%10s%10s%10s%10s\n", "Name", "Nation", "R1", "R2", "R3", "P1", "P2", "P3", "Final");
			for(int i=0;i<n;i++)
			{
				tinhkq(ath[i]);
				printf("%-20s%-20s%10d%10d%10d%10d%10d%10d%10d\n", ath[i].name, ath[i].nation, ath[i].registe[0], ath[i].registe[1], ath[i].registe[2], ath[i].pass[0], ath[i].pass[1], ath[i].pass[2], ath[i].final);
			}
		}
		if(o==3)
		{
			struct athlete tmp;
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(ath[i].final<ath[j].final)
					{
						tmp=ath[i];
						ath[i]=ath[j];
						ath[j]=tmp;
					}
				}
			}
			for(int i=0;i<n;i++)
			{
				ath[i].medal=medal(i);
			}
			printf("%-20s%-20s%10s%10s%10s%10s%10s%10s%10s%10s\n", "Name", "Nation", "R1", "R2", "R3", "P1", "P2", "P3", "Final","Medal");
			for(int i=0;i<n;i++)
			{
				printf("%-20s%-20s%10d%10d%10d%10d%10d%10d%10d%10s\n", ath[i].name, ath[i].nation, ath[i].registe[0], ath[i].registe[1], ath[i].registe[2], ath[i].pass[0], ath[i].pass[1], ath[i].pass[2], ath[i].final, ath[i].medal);
			}
		}
		if(o==4)
		{
			
		}
		if(o==5)
		{
			printf("Cam on ban da su dung chuong trinh!\n");
		}
	}
	while(o!=5);
}
