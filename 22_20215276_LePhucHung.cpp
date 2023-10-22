/* BAI THI CUOI KY IT3220
 * Ho va ten: Le Phuc Hung
 * Ma so sinh vien: 20215276
 * So thu tu: 22
 * Lop: Viet-Phap K66
 * Ngay thi: 8/8/2022
 */
#include <stdio.h>
#include <string.h>
#include <math.h>

struct phongtro{
	char name[6];
	float s;
	int dh;
}; 

void nhap(struct phongtro &d)
{
	fflush(stdin);
	do
	{
		printf("Nhap vao ten phong tro gom 4 chu cai (trong truong hop nhap nhieu hon, ta chi lay 4 chu cai dau) la: ");
		fgets(d.name,6,stdin);
		d.name[strlen(d.name)-1]='\0';
		fflush(stdin);
		if(strlen(d.name)>4||strlen(d.name)<4) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(strlen(d.name)>4||strlen(d.name)<4);
	do
	{
		printf("Nhap vao dien tich cua phong tro (40>s>10)m2 la: ");
		scanf("%f", &d.s);
		fflush(stdin);
		if(d.s<10||d.s>40) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(d.s<10||d.s>40);
	do
	{
		printf("Phong co dieu hoa khong?\n");
		printf("1:Co\n");
		printf("0:Khong\n");
		printf("Dien vao lua chon cua ban: ");
		scanf("%d", &d.dh);
		if(d.dh!=1&&d.dh!=0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(d.dh!=1&&d.dh!=0);
}

int main(){
	//chuong trinh quan li phong tro
	//khai bao bien
	struct phongtro pt[200];
	int n, o,flg1=0,n1,i=0,dh9,dh12,dh18,dh21;
	float s1;
	//goi ham va dien dap an 
	do 
	{
		printf("~~~~~MENU~~~~~\n");
		printf("1:Nhap thong tin phong tro\n");
		printf("2:In thong tin cac nha tro\n");
		printf("3:Tim kiem theo dien tich\n");
		printf("4:Sap xep\n");
		printf("5:Thong ke so luong dieu hoa can bo sung\n");
		printf("6:Thoat chuong trinh\n");
		printf("Nhap vao lua chon cua ban la: ");
		scanf("%d", &o);
		fflush(stdin);
		if(o==1)
		{
			if(flg1==0)
			{
				do 
				{
						printf("Nhap so luong phong tro (n>0) la: ");
						scanf("%d", &n);
						if(n<=0) printf("Nhap loi, xin moi nhap lai!\n");
				}
				while(n<=0);
				for(i=0;i<n;i++)
				{
					nhap(pt[i]);
				}
				flg1++;
			}
			else
			{
				do 
				{
						printf("Nhap so luong phong tro moi muon them (n>0) la: ");
						scanf("%d", &n1);
						if(n1<=0) printf("Nhap loi, xin moi nhap lai!\n");
				}
				while(n1<=0);
				n+=n1;
				for(i;i<n;i++)
				{
					nhap(pt[i]);
				}
			}
		}
		if(o==2)
		{
			printf("Danh sach cac phong tro:\n");
			printf("%-20s%-20s%-20s","Ten phong","Dien tich","Dieu hoa");
			printf("\n");
			printf("-------------------------------------------------------------------\n");
			for(int j=0;j<n;j++)
			{
				printf("%-20s%-20f%-20d\n", pt[j].name, pt[j].s, pt[j].dh);
			}
		}
		if(o==3)
		{
			do 
			{
				printf("Nhap vao dien tich muon tim: ");
				scanf("%f", &s1);
				fflush(stdin);
				if(s1<0) printf("Nhap loi, xin moi nhap lai!\n");
			}
			while(s1<0);
			printf("Danh sach cac phong tro thoa man:\n");
			printf("%-20s%-20s%-20s","Ten phong","Dien tich","Dieu hoa");
			printf("\n");
			printf("-------------------------------------------------------------------\n");
			for(int j=0;j<n;j++)
			{
				if(fabs(s1-pt[j].s)<=5)
				{
					printf("%-20s%-20f%-20d\n", pt[j].name, pt[j].s, pt[j].dh);
				}
			}
		}
		if(o==4)
		{
			struct phongtro tmp;
			for (int i=0;i<n-1;i++)
			{
				for (int j=i+1;j<n;j++)
				{
					if (pt[i].s<pt[j].s){
		            tmp=pt[i];        
		            pt[i]=pt[j];      
		            pt[j]=tmp;          
		        	}
				}
			}
			printf("%-20s%-20s%-20s","Ten phong","Dien tich","Dieu hoa");
			printf("\n");
			printf("-------------------------------------------------------------------\n");
		    for (int j=0;j<n;j++) 
		    {
		    	printf("%-20s%-20f%-20d\n", pt[j].name, pt[j].s, pt[j].dh);
			}
		}
		if(o==5)
		{
			dh9=0;
			dh12=0;
			dh18=0;
			dh21=0;
			for(int j=0;j<n;j++)
			{
				if(pt[j].dh==0)
				{
					if(pt[j].s<15) dh9++;
					if(pt[j].s>=15&&pt[j].s<22) dh12++;
					if(pt[j].s>=22&&pt[j].s<30) dh18++;
					if(pt[j].s>=30&&pt[j].s<=40) dh21++;
				}
			}
			printf("Can bo sung:\n");
			printf("9000BTU: %d chiec\n", dh9);
			printf("12000BTU: %d chiec\n", dh12);
			printf("18000BTU: %d chiec\n", dh18);
			printf("21000BTU: %d chiec\n", dh21);
		}	
	}
	while(o!=6);
}

