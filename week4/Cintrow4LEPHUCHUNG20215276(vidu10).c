#include <stdio.h>

int main()
{
	//khai bao bien
	char ten[20];
	int n, p;
	//nhap vao du lieu
	printf("Nhap vao ten nhan vien: ");
	gets(ten);
	do
	{
		printf("Nhap vao so gio lam viec trong tuan (0<n<169) la: ");
		scanf("%d", &n);
		if(n<=0||n>=169) printf("So gio nhap vao khong hop le, xin moi nhap lai!\n");
	}
	while(n<=0);
	if(n<=40)
	{
		p=25000*n;
	}
	else
	{
		p=25000*40+(n-40)*40000;
	}
	printf("Luong tuan nay cua %s la %d", ten, p);
}
