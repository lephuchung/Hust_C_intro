#include <stdio.h>

int main()
{
	//kiem tra hoc luc
	//khai bao bien 
	int n;
	//nhap giu lieu
	do
	{
		printf("Nhap vao diem cua ban (0<=diem<=10) la: ");
		scanf("%d", &n);
		if(n<0||10<n) printf("Nhap loi, xin moi nhap lai");
	}
	while(n<0||10<n);
	switch (n)
	{
		case 9:
		case 10:
			{
				printf("Hoc luc gioi\n");
				break;
			}
		case 7:
		case 8:
			{
				printf("Hoc luc kha\n");
				break;
			}
		case 6:
		case 5:
			{
				printf("Hoc luc trung binh\n");
				break;
			}
		case 4:
		case 3:
		case 2:	
		case 1:
		case 0:
			{
				printf("Hoc luc yeu\n");
				break;
			}
	}
}
