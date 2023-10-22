#include <stdio.h>

int i=1,j=0,k=0;
typedef struct thang{
	int id;
	int luongmua;
	int nhietdomax;
	int nhietdomin;
}thang_t;
thang_t nhapdulieu(){
	thang_t tam;
	printf("Nhap vao du lieu thang %d la: \n",i+1);
	tam.id=i+1;
	printf("Nhap vao luong mua la: ");
	scanf("%d", &tam.luongmua);
	fflush(stdin);
	printf("Nhap vao nhiet do cao nhat la: ");
	scanf("%d", &tam.nhietdomax);
	fflush(stdin);
	printf("Nhap vao nhiet do thap nhat la: ");
	scanf("%d", &tam.nhietdomin);
	fflush(stdin);
	return tam;
}
int main(){
	//nhap vao du lieu cac thang 
	//khai bao bien 
	thang_t t[12];
	int sum=0;
	int max=0;
	//nhap du lieu 
	for(i=0;i<12;i++)
	{
		t[i]=nhapdulieu();
	}
	for(i=0;i<12;i++)
	{
		sum+=t[i].luongmua;
	}
	printf("Tong luong mua ca nam la: %d\n", sum);
	printf("Luong mua trung binh moi thang la: %f\n", (float)sum/12);
	printf("Thang   \tLuong mua \tNhiet do cao nhat \tNhiet do thap nhat\n");
	for(i=0;i<12;i++)
	{
		printf("%d \t%10d \t%15d \t%15d\n", i+1, t[i].luongmua, t[i].nhietdomax, t[i].nhietdomin);
	}
	printf("Sap xep theo luong mua tang dan la: \n");
	printf("Thang   \tLuong mua \tNhiet do cao nhat \tNhiet do thap nhat\n");
	for(i=0;i<11;i++)
	{
		for(j=i+1;j<12;j++)
		if(t[i].luongmua>t[j].luongmua)
		{
			thang_t temp = t[j];
			t[j]=t[i];
			t[i]=temp;
		}
	}
	for(i=0;i<12;i++)
	{
		printf("%d \t%10d \t%15d \t%15d\n", t[i].id, t[i].luongmua, t[i].nhietdomax, t[i].nhietdomin);
	}
}
